// roc 2008-06 0049b230  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049b230
//
// 0049b230  6aff                 push -1
// 0049b232  6843797c00           push 0x7c7943
// 0049b237  64a100000000         mov eax, dword ptr fs:[0]
// 0049b23d  50                   push eax
// 0049b23e  64892500000000       mov dword ptr fs:[0], esp
// 0049b245  51                   push ecx
// 0049b246  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049b24a  53                   push ebx
// 0049b24b  56                   push esi
// 0049b24c  57                   push edi
// 0049b24d  8bf1                 mov esi, ecx
// 0049b24f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049b253  50                   push eax
// 0049b254  51                   push ecx
// 0049b255  89742414             mov dword ptr [esp + 0x14], esi
// 0049b259  e842f6ffff           call 0x49a8a0
// 0049b25e  50                   push eax
// 0049b25f  8bce                 mov ecx, esi
// 0049b261  e82aa50f00           call 0x595790
// 0049b266  8b542420             mov edx, dword ptr [esp + 0x20]
// 0049b26a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049b26e  8d7e40               lea edi, [esi + 0x40]
// 0049b271  8bcf                 mov ecx, edi
// 0049b273  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049b27b  c70694298200         mov dword ptr [esi], 0x822994
// 0049b281  895638               mov dword ptr [esi + 0x38], edx
// 0049b284  89463c               mov dword ptr [esi + 0x3c], eax
// 0049b287  e834980f00           call 0x594ac0
// 0049b28c  c644241801           mov byte ptr [esp + 0x18], 1
// 0049b291  8d5e14               lea ebx, [esi + 0x14]
// 0049b294  e8b7970f00           call 0x594a50
// 0049b299  57                   push edi
// 0049b29a  8903                 mov dword ptr [ebx], eax
// 0049b29c  e84f1b0d00           call 0x56cdf0
// 0049b2a1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0049b2a5  50                   push eax
// 0049b2a6  6aff                 push -1
// 0049b2a8  51                   push ecx
// 0049b2a9  e8e28c0b00           call 0x553f90
// 0049b2ae  83c408               add esp, 8
// 0049b2b1  50                   push eax
// 0049b2b2  8bcb                 mov ecx, ebx
// 0049b2b4  e887980f00           call 0x594b40
// 0049b2b9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049b2bd  5f                   pop edi
// 0049b2be  8bc6                 mov eax, esi
// 0049b2c0  5e                   pop esi
// 0049b2c1  5b                   pop ebx
// 0049b2c2  64890d00000000       mov dword ptr fs:[0], ecx
// 0049b2c9  83c410               add esp, 0x10
// 0049b2cc  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
