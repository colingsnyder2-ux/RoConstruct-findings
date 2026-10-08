// roc 2007-08 005311e0  unit: RBX::ModelInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005311e0
//
// 005311e0  56                   push esi
// 005311e1  8b742408             mov esi, dword ptr [esp + 8]
// 005311e5  6a00                 push 0
// 005311e7  68284a8800           push 0x884a28
// 005311ec  684c1f8800           push 0x881f4c
// 005311f1  6a00                 push 0
// 005311f3  56                   push esi
// 005311f4  e83dfb0f00           call 0x630d36
// 005311f9  83c414               add esp, 0x14
// 005311fc  85c0                 test eax, eax
// 005311fe  7408                 je 0x531208
// 00531200  8bc8                 mov ecx, eax
// 00531202  5e                   pop esi
// 00531203  e9582b0400           jmp 0x573d60
// 00531208  6a00                 push 0
// 0053120a  68b8c68800           push 0x88c6b8
// 0053120f  684c1f8800           push 0x881f4c
// 00531214  6a00                 push 0
// 00531216  56                   push esi
// 00531217  e81afb0f00           call 0x630d36
// 0053121c  83c414               add esp, 0x14
// 0053121f  85c0                 test eax, eax
// 00531221  740c                 je 0x53122f
// 00531223  68e0115300           push 0x5311e0
// 00531228  8bc8                 mov ecx, eax
// 0053122a  e8116df5ff           call 0x487f40
// 0053122f  5e                   pop esi
// 00531230  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJ@RBX@@YAXPAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
