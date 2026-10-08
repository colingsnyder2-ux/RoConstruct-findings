// roc 2008-06 004b19b0  unit: std::X::$$A6AXXZV?$allocator::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b19b0
//
// 004b19b0  6aff                 push -1
// 004b19b2  683bf47b00           push 0x7bf43b
// 004b19b7  64a100000000         mov eax, dword ptr fs:[0]
// 004b19bd  50                   push eax
// 004b19be  64892500000000       mov dword ptr fs:[0], esp
// 004b19c5  51                   push ecx
// 004b19c6  56                   push esi
// 004b19c7  6a28                 push 0x28
// 004b19c9  8bf1                 mov esi, ecx
// 004b19cb  e850ef1e00           call 0x6a0920
// 004b19d0  83c404               add esp, 4
// 004b19d3  89442404             mov dword ptr [esp + 4], eax
// 004b19d7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004b19df  85c0                 test eax, eax
// 004b19e1  741b                 je 0x4b19fe
// 004b19e3  83c608               add esi, 8
// 004b19e6  56                   push esi
// 004b19e7  8bc8                 mov ecx, eax
// 004b19e9  e852ffffff           call 0x4b1940
// 004b19ee  5e                   pop esi
// 004b19ef  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b19f3  64890d00000000       mov dword ptr fs:[0], ecx
// 004b19fa  83c410               add esp, 0x10
// 004b19fd  c3                   ret 
// 004b19fe  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b1a02  33c0                 xor eax, eax
// 004b1a04  5e                   pop esi
// 004b1a05  64890d00000000       mov dword ptr fs:[0], ecx
// 004b1a0c  83c410               add esp, 0x10
// 004b1a0f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
