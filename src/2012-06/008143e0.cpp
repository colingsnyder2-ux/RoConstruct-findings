// roc 2012-06 008143e0  unit: RBX::VJointInstance::?$NonFactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008143e0
//
// 008143e0  8b442404             mov eax, dword ptr [esp + 4]
// 008143e4  56                   push esi
// 008143e5  50                   push eax
// 008143e6  6a00                 push 0
// 008143e8  8bf1                 mov esi, ecx
// 008143ea  e871e5ffff           call 0x812960
// 008143ef  68e803e500           push 0xe503e8
// 008143f4  8bce                 mov ecx, esi
// 008143f6  e8a509c0ff           call 0x414da0
// 008143fb  5e                   pop esi
// 008143fc  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart0@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
