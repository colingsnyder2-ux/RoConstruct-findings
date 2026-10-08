// from server: 100% by auto
// roc 2011-06 00639a60  unit: RBX::VProtectedString::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00639a60
//
// 00639a60  6aff                 push -1
// 00639a62  683b939f00           push 0x9f933b
// 00639a67  64a100000000         mov eax, dword ptr fs:[0]
// 00639a6d  50                   push eax
// 00639a6e  64892500000000       mov dword ptr fs:[0], esp
// 00639a75  51                   push ecx
// 00639a76  56                   push esi
// 00639a77  6a20                 push 0x20
// 00639a79  8bf1                 mov esi, ecx
// 00639a7b  e8de051d00           call 0x80a05e
// 00639a80  83c404               add esp, 4
// 00639a83  89442404             mov dword ptr [esp + 4], eax
// 00639a87  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00639a8f  85c0                 test eax, eax
// 00639a91  740e                 je 0x639aa1
// 00639a93  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00639a97  51                   push ecx
// 00639a98  8bc8                 mov ecx, eax
// 00639a9a  e851fcffff           call 0x6396f0
// 00639a9f  eb02                 jmp 0x639aa3
// 00639aa1  33c0                 xor eax, eax
// 00639aa3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00639aa7  8906                 mov dword ptr [esi], eax
// 00639aa9  8bc6                 mov eax, esi
// 00639aab  5e                   pop esi
// 00639aac  64890d00000000       mov dword ptr fs:[0], ecx
// 00639ab3  83c410               add esp, 0x10
// 00639ab6  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
