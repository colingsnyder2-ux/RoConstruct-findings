// roc 2009-12 00681000  unit: RBX::VProtectedString::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00681000
//
// 00681000  6aff                 push -1
// 00681002  68eba59400           push 0x94a5eb
// 00681007  64a100000000         mov eax, dword ptr fs:[0]
// 0068100d  50                   push eax
// 0068100e  64892500000000       mov dword ptr fs:[0], esp
// 00681015  51                   push ecx
// 00681016  56                   push esi
// 00681017  6a20                 push 0x20
// 00681019  8bf1                 mov esi, ecx
// 0068101b  e840281700           call 0x7f3860
// 00681020  83c404               add esp, 4
// 00681023  89442404             mov dword ptr [esp + 4], eax
// 00681027  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0068102f  85c0                 test eax, eax
// 00681031  741b                 je 0x68104e
// 00681033  83c604               add esi, 4
// 00681036  56                   push esi
// 00681037  8bc8                 mov ecx, eax
// 00681039  e862ffffff           call 0x680fa0
// 0068103e  5e                   pop esi
// 0068103f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00681043  64890d00000000       mov dword ptr fs:[0], ecx
// 0068104a  83c410               add esp, 0x10
// 0068104d  c3                   ret 
// 0068104e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00681052  33c0                 xor eax, eax
// 00681054  5e                   pop esi
// 00681055  64890d00000000       mov dword ptr fs:[0], ecx
// 0068105c  83c410               add esp, 0x10
// 0068105f  c3                   ret 
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ?clone@?$holder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
