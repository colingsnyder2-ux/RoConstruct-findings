// roc 2008-06 0049f620  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f620
//
// 0049f620  6aff                 push -1
// 0049f622  683bf47b00           push 0x7bf43b
// 0049f627  64a100000000         mov eax, dword ptr fs:[0]
// 0049f62d  50                   push eax
// 0049f62e  64892500000000       mov dword ptr fs:[0], esp
// 0049f635  51                   push ecx
// 0049f636  56                   push esi
// 0049f637  6a28                 push 0x28
// 0049f639  8bf1                 mov esi, ecx
// 0049f63b  e8e0122000           call 0x6a0920
// 0049f640  83c404               add esp, 4
// 0049f643  89442404             mov dword ptr [esp + 4], eax
// 0049f647  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049f64f  85c0                 test eax, eax
// 0049f651  741b                 je 0x49f66e
// 0049f653  83c608               add esi, 8
// 0049f656  56                   push esi
// 0049f657  8bc8                 mov ecx, eax
// 0049f659  e852ffffff           call 0x49f5b0
// 0049f65e  5e                   pop esi
// 0049f65f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049f663  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f66a  83c410               add esp, 0x10
// 0049f66d  c3                   ret 
// 0049f66e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049f672  33c0                 xor eax, eax
// 0049f674  5e                   pop esi
// 0049f675  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f67c  83c410               add esp, 0x10
// 0049f67f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
