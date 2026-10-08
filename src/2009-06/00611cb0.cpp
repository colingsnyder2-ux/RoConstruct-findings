// roc 2009-06 00611cb0  unit: RBX::ModelInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00611cb0
//
// 00611cb0  56                   push esi
// 00611cb1  8b742408             mov esi, dword ptr [esp + 8]
// 00611cb5  6a00                 push 0
// 00611cb7  6850f99d00           push 0x9df950
// 00611cbc  6840be9d00           push 0x9dbe40
// 00611cc1  6a00                 push 0
// 00611cc3  56                   push esi
// 00611cc4  e8b17f1000           call 0x719c7a
// 00611cc9  83c414               add esp, 0x14
// 00611ccc  85c0                 test eax, eax
// 00611cce  7408                 je 0x611cd8
// 00611cd0  8bc8                 mov ecx, eax
// 00611cd2  5e                   pop esi
// 00611cd3  e9b8a50400           jmp 0x65c290
// 00611cd8  6a00                 push 0
// 00611cda  6888619e00           push 0x9e6188
// 00611cdf  6840be9d00           push 0x9dbe40
// 00611ce4  6a00                 push 0
// 00611ce6  56                   push esi
// 00611ce7  e88e7f1000           call 0x719c7a
// 00611cec  83c414               add esp, 0x14
// 00611cef  85c0                 test eax, eax
// 00611cf1  740c                 je 0x611cff
// 00611cf3  68b01c6100           push 0x611cb0
// 00611cf8  8bc8                 mov ecx, eax
// 00611cfa  e8a1a5e4ff           call 0x45c2a0
// 00611cff  5e                   pop esi
// 00611d00  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJ@RBX@@YAXPAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
