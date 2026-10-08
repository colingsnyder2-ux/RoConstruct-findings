// roc 2009-06 00611c40  unit: RBX::ModelInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00611c40
//
// 00611c40  56                   push esi
// 00611c41  8b742408             mov esi, dword ptr [esp + 8]
// 00611c45  6a00                 push 0
// 00611c47  6850f99d00           push 0x9df950
// 00611c4c  6840be9d00           push 0x9dbe40
// 00611c51  6a00                 push 0
// 00611c53  56                   push esi
// 00611c54  e821801000           call 0x719c7a
// 00611c59  83c414               add esp, 0x14
// 00611c5c  85c0                 test eax, eax
// 00611c5e  7408                 je 0x611c68
// 00611c60  8bc8                 mov ecx, eax
// 00611c62  5e                   pop esi
// 00611c63  e948a60400           jmp 0x65c2b0
// 00611c68  6a00                 push 0
// 00611c6a  6888619e00           push 0x9e6188
// 00611c6f  6840be9d00           push 0x9dbe40
// 00611c74  6a00                 push 0
// 00611c76  56                   push esi
// 00611c77  e8fe7f1000           call 0x719c7a
// 00611c7c  83c414               add esp, 0x14
// 00611c7f  85c0                 test eax, eax
// 00611c81  740c                 je 0x611c8f
// 00611c83  68401c6100           push 0x611c40
// 00611c88  8bc8                 mov ecx, eax
// 00611c8a  e811a6e4ff           call 0x45c2a0
// 00611c8f  5e                   pop esi
// 00611c90  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJ@RBX@@YAXPAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
