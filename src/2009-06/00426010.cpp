// from server: 100% by auto
// roc 2009-06 00426010  unit: boost::any::H::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00426010
//
// 00426010  6aff                 push -1
// 00426012  687b9c8600           push 0x869c7b
// 00426017  64a100000000         mov eax, dword ptr fs:[0]
// 0042601d  50                   push eax
// 0042601e  64892500000000       mov dword ptr fs:[0], esp
// 00426025  51                   push ecx
// 00426026  56                   push esi
// 00426027  6a20                 push 0x20
// 00426029  8bf1                 mov esi, ecx
// 0042602b  e8082a2f00           call 0x718a38
// 00426030  83c404               add esp, 4
// 00426033  89442404             mov dword ptr [esp + 4], eax
// 00426037  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042603f  85c0                 test eax, eax
// 00426041  740e                 je 0x426051
// 00426043  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00426047  51                   push ecx
// 00426048  8bc8                 mov ecx, eax
// 0042604a  e811fdffff           call 0x425d60
// 0042604f  eb02                 jmp 0x426053
// 00426051  33c0                 xor eax, eax
// 00426053  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00426057  8906                 mov dword ptr [esi], eax
// 00426059  8bc6                 mov eax, esi
// 0042605b  5e                   pop esi
// 0042605c  64890d00000000       mov dword ptr fs:[0], ecx
// 00426063  83c410               add esp, 0x10
// 00426066  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
