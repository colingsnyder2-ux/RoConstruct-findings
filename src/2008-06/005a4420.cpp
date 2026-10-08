// roc 2008-06 005a4420  unit: RBX::RootInstance  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a4420
//
// 005a4420  6aff                 push -1
// 005a4422  68d32c7d00           push 0x7d2cd3
// 005a4427  64a100000000         mov eax, dword ptr fs:[0]
// 005a442d  50                   push eax
// 005a442e  64892500000000       mov dword ptr fs:[0], esp
// 005a4435  51                   push ecx
// 005a4436  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a443a  53                   push ebx
// 005a443b  56                   push esi
// 005a443c  57                   push edi
// 005a443d  8bf1                 mov esi, ecx
// 005a443f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a4443  50                   push eax
// 005a4444  51                   push ecx
// 005a4445  89742414             mov dword ptr [esp + 0x14], esi
// 005a4449  e822f7ffff           call 0x5a3b70
// 005a444e  50                   push eax
// 005a444f  8bce                 mov ecx, esi
// 005a4451  e83a13ffff           call 0x595790
// 005a4456  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a445a  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a445e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a4462  895638               mov dword ptr [esi + 0x38], edx
// 005a4465  89463c               mov dword ptr [esi + 0x3c], eax
// 005a4468  894e40               mov dword ptr [esi + 0x40], ecx
// 005a446b  8d7e44               lea edi, [esi + 0x44]
// 005a446e  8bcf                 mov ecx, edi
// 005a4470  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a4478  c706003e8300         mov dword ptr [esi], 0x833e00
// 005a447e  e83d06ffff           call 0x594ac0
// 005a4483  c644241801           mov byte ptr [esp + 0x18], 1
// 005a4488  8d5e14               lea ebx, [esi + 0x14]
// 005a448b  e8c086fcff           call 0x56cb50
// 005a4490  57                   push edi
// 005a4491  8903                 mov dword ptr [ebx], eax
// 005a4493  e8e888fcff           call 0x56cd80
// 005a4498  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a449c  50                   push eax
// 005a449d  6aff                 push -1
// 005a449f  52                   push edx
// 005a44a0  e8ebfafaff           call 0x553f90
// 005a44a5  83c408               add esp, 8
// 005a44a8  50                   push eax
// 005a44a9  8bcb                 mov ecx, ebx
// 005a44ab  e89006ffff           call 0x594b40
// 005a44b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a44b4  5f                   pop edi
// 005a44b5  8bc6                 mov eax, esi
// 005a44b7  5e                   pop esi
// 005a44b8  5b                   pop ebx
// 005a44b9  64890d00000000       mov dword ptr fs:[0], ecx
// 005a44c0  83c410               add esp, 0x10
// 005a44c3  c21800               ret 0x18
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@QAE@P8ModelInstance@2@AEXVVector3@G3D@@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
