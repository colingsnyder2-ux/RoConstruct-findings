// roc 2010-06 005e8190  unit: RBX::ModelInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e8190
//
// 005e8190  56                   push esi
// 005e8191  8b742408             mov esi, dword ptr [esp + 8]
// 005e8195  6a00                 push 0
// 005e8197  68c0c8b700           push 0xb7c8c0
// 005e819c  68408eb700           push 0xb78e40
// 005e81a1  6a00                 push 0
// 005e81a3  56                   push esi
// 005e81a4  e8410a1c00           call 0x7a8bea
// 005e81a9  83c414               add esp, 0x14
// 005e81ac  85c0                 test eax, eax
// 005e81ae  7408                 je 0x5e81b8
// 005e81b0  8bc8                 mov ecx, eax
// 005e81b2  5e                   pop esi
// 005e81b3  e918f50400           jmp 0x6376d0
// 005e81b8  6a00                 push 0
// 005e81ba  687846b800           push 0xb84678
// 005e81bf  68408eb700           push 0xb78e40
// 005e81c4  6a00                 push 0
// 005e81c6  56                   push esi
// 005e81c7  e81e0a1c00           call 0x7a8bea
// 005e81cc  83c414               add esp, 0x14
// 005e81cf  85c0                 test eax, eax
// 005e81d1  740c                 je 0x5e81df
// 005e81d3  6890815e00           push 0x5e8190
// 005e81d8  8bc8                 mov ecx, eax
// 005e81da  e8710ae8ff           call 0x468c50
// 005e81df  5e                   pop esi
// 005e81e0  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJ@RBX@@YAXPAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
