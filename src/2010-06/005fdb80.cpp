// roc 2010-06 005fdb80  unit: RBX::VProtectedString::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fdb80
//
// 005fdb80  6aff                 push -1
// 005fdb82  684b1d9a00           push 0x9a1d4b
// 005fdb87  64a100000000         mov eax, dword ptr fs:[0]
// 005fdb8d  50                   push eax
// 005fdb8e  64892500000000       mov dword ptr fs:[0], esp
// 005fdb95  51                   push ecx
// 005fdb96  56                   push esi
// 005fdb97  6a20                 push 0x20
// 005fdb99  8bf1                 mov esi, ecx
// 005fdb9b  e8009e1a00           call 0x7a79a0
// 005fdba0  83c404               add esp, 4
// 005fdba3  89442404             mov dword ptr [esp + 4], eax
// 005fdba7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fdbaf  85c0                 test eax, eax
// 005fdbb1  741b                 je 0x5fdbce
// 005fdbb3  83c604               add esi, 4
// 005fdbb6  56                   push esi
// 005fdbb7  8bc8                 mov ecx, eax
// 005fdbb9  e862ffffff           call 0x5fdb20
// 005fdbbe  5e                   pop esi
// 005fdbbf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fdbc3  64890d00000000       mov dword ptr fs:[0], ecx
// 005fdbca  83c410               add esp, 0x10
// 005fdbcd  c3                   ret 
// 005fdbce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fdbd2  33c0                 xor eax, eax
// 005fdbd4  5e                   pop esi
// 005fdbd5  64890d00000000       mov dword ptr fs:[0], ecx
// 005fdbdc  83c410               add esp, 0x10
// 005fdbdf  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
