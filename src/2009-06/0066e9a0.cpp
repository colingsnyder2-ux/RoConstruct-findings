// from server: 100% by auto
// roc 2009-06 0066e9a0  unit: RBX::VFileMesh::?$FactoryProduct  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066e9a0
//
// 0066e9a0  8b442404             mov eax, dword ptr [esp + 4]
// 0066e9a4  56                   push esi
// 0066e9a5  8bf1                 mov esi, ecx
// 0066e9a7  50                   push eax
// 0066e9a8  8d4c240c             lea ecx, [esp + 0xc]
// 0066e9ac  e86fffffff           call 0x66e920
// 0066e9b1  3bc6                 cmp eax, esi
// 0066e9b3  7408                 je 0x66e9bd
// 0066e9b5  8b16                 mov edx, dword ptr [esi]
// 0066e9b7  8b08                 mov ecx, dword ptr [eax]
// 0066e9b9  8910                 mov dword ptr [eax], edx
// 0066e9bb  890e                 mov dword ptr [esi], ecx
// 0066e9bd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066e9c1  85c9                 test ecx, ecx
// 0066e9c3  7408                 je 0x66e9cd
// 0066e9c5  8b01                 mov eax, dword ptr [ecx]
// 0066e9c7  8b10                 mov edx, dword ptr [eax]
// 0066e9c9  6a01                 push 1
// 0066e9cb  ffd2                 call edx
// 0066e9cd  8bc6                 mov eax, esi
// 0066e9cf  5e                   pop esi
// 0066e9d0  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
