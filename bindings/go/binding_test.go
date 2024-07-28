package tree_sitter_kql_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_kql.Language())
	if language == nil {
		t.Errorf("Error loading Kql grammar")
	}
}
