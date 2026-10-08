// roc 2008-06 00572f00  unit: RBX::ServiceProvider  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00572f00
//
// 00572f00  6aff                 push -1
// 00572f02  6843797c00           push 0x7c7943
// 00572f07  64a100000000         mov eax, dword ptr fs:[0]
// 00572f0d  50                   push eax
// 00572f0e  64892500000000       mov dword ptr fs:[0], esp
// 00572f15  51                   push ecx
// 00572f16  8b442424             mov eax, dword ptr [esp + 0x24]
// 00572f1a  53                   push ebx
// 00572f1b  56                   push esi
// 00572f1c  57                   push edi
// 00572f1d  8bf1                 mov esi, ecx
// 00572f1f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00572f23  50                   push eax
// 00572f24  51                   push ecx
// 00572f25  89742414             mov dword ptr [esp + 0x14], esi
// 00572f29  e872baf2ff           call 0x49e9a0
// 00572f2e  50                   push eax
// 00572f2f  8bce                 mov ecx, esi
// 00572f31  e85a280200           call 0x595790
// 00572f36  8b542420             mov edx, dword ptr [esp + 0x20]
// 00572f3a  8b442424             mov eax, dword ptr [esp + 0x24]
// 00572f3e  8d7e40               lea edi, [esi + 0x40]
// 00572f41  8bcf                 mov ecx, edi
// 00572f43  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00572f4b  c70610f88200         mov dword ptr [esi], 0x82f810
// 00572f51  895638               mov dword ptr [esi + 0x38], edx
// 00572f54  89463c               mov dword ptr [esi + 0x3c], eax
// 00572f57  e8641b0200           call 0x594ac0
// 00572f5c  c644241801           mov byte ptr [esp + 0x18], 1
// 00572f61  8d5e14               lea ebx, [esi + 0x14]
// 00572f64  e8779bffff           call 0x56cae0
// 00572f69  57                   push edi
// 00572f6a  8903                 mov dword ptr [ebx], eax
// 00572f6c  e87f9effff           call 0x56cdf0
// 00572f71  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00572f75  50                   push eax
// 00572f76  6aff                 push -1
// 00572f78  51                   push ecx
// 00572f79  e81210feff           call 0x553f90
// 00572f7e  83c408               add esp, 8
// 00572f81  50                   push eax
// 00572f82  8bcb                 mov ecx, ebx
// 00572f84  e8b71b0200           call 0x594b40
// 00572f89  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00572f8d  5f                   pop edi
// 00572f8e  8bc6                 mov eax, esi
// 00572f90  5e                   pop esi
// 00572f91  5b                   pop ebx
// 00572f92  64890d00000000       mov dword ptr fs:[0], ecx
// 00572f99  83c410               add esp, 0x10
// 00572f9c  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
