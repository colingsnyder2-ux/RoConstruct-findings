// roc 2009-12 00716be0  unit: RBX::VJointInstance::?$NonFactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00716be0
//
// 00716be0  8b442404             mov eax, dword ptr [esp + 4]
// 00716be4  56                   push esi
// 00716be5  50                   push eax
// 00716be6  6a01                 push 1
// 00716be8  8bf1                 mov esi, ecx
// 00716bea  e831fcffff           call 0x716820
// 00716bef  689056b900           push 0xb95690
// 00716bf4  8bce                 mov ecx, esi
// 00716bf6  e88554cfff           call 0x40c080
// 00716bfb  5e                   pop esi
// 00716bfc  c20400               ret 4
// library rbxgs/v8datamodel\JointInstance.cpp (function ?setPart1@AutoJoint@RBX@@QAEXPAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/JointInstance.cpp
