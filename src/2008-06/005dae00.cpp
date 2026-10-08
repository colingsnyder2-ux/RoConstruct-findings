// roc 2008-06 005dae00  unit: RBX::VHumanoid::?$FactoryProduct  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dae00
//
// 005dae00  6aff                 push -1
// 005dae02  68d32c7d00           push 0x7d2cd3
// 005dae07  64a100000000         mov eax, dword ptr fs:[0]
// 005dae0d  50                   push eax
// 005dae0e  64892500000000       mov dword ptr fs:[0], esp
// 005dae15  51                   push ecx
// 005dae16  8b442428             mov eax, dword ptr [esp + 0x28]
// 005dae1a  53                   push ebx
// 005dae1b  56                   push esi
// 005dae1c  57                   push edi
// 005dae1d  8bf1                 mov esi, ecx
// 005dae1f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005dae23  50                   push eax
// 005dae24  51                   push ecx
// 005dae25  89742414             mov dword ptr [esp + 0x14], esi
// 005dae29  e8325afeff           call 0x5c0860
// 005dae2e  50                   push eax
// 005dae2f  8bce                 mov ecx, esi
// 005dae31  e85aa9fbff           call 0x595790
// 005dae36  8b542420             mov edx, dword ptr [esp + 0x20]
// 005dae3a  8b442424             mov eax, dword ptr [esp + 0x24]
// 005dae3e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005dae42  895638               mov dword ptr [esi + 0x38], edx
// 005dae45  89463c               mov dword ptr [esi + 0x3c], eax
// 005dae48  894e40               mov dword ptr [esi + 0x40], ecx
// 005dae4b  8d7e44               lea edi, [esi + 0x44]
// 005dae4e  8bcf                 mov ecx, edi
// 005dae50  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005dae58  c706b0d78300         mov dword ptr [esi], 0x83d7b0
// 005dae5e  e85d9cfbff           call 0x594ac0
// 005dae63  c644241801           mov byte ptr [esp + 0x18], 1
// 005dae68  8d5e14               lea ebx, [esi + 0x14]
// 005dae6b  e8e09bfbff           call 0x594a50
// 005dae70  57                   push edi
// 005dae71  8903                 mov dword ptr [ebx], eax
// 005dae73  e8281ef9ff           call 0x56cca0
// 005dae78  8b542434             mov edx, dword ptr [esp + 0x34]
// 005dae7c  50                   push eax
// 005dae7d  6aff                 push -1
// 005dae7f  52                   push edx
// 005dae80  e80b91f7ff           call 0x553f90
// 005dae85  83c408               add esp, 8
// 005dae88  50                   push eax
// 005dae89  8bcb                 mov ecx, ebx
// 005dae8b  e8b09cfbff           call 0x594b40
// 005dae90  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005dae94  5f                   pop edi
// 005dae95  8bc6                 mov eax, esi
// 005dae97  5e                   pop esi
// 005dae98  5b                   pop ebx
// 005dae99  64890d00000000       mov dword ptr fs:[0], ecx
// 005daea0  83c410               add esp, 0x10
// 005daea3  c21800               ret 0x18
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@QAE@P8ModelInstance@2@AEXVVector3@G3D@@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
