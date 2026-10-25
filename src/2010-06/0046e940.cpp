// from server: 100% by tester
// roc 2010-06 0046e940  unit: Scintilla::CScintillaView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e940
//
// 0046e940  8b01                 mov eax, dword ptr [ecx]
// 0046e942  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 0046e948  6a00                 push 0
// 0046e94a  ffd2                 call edx
// 0046e94c  c3                   ret 

struct ScintillaView {
    void method();
};

void ScintillaView::method()
{
    typedef void (__thiscall *Fn)(void*, int);
    Fn fn = *(Fn*)(*(int*)this + 0x1b0);
    fn(this, 0);
}
