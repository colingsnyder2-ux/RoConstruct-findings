// roc 2008-06 00567fe0  unit: RBX::VSelection::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00567fe0
//
// 00567fe0  6aff                 push -1
// 00567fe2  6843797c00           push 0x7c7943
// 00567fe7  64a100000000         mov eax, dword ptr fs:[0]
// 00567fed  50                   push eax
// 00567fee  64892500000000       mov dword ptr fs:[0], esp
// 00567ff5  51                   push ecx
// 00567ff6  8b442424             mov eax, dword ptr [esp + 0x24]
// 00567ffa  53                   push ebx
// 00567ffb  56                   push esi
// 00567ffc  57                   push edi
// 00567ffd  8bf1                 mov esi, ecx
// 00567fff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00568003  50                   push eax
// 00568004  51                   push ecx
// 00568005  89742414             mov dword ptr [esp + 0x14], esi
// 00568009  e892f1ffff           call 0x5671a0
// 0056800e  50                   push eax
// 0056800f  8bce                 mov ecx, esi
// 00568011  e87ad70200           call 0x595790
// 00568016  8b542420             mov edx, dword ptr [esp + 0x20]
// 0056801a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0056801e  8d7e40               lea edi, [esi + 0x40]
// 00568021  8bcf                 mov ecx, edi
// 00568023  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0056802b  c706d4ee8200         mov dword ptr [esi], 0x82eed4
// 00568031  895638               mov dword ptr [esi + 0x38], edx
// 00568034  89463c               mov dword ptr [esi + 0x3c], eax
// 00568037  e884ca0200           call 0x594ac0
// 0056803c  c644241801           mov byte ptr [esp + 0x18], 1
// 00568041  8d5e14               lea ebx, [esi + 0x14]
// 00568044  e807ca0200           call 0x594a50
// 00568049  57                   push edi
// 0056804a  8903                 mov dword ptr [ebx], eax
// 0056804c  e8ff4a0000           call 0x56cb50
// 00568051  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00568055  50                   push eax
// 00568056  6aff                 push -1
// 00568058  51                   push ecx
// 00568059  e832bffeff           call 0x553f90
// 0056805e  83c408               add esp, 8
// 00568061  50                   push eax
// 00568062  8bcb                 mov ecx, ebx
// 00568064  e8d7ca0200           call 0x594b40
// 00568069  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056806d  5f                   pop edi
// 0056806e  8bc6                 mov eax, esi
// 00568070  5e                   pop esi
// 00568071  5b                   pop ebx
// 00568072  64890d00000000       mov dword ptr fs:[0], ecx
// 00568079  83c410               add esp, 0x10
// 0056807c  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
