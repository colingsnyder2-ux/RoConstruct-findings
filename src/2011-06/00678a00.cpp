// roc 2011-06 00678a00  unit: RBX::VFileMesh::?$FactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00678a00
//
// 00678a00  8b442404             mov eax, dword ptr [esp + 4]
// 00678a04  56                   push esi
// 00678a05  8bf1                 mov esi, ecx
// 00678a07  50                   push eax
// 00678a08  8d4c240c             lea ecx, [esp + 0xc]
// 00678a0c  e86fffffff           call 0x678980
// 00678a11  3bc6                 cmp eax, esi
// 00678a13  7408                 je 0x678a1d
// 00678a15  8b16                 mov edx, dword ptr [esi]
// 00678a17  8b08                 mov ecx, dword ptr [eax]
// 00678a19  8910                 mov dword ptr [eax], edx
// 00678a1b  890e                 mov dword ptr [esi], ecx
// 00678a1d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00678a21  85c9                 test ecx, ecx
// 00678a23  7408                 je 0x678a2d
// 00678a25  8b01                 mov eax, dword ptr [ecx]
// 00678a27  8b10                 mov edx, dword ptr [eax]
// 00678a29  6a01                 push 1
// 00678a2b  ffd2                 call edx
// 00678a2d  8bc6                 mov eax, esi
// 00678a2f  5e                   pop esi
// 00678a30  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
