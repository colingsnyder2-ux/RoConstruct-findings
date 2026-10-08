// from server: 100% by auto
// roc 2011-06 00639750  unit: RBX::VProtectedString::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00639750
//
// 00639750  6aff                 push -1
// 00639752  683b939f00           push 0x9f933b
// 00639757  64a100000000         mov eax, dword ptr fs:[0]
// 0063975d  50                   push eax
// 0063975e  64892500000000       mov dword ptr fs:[0], esp
// 00639765  51                   push ecx
// 00639766  56                   push esi
// 00639767  6a20                 push 0x20
// 00639769  8bf1                 mov esi, ecx
// 0063976b  e8ee081d00           call 0x80a05e
// 00639770  83c404               add esp, 4
// 00639773  89442404             mov dword ptr [esp + 4], eax
// 00639777  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063977f  85c0                 test eax, eax
// 00639781  741b                 je 0x63979e
// 00639783  83c604               add esi, 4
// 00639786  56                   push esi
// 00639787  8bc8                 mov ecx, eax
// 00639789  e862ffffff           call 0x6396f0
// 0063978e  5e                   pop esi
// 0063978f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00639793  64890d00000000       mov dword ptr fs:[0], ecx
// 0063979a  83c410               add esp, 0x10
// 0063979d  c3                   ret 
// 0063979e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006397a2  33c0                 xor eax, eax
// 006397a4  5e                   pop esi
// 006397a5  64890d00000000       mov dword ptr fs:[0], ecx
// 006397ac  83c410               add esp, 0x10
// 006397af  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
