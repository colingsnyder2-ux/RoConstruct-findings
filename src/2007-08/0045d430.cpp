// from server: 100% by colin
// roc 2007-08 0045d430  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d430
//
// 0045d430  6a01                 push 1
// 0045d432  83c158               add ecx, 0x58
// 0045d435  e8f6f7ffff           call 0x45cc30
// 0045d43a  c3                   ret 

struct Inner {
    void sub_45CC30(int);
};

struct CScintillaView {
    char pad[0x58];
    Inner inner;
    void f();
};

void CScintillaView::f() {
    inner.sub_45CC30(1);
}
