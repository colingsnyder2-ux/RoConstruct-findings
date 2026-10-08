// from server: 100% by colin
// roc 2007-08 0045d470  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d470
//
// 0045d470  6a01                 push 1
// 0045d472  83c158               add ecx, 0x58
// 0045d475  e8c6ebffff           call 0x45c040
// 0045d47a  c3                   ret 

struct Inner {
    void sub_45C040(int);
};

struct CScintillaView {
    char pad[0x58];
    Inner inner;
    void f();
};

void CScintillaView::f() {
    inner.sub_45C040(1);
}
