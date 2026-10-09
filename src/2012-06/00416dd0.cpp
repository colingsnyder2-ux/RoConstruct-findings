// roc 2012-06 00416dd0  unit: CChatPrompt  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00416dd0
//
// 00416dd0  56                   push esi
// 00416dd1  8b742408             mov esi, dword ptr [esp + 8]
// 00416dd5  56                   push esi
// 00416dd6  e80fb95600           call 0x9826ea
// 00416ddb  85c0                 test eax, eax
// 00416ddd  7504                 jne 0x416de3
// 00416ddf  5e                   pop esi
// 00416de0  c20400               ret 4
// 00416de3  8b4620               mov eax, dword ptr [esi + 0x20]
// 00416de6  257fffcfff           and eax, 0xffcfff7f
// 00416deb  0d00000008           or eax, 0x8000000
// 00416df0  894620               mov dword ptr [esi + 0x20], eax
// 00416df3  b801000000           mov eax, 1
// 00416df8  5e                   pop esi
// 00416df9  c20400               ret 4
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
