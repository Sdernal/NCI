#include <iostream>
#include <freeling/morfo/lang_ident.h>
#include <string>
#include <freeling/morfo/dates.h>
using namespace std;

int main() {
	freeling::lang_ident f;
	std::wstring kek = f.identify_language(L"I like it");
	cout << kek.c_str() << endl;
	freeling::dates date(L"default");
	freeling::word w1(L"12/12/1993");
	freeling::sentence s;
	s.push_back(w1);
	date.analyze(s);
	return 0;
}