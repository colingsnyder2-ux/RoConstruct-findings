// from server: 100% by auto
// roc 2010-06 005fdbe0  unit: RBX::VProtectedString::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fdbe0
//
// 005fdbe0  6aff                 push -1
// 005fdbe2  684b1d9a00           push 0x9a1d4b
// 005fdbe7  64a100000000         mov eax, dword ptr fs:[0]
// 005fdbed  50                   push eax
// 005fdbee  64892500000000       mov dword ptr fs:[0], esp
// 005fdbf5  51                   push ecx
// 005fdbf6  56                   push esi
// 005fdbf7  6a20                 push 0x20
// 005fdbf9  8bf1                 mov esi, ecx
// 005fdbfb  e8a09d1a00           call 0x7a79a0
// 005fdc00  83c404               add esp, 4
// 005fdc03  89442404             mov dword ptr [esp + 4], eax
// 005fdc07  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fdc0f  85c0                 test eax, eax
// 005fdc11  740e                 je 0x5fdc21
// 005fdc13  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005fdc17  51                   push ecx
// 005fdc18  8bc8                 mov ecx, eax
// 005fdc1a  e801ffffff           call 0x5fdb20
// 005fdc1f  eb02                 jmp 0x5fdc23
// 005fdc21  33c0                 xor eax, eax
// 005fdc23  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fdc27  8906                 mov dword ptr [esi], eax
// 005fdc29  8bc6                 mov eax, esi
// 005fdc2b  5e                   pop esi
// 005fdc2c  64890d00000000       mov dword ptr fs:[0], ecx
// 005fdc33  83c410               add esp, 0x10
// 005fdc36  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
