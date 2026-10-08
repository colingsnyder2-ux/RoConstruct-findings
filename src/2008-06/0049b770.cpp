// roc 2008-06 0049b770  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049b770
//
// 0049b770  6aff                 push -1
// 0049b772  6843797c00           push 0x7c7943
// 0049b777  64a100000000         mov eax, dword ptr fs:[0]
// 0049b77d  50                   push eax
// 0049b77e  64892500000000       mov dword ptr fs:[0], esp
// 0049b785  51                   push ecx
// 0049b786  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049b78a  53                   push ebx
// 0049b78b  56                   push esi
// 0049b78c  57                   push edi
// 0049b78d  8bf1                 mov esi, ecx
// 0049b78f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049b793  50                   push eax
// 0049b794  51                   push ecx
// 0049b795  89742414             mov dword ptr [esp + 0x14], esi
// 0049b799  e802f1ffff           call 0x49a8a0
// 0049b79e  50                   push eax
// 0049b79f  8bce                 mov ecx, esi
// 0049b7a1  e8ea9f0f00           call 0x595790
// 0049b7a6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0049b7aa  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049b7ae  8d7e40               lea edi, [esi + 0x40]
// 0049b7b1  8bcf                 mov ecx, edi
// 0049b7b3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049b7bb  c706c8298200         mov dword ptr [esi], 0x8229c8
// 0049b7c1  895638               mov dword ptr [esi + 0x38], edx
// 0049b7c4  89463c               mov dword ptr [esi + 0x3c], eax
// 0049b7c7  e8f4920f00           call 0x594ac0
// 0049b7cc  c644241801           mov byte ptr [esp + 0x18], 1
// 0049b7d1  8d5e14               lea ebx, [esi + 0x14]
// 0049b7d4  e807130d00           call 0x56cae0
// 0049b7d9  57                   push edi
// 0049b7da  8903                 mov dword ptr [ebx], eax
// 0049b7dc  e8ff120d00           call 0x56cae0
// 0049b7e1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0049b7e5  50                   push eax
// 0049b7e6  6aff                 push -1
// 0049b7e8  51                   push ecx
// 0049b7e9  e8a2870b00           call 0x553f90
// 0049b7ee  83c408               add esp, 8
// 0049b7f1  50                   push eax
// 0049b7f2  8bcb                 mov ecx, ebx
// 0049b7f4  e847930f00           call 0x594b40
// 0049b7f9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049b7fd  5f                   pop edi
// 0049b7fe  8bc6                 mov eax, esi
// 0049b800  5e                   pop esi
// 0049b801  5b                   pop ebx
// 0049b802  64890d00000000       mov dword ptr fs:[0], ecx
// 0049b809  83c410               add esp, 0x10
// 0049b80c  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
