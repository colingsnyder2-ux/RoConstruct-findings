// from server: 100% by auto
// roc 2008-06 00417060  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417060
//
// 00417060  6aff                 push -1
// 00417062  683bf47b00           push 0x7bf43b
// 00417067  64a100000000         mov eax, dword ptr fs:[0]
// 0041706d  50                   push eax
// 0041706e  64892500000000       mov dword ptr fs:[0], esp
// 00417075  51                   push ecx
// 00417076  56                   push esi
// 00417077  6a20                 push 0x20
// 00417079  8bf1                 mov esi, ecx
// 0041707b  e8a0982800           call 0x6a0920
// 00417080  83c404               add esp, 4
// 00417083  89442404             mov dword ptr [esp + 4], eax
// 00417087  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041708f  85c0                 test eax, eax
// 00417091  741b                 je 0x4170ae
// 00417093  83c604               add esi, 4
// 00417096  56                   push esi
// 00417097  8bc8                 mov ecx, eax
// 00417099  e862ffffff           call 0x417000
// 0041709e  5e                   pop esi
// 0041709f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004170a3  64890d00000000       mov dword ptr fs:[0], ecx
// 004170aa  83c410               add esp, 0x10
// 004170ad  c3                   ret 
// 004170ae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004170b2  33c0                 xor eax, eax
// 004170b4  5e                   pop esi
// 004170b5  64890d00000000       mov dword ptr fs:[0], ecx
// 004170bc  83c410               add esp, 0x10
// 004170bf  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
