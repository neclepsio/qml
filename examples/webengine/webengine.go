package main

import (
	"fmt"
	"os"

	"github.com/HexxedUS/qml"
	"github.com/HexxedUS/qml/webengine"
)

func main() {
	fmt.Println(qml.Run(func() error {
		webengine.Initialize()

		engine := qml.NewEngine()
		engine.On("quit", func() { os.Exit(0) })

		component, err := engine.LoadFile("webengine.qml")
		if err != nil {
			return err
		}
		win := component.CreateWindow(nil)
		win.Show()
		win.Wait()
		return nil
	}))
}
