// roc 2008-06 005e4450  unit: RBX::VMotor::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4450
//
// 005e4450  8b442404             mov eax, dword ptr [esp + 4]
// 005e4454  56                   push esi
// 005e4455  50                   push eax
// 005e4456  6a00                 push 0
// 005e4458  8bf1                 mov esi, ecx
// 005e445a  e871e8ffff           call 0x5e2cd0
// 005e445f  681cab9700           push 0x97ab1c
// 005e4464  8bce                 mov ecx, esi
// 005e4466  e89596e2ff           call 0x40db00
// 005e446b  5e                   pop esi
// 005e446c  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart0@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
