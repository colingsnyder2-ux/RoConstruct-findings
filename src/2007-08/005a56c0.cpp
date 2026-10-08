// roc 2007-08 005a56c0  unit: RBX::Humanoid  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a56c0
//
// 005a56c0  56                   push esi
// 005a56c1  8b742408             mov esi, dword ptr [esp + 8]
// 005a56c5  6a00                 push 0
// 005a56c7  68284a8800           push 0x884a28
// 005a56cc  684c1f8800           push 0x881f4c
// 005a56d1  6a00                 push 0
// 005a56d3  56                   push esi
// 005a56d4  e85db60800           call 0x630d36
// 005a56d9  83c414               add esp, 0x14
// 005a56dc  85c0                 test eax, eax
// 005a56de  750e                 jne 0x5a56ee
// 005a56e0  68c0565a00           push 0x5a56c0
// 005a56e5  8bce                 mov ecx, esi
// 005a56e7  e85428eeff           call 0x487f40
// 005a56ec  5e                   pop esi
// 005a56ed  c3                   ret 
// 005a56ee  8bc8                 mov ecx, eax
// 005a56f0  5e                   pop esi
// 005a56f1  e96ae6fcff           jmp 0x573d60
// library rbxgs/humanoid\Humanoid.cpp (function ?breakJoints@RBX@@YAXPAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
