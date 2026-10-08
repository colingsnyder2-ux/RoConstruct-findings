// roc 2008-06 00555f70  unit: std::X::ZV?$allocator::$$A6AXMM::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00555f70
//
// 00555f70  6aff                 push -1
// 00555f72  683bf47b00           push 0x7bf43b
// 00555f77  64a100000000         mov eax, dword ptr fs:[0]
// 00555f7d  50                   push eax
// 00555f7e  64892500000000       mov dword ptr fs:[0], esp
// 00555f85  51                   push ecx
// 00555f86  56                   push esi
// 00555f87  6a28                 push 0x28
// 00555f89  8bf1                 mov esi, ecx
// 00555f8b  e890a91400           call 0x6a0920
// 00555f90  83c404               add esp, 4
// 00555f93  89442404             mov dword ptr [esp + 4], eax
// 00555f97  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00555f9f  85c0                 test eax, eax
// 00555fa1  741b                 je 0x555fbe
// 00555fa3  83c608               add esi, 8
// 00555fa6  56                   push esi
// 00555fa7  8bc8                 mov ecx, eax
// 00555fa9  e852ffffff           call 0x555f00
// 00555fae  5e                   pop esi
// 00555faf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00555fb3  64890d00000000       mov dword ptr fs:[0], ecx
// 00555fba  83c410               add esp, 0x10
// 00555fbd  c3                   ret 
// 00555fbe  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00555fc2  33c0                 xor eax, eax
// 00555fc4  5e                   pop esi
// 00555fc5  64890d00000000       mov dword ptr fs:[0], ecx
// 00555fcc  83c410               add esp, 0x10
// 00555fcf  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
