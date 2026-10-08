// from server: 100% by auto
// roc 2011-06 0040b730  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040b730
//
// 0040b730  6aff                 push -1
// 0040b732  683b939f00           push 0x9f933b
// 0040b737  64a100000000         mov eax, dword ptr fs:[0]
// 0040b73d  50                   push eax
// 0040b73e  64892500000000       mov dword ptr fs:[0], esp
// 0040b745  51                   push ecx
// 0040b746  56                   push esi
// 0040b747  6a20                 push 0x20
// 0040b749  8bf1                 mov esi, ecx
// 0040b74b  e80ee93f00           call 0x80a05e
// 0040b750  83c404               add esp, 4
// 0040b753  89442404             mov dword ptr [esp + 4], eax
// 0040b757  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040b75f  85c0                 test eax, eax
// 0040b761  741b                 je 0x40b77e
// 0040b763  83c604               add esi, 4
// 0040b766  56                   push esi
// 0040b767  8bc8                 mov ecx, eax
// 0040b769  e862ffffff           call 0x40b6d0
// 0040b76e  5e                   pop esi
// 0040b76f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040b773  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b77a  83c410               add esp, 0x10
// 0040b77d  c3                   ret 
// 0040b77e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040b782  33c0                 xor eax, eax
// 0040b784  5e                   pop esi
// 0040b785  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b78c  83c410               add esp, 0x10
// 0040b78f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
