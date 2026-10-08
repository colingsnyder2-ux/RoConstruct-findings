// from server: 100% by colin
// roc 2007-08 0045d410  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d410
//
// 0045d410  6a01                 push 1
// 0045d412  83c158               add ecx, 0x58
// 0045d415  e8b6f7ffff           call 0x45cbd0
// 0045d41a  c3                   ret 

struct Inner_0045cbd0 {
    void method(int);
};

struct CScintillaView {
    char pad[0x58];
    Inner_0045cbd0 inner;
    void func_0045d410();
};

void CScintillaView::func_0045d410()
{
    inner.method(1);
}
