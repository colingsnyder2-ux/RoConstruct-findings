// from server: 100% by auto
// roc 2011-06 005ba0e0  unit: RBX::Reflection::Descriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ba0e0
//
// 005ba0e0  8b442404             mov eax, dword ptr [esp + 4]
// 005ba0e4  56                   push esi
// 005ba0e5  8bf1                 mov esi, ecx
// 005ba0e7  50                   push eax
// 005ba0e8  8d4c240c             lea ecx, [esp + 0xc]
// 005ba0ec  e8affdffff           call 0x5b9ea0
// 005ba0f1  3bc6                 cmp eax, esi
// 005ba0f3  7408                 je 0x5ba0fd
// 005ba0f5  8b16                 mov edx, dword ptr [esi]
// 005ba0f7  8b08                 mov ecx, dword ptr [eax]
// 005ba0f9  8910                 mov dword ptr [eax], edx
// 005ba0fb  890e                 mov dword ptr [esi], ecx
// 005ba0fd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ba101  85c9                 test ecx, ecx
// 005ba103  7408                 je 0x5ba10d
// 005ba105  8b01                 mov eax, dword ptr [ecx]
// 005ba107  8b10                 mov edx, dword ptr [eax]
// 005ba109  6a01                 push 1
// 005ba10b  ffd2                 call edx
// 005ba10d  8bc6                 mov eax, esi
// 005ba10f  5e                   pop esi
// 005ba110  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
