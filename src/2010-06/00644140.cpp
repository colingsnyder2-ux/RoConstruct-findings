// roc 2010-06 00644140  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00644140
//
// 00644140  8b442404             mov eax, dword ptr [esp + 4]
// 00644144  56                   push esi
// 00644145  8bf1                 mov esi, ecx
// 00644147  50                   push eax
// 00644148  8d4c240c             lea ecx, [esp + 0xc]
// 0064414c  e81fffffff           call 0x644070
// 00644151  3bc6                 cmp eax, esi
// 00644153  7408                 je 0x64415d
// 00644155  8b16                 mov edx, dword ptr [esi]
// 00644157  8b08                 mov ecx, dword ptr [eax]
// 00644159  8910                 mov dword ptr [eax], edx
// 0064415b  890e                 mov dword ptr [esi], ecx
// 0064415d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00644161  85c9                 test ecx, ecx
// 00644163  7408                 je 0x64416d
// 00644165  8b01                 mov eax, dword ptr [ecx]
// 00644167  8b10                 mov edx, dword ptr [eax]
// 00644169  6a01                 push 1
// 0064416b  ffd2                 call edx
// 0064416d  8bc6                 mov eax, esi
// 0064416f  5e                   pop esi
// 00644170  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
