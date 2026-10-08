// roc 2008-06 0041a890  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a890
//
// 0041a890  6aff                 push -1
// 0041a892  683bf47b00           push 0x7bf43b
// 0041a897  64a100000000         mov eax, dword ptr fs:[0]
// 0041a89d  50                   push eax
// 0041a89e  64892500000000       mov dword ptr fs:[0], esp
// 0041a8a5  51                   push ecx
// 0041a8a6  56                   push esi
// 0041a8a7  6a28                 push 0x28
// 0041a8a9  8bf1                 mov esi, ecx
// 0041a8ab  e870602800           call 0x6a0920
// 0041a8b0  83c404               add esp, 4
// 0041a8b3  89442404             mov dword ptr [esp + 4], eax
// 0041a8b7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041a8bf  85c0                 test eax, eax
// 0041a8c1  741b                 je 0x41a8de
// 0041a8c3  83c608               add esi, 8
// 0041a8c6  56                   push esi
// 0041a8c7  8bc8                 mov ecx, eax
// 0041a8c9  e852ffffff           call 0x41a820
// 0041a8ce  5e                   pop esi
// 0041a8cf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041a8d3  64890d00000000       mov dword ptr fs:[0], ecx
// 0041a8da  83c410               add esp, 0x10
// 0041a8dd  c3                   ret 
// 0041a8de  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041a8e2  33c0                 xor eax, eax
// 0041a8e4  5e                   pop esi
// 0041a8e5  64890d00000000       mov dword ptr fs:[0], ecx
// 0041a8ec  83c410               add esp, 0x10
// 0041a8ef  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
