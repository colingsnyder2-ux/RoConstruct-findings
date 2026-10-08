// roc 2008-06 0059cee0  unit: RBX::PartInstance  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059cee0
//
// 0059cee0  6aff                 push -1
// 0059cee2  68082d7d00           push 0x7d2d08
// 0059cee7  64a100000000         mov eax, dword ptr fs:[0]
// 0059ceed  50                   push eax
// 0059ceee  64892500000000       mov dword ptr fs:[0], esp
// 0059cef5  51                   push ecx
// 0059cef6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059cefa  56                   push esi
// 0059cefb  8bf1                 mov esi, ecx
// 0059cefd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059cf01  50                   push eax
// 0059cf02  51                   push ecx
// 0059cf03  8974240c             mov dword ptr [esp + 0xc], esi
// 0059cf07  e8e4f8ffff           call 0x59c7f0
// 0059cf0c  50                   push eax
// 0059cf0d  8bce                 mov ecx, esi
// 0059cf0f  e87c88ffff           call 0x595790
// 0059cf14  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059cf18  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059cf1c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059cf20  895638               mov dword ptr [esi + 0x38], edx
// 0059cf23  89463c               mov dword ptr [esi + 0x3c], eax
// 0059cf26  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059cf2e  c706582f8300         mov dword ptr [esi], 0x832f58
// 0059cf34  894e40               mov dword ptr [esi + 0x40], ecx
// 0059cf37  e8147bffff           call 0x594a50
// 0059cf3c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059cf40  894614               mov dword ptr [esi + 0x14], eax
// 0059cf43  8bc6                 mov eax, esi
// 0059cf45  5e                   pop esi
// 0059cf46  64890d00000000       mov dword ptr fs:[0], ecx
// 0059cf4d  83c410               add esp, 0x10
// 0059cf50  c21400               ret 0x14
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8ModelInstance@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
