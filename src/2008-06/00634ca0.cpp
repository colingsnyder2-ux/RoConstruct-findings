// roc 2008-06 00634ca0  unit: RBX::$$A6AXVBrickColor::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634ca0
//
// 00634ca0  6aff                 push -1
// 00634ca2  683bf47b00           push 0x7bf43b
// 00634ca7  64a100000000         mov eax, dword ptr fs:[0]
// 00634cad  50                   push eax
// 00634cae  64892500000000       mov dword ptr fs:[0], esp
// 00634cb5  51                   push ecx
// 00634cb6  56                   push esi
// 00634cb7  6a28                 push 0x28
// 00634cb9  8bf1                 mov esi, ecx
// 00634cbb  e860bc0600           call 0x6a0920
// 00634cc0  83c404               add esp, 4
// 00634cc3  89442404             mov dword ptr [esp + 4], eax
// 00634cc7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00634ccf  85c0                 test eax, eax
// 00634cd1  741b                 je 0x634cee
// 00634cd3  83c608               add esi, 8
// 00634cd6  56                   push esi
// 00634cd7  8bc8                 mov ecx, eax
// 00634cd9  e852ffffff           call 0x634c30
// 00634cde  5e                   pop esi
// 00634cdf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634ce3  64890d00000000       mov dword ptr fs:[0], ecx
// 00634cea  83c410               add esp, 0x10
// 00634ced  c3                   ret 
// 00634cee  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00634cf2  33c0                 xor eax, eax
// 00634cf4  5e                   pop esi
// 00634cf5  64890d00000000       mov dword ptr fs:[0], ecx
// 00634cfc  83c410               add esp, 0x10
// 00634cff  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
