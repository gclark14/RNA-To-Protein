#include "RNATranslator.h"

int main(){
	ifstream fin;
	fin.open("rosalind_prot.txt");
	RNATranslator translator;
	translator.setRna(fin);
	translator.translate();
	translator.save();
	return 0;
}
