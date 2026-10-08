// roc 2008-06 004d7a80  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7a80
//
// 004d7a80  6aff                 push -1
// 004d7a82  683bf47b00           push 0x7bf43b
// 004d7a87  64a100000000         mov eax, dword ptr fs:[0]
// 004d7a8d  50                   push eax
// 004d7a8e  64892500000000       mov dword ptr fs:[0], esp
// 004d7a95  51                   push ecx
// 004d7a96  56                   push esi
// 004d7a97  6a28                 push 0x28
// 004d7a99  8bf1                 mov esi, ecx
// 004d7a9b  e8808e1c00           call 0x6a0920
// 004d7aa0  83c404               add esp, 4
// 004d7aa3  89442404             mov dword ptr [esp + 4], eax
// 004d7aa7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004d7aaf  85c0                 test eax, eax
// 004d7ab1  741b                 je 0x4d7ace
// 004d7ab3  83c608               add esi, 8
// 004d7ab6  56                   push esi
// 004d7ab7  8bc8                 mov ecx, eax
// 004d7ab9  e852ffffff           call 0x4d7a10
// 004d7abe  5e                   pop esi
// 004d7abf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d7ac3  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7aca  83c410               add esp, 0x10
// 004d7acd  c3                   ret 
// 004d7ace  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004d7ad2  33c0                 xor eax, eax
// 004d7ad4  5e                   pop esi
// 004d7ad5  64890d00000000       mov dword ptr fs:[0], ecx
// 004d7adc  83c410               add esp, 0x10
// 004d7adf  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
