// roc 2009-12 0067f230  unit: RBX::ModelInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067f230
//
// 0067f230  56                   push esi
// 0067f231  8b742408             mov esi, dword ptr [esp + 8]
// 0067f235  6a00                 push 0
// 0067f237  68583ab000           push 0xb03a58
// 0067f23c  6840feaf00           push 0xaffe40
// 0067f241  6a00                 push 0
// 0067f243  56                   push esi
// 0067f244  e861581700           call 0x7f4aaa
// 0067f249  83c414               add esp, 0x14
// 0067f24c  85c0                 test eax, eax
// 0067f24e  7408                 je 0x67f258
// 0067f250  8bc8                 mov ecx, eax
// 0067f252  5e                   pop esi
// 0067f253  e918c80400           jmp 0x6cba70
// 0067f258  6a00                 push 0
// 0067f25a  6840abb000           push 0xb0ab40
// 0067f25f  6840feaf00           push 0xaffe40
// 0067f264  6a00                 push 0
// 0067f266  56                   push esi
// 0067f267  e83e581700           call 0x7f4aaa
// 0067f26c  83c414               add esp, 0x14
// 0067f26f  85c0                 test eax, eax
// 0067f271  740c                 je 0x67f27f
// 0067f273  6830f26700           push 0x67f230
// 0067f278  8bc8                 mov ecx, eax
// 0067f27a  e8f14edeff           call 0x464170
// 0067f27f  5e                   pop esi
// 0067f280  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJ@RBX@@YAXPAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
