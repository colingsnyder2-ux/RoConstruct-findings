// from server: 100% by tester
// roc 2008-06 00708b60  unit: CXTSplitterWnd  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00708b60
//
// 00708b60  8b442404             mov eax, dword ptr [esp + 4]
// 00708b64  898104010000         mov dword ptr [ecx + 0x104], eax
// 00708b6a  f7d8                 neg eax
// 00708b6c  1bc0                 sbb eax, eax
// 00708b6e  83c007               add eax, 7
// 00708b71  894160               mov dword ptr [ecx + 0x60], eax
// 00708b74  894164               mov dword ptr [ecx + 0x64], eax
// 00708b77  894170               mov dword ptr [ecx + 0x70], eax
// 00708b7a  894174               mov dword ptr [ecx + 0x74], eax
// 00708b7d  8b01                 mov eax, dword ptr [ecx]
// 00708b7f  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00708b85  ffd2                 call edx
// 00708b87  c20400               ret 4

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
