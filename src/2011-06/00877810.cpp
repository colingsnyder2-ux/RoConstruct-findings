// roc 2011-06 00877810  unit: CXTPPropertyGridView  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00877810
//
// 00877810  56                   push esi
// 00877811  8bf1                 mov esi, ecx
// 00877813  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0087781a  7437                 je 0x877853
// 0087781c  e87ff4ffff           call 0x876ca0
// 00877821  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00877825  8d50fc               lea edx, [eax - 4]
// 00877828  3bca                 cmp ecx, edx
// 0087782a  7e27                 jle 0x877853
// 0087782c  83c002               add eax, 2
// 0087782f  3bc8                 cmp ecx, eax
// 00877831  7f20                 jg 0x877853
// 00877833  8b4620               mov eax, dword ptr [esi + 0x20]
// 00877836  6a00                 push 0
// 00877838  6a00                 push 0
// 0087783a  688b010000           push 0x18b
// 0087783f  50                   push eax
// 00877840  ff15c019a400         call dword ptr [0xa419c0]
// 00877846  85c0                 test eax, eax
// 00877848  7e09                 jle 0x877853
// 0087784a  b800010000           mov eax, 0x100
// 0087784f  5e                   pop esi
// 00877850  c20800               ret 8
// 00877853  83c8ff               or eax, 0xffffffff
// 00877856  5e                   pop esi
// 00877857  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?HitTest@CXTPPropertyGridView@@ABEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
