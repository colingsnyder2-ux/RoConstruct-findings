// roc 2007-03 0067a5a0  unit: seg_00670000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067a5a0
//
// 0067a5a0  8b442404             mov eax, dword ptr [esp + 4]
// 0067a5a4  898104010000         mov dword ptr [ecx + 0x104], eax
// 0067a5aa  f7d8                 neg eax
// 0067a5ac  1bc0                 sbb eax, eax
// 0067a5ae  83c007               add eax, 7
// 0067a5b1  894160               mov dword ptr [ecx + 0x60], eax
// 0067a5b4  894164               mov dword ptr [ecx + 0x64], eax
// 0067a5b7  894170               mov dword ptr [ecx + 0x70], eax
// 0067a5ba  894174               mov dword ptr [ecx + 0x74], eax
// 0067a5bd  8b01                 mov eax, dword ptr [ecx]
// 0067a5bf  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 0067a5c5  ffd2                 call edx
// 0067a5c7  c20400               ret 4
// copied from an identical function in another client (function ?SetSplit@CXTSplitterWnd@ns_ROCX000037@@QAEXH@Z)

namespace ns_ROCX000037 {
struct CXTSplitterWnd {
    void SetSplit(int);
    int field0;
    char pad[0x5c];
    int field60;
    int field64;
    char pad2[8];
    int field70;
    int field74;
    char pad3[0x8c];
    int field104;
};

void CXTSplitterWnd::SetSplit(int value) {
    field104 = value;
    int v = (value != 0) ? 6 : 7;
    field60 = v;
    field64 = v;
    field70 = v;
    field74 = v;
    void** vtbl = *(void***)this;
    void (__thiscall *fn)(CXTSplitterWnd*) = (void (__thiscall *)(CXTSplitterWnd*))vtbl[0x148 / 4];
    fn(this);
}
}
