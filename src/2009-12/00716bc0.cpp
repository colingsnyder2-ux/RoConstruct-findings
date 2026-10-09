// roc 2009-12 00716bc0  unit: RBX::VJointInstance::?$NonFactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00716bc0
//
// 00716bc0  8b442404             mov eax, dword ptr [esp + 4]
// 00716bc4  56                   push esi
// 00716bc5  50                   push eax
// 00716bc6  6a00                 push 0
// 00716bc8  8bf1                 mov esi, ecx
// 00716bca  e851fcffff           call 0x716820
// 00716bcf  68b456b900           push 0xb956b4
// 00716bd4  8bce                 mov ecx, esi
// 00716bd6  e8a554cfff           call 0x40c080
// 00716bdb  5e                   pop esi
// 00716bdc  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart0@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
