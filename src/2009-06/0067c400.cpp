// roc 2009-06 0067c400  unit: RBX::VJointInstance::?$NonFactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067c400
//
// 0067c400  8b442404             mov eax, dword ptr [esp + 4]
// 0067c404  56                   push esi
// 0067c405  50                   push eax
// 0067c406  6a01                 push 1
// 0067c408  8bf1                 mov esi, ecx
// 0067c40a  e821fcffff           call 0x67c030
// 0067c40f  683ce4a400           push 0xa4e43c
// 0067c414  8bce                 mov ecx, esi
// 0067c416  e8b5fed8ff           call 0x40c2d0
// 0067c41b  5e                   pop esi
// 0067c41c  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart1@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
