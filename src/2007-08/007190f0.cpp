// from server: 60% by colin
// roc 2007-08 007190f0  unit: CXTPRibbonGroupControlPopup  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007190f0
//
// 007190f0  83ec08               sub esp, 8
// 007190f3  56                   push esi
// 007190f4  8bf1                 mov esi, ecx
// 007190f6  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007190fc  e83fa9f2ff           call 0x643a40
// 00719101  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00719105  8b10                 mov edx, dword ptr [eax]
// 00719107  8b923c010000         mov edx, dword ptr [edx + 0x13c]
// 0071910d  6a01                 push 1
// 0071910f  56                   push esi
// 00719110  51                   push ecx
// 00719111  8d4c2410             lea ecx, [esp + 0x10]
// 00719115  51                   push ecx
// 00719116  8bc8                 mov ecx, eax
// 00719118  ffd2                 call edx
// 0071911a  5e                   pop esi
// 0071911b  83c408               add esp, 8
// 0071911e  c20400               ret 4

struct CXTPRibbonGroupControlPopup {
    char pad[0xfc];
    void* field_fc;
    void Method(int);
};

extern "C" void* __stdcall sub_643a40(void*);

void CXTPRibbonGroupControlPopup::Method(int arg) {
    void* p = sub_643a40(field_fc);
    void** vtbl = *(void***)p;
    void (__stdcall *fn)(void*, int*, int, void*, int) = (void (__stdcall *)(void*, int*, int, void*, int))vtbl[0x13c / 4];
    int local = 0;
    fn(p, &local, arg, this, 1);
}
