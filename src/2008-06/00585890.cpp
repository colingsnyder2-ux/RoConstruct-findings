// roc 2008-06 00585890  unit: RBX::VModelInstance::?$FactoryProduct  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585890
//
// 00585890  6aff                 push -1
// 00585892  68082d7d00           push 0x7d2d08
// 00585897  64a100000000         mov eax, dword ptr fs:[0]
// 0058589d  50                   push eax
// 0058589e  64892500000000       mov dword ptr fs:[0], esp
// 005858a5  51                   push ecx
// 005858a6  8b442424             mov eax, dword ptr [esp + 0x24]
// 005858aa  56                   push esi
// 005858ab  8bf1                 mov esi, ecx
// 005858ad  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005858b1  50                   push eax
// 005858b2  51                   push ecx
// 005858b3  8974240c             mov dword ptr [esp + 0xc], esi
// 005858b7  e844f8ffff           call 0x585100
// 005858bc  50                   push eax
// 005858bd  8bce                 mov ecx, esi
// 005858bf  e8ccfe0000           call 0x595790
// 005858c4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005858c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005858cc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005858d0  895638               mov dword ptr [esi + 0x38], edx
// 005858d3  89463c               mov dword ptr [esi + 0x3c], eax
// 005858d6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005858de  c706ec0f8300         mov dword ptr [esi], 0x830fec
// 005858e4  894e40               mov dword ptr [esi + 0x40], ecx
// 005858e7  e864f10000           call 0x594a50
// 005858ec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005858f0  894614               mov dword ptr [esi + 0x14], eax
// 005858f3  8bc6                 mov eax, esi
// 005858f5  5e                   pop esi
// 005858f6  64890d00000000       mov dword ptr fs:[0], ecx
// 005858fd  83c410               add esp, 0x10
// 00585900  c21400               ret 0x14
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8ModelInstance@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
