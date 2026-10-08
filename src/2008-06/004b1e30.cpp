// roc 2008-06 004b1e30  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b1e30
//
// 004b1e30  6aff                 push -1
// 004b1e32  683bf47b00           push 0x7bf43b
// 004b1e37  64a100000000         mov eax, dword ptr fs:[0]
// 004b1e3d  50                   push eax
// 004b1e3e  64892500000000       mov dword ptr fs:[0], esp
// 004b1e45  51                   push ecx
// 004b1e46  56                   push esi
// 004b1e47  6a28                 push 0x28
// 004b1e49  8bf1                 mov esi, ecx
// 004b1e4b  e8d0ea1e00           call 0x6a0920
// 004b1e50  83c404               add esp, 4
// 004b1e53  89442404             mov dword ptr [esp + 4], eax
// 004b1e57  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b1e5f  85c0                 test eax, eax
// 004b1e61  741b                 je 0x4b1e7e
// 004b1e63  83c608               add esi, 8
// 004b1e66  56                   push esi
// 004b1e67  8bc8                 mov ecx, eax
// 004b1e69  e852ffffff           call 0x4b1dc0
// 004b1e6e  5e                   pop esi
// 004b1e6f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b1e73  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1e7a  83c410               add esp, 0x10
// 004b1e7d  c3                   ret 
// 004b1e7e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b1e82  33c0                 xor eax, eax
// 004b1e84  5e                   pop esi
// 004b1e85  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1e8c  83c410               add esp, 0x10
// 004b1e8f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
