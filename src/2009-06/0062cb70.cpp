// roc 2009-06 0062cb70  unit: RBX::ArrowTool  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062cb70
//
// 0062cb70  56                   push esi
// 0062cb71  8b742408             mov esi, dword ptr [esp + 8]
// 0062cb75  6a00                 push 0
// 0062cb77  6850f99d00           push 0x9df950
// 0062cb7c  6840be9d00           push 0x9dbe40
// 0062cb81  6a00                 push 0
// 0062cb83  56                   push esi
// 0062cb84  e8f1d00e00           call 0x719c7a
// 0062cb89  83c414               add esp, 0x14
// 0062cb8c  85c0                 test eax, eax
// 0062cb8e  7408                 je 0x62cb98
// 0062cb90  8bc8                 mov ecx, eax
// 0062cb92  5e                   pop esi
// 0062cb93  e9f8f60200           jmp 0x65c290
// 0062cb98  6870cb6200           push 0x62cb70
// 0062cb9d  8bce                 mov ecx, esi
// 0062cb9f  e8fcf6e2ff           call 0x45c2a0
// 0062cba4  5e                   pop esi
// 0062cba5  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper@$00@RBX@@YAXPAVInstance@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
