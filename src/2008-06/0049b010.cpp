// roc 2008-06 0049b010  unit: RBX::Network::VPlayers::?$SignalDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049b010
//
// 0049b010  6aff                 push -1
// 0049b012  6843797c00           push 0x7c7943
// 0049b017  64a100000000         mov eax, dword ptr fs:[0]
// 0049b01d  50                   push eax
// 0049b01e  64892500000000       mov dword ptr fs:[0], esp
// 0049b025  51                   push ecx
// 0049b026  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049b02a  53                   push ebx
// 0049b02b  56                   push esi
// 0049b02c  57                   push edi
// 0049b02d  8bf1                 mov esi, ecx
// 0049b02f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049b033  50                   push eax
// 0049b034  51                   push ecx
// 0049b035  89742414             mov dword ptr [esp + 0x14], esi
// 0049b039  e862f8ffff           call 0x49a8a0
// 0049b03e  50                   push eax
// 0049b03f  8bce                 mov ecx, esi
// 0049b041  e84aa70f00           call 0x595790
// 0049b046  8b542420             mov edx, dword ptr [esp + 0x20]
// 0049b04a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0049b04e  8d7e40               lea edi, [esi + 0x40]
// 0049b051  8bcf                 mov ecx, edi
// 0049b053  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049b05b  c70688298200         mov dword ptr [esi], 0x822988
// 0049b061  895638               mov dword ptr [esi + 0x38], edx
// 0049b064  89463c               mov dword ptr [esi + 0x3c], eax
// 0049b067  e8549a0f00           call 0x594ac0
// 0049b06c  c644241801           mov byte ptr [esp + 0x18], 1
// 0049b071  8d5e14               lea ebx, [esi + 0x14]
// 0049b074  e8671a0d00           call 0x56cae0
// 0049b079  57                   push edi
// 0049b07a  8903                 mov dword ptr [ebx], eax
// 0049b07c  e83f1b0d00           call 0x56cbc0
// 0049b081  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0049b085  50                   push eax
// 0049b086  6aff                 push -1
// 0049b088  51                   push ecx
// 0049b089  e8028f0b00           call 0x553f90
// 0049b08e  83c408               add esp, 8
// 0049b091  50                   push eax
// 0049b092  8bcb                 mov ecx, ebx
// 0049b094  e8a79a0f00           call 0x594b40
// 0049b099  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049b09d  5f                   pop edi
// 0049b09e  8bc6                 mov eax, esi
// 0049b0a0  5e                   pop esi
// 0049b0a1  5b                   pop ebx
// 0049b0a2  64890d00000000       mov dword ptr fs:[0], ecx
// 0049b0a9  83c410               add esp, 0x10
// 0049b0ac  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
