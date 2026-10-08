// roc 2008-06 005a46a0  unit: RBX::VModelInstance::?$BoundFuncDesc  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a46a0
//
// 005a46a0  6aff                 push -1
// 005a46a2  68d32c7d00           push 0x7d2cd3
// 005a46a7  64a100000000         mov eax, dword ptr fs:[0]
// 005a46ad  50                   push eax
// 005a46ae  64892500000000       mov dword ptr fs:[0], esp
// 005a46b5  51                   push ecx
// 005a46b6  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a46ba  53                   push ebx
// 005a46bb  56                   push esi
// 005a46bc  57                   push edi
// 005a46bd  8bf1                 mov esi, ecx
// 005a46bf  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a46c3  50                   push eax
// 005a46c4  51                   push ecx
// 005a46c5  89742414             mov dword ptr [esp + 0x14], esi
// 005a46c9  e8a2f4ffff           call 0x5a3b70
// 005a46ce  50                   push eax
// 005a46cf  8bce                 mov ecx, esi
// 005a46d1  e8ba10ffff           call 0x595790
// 005a46d6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a46da  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a46de  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a46e2  895638               mov dword ptr [esi + 0x38], edx
// 005a46e5  89463c               mov dword ptr [esi + 0x3c], eax
// 005a46e8  894e40               mov dword ptr [esi + 0x40], ecx
// 005a46eb  8d7e44               lea edi, [esi + 0x44]
// 005a46ee  8bcf                 mov ecx, edi
// 005a46f0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a46f8  c7060c3e8300         mov dword ptr [esi], 0x833e0c
// 005a46fe  e8bd03ffff           call 0x594ac0
// 005a4703  c644241801           mov byte ptr [esp + 0x18], 1
// 005a4708  8d5e14               lea ebx, [esi + 0x14]
// 005a470b  e84003ffff           call 0x594a50
// 005a4710  57                   push edi
// 005a4711  8903                 mov dword ptr [ebx], eax
// 005a4713  e83884fcff           call 0x56cb50
// 005a4718  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a471c  50                   push eax
// 005a471d  6aff                 push -1
// 005a471f  52                   push edx
// 005a4720  e86bf8faff           call 0x553f90
// 005a4725  83c408               add esp, 8
// 005a4728  50                   push eax
// 005a4729  8bcb                 mov ecx, ebx
// 005a472b  e81004ffff           call 0x594b40
// 005a4730  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a4734  5f                   pop edi
// 005a4735  8bc6                 mov eax, esi
// 005a4737  5e                   pop esi
// 005a4738  5b                   pop ebx
// 005a4739  64890d00000000       mov dword ptr fs:[0], ecx
// 005a4740  83c410               add esp, 0x10
// 005a4743  c21800               ret 0x18
// library rbxgs/v8datamodel\ModelInstance.cpp (function ??0?$BoundFuncDesc@VModelInstance@RBX@@$$A6AXVVector3@G3D@@@Z$00@Reflection@RBX@@QAE@P8ModelInstance@2@AEXVVector3@G3D@@@ZPBD2W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
