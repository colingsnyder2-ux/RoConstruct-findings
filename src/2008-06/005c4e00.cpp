// roc 2008-06 005c4e00  unit: RBX::VVisit::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c4e00
//
// 005c4e00  6aff                 push -1
// 005c4e02  6843797c00           push 0x7c7943
// 005c4e07  64a100000000         mov eax, dword ptr fs:[0]
// 005c4e0d  50                   push eax
// 005c4e0e  64892500000000       mov dword ptr fs:[0], esp
// 005c4e15  51                   push ecx
// 005c4e16  8b442424             mov eax, dword ptr [esp + 0x24]
// 005c4e1a  53                   push ebx
// 005c4e1b  56                   push esi
// 005c4e1c  57                   push edi
// 005c4e1d  8bf1                 mov esi, ecx
// 005c4e1f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005c4e23  50                   push eax
// 005c4e24  51                   push ecx
// 005c4e25  89742414             mov dword ptr [esp + 0x14], esi
// 005c4e29  e892b7ffff           call 0x5c05c0
// 005c4e2e  50                   push eax
// 005c4e2f  8bce                 mov ecx, esi
// 005c4e31  e85a09fdff           call 0x595790
// 005c4e36  8b542420             mov edx, dword ptr [esp + 0x20]
// 005c4e3a  8b442424             mov eax, dword ptr [esp + 0x24]
// 005c4e3e  8d7e40               lea edi, [esi + 0x40]
// 005c4e41  8bcf                 mov ecx, edi
// 005c4e43  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c4e4b  c706d08e8300         mov dword ptr [esi], 0x838ed0
// 005c4e51  895638               mov dword ptr [esi + 0x38], edx
// 005c4e54  89463c               mov dword ptr [esi + 0x3c], eax
// 005c4e57  e864fcfcff           call 0x594ac0
// 005c4e5c  c644241801           mov byte ptr [esp + 0x18], 1
// 005c4e61  8d5e14               lea ebx, [esi + 0x14]
// 005c4e64  e8e7fbfcff           call 0x594a50
// 005c4e69  57                   push edi
// 005c4e6a  8903                 mov dword ptr [ebx], eax
// 005c4e6c  e87f7ffaff           call 0x56cdf0
// 005c4e71  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005c4e75  50                   push eax
// 005c4e76  6aff                 push -1
// 005c4e78  51                   push ecx
// 005c4e79  e812f1f8ff           call 0x553f90
// 005c4e7e  83c408               add esp, 8
// 005c4e81  50                   push eax
// 005c4e82  8bcb                 mov ecx, ebx
// 005c4e84  e8b7fcfcff           call 0x594b40
// 005c4e89  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c4e8d  5f                   pop edi
// 005c4e8e  8bc6                 mov eax, esi
// 005c4e90  5e                   pop esi
// 005c4e91  5b                   pop ebx
// 005c4e92  64890d00000000       mov dword ptr fs:[0], ecx
// 005c4e99  83c410               add esp, 0x10
// 005c4e9c  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
