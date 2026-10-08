// roc 2008-06 0048e020  unit: std::X::ZV?$allocator::$$A6AXM::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e020
//
// 0048e020  6aff                 push -1
// 0048e022  683bf47b00           push 0x7bf43b
// 0048e027  64a100000000         mov eax, dword ptr fs:[0]
// 0048e02d  50                   push eax
// 0048e02e  64892500000000       mov dword ptr fs:[0], esp
// 0048e035  51                   push ecx
// 0048e036  56                   push esi
// 0048e037  6a28                 push 0x28
// 0048e039  8bf1                 mov esi, ecx
// 0048e03b  e8e0282100           call 0x6a0920
// 0048e040  83c404               add esp, 4
// 0048e043  89442404             mov dword ptr [esp + 4], eax
// 0048e047  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048e04f  85c0                 test eax, eax
// 0048e051  741b                 je 0x48e06e
// 0048e053  83c608               add esi, 8
// 0048e056  56                   push esi
// 0048e057  8bc8                 mov ecx, eax
// 0048e059  e852ffffff           call 0x48dfb0
// 0048e05e  5e                   pop esi
// 0048e05f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048e063  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e06a  83c410               add esp, 0x10
// 0048e06d  c3                   ret 
// 0048e06e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048e072  33c0                 xor eax, eax
// 0048e074  5e                   pop esi
// 0048e075  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e07c  83c410               add esp, 0x10
// 0048e07f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
