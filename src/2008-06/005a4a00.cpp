// roc 2008-06 005a4a00  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a4a00
//
// 005a4a00  6aff                 push -1
// 005a4a02  68082d7d00           push 0x7d2d08
// 005a4a07  64a100000000         mov eax, dword ptr fs:[0]
// 005a4a0d  50                   push eax
// 005a4a0e  64892500000000       mov dword ptr fs:[0], esp
// 005a4a15  51                   push ecx
// 005a4a16  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a4a1a  56                   push esi
// 005a4a1b  8bf1                 mov esi, ecx
// 005a4a1d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a4a21  50                   push eax
// 005a4a22  51                   push ecx
// 005a4a23  8974240c             mov dword ptr [esp + 0xc], esi
// 005a4a27  e844f1ffff           call 0x5a3b70
// 005a4a2c  50                   push eax
// 005a4a2d  8bce                 mov ecx, esi
// 005a4a2f  e85c0dffff           call 0x595790
// 005a4a34  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a4a38  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a4a3c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a4a40  895638               mov dword ptr [esi + 0x38], edx
// 005a4a43  89463c               mov dword ptr [esi + 0x3c], eax
// 005a4a46  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a4a4e  c706243e8300         mov dword ptr [esi], 0x833e24
// 005a4a54  894e40               mov dword ptr [esi + 0x40], ecx
// 005a4a57  e8f4fffeff           call 0x594a50
// 005a4a5c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a4a60  894614               mov dword ptr [esi + 0x14], eax
// 005a4a63  8bc6                 mov eax, esi
// 005a4a65  5e                   pop esi
// 005a4a66  64890d00000000       mov dword ptr fs:[0], ecx
// 005a4a6d  83c410               add esp, 0x10
// 005a4a70  c21400               ret 0x14
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8ModelInstance@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
