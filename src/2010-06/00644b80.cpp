// roc 2010-06 00644b80  unit: RBX::VFileMesh::?$FactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00644b80
//
// 00644b80  8b442404             mov eax, dword ptr [esp + 4]
// 00644b84  56                   push esi
// 00644b85  8bf1                 mov esi, ecx
// 00644b87  50                   push eax
// 00644b88  8d4c240c             lea ecx, [esp + 0xc]
// 00644b8c  e8cffeffff           call 0x644a60
// 00644b91  3bc6                 cmp eax, esi
// 00644b93  7408                 je 0x644b9d
// 00644b95  8b16                 mov edx, dword ptr [esi]
// 00644b97  8b08                 mov ecx, dword ptr [eax]
// 00644b99  8910                 mov dword ptr [eax], edx
// 00644b9b  890e                 mov dword ptr [esi], ecx
// 00644b9d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00644ba1  85c9                 test ecx, ecx
// 00644ba3  7408                 je 0x644bad
// 00644ba5  8b01                 mov eax, dword ptr [ecx]
// 00644ba7  8b10                 mov edx, dword ptr [eax]
// 00644ba9  6a01                 push 1
// 00644bab  ffd2                 call edx
// 00644bad  8bc6                 mov eax, esi
// 00644baf  5e                   pop esi
// 00644bb0  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
