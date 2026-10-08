// roc 2007-08 0057b7f0  unit: RBX::RootInstance  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b7f0
//
// 0057b7f0  56                   push esi
// 0057b7f1  8b742408             mov esi, dword ptr [esp + 8]
// 0057b7f5  6a00                 push 0
// 0057b7f7  68284a8800           push 0x884a28
// 0057b7fc  684c1f8800           push 0x881f4c
// 0057b801  6a00                 push 0
// 0057b803  56                   push esi
// 0057b804  e82d550b00           call 0x630d36
// 0057b809  83c414               add esp, 0x14
// 0057b80c  85c0                 test eax, eax
// 0057b80e  7408                 je 0x57b818
// 0057b810  8bc8                 mov ecx, eax
// 0057b812  5e                   pop esi
// 0057b813  e94885ffff           jmp 0x573d60
// 0057b818  68f0b75700           push 0x57b7f0
// 0057b81d  8bce                 mov ecx, esi
// 0057b81f  e81cc7f0ff           call 0x487f40
// 0057b824  5e                   pop esi
// 0057b825  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper@$00@RBX@@YAXPAVInstance@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
