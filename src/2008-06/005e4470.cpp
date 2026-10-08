// roc 2008-06 005e4470  unit: RBX::VMotor::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4470
//
// 005e4470  8b442404             mov eax, dword ptr [esp + 4]
// 005e4474  56                   push esi
// 005e4475  50                   push eax
// 005e4476  6a01                 push 1
// 005e4478  8bf1                 mov esi, ecx
// 005e447a  e851e8ffff           call 0x5e2cd0
// 005e447f  68fcaa9700           push 0x97aafc
// 005e4484  8bce                 mov ecx, esi
// 005e4486  e87596e2ff           call 0x40db00
// 005e448b  5e                   pop esi
// 005e448c  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart1@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
