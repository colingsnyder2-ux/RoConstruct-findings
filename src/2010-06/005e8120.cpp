// roc 2010-06 005e8120  unit: RBX::ModelInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e8120
//
// 005e8120  56                   push esi
// 005e8121  8b742408             mov esi, dword ptr [esp + 8]
// 005e8125  6a00                 push 0
// 005e8127  68c0c8b700           push 0xb7c8c0
// 005e812c  68408eb700           push 0xb78e40
// 005e8131  6a00                 push 0
// 005e8133  56                   push esi
// 005e8134  e8b10a1c00           call 0x7a8bea
// 005e8139  83c414               add esp, 0x14
// 005e813c  85c0                 test eax, eax
// 005e813e  7408                 je 0x5e8148
// 005e8140  8bc8                 mov ecx, eax
// 005e8142  5e                   pop esi
// 005e8143  e9a8f50400           jmp 0x6376f0
// 005e8148  6a00                 push 0
// 005e814a  687846b800           push 0xb84678
// 005e814f  68408eb700           push 0xb78e40
// 005e8154  6a00                 push 0
// 005e8156  56                   push esi
// 005e8157  e88e0a1c00           call 0x7a8bea
// 005e815c  83c414               add esp, 0x14
// 005e815f  85c0                 test eax, eax
// 005e8161  740c                 je 0x5e816f
// 005e8163  6820815e00           push 0x5e8120
// 005e8168  8bc8                 mov ecx, eax
// 005e816a  e8e10ae8ff           call 0x468c50
// 005e816f  5e                   pop esi
// 005e8170  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJ@RBX@@YAXPAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
