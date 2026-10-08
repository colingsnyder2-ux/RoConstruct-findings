// roc 2009-06 0067c3e0  unit: RBX::VJointInstance::?$NonFactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067c3e0
//
// 0067c3e0  8b442404             mov eax, dword ptr [esp + 4]
// 0067c3e4  56                   push esi
// 0067c3e5  50                   push eax
// 0067c3e6  6a00                 push 0
// 0067c3e8  8bf1                 mov esi, ecx
// 0067c3ea  e841fcffff           call 0x67c030
// 0067c3ef  6864e4a400           push 0xa4e464
// 0067c3f4  8bce                 mov ecx, esi
// 0067c3f6  e8d5fed8ff           call 0x40c2d0
// 0067c3fb  5e                   pop esi
// 0067c3fc  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart0@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
