// from server: 100% by colin
// roc 2007-08 0045d450  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d450
//
// 0045d450  6a01                 push 1
// 0045d452  83c158               add ecx, 0x58
// 0045d455  e846f7ffff           call 0x45cba0
// 0045d45a  c3                   ret 

struct Inner {
    void Target(int);
};

struct CScintillaView {
    char pad[0x58];
    Inner inner;
    void Method();
};

void CScintillaView::Method() {
    inner.Target(1);
}
