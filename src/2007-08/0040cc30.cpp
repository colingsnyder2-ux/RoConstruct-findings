// from server: 100% by colin
// roc 2007-08 0040cc30  unit: CChatPrompt  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040cc30
//
// 0040cc30  56                   push esi
// 0040cc31  8b742408             mov esi, dword ptr [esp + 8]
// 0040cc35  56                   push esi
// 0040cc36  e80f362200           call 0x63024a
// 0040cc3b  85c0                 test eax, eax
// 0040cc3d  7504                 jne 0x40cc43
// 0040cc3f  5e                   pop esi
// 0040cc40  c20400               ret 4
// 0040cc43  8b4620               mov eax, dword ptr [esi + 0x20]
// 0040cc46  257fffcfff           and eax, 0xffcfff7f
// 0040cc4b  0d00000008           or eax, 0x8000000
// 0040cc50  894620               mov dword ptr [esi + 0x20], eax
// 0040cc53  b801000000           mov eax, 1
// 0040cc58  5e                   pop esi
// 0040cc59  c20400               ret 4

struct CChatPrompt {
    int sub_40CC30(int);
};

extern "C" int __stdcall sub_63024A(int);

int CChatPrompt::sub_40CC30(int a1) {
    if (sub_63024A(a1) == 0) {
        return 0;
    }
    int v = *(int*)(a1 + 0x20);
    v &= 0xffcfff7f;
    v |= 0x8000000;
    *(int*)(a1 + 0x20) = v;
    return 1;
}
