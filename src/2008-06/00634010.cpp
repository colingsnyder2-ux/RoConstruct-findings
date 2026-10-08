// roc 2008-06 00634010  unit: G3D::$$A6AXVVector3::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634010
//
// 00634010  6aff                 push -1
// 00634012  683bf47b00           push 0x7bf43b
// 00634017  64a100000000         mov eax, dword ptr fs:[0]
// 0063401d  50                   push eax
// 0063401e  64892500000000       mov dword ptr fs:[0], esp
// 00634025  51                   push ecx
// 00634026  56                   push esi
// 00634027  6a28                 push 0x28
// 00634029  8bf1                 mov esi, ecx
// 0063402b  e8f0c80600           call 0x6a0920
// 00634030  83c404               add esp, 4
// 00634033  89442404             mov dword ptr [esp + 4], eax
// 00634037  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063403f  85c0                 test eax, eax
// 00634041  741b                 je 0x63405e
// 00634043  83c608               add esi, 8
// 00634046  56                   push esi
// 00634047  8bc8                 mov ecx, eax
// 00634049  e852ffffff           call 0x633fa0
// 0063404e  5e                   pop esi
// 0063404f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634053  64890d00000000       mov dword ptr fs:[0], ecx
// 0063405a  83c410               add esp, 0x10
// 0063405d  c3                   ret 
// 0063405e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00634062  33c0                 xor eax, eax
// 00634064  5e                   pop esi
// 00634065  64890d00000000       mov dword ptr fs:[0], ecx
// 0063406c  83c410               add esp, 0x10
// 0063406f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
