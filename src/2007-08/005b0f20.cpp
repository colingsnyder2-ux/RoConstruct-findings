// roc 2007-08 005b0f20  unit: RBX::AutoJoint  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0f20
//
// 005b0f20  8b442404             mov eax, dword ptr [esp + 4]
// 005b0f24  56                   push esi
// 005b0f25  50                   push eax
// 005b0f26  6a01                 push 1
// 005b0f28  8bf1                 mov esi, ecx
// 005b0f2a  e871f3ffff           call 0x5b02a0
// 005b0f2f  68fc5d8c00           push 0x8c5dfc
// 005b0f34  8bce                 mov ecx, esi
// 005b0f36  e8d537e9ff           call 0x444710
// 005b0f3b  5e                   pop esi
// 005b0f3c  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart1@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
