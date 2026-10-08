// from server: 100% by auto
// roc 2011-06 0062bd90  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062bd90
//
// 0062bd90  6aff                 push -1
// 0062bd92  683b939f00           push 0x9f933b
// 0062bd97  64a100000000         mov eax, dword ptr fs:[0]
// 0062bd9d  50                   push eax
// 0062bd9e  64892500000000       mov dword ptr fs:[0], esp
// 0062bda5  51                   push ecx
// 0062bda6  56                   push esi
// 0062bda7  6a20                 push 0x20
// 0062bda9  8bf1                 mov esi, ecx
// 0062bdab  e8aee21d00           call 0x80a05e
// 0062bdb0  83c404               add esp, 4
// 0062bdb3  89442404             mov dword ptr [esp + 4], eax
// 0062bdb7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062bdbf  85c0                 test eax, eax
// 0062bdc1  741b                 je 0x62bdde
// 0062bdc3  83c604               add esi, 4
// 0062bdc6  56                   push esi
// 0062bdc7  8bc8                 mov ecx, eax
// 0062bdc9  e802faffff           call 0x62b7d0
// 0062bdce  5e                   pop esi
// 0062bdcf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062bdd3  64890d00000000       mov dword ptr fs:[0], ecx
// 0062bdda  83c410               add esp, 0x10
// 0062bddd  c3                   ret 
// 0062bdde  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062bde2  33c0                 xor eax, eax
// 0062bde4  5e                   pop esi
// 0062bde5  64890d00000000       mov dword ptr fs:[0], ecx
// 0062bdec  83c410               add esp, 0x10
// 0062bdef  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
