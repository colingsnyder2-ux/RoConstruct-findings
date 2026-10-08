// from server: 100% by auto
// roc 2009-06 005e56a0  unit: RBX::Reflection::Descriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e56a0
//
// 005e56a0  8b442404             mov eax, dword ptr [esp + 4]
// 005e56a4  56                   push esi
// 005e56a5  8bf1                 mov esi, ecx
// 005e56a7  50                   push eax
// 005e56a8  8d4c240c             lea ecx, [esp + 0xc]
// 005e56ac  e8dffcffff           call 0x5e5390
// 005e56b1  3bc6                 cmp eax, esi
// 005e56b3  7408                 je 0x5e56bd
// 005e56b5  8b16                 mov edx, dword ptr [esi]
// 005e56b7  8b08                 mov ecx, dword ptr [eax]
// 005e56b9  8910                 mov dword ptr [eax], edx
// 005e56bb  890e                 mov dword ptr [esi], ecx
// 005e56bd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e56c1  85c9                 test ecx, ecx
// 005e56c3  7408                 je 0x5e56cd
// 005e56c5  8b01                 mov eax, dword ptr [ecx]
// 005e56c7  8b10                 mov edx, dword ptr [eax]
// 005e56c9  6a01                 push 1
// 005e56cb  ffd2                 call edx
// 005e56cd  8bc6                 mov eax, esi
// 005e56cf  5e                   pop esi
// 005e56d0  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
