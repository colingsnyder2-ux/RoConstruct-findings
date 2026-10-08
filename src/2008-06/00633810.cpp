// roc 2008-06 00633810  unit: std::X::ZV?$allocator::$$A6AXH::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633810
//
// 00633810  6aff                 push -1
// 00633812  683bf47b00           push 0x7bf43b
// 00633817  64a100000000         mov eax, dword ptr fs:[0]
// 0063381d  50                   push eax
// 0063381e  64892500000000       mov dword ptr fs:[0], esp
// 00633825  51                   push ecx
// 00633826  56                   push esi
// 00633827  6a28                 push 0x28
// 00633829  8bf1                 mov esi, ecx
// 0063382b  e8f0d00600           call 0x6a0920
// 00633830  83c404               add esp, 4
// 00633833  89442404             mov dword ptr [esp + 4], eax
// 00633837  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063383f  85c0                 test eax, eax
// 00633841  741b                 je 0x63385e
// 00633843  83c608               add esi, 8
// 00633846  56                   push esi
// 00633847  8bc8                 mov ecx, eax
// 00633849  e852ffffff           call 0x6337a0
// 0063384e  5e                   pop esi
// 0063384f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00633853  64890d00000000       mov dword ptr fs:[0], ecx
// 0063385a  83c410               add esp, 0x10
// 0063385d  c3                   ret 
// 0063385e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00633862  33c0                 xor eax, eax
// 00633864  5e                   pop esi
// 00633865  64890d00000000       mov dword ptr fs:[0], ecx
// 0063386c  83c410               add esp, 0x10
// 0063386f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
