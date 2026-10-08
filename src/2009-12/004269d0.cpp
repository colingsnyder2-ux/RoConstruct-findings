// roc 2009-12 004269d0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004269d0
//
// 004269d0  6aff                 push -1
// 004269d2  68eba59400           push 0x94a5eb
// 004269d7  64a100000000         mov eax, dword ptr fs:[0]
// 004269dd  50                   push eax
// 004269de  64892500000000       mov dword ptr fs:[0], esp
// 004269e5  51                   push ecx
// 004269e6  56                   push esi
// 004269e7  6a20                 push 0x20
// 004269e9  8bf1                 mov esi, ecx
// 004269eb  e870ce3c00           call 0x7f3860
// 004269f0  83c404               add esp, 4
// 004269f3  89442404             mov dword ptr [esp + 4], eax
// 004269f7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004269ff  85c0                 test eax, eax
// 00426a01  741b                 je 0x426a1e
// 00426a03  83c604               add esi, 4
// 00426a06  56                   push esi
// 00426a07  8bc8                 mov ecx, eax
// 00426a09  e862ffffff           call 0x426970
// 00426a0e  5e                   pop esi
// 00426a0f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00426a13  64890d00000000       mov dword ptr fs:[0], ecx
// 00426a1a  83c410               add esp, 0x10
// 00426a1d  c3                   ret 
// 00426a1e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00426a22  33c0                 xor eax, eax
// 00426a24  5e                   pop esi
// 00426a25  64890d00000000       mov dword ptr fs:[0], ecx
// 00426a2c  83c410               add esp, 0x10
// 00426a2f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
