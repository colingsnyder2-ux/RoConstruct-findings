// roc 2011-06 006d5cd0  unit: RBX::VMotor6D::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d5cd0
//
// 006d5cd0  8b442404             mov eax, dword ptr [esp + 4]
// 006d5cd4  56                   push esi
// 006d5cd5  50                   push eax
// 006d5cd6  6a01                 push 1
// 006d5cd8  8bf1                 mov esi, ecx
// 006d5cda  e8b1e4ffff           call 0x6d4190
// 006d5cdf  68a816cd00           push 0xcd16a8
// 006d5ce4  8bce                 mov ecx, esi
// 006d5ce6  e875c2d3ff           call 0x411f60
// 006d5ceb  5e                   pop esi
// 006d5cec  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart1@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
