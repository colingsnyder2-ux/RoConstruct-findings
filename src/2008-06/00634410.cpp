// roc 2008-06 00634410  unit: G3D::$$A6AXVCoordinateFrame::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634410
//
// 00634410  6aff                 push -1
// 00634412  683bf47b00           push 0x7bf43b
// 00634417  64a100000000         mov eax, dword ptr fs:[0]
// 0063441d  50                   push eax
// 0063441e  64892500000000       mov dword ptr fs:[0], esp
// 00634425  51                   push ecx
// 00634426  56                   push esi
// 00634427  6a28                 push 0x28
// 00634429  8bf1                 mov esi, ecx
// 0063442b  e8f0c40600           call 0x6a0920
// 00634430  83c404               add esp, 4
// 00634433  89442404             mov dword ptr [esp + 4], eax
// 00634437  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063443f  85c0                 test eax, eax
// 00634441  741b                 je 0x63445e
// 00634443  83c608               add esi, 8
// 00634446  56                   push esi
// 00634447  8bc8                 mov ecx, eax
// 00634449  e852ffffff           call 0x6343a0
// 0063444e  5e                   pop esi
// 0063444f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634453  64890d00000000       mov dword ptr fs:[0], ecx
// 0063445a  83c410               add esp, 0x10
// 0063445d  c3                   ret 
// 0063445e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00634462  33c0                 xor eax, eax
// 00634464  5e                   pop esi
// 00634465  64890d00000000       mov dword ptr fs:[0], ecx
// 0063446c  83c410               add esp, 0x10
// 0063446f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
