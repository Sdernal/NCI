#include <iostream>
#include <freeling/morfo/lang_ident.h>
#include <freeling/morfo/tokenizer.h>
#include <freeling/morfo/splitter.h>
//#include <freeling/morfo/maco.h>

using namespace std;
using namespace freeling;

int main(int argc, char** argv) {
	tokenizer *tk = NULL;
//	splitter  *sp = NULL;
//	maco *morfo = NULL;

	util::init_locale(L"default");
	wstring	ipath = L"/usr/local/share/freeling/en/";
	wstring tokenizer_path = L"/usr/local/share/freeling/en/tokenizer.dat";
	wstring splitter_path = L"/usr/local/share/freeling/en/splitter.dat";
	tk = new tokenizer(tokenizer_path);
//	sp = new splitter(splitter_path);
	wstring text = L"That is, once created, the tokenizer module receives plain text in a string, tokenizes it, and returns a list of word objects corresponding to the created tokens";
	std::list<word> words = tk->tokenize(text);
	const word::const_iterator alt;
	for (auto word = words.begin(); word != words.end(); word++) {
		wcout << word->get_lemma();
	}
	return 0;
}