// roc 2008-06 006348a0  unit: G3D::$$A6AXVColor3::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006348a0
//
// 006348a0  6aff                 push -1
// 006348a2  683bf47b00           push 0x7bf43b
// 006348a7  64a100000000         mov eax, dword ptr fs:[0]
// 006348ad  50                   push eax
// 006348ae  64892500000000       mov dword ptr fs:[0], esp
// 006348b5  51                   push ecx
// 006348b6  56                   push esi
// 006348b7  6a28                 push 0x28
// 006348b9  8bf1                 mov esi, ecx
// 006348bb  e860c00600           call 0x6a0920
// 006348c0  83c404               add esp, 4
// 006348c3  89442404             mov dword ptr [esp + 4], eax
// 006348c7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006348cf  85c0                 test eax, eax
// 006348d1  741b                 je 0x6348ee
// 006348d3  83c608               add esi, 8
// 006348d6  56                   push esi
// 006348d7  8bc8                 mov ecx, eax
// 006348d9  e852ffffff           call 0x634830
// 006348de  5e                   pop esi
// 006348df  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006348e3  64890d00000000       mov dword ptr fs:[0], ecx
// 006348ea  83c410               add esp, 0x10
// 006348ed  c3                   ret 
// 006348ee  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006348f2  33c0                 xor eax, eax
// 006348f4  5e                   pop esi
// 006348f5  64890d00000000       mov dword ptr fs:[0], ecx
// 006348fc  83c410               add esp, 0x10
// 006348ff  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
