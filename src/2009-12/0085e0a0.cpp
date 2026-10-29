// roc 2009-12 0085e0a0  unit: CXTSplitterWnd  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085e0a0
//
// 0085e0a0  8b442404             mov eax, dword ptr [esp + 4]
// 0085e0a4  898104010000         mov dword ptr [ecx + 0x104], eax
// 0085e0aa  f7d8                 neg eax
// 0085e0ac  1bc0                 sbb eax, eax
// 0085e0ae  83c007               add eax, 7
// 0085e0b1  894160               mov dword ptr [ecx + 0x60], eax
// 0085e0b4  894164               mov dword ptr [ecx + 0x64], eax
// 0085e0b7  894170               mov dword ptr [ecx + 0x70], eax
// 0085e0ba  894174               mov dword ptr [ecx + 0x74], eax
// 0085e0bd  8b01                 mov eax, dword ptr [ecx]
// 0085e0bf  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0085e0c5  ffd2                 call edx
// 0085e0c7  c20400               ret 4
// copied from an identical function in another client (function ?SetSplit@CXTSplitterWnd@@QAEXH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 100% by tester
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
    void (__thiscall *fn)(CXTSplitterWnd*) = (void (__thiscall *)(CXTSplitterWnd*))vtbl[0x150 / 4];
    fn(this);
}