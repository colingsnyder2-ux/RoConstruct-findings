// roc 2007-03 0040dce0  unit: seg_00400000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040dce0
//
// 0040dce0  56                   push esi
// 0040dce1  8b742408             mov esi, dword ptr [esp + 8]
// 0040dce5  56                   push esi
// 0040dce6  e8f3092100           call 0x61e6de
// 0040dceb  85c0                 test eax, eax
// 0040dced  7504                 jne 0x40dcf3
// 0040dcef  5e                   pop esi
// 0040dcf0  c20400               ret 4
// 0040dcf3  8b4620               mov eax, dword ptr [esi + 0x20]
// 0040dcf6  257fffcfff           and eax, 0xffcfff7f
// 0040dcfb  0d00000008           or eax, 0x8000000
// 0040dd00  894620               mov dword ptr [esi + 0x20], eax
// 0040dd03  b801000000           mov eax, 1
// 0040dd08  5e                   pop esi
// 0040dd09  c20400               ret 4
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
