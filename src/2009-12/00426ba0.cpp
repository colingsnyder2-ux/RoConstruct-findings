// roc 2009-12 00426ba0  unit: boost::any::H::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00426ba0
//
// 00426ba0  6aff                 push -1
// 00426ba2  68eba59400           push 0x94a5eb
// 00426ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00426bad  50                   push eax
// 00426bae  64892500000000       mov dword ptr fs:[0], esp
// 00426bb5  51                   push ecx
// 00426bb6  56                   push esi
// 00426bb7  6a20                 push 0x20
// 00426bb9  8bf1                 mov esi, ecx
// 00426bbb  e8a0cc3c00           call 0x7f3860
// 00426bc0  83c404               add esp, 4
// 00426bc3  89442404             mov dword ptr [esp + 4], eax
// 00426bc7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00426bcf  85c0                 test eax, eax
// 00426bd1  740e                 je 0x426be1
// 00426bd3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00426bd7  51                   push ecx
// 00426bd8  8bc8                 mov ecx, eax
// 00426bda  e891fdffff           call 0x426970
// 00426bdf  eb02                 jmp 0x426be3
// 00426be1  33c0                 xor eax, eax
// 00426be3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00426be7  8906                 mov dword ptr [esi], eax
// 00426be9  8bc6                 mov eax, esi
// 00426beb  5e                   pop esi
// 00426bec  64890d00000000       mov dword ptr fs:[0], ecx
// 00426bf3  83c410               add esp, 0x10
// 00426bf6  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
