// roc 2007-08 005b0f00  unit: RBX::AutoJoint  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0f00
//
// 005b0f00  8b442404             mov eax, dword ptr [esp + 4]
// 005b0f04  56                   push esi
// 005b0f05  50                   push eax
// 005b0f06  6a00                 push 0
// 005b0f08  8bf1                 mov esi, ecx
// 005b0f0a  e891f3ffff           call 0x5b02a0
// 005b0f0f  681c5e8c00           push 0x8c5e1c
// 005b0f14  8bce                 mov ecx, esi
// 005b0f16  e8f537e9ff           call 0x444710
// 005b0f1b  5e                   pop esi
// 005b0f1c  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart0@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
