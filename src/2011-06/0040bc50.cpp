// roc 2011-06 0040bc50  unit: boost::Vbad_function_call::?$error_info_injector  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040bc50
//
// 0040bc50  6aff                 push -1
// 0040bc52  683b939f00           push 0x9f933b
// 0040bc57  64a100000000         mov eax, dword ptr fs:[0]
// 0040bc5d  50                   push eax
// 0040bc5e  64892500000000       mov dword ptr fs:[0], esp
// 0040bc65  51                   push ecx
// 0040bc66  56                   push esi
// 0040bc67  6a20                 push 0x20
// 0040bc69  8bf1                 mov esi, ecx
// 0040bc6b  e8eee33f00           call 0x80a05e
// 0040bc70  83c404               add esp, 4
// 0040bc73  89442404             mov dword ptr [esp + 4], eax
// 0040bc77  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040bc7f  85c0                 test eax, eax
// 0040bc81  740e                 je 0x40bc91
// 0040bc83  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0040bc87  51                   push ecx
// 0040bc88  8bc8                 mov ecx, eax
// 0040bc8a  e841faffff           call 0x40b6d0
// 0040bc8f  eb02                 jmp 0x40bc93
// 0040bc91  33c0                 xor eax, eax
// 0040bc93  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040bc97  8906                 mov dword ptr [esi], eax
// 0040bc99  8bc6                 mov eax, esi
// 0040bc9b  5e                   pop esi
// 0040bc9c  64890d00000000       mov dword ptr fs:[0], ecx
// 0040bca3  83c410               add esp, 0x10
// 0040bca6  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
