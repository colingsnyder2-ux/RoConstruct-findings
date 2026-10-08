// roc 2008-06 00577c10  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577c10
//
// 00577c10  6aff                 push -1
// 00577c12  683bf47b00           push 0x7bf43b
// 00577c17  64a100000000         mov eax, dword ptr fs:[0]
// 00577c1d  50                   push eax
// 00577c1e  64892500000000       mov dword ptr fs:[0], esp
// 00577c25  51                   push ecx
// 00577c26  56                   push esi
// 00577c27  6a28                 push 0x28
// 00577c29  8bf1                 mov esi, ecx
// 00577c2b  e8f08c1200           call 0x6a0920
// 00577c30  83c404               add esp, 4
// 00577c33  89442404             mov dword ptr [esp + 4], eax
// 00577c37  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00577c3f  85c0                 test eax, eax
// 00577c41  741b                 je 0x577c5e
// 00577c43  83c608               add esi, 8
// 00577c46  56                   push esi
// 00577c47  8bc8                 mov ecx, eax
// 00577c49  e852ffffff           call 0x577ba0
// 00577c4e  5e                   pop esi
// 00577c4f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00577c53  64890d00000000       mov dword ptr fs:[0], ecx
// 00577c5a  83c410               add esp, 0x10
// 00577c5d  c3                   ret 
// 00577c5e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577c62  33c0                 xor eax, eax
// 00577c64  5e                   pop esi
// 00577c65  64890d00000000       mov dword ptr fs:[0], ecx
// 00577c6c  83c410               add esp, 0x10
// 00577c6f  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
