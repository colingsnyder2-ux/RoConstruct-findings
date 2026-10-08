// roc 2009-12 006b4c30  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b4c30
//
// 006b4c30  8b442404             mov eax, dword ptr [esp + 4]
// 006b4c34  56                   push esi
// 006b4c35  8bf1                 mov esi, ecx
// 006b4c37  50                   push eax
// 006b4c38  8d4c240c             lea ecx, [esp + 0xc]
// 006b4c3c  e8dffcffff           call 0x6b4920
// 006b4c41  3bc6                 cmp eax, esi
// 006b4c43  7408                 je 0x6b4c4d
// 006b4c45  8b16                 mov edx, dword ptr [esi]
// 006b4c47  8b08                 mov ecx, dword ptr [eax]
// 006b4c49  8910                 mov dword ptr [eax], edx
// 006b4c4b  890e                 mov dword ptr [esi], ecx
// 006b4c4d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b4c51  85c9                 test ecx, ecx
// 006b4c53  7408                 je 0x6b4c5d
// 006b4c55  8b01                 mov eax, dword ptr [ecx]
// 006b4c57  8b10                 mov edx, dword ptr [eax]
// 006b4c59  6a01                 push 1
// 006b4c5b  ffd2                 call edx
// 006b4c5d  8bc6                 mov eax, esi
// 006b4c5f  5e                   pop esi
// 006b4c60  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
