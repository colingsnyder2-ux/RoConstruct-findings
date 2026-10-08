// roc 2012-06 00814400  unit: RBX::VJointInstance::?$NonFactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00814400
//
// 00814400  8b442404             mov eax, dword ptr [esp + 4]
// 00814404  56                   push esi
// 00814405  50                   push eax
// 00814406  6a01                 push 1
// 00814408  8bf1                 mov esi, ecx
// 0081440a  e851e5ffff           call 0x812960
// 0081440f  68b803e500           push 0xe503b8
// 00814414  8bce                 mov ecx, esi
// 00814416  e88509c0ff           call 0x414da0
// 0081441b  5e                   pop esi
// 0081441c  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart1@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
