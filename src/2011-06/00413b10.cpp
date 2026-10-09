// roc 2011-06 00413b10  unit: CChatPrompt  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00413b10
//
// 00413b10  56                   push esi
// 00413b11  8b742408             mov esi, dword ptr [esp + 8]
// 00413b15  56                   push esi
// 00413b16  e81f6b3f00           call 0x80a63a
// 00413b1b  85c0                 test eax, eax
// 00413b1d  7504                 jne 0x413b23
// 00413b1f  5e                   pop esi
// 00413b20  c20400               ret 4
// 00413b23  8b4620               mov eax, dword ptr [esi + 0x20]
// 00413b26  257fffcfff           and eax, 0xffcfff7f
// 00413b2b  0d00000008           or eax, 0x8000000
// 00413b30  894620               mov dword ptr [esi + 0x20], eax
// 00413b33  b801000000           mov eax, 1
// 00413b38  5e                   pop esi
// 00413b39  c20400               ret 4
// copied from an identical function in another client (function ?sub_40CC30@CChatPrompt@ns_ROCX000001@@QAEHH@Z)

namespace ns_ROCX000001 {
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
