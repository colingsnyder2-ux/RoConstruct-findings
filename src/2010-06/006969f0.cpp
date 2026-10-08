// roc 2010-06 006969f0  unit: RBX::VJointInstance::?$NonFactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006969f0
//
// 006969f0  8b442404             mov eax, dword ptr [esp + 4]
// 006969f4  56                   push esi
// 006969f5  50                   push eax
// 006969f6  6a01                 push 1
// 006969f8  8bf1                 mov esi, ecx
// 006969fa  e8f1fbffff           call 0x6965f0
// 006969ff  68e4e6c100           push 0xc1e6e4
// 00696a04  8bce                 mov ecx, esi
// 00696a06  e8655ad7ff           call 0x40c470
// 00696a0b  5e                   pop esi
// 00696a0c  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart1@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
