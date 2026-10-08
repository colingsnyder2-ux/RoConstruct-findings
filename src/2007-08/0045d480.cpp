// from server: 100% by colin
// roc 2007-08 0045d480  unit: Scintilla::CScintillaView  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d480
//
// 0045d480  8b01                 mov eax, dword ptr [ecx]
// 0045d482  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 0045d488  6a01                 push 1
// 0045d48a  ffd2                 call edx
// 0045d48c  c3                   ret 

struct ScintillaView {
    void OnCancelMode();
};

void ScintillaView::OnCancelMode()
{
    struct VTable {
        char pad[0x1a8];
        void (__thiscall *fn)(void *, int);
    };
    VTable *vt = *(VTable **)this;
    vt->fn(this, 1);
}
