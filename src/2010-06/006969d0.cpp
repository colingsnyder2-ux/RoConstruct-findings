// roc 2010-06 006969d0  unit: RBX::VJointInstance::?$NonFactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006969d0
//
// 006969d0  8b442404             mov eax, dword ptr [esp + 4]
// 006969d4  56                   push esi
// 006969d5  50                   push eax
// 006969d6  6a00                 push 0
// 006969d8  8bf1                 mov esi, ecx
// 006969da  e811fcffff           call 0x6965f0
// 006969df  6808e7c100           push 0xc1e708
// 006969e4  8bce                 mov ecx, esi
// 006969e6  e8855ad7ff           call 0x40c470
// 006969eb  5e                   pop esi
// 006969ec  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart0@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
