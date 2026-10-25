// from server: 100% by tester
// roc 2011-06 0048b240  unit: Scintilla::CScintillaView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048b240
//
// 0048b240  8b01                 mov eax, dword ptr [ecx]
// 0048b242  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 0048b248  6a01                 push 1
// 0048b24a  ffd2                 call edx
// 0048b24c  c3                   ret 

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