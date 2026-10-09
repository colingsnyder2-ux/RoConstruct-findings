// roc 2009-12 0040f3f0  unit: CChatPrompt  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040f3f0
//
// 0040f3f0  56                   push esi
// 0040f3f1  8b742408             mov esi, dword ptr [esp + 8]
// 0040f3f5  56                   push esi
// 0040f3f6  e8414a3e00           call 0x7f3e3c
// 0040f3fb  85c0                 test eax, eax
// 0040f3fd  7504                 jne 0x40f403
// 0040f3ff  5e                   pop esi
// 0040f400  c20400               ret 4
// 0040f403  8b4620               mov eax, dword ptr [esi + 0x20]
// 0040f406  257fffcfff           and eax, 0xffcfff7f
// 0040f40b  0d00000008           or eax, 0x8000000
// 0040f410  894620               mov dword ptr [esi + 0x20], eax
// 0040f413  b801000000           mov eax, 1
// 0040f418  5e                   pop esi
// 0040f419  c20400               ret 4
// copied from an identical function in another client (function ?sub_40CC30@CChatPrompt@ns_ROCX000000@@QAEHH@Z)

namespace ns_ROCX000000 {
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
}
