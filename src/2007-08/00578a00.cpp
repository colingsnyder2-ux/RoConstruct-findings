// roc 2007-08 00578a00  unit: RBX::VPartInstance::?$FactoryProduct  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00578a00
//
// 00578a00  6aff                 push -1
// 00578a02  6888587500           push 0x755888
// 00578a07  64a100000000         mov eax, dword ptr fs:[0]
// 00578a0d  50                   push eax
// 00578a0e  64892500000000       mov dword ptr fs:[0], esp
// 00578a15  51                   push ecx
// 00578a16  8b442424             mov eax, dword ptr [esp + 0x24]
// 00578a1a  56                   push esi
// 00578a1b  8bf1                 mov esi, ecx
// 00578a1d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00578a21  50                   push eax
// 00578a22  51                   push ecx
// 00578a23  8974240c             mov dword ptr [esp + 0xc], esi
// 00578a27  e8d4e6ffff           call 0x577100
// 00578a2c  50                   push eax
// 00578a2d  8bce                 mov ecx, esi
// 00578a2f  e87c83ffff           call 0x570db0
// 00578a34  8b542418             mov edx, dword ptr [esp + 0x18]
// 00578a38  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00578a3c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00578a40  895628               mov dword ptr [esi + 0x28], edx
// 00578a43  89462c               mov dword ptr [esi + 0x2c], eax
// 00578a46  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00578a4e  c70694ae7a00         mov dword ptr [esi], 0x7aae94
// 00578a54  894e30               mov dword ptr [esi + 0x30], ecx
// 00578a57  e8f448ffff           call 0x56d350
// 00578a5c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00578a60  894614               mov dword ptr [esi + 0x14], eax
// 00578a63  8bc6                 mov eax, esi
// 00578a65  5e                   pop esi
// 00578a66  64890d00000000       mov dword ptr fs:[0], ecx
// 00578a6d  83c410               add esp, 0x10
// 00578a70  c21400               ret 0x14
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8ModelInstance@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
