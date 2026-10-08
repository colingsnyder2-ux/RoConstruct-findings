// from server: 100% by colin
// roc 2007-08 0045d460  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d460
//
// 0045d460  6a01                 push 1
// 0045d462  83c158               add ecx, 0x58
// 0045d465  e866ebffff           call 0x45bfd0
// 0045d46a  c3                   ret 

struct Inner {
    void method(int);
};

struct CScintillaView {
    char pad[0x58];
    Inner inner;
    void func();
};

void CScintillaView::func()
{
    inner.method(1);
}
