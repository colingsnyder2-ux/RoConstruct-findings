// roc 2008-06 0042b080  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b080
//
// 0042b080  6aff                 push -1
// 0042b082  683bf47b00           push 0x7bf43b
// 0042b087  64a100000000         mov eax, dword ptr fs:[0]
// 0042b08d  50                   push eax
// 0042b08e  64892500000000       mov dword ptr fs:[0], esp
// 0042b095  51                   push ecx
// 0042b096  56                   push esi
// 0042b097  6a28                 push 0x28
// 0042b099  8bf1                 mov esi, ecx
// 0042b09b  e880582700           call 0x6a0920
// 0042b0a0  83c404               add esp, 4
// 0042b0a3  89442404             mov dword ptr [esp + 4], eax
// 0042b0a7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0042b0af  85c0                 test eax, eax
// 0042b0b1  741b                 je 0x42b0ce
// 0042b0b3  83c608               add esi, 8
// 0042b0b6  56                   push esi
// 0042b0b7  8bc8                 mov ecx, eax
// 0042b0b9  e852ffffff           call 0x42b010
// 0042b0be  5e                   pop esi
// 0042b0bf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042b0c3  64890d00000000       mov dword ptr fs:[0], ecx
// 0042b0ca  83c410               add esp, 0x10
// 0042b0cd  c3                   ret 
// 0042b0ce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042b0d2  33c0                 xor eax, eax
// 0042b0d4  5e                   pop esi
// 0042b0d5  64890d00000000       mov dword ptr fs:[0], ecx
// 0042b0dc  83c410               add esp, 0x10
// 0042b0df  c3                   ret 
// library rbxgs/v8datamodel\FlagStand.cpp (function ?clone@?$holder@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@any@boost@@UBEPAVplaceholder@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
