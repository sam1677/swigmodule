package swigmodule_test

import (
	"fmt"
	"testing"

	"gitlab.gamja1.ga/sam1677/swigmodule"
)

func TestModule(t *testing.T) {
	class := swigmodule.NewClass("hello")
	fmt.Println(class.Str())
	return
}
