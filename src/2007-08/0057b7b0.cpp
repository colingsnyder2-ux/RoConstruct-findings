// roc 2007-08 0057b7b0  unit: RBX::RootInstance  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b7b0
//
// 0057b7b0  56                   push esi
// 0057b7b1  8b742408             mov esi, dword ptr [esp + 8]
// 0057b7b5  6a00                 push 0
// 0057b7b7  68284a8800           push 0x884a28
// 0057b7bc  684c1f8800           push 0x881f4c
// 0057b7c1  6a00                 push 0
// 0057b7c3  56                   push esi
// 0057b7c4  e86d550b00           call 0x630d36
// 0057b7c9  83c414               add esp, 0x14
// 0057b7cc  85c0                 test eax, eax
// 0057b7ce  7408                 je 0x57b7d8
// 0057b7d0  8bc8                 mov ecx, eax
// 0057b7d2  5e                   pop esi
// 0057b7d3  e9a885ffff           jmp 0x573d80
// 0057b7d8  68b0b75700           push 0x57b7b0
// 0057b7dd  8bce                 mov ecx, esi
// 0057b7df  e85cc7f0ff           call 0x487f40
// 0057b7e4  5e                   pop esi
// 0057b7e5  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper@$00@RBX@@YAXPAVInstance@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
