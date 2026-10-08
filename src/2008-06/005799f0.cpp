// roc 2008-06 005799f0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005799f0
//
// 005799f0  6aff                 push -1
// 005799f2  6843797c00           push 0x7c7943
// 005799f7  64a100000000         mov eax, dword ptr fs:[0]
// 005799fd  50                   push eax
// 005799fe  64892500000000       mov dword ptr fs:[0], esp
// 00579a05  51                   push ecx
// 00579a06  8b442424             mov eax, dword ptr [esp + 0x24]
// 00579a0a  53                   push ebx
// 00579a0b  56                   push esi
// 00579a0c  57                   push edi
// 00579a0d  8bf1                 mov esi, ecx
// 00579a0f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00579a13  50                   push eax
// 00579a14  51                   push ecx
// 00579a15  89742414             mov dword ptr [esp + 0x14], esi
// 00579a19  e8a2eeffff           call 0x5788c0
// 00579a1e  50                   push eax
// 00579a1f  8bce                 mov ecx, esi
// 00579a21  e86abd0100           call 0x595790
// 00579a26  8b542420             mov edx, dword ptr [esp + 0x20]
// 00579a2a  8b442424             mov eax, dword ptr [esp + 0x24]
// 00579a2e  8d7e40               lea edi, [esi + 0x40]
// 00579a31  8bcf                 mov ecx, edi
// 00579a33  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00579a3b  c70698008300         mov dword ptr [esi], 0x830098
// 00579a41  895638               mov dword ptr [esi + 0x38], edx
// 00579a44  89463c               mov dword ptr [esi + 0x3c], eax
// 00579a47  e874b00100           call 0x594ac0
// 00579a4c  c644241801           mov byte ptr [esp + 0x18], 1
// 00579a51  8d5e14               lea ebx, [esi + 0x14]
// 00579a54  e8f7af0100           call 0x594a50
// 00579a59  57                   push edi
// 00579a5a  8903                 mov dword ptr [ebx], eax
// 00579a5c  e88f33ffff           call 0x56cdf0
// 00579a61  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00579a65  50                   push eax
// 00579a66  6aff                 push -1
// 00579a68  51                   push ecx
// 00579a69  e822a5fdff           call 0x553f90
// 00579a6e  83c408               add esp, 8
// 00579a71  50                   push eax
// 00579a72  8bcb                 mov ecx, ebx
// 00579a74  e8c7b00100           call 0x594b40
// 00579a79  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00579a7d  5f                   pop edi
// 00579a7e  8bc6                 mov eax, esi
// 00579a80  5e                   pop esi
// 00579a81  5b                   pop ebx
// 00579a82  64890d00000000       mov dword ptr fs:[0], ecx
// 00579a89  83c410               add esp, 0x10
// 00579a8c  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
