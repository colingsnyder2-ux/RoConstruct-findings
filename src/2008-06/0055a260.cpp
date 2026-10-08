// roc 2008-06 0055a260  unit: RBX::VInstance::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055a260
//
// 0055a260  6aff                 push -1
// 0055a262  6843797c00           push 0x7c7943
// 0055a267  64a100000000         mov eax, dword ptr fs:[0]
// 0055a26d  50                   push eax
// 0055a26e  64892500000000       mov dword ptr fs:[0], esp
// 0055a275  51                   push ecx
// 0055a276  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055a27a  53                   push ebx
// 0055a27b  56                   push esi
// 0055a27c  57                   push edi
// 0055a27d  8bf1                 mov esi, ecx
// 0055a27f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0055a283  50                   push eax
// 0055a284  51                   push ecx
// 0055a285  89742414             mov dword ptr [esp + 0x14], esi
// 0055a289  e8f20aebff           call 0x40ad80
// 0055a28e  50                   push eax
// 0055a28f  8bce                 mov ecx, esi
// 0055a291  e8fab40300           call 0x595790
// 0055a296  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055a29a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055a29e  8d7e40               lea edi, [esi + 0x40]
// 0055a2a1  8bcf                 mov ecx, edi
// 0055a2a3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0055a2ab  c706f4d78200         mov dword ptr [esi], 0x82d7f4
// 0055a2b1  895638               mov dword ptr [esi + 0x38], edx
// 0055a2b4  89463c               mov dword ptr [esi + 0x3c], eax
// 0055a2b7  e804a80300           call 0x594ac0
// 0055a2bc  c644241801           mov byte ptr [esp + 0x18], 1
// 0055a2c1  8d5e14               lea ebx, [esi + 0x14]
// 0055a2c4  e867290100           call 0x56cc30
// 0055a2c9  57                   push edi
// 0055a2ca  8903                 mov dword ptr [ebx], eax
// 0055a2cc  e80f280100           call 0x56cae0
// 0055a2d1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055a2d5  50                   push eax
// 0055a2d6  6aff                 push -1
// 0055a2d8  51                   push ecx
// 0055a2d9  e8b29cffff           call 0x553f90
// 0055a2de  83c408               add esp, 8
// 0055a2e1  50                   push eax
// 0055a2e2  8bcb                 mov ecx, ebx
// 0055a2e4  e857a80300           call 0x594b40
// 0055a2e9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055a2ed  5f                   pop edi
// 0055a2ee  8bc6                 mov eax, esi
// 0055a2f0  5e                   pop esi
// 0055a2f1  5b                   pop ebx
// 0055a2f2  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a2f9  83c410               add esp, 0x10
// 0055a2fc  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
