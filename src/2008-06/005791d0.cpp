// roc 2008-06 005791d0  unit: RBX::VDataModel::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005791d0
//
// 005791d0  6aff                 push -1
// 005791d2  6843797c00           push 0x7c7943
// 005791d7  64a100000000         mov eax, dword ptr fs:[0]
// 005791dd  50                   push eax
// 005791de  64892500000000       mov dword ptr fs:[0], esp
// 005791e5  51                   push ecx
// 005791e6  8b442424             mov eax, dword ptr [esp + 0x24]
// 005791ea  53                   push ebx
// 005791eb  56                   push esi
// 005791ec  57                   push edi
// 005791ed  8bf1                 mov esi, ecx
// 005791ef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005791f3  50                   push eax
// 005791f4  51                   push ecx
// 005791f5  89742414             mov dword ptr [esp + 0x14], esi
// 005791f9  e8c2f6ffff           call 0x5788c0
// 005791fe  50                   push eax
// 005791ff  8bce                 mov ecx, esi
// 00579201  e88ac50100           call 0x595790
// 00579206  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057920a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057920e  8d7e40               lea edi, [esi + 0x40]
// 00579211  8bcf                 mov ecx, edi
// 00579213  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057921b  c70668008300         mov dword ptr [esi], 0x830068
// 00579221  895638               mov dword ptr [esi + 0x38], edx
// 00579224  89463c               mov dword ptr [esi + 0x3c], eax
// 00579227  e894b80100           call 0x594ac0
// 0057922c  c644241801           mov byte ptr [esp + 0x18], 1
// 00579231  8d5e14               lea ebx, [esi + 0x14]
// 00579234  e817b80100           call 0x594a50
// 00579239  57                   push edi
// 0057923a  8903                 mov dword ptr [ebx], eax
// 0057923c  e83f3bffff           call 0x56cd80
// 00579241  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00579245  50                   push eax
// 00579246  6aff                 push -1
// 00579248  51                   push ecx
// 00579249  e842adfdff           call 0x553f90
// 0057924e  83c408               add esp, 8
// 00579251  50                   push eax
// 00579252  8bcb                 mov ecx, ebx
// 00579254  e8e7b80100           call 0x594b40
// 00579259  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057925d  5f                   pop edi
// 0057925e  8bc6                 mov eax, esi
// 00579260  5e                   pop esi
// 00579261  5b                   pop ebx
// 00579262  64890d00000000       mov dword ptr fs:[0], ecx
// 00579269  83c410               add esp, 0x10
// 0057926c  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
