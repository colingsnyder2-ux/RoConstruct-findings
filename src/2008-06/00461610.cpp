// from server: 100% by tester
// roc 2008-06 00461610  unit: Scintilla::CScintillaView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461610
//
// 00461610  8b01                 mov eax, dword ptr [ecx]
// 00461612  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 00461618  6a01                 push 1
// 0046161a  ffd2                 call edx
// 0046161c  c3                   ret 

struct ScintillaView {
    void OnCancelMode();
};

void ScintillaView::OnCancelMode()
{
    struct VTable {
        char pad[0x1b0];
        void (__thiscall *fn)(void *, int);
    };
    VTable *vt = *(VTable **)this;
    vt->fn(this, 1);
}