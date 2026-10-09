// roc 2008-06 00411370  unit: CChatPrompt  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411370
//
// 00411370  56                   push esi
// 00411371  8b742408             mov esi, dword ptr [esp + 8]
// 00411375  56                   push esi
// 00411376  e8f9f82800           call 0x6a0c74
// 0041137b  85c0                 test eax, eax
// 0041137d  7504                 jne 0x411383
// 0041137f  5e                   pop esi
// 00411380  c20400               ret 4
// 00411383  8b4620               mov eax, dword ptr [esi + 0x20]
// 00411386  257fffcfff           and eax, 0xffcfff7f
// 0041138b  0d00000008           or eax, 0x8000000
// 00411390  894620               mov dword ptr [esi + 0x20], eax
// 00411393  b801000000           mov eax, 1
// 00411398  5e                   pop esi
// 00411399  c20400               ret 4
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
