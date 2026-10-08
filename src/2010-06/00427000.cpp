// from server: 100% by auto
// roc 2010-06 00427000  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00427000
//
// 00427000  6aff                 push -1
// 00427002  684b1d9a00           push 0x9a1d4b
// 00427007  64a100000000         mov eax, dword ptr fs:[0]
// 0042700d  50                   push eax
// 0042700e  64892500000000       mov dword ptr fs:[0], esp
// 00427015  51                   push ecx
// 00427016  56                   push esi
// 00427017  6a20                 push 0x20
// 00427019  8bf1                 mov esi, ecx
// 0042701b  e880093800           call 0x7a79a0
// 00427020  83c404               add esp, 4
// 00427023  89442404             mov dword ptr [esp + 4], eax
// 00427027  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042702f  85c0                 test eax, eax
// 00427031  740e                 je 0x427041
// 00427033  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00427037  51                   push ecx
// 00427038  8bc8                 mov ecx, eax
// 0042703a  e831fdffff           call 0x426d70
// 0042703f  eb02                 jmp 0x427043
// 00427041  33c0                 xor eax, eax
// 00427043  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00427047  8906                 mov dword ptr [esi], eax
// 00427049  8bc6                 mov eax, esi
// 0042704b  5e                   pop esi
// 0042704c  64890d00000000       mov dword ptr fs:[0], ecx
// 00427053  83c410               add esp, 0x10
// 00427056  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
