// roc 2008-06 0062a3d0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a3d0
//
// 0062a3d0  6aff                 push -1
// 0062a3d2  683bf47b00           push 0x7bf43b
// 0062a3d7  64a100000000         mov eax, dword ptr fs:[0]
// 0062a3dd  50                   push eax
// 0062a3de  64892500000000       mov dword ptr fs:[0], esp
// 0062a3e5  51                   push ecx
// 0062a3e6  56                   push esi
// 0062a3e7  6a28                 push 0x28
// 0062a3e9  8bf1                 mov esi, ecx
// 0062a3eb  e830650700           call 0x6a0920
// 0062a3f0  83c404               add esp, 4
// 0062a3f3  89442404             mov dword ptr [esp + 4], eax
// 0062a3f7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062a3ff  85c0                 test eax, eax
// 0062a401  741b                 je 0x62a41e
// 0062a403  83c608               add esi, 8
// 0062a406  56                   push esi
// 0062a407  8bc8                 mov ecx, eax
// 0062a409  e852ffffff           call 0x62a360
// 0062a40e  5e                   pop esi
// 0062a40f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062a413  64890d00000000       mov dword ptr fs:[0], ecx
// 0062a41a  83c410               add esp, 0x10
// 0062a41d  c3                   ret 
// 0062a41e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062a422  33c0                 xor eax, eax
// 0062a424  5e                   pop esi
// 0062a425  64890d00000000       mov dword ptr fs:[0], ecx
// 0062a42c  83c410               add esp, 0x10
// 0062a42f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
