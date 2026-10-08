// roc 2008-06 0048dca0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048dca0
//
// 0048dca0  6aff                 push -1
// 0048dca2  683bf47b00           push 0x7bf43b
// 0048dca7  64a100000000         mov eax, dword ptr fs:[0]
// 0048dcad  50                   push eax
// 0048dcae  64892500000000       mov dword ptr fs:[0], esp
// 0048dcb5  51                   push ecx
// 0048dcb6  56                   push esi
// 0048dcb7  6a28                 push 0x28
// 0048dcb9  8bf1                 mov esi, ecx
// 0048dcbb  e8602c2100           call 0x6a0920
// 0048dcc0  83c404               add esp, 4
// 0048dcc3  89442404             mov dword ptr [esp + 4], eax
// 0048dcc7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0048dccf  85c0                 test eax, eax
// 0048dcd1  741b                 je 0x48dcee
// 0048dcd3  83c608               add esi, 8
// 0048dcd6  56                   push esi
// 0048dcd7  8bc8                 mov ecx, eax
// 0048dcd9  e852ffffff           call 0x48dc30
// 0048dcde  5e                   pop esi
// 0048dcdf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048dce3  64890d00000000       mov dword ptr fs:[0], ecx
// 0048dcea  83c410               add esp, 0x10
// 0048dced  c3                   ret 
// 0048dcee  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048dcf2  33c0                 xor eax, eax
// 0048dcf4  5e                   pop esi
// 0048dcf5  64890d00000000       mov dword ptr fs:[0], ecx
// 0048dcfc  83c410               add esp, 0x10
// 0048dcff  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
