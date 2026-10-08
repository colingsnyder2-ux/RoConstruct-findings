// from server: 100% by colin
// roc 2007-08 0045d420  unit: Scintilla::CScintillaView  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d420
//
// 0045d420  6a01                 push 1
// 0045d422  83c158               add ecx, 0x58
// 0045d425  e8d6f7ffff           call 0x45cc00
// 0045d42a  c3                   ret 

struct Inner {
    void sub_45CC00(int);
};

struct CScintillaView {
    char pad[0x58];
    Inner inner;
    void func_45D420();
};

void CScintillaView::func_45D420()
{
    inner.sub_45CC00(1);
}
