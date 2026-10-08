// roc 2011-06 006d5cb0  unit: RBX::VMotor6D::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d5cb0
//
// 006d5cb0  8b442404             mov eax, dword ptr [esp + 4]
// 006d5cb4  56                   push esi
// 006d5cb5  50                   push eax
// 006d5cb6  6a00                 push 0
// 006d5cb8  8bf1                 mov esi, ecx
// 006d5cba  e8d1e4ffff           call 0x6d4190
// 006d5cbf  68cc16cd00           push 0xcd16cc
// 006d5cc4  8bce                 mov ecx, esi
// 006d5cc6  e895c2d3ff           call 0x411f60
// 006d5ccb  5e                   pop esi
// 006d5ccc  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart0@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
