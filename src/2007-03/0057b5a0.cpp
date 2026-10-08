// roc 2007-03 0057b5a0  unit: seg_00570000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057b5a0
//
// 0057b5a0  56                   push esi
// 0057b5a1  8b742408             mov esi, dword ptr [esp + 8]
// 0057b5a5  6a00                 push 0
// 0057b5a7  68e03b8800           push 0x883be0
// 0057b5ac  6864108800           push 0x881064
// 0057b5b1  6a00                 push 0
// 0057b5b3  56                   push esi
// 0057b5b4  e80d3c0a00           call 0x61f1c6
// 0057b5b9  83c414               add esp, 0x14
// 0057b5bc  85c0                 test eax, eax
// 0057b5be  7408                 je 0x57b5c8
// 0057b5c0  8bc8                 mov ecx, eax
// 0057b5c2  5e                   pop esi
// 0057b5c3  e9a871ffff           jmp 0x572770
// 0057b5c8  68a0b55700           push 0x57b5a0
// 0057b5cd  8bce                 mov ecx, esi
// 0057b5cf  e87ca8f0ff           call 0x485e50
// 0057b5d4  5e                   pop esi
// 0057b5d5  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper@$00@RBX@@YAXPAVInstance@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
