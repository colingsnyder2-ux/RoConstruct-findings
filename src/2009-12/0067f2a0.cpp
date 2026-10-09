// roc 2009-12 0067f2a0  unit: RBX::ModelInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067f2a0
//
// 0067f2a0  56                   push esi
// 0067f2a1  8b742408             mov esi, dword ptr [esp + 8]
// 0067f2a5  6a00                 push 0
// 0067f2a7  68583ab000           push 0xb03a58
// 0067f2ac  6840feaf00           push 0xaffe40
// 0067f2b1  6a00                 push 0
// 0067f2b3  56                   push esi
// 0067f2b4  e8f1571700           call 0x7f4aaa
// 0067f2b9  83c414               add esp, 0x14
// 0067f2bc  85c0                 test eax, eax
// 0067f2be  7408                 je 0x67f2c8
// 0067f2c0  8bc8                 mov ecx, eax
// 0067f2c2  5e                   pop esi
// 0067f2c3  e988c70400           jmp 0x6cba50
// 0067f2c8  6a00                 push 0
// 0067f2ca  6840abb000           push 0xb0ab40
// 0067f2cf  6840feaf00           push 0xaffe40
// 0067f2d4  6a00                 push 0
// 0067f2d6  56                   push esi
// 0067f2d7  e8ce571700           call 0x7f4aaa
// 0067f2dc  83c414               add esp, 0x14
// 0067f2df  85c0                 test eax, eax
// 0067f2e1  740c                 je 0x67f2ef
// 0067f2e3  68a0f26700           push 0x67f2a0
// 0067f2e8  8bc8                 mov ecx, eax
// 0067f2ea  e8814edeff           call 0x464170
// 0067f2ef  5e                   pop esi
// 0067f2f0  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJ@RBX@@YAXPAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
