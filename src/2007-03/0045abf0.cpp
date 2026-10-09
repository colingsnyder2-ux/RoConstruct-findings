// roc 2007-03 0045abf0  unit: seg_00450000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045abf0
//
// 0045abf0  8b01                 mov eax, dword ptr [ecx]
// 0045abf2  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 0045abf8  6a01                 push 1
// 0045abfa  ffd2                 call edx
// 0045abfc  c3                   ret 
// copied from an identical function in another client (function ?OnCancelMode@ScintillaView@ns_ROCX00001e@@QAEXXZ)

namespace ns_ROCX00001e {
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
}
