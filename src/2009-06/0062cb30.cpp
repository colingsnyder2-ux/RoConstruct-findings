// roc 2009-06 0062cb30  unit: RBX::ArrowTool  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062cb30
//
// 0062cb30  56                   push esi
// 0062cb31  8b742408             mov esi, dword ptr [esp + 8]
// 0062cb35  6a00                 push 0
// 0062cb37  6850f99d00           push 0x9df950
// 0062cb3c  6840be9d00           push 0x9dbe40
// 0062cb41  6a00                 push 0
// 0062cb43  56                   push esi
// 0062cb44  e831d10e00           call 0x719c7a
// 0062cb49  83c414               add esp, 0x14
// 0062cb4c  85c0                 test eax, eax
// 0062cb4e  7408                 je 0x62cb58
// 0062cb50  8bc8                 mov ecx, eax
// 0062cb52  5e                   pop esi
// 0062cb53  e958f70200           jmp 0x65c2b0
// 0062cb58  6830cb6200           push 0x62cb30
// 0062cb5d  8bce                 mov ecx, esi
// 0062cb5f  e83cf7e2ff           call 0x45c2a0
// 0062cb64  5e                   pop esi
// 0062cb65  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$wrapper@$00@RBX@@YAXPAVInstance@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
