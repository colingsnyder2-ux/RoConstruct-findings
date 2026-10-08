// roc 2008-06 00633c10  unit: std::X::ZV?$allocator::$$A6AXN::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633c10
//
// 00633c10  6aff                 push -1
// 00633c12  683bf47b00           push 0x7bf43b
// 00633c17  64a100000000         mov eax, dword ptr fs:[0]
// 00633c1d  50                   push eax
// 00633c1e  64892500000000       mov dword ptr fs:[0], esp
// 00633c25  51                   push ecx
// 00633c26  56                   push esi
// 00633c27  6a28                 push 0x28
// 00633c29  8bf1                 mov esi, ecx
// 00633c2b  e8f0cc0600           call 0x6a0920
// 00633c30  83c404               add esp, 4
// 00633c33  89442404             mov dword ptr [esp + 4], eax
// 00633c37  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00633c3f  85c0                 test eax, eax
// 00633c41  741b                 je 0x633c5e
// 00633c43  83c608               add esi, 8
// 00633c46  56                   push esi
// 00633c47  8bc8                 mov ecx, eax
// 00633c49  e852ffffff           call 0x633ba0
// 00633c4e  5e                   pop esi
// 00633c4f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00633c53  64890d00000000       mov dword ptr fs:[0], ecx
// 00633c5a  83c410               add esp, 0x10
// 00633c5d  c3                   ret 
// 00633c5e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633c62  33c0                 xor eax, eax
// 00633c64  5e                   pop esi
// 00633c65  64890d00000000       mov dword ptr fs:[0], ecx
// 00633c6c  83c410               add esp, 0x10
// 00633c6f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
