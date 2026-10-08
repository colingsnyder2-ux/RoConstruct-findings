// from server: 100% by auto
// roc 2010-06 005f6110  unit: RBX::VTextureId::?$holder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f6110
//
// 005f6110  8b442404             mov eax, dword ptr [esp + 4]
// 005f6114  56                   push esi
// 005f6115  8bf1                 mov esi, ecx
// 005f6117  50                   push eax
// 005f6118  8d4c240c             lea ecx, [esp + 0xc]
// 005f611c  e8cffdffff           call 0x5f5ef0
// 005f6121  3bc6                 cmp eax, esi
// 005f6123  7408                 je 0x5f612d
// 005f6125  8b16                 mov edx, dword ptr [esi]
// 005f6127  8b08                 mov ecx, dword ptr [eax]
// 005f6129  8910                 mov dword ptr [eax], edx
// 005f612b  890e                 mov dword ptr [esi], ecx
// 005f612d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f6131  85c9                 test ecx, ecx
// 005f6133  7408                 je 0x5f613d
// 005f6135  8b01                 mov eax, dword ptr [ecx]
// 005f6137  8b10                 mov edx, dword ptr [eax]
// 005f6139  6a01                 push 1
// 005f613b  ffd2                 call edx
// 005f613d  8bc6                 mov eax, esi
// 005f613f  5e                   pop esi
// 005f6140  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
