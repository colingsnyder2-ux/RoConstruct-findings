// from server: 29% by colin
struct Scintilla_CScintillaFindReplaceDlg {
    void* method1();
};

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __fastcall sub_45DEB0(void*);

void* Scintilla_CScintillaFindReplaceDlg::method1() {
    void* p = sub_62FEF6(0xec);
    if (p == 0) {
        sub_45DEB0(p);
    }
    return p;
}
