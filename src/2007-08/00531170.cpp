// roc 2007-08 00531170  unit: RBX::ModelInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00531170
//
// 00531170  56                   push esi
// 00531171  8b742408             mov esi, dword ptr [esp + 8]
// 00531175  6a00                 push 0
// 00531177  68284a8800           push 0x884a28
// 0053117c  684c1f8800           push 0x881f4c
// 00531181  6a00                 push 0
// 00531183  56                   push esi
// 00531184  e8adfb0f00           call 0x630d36
// 00531189  83c414               add esp, 0x14
// 0053118c  85c0                 test eax, eax
// 0053118e  7408                 je 0x531198
// 00531190  8bc8                 mov ecx, eax
// 00531192  5e                   pop esi
// 00531193  e9e82b0400           jmp 0x573d80
// 00531198  6a00                 push 0
// 0053119a  68b8c68800           push 0x88c6b8
// 0053119f  684c1f8800           push 0x881f4c
// 005311a4  6a00                 push 0
// 005311a6  56                   push esi
// 005311a7  e88afb0f00           call 0x630d36
// 005311ac  83c414               add esp, 0x14
// 005311af  85c0                 test eax, eax
// 005311b1  740c                 je 0x5311bf
// 005311b3  6870115300           push 0x531170
// 005311b8  8bc8                 mov ecx, eax
// 005311ba  e8816df5ff           call 0x487f40
// 005311bf  5e                   pop esi
// 005311c0  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJ@RBX@@YAXPAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
