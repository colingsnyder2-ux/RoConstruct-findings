// roc 2008-06 005b7a40  unit: VStockSound::?$FactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7a40
//
// 005b7a40  8b442404             mov eax, dword ptr [esp + 4]
// 005b7a44  56                   push esi
// 005b7a45  8bf1                 mov esi, ecx
// 005b7a47  50                   push eax
// 005b7a48  8d4c240c             lea ecx, [esp + 0xc]
// 005b7a4c  e86ff8ffff           call 0x5b72c0
// 005b7a51  3bc6                 cmp eax, esi
// 005b7a53  7408                 je 0x5b7a5d
// 005b7a55  8b16                 mov edx, dword ptr [esi]
// 005b7a57  8b08                 mov ecx, dword ptr [eax]
// 005b7a59  8910                 mov dword ptr [eax], edx
// 005b7a5b  890e                 mov dword ptr [esi], ecx
// 005b7a5d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b7a61  85c9                 test ecx, ecx
// 005b7a63  7408                 je 0x5b7a6d
// 005b7a65  8b01                 mov eax, dword ptr [ecx]
// 005b7a67  8b10                 mov edx, dword ptr [eax]
// 005b7a69  6a01                 push 1
// 005b7a6b  ffd2                 call edx
// 005b7a6d  8bc6                 mov eax, esi
// 005b7a6f  5e                   pop esi
// 005b7a70  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
