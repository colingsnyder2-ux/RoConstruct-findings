// from server: 100% by tester
// roc 2011-06 0048b250  unit: Scintilla::CScintillaView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b250
//
// 0048b250  8b01                 mov eax, dword ptr [ecx]
// 0048b252  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 0048b258  6a00                 push 0
// 0048b25a  ffd2                 call edx
// 0048b25c  c3                   ret 

struct ScintillaView {
    void method();
};

void ScintillaView::method()
{
    typedef void (__thiscall *Fn)(void*, int);
    Fn fn = *(Fn*)(*(int*)this + 0x1b0);
    fn(this, 0);
}
