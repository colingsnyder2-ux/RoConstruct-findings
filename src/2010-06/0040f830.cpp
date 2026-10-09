// roc 2010-06 0040f830  unit: CChatPrompt  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040f830
//
// 0040f830  56                   push esi
// 0040f831  8b742408             mov esi, dword ptr [esp + 8]
// 0040f835  56                   push esi
// 0040f836  e841873900           call 0x7a7f7c
// 0040f83b  85c0                 test eax, eax
// 0040f83d  7504                 jne 0x40f843
// 0040f83f  5e                   pop esi
// 0040f840  c20400               ret 4
// 0040f843  8b4620               mov eax, dword ptr [esi + 0x20]
// 0040f846  257fffcfff           and eax, 0xffcfff7f
// 0040f84b  0d00000008           or eax, 0x8000000
// 0040f850  894620               mov dword ptr [esi + 0x20], eax
// 0040f853  b801000000           mov eax, 1
// 0040f858  5e                   pop esi
// 0040f859  c20400               ret 4
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
