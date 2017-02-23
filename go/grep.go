package main

import (
    "bufio"
    "fmt"
    "log"
    "os"
    "strings"
)

func main() {
    var line = ""
    var fname = "/dev/stdin"

    if len(os.Args) < 2 || len(os.Args) > 3 {

        fmt.Println("Usage: grep pattern filename")
        os.Exit(1)
    }

    var pattern = os.Args[1]

    if len(os.Args) == 3 {
        fname = os.Args[2]
    }

    file, err := os.Open(fname)
    if err != nil {
            log.Fatal(err)
    }

    s := bufio.NewScanner(file)

    for s.Scan() {
        line = s.Text()
        if strings.Contains(line, pattern) {
            fmt.Println(line)
        }
    }
}

