// roc 2008-06 0041c000  unit: VDHTMLWindow::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041c000
//
// 0041c000  6aff                 push -1
// 0041c002  6843797c00           push 0x7c7943
// 0041c007  64a100000000         mov eax, dword ptr fs:[0]
// 0041c00d  50                   push eax
// 0041c00e  64892500000000       mov dword ptr fs:[0], esp
// 0041c015  51                   push ecx
// 0041c016  8b442424             mov eax, dword ptr [esp + 0x24]
// 0041c01a  53                   push ebx
// 0041c01b  56                   push esi
// 0041c01c  57                   push edi
// 0041c01d  8bf1                 mov esi, ecx
// 0041c01f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0041c023  50                   push eax
// 0041c024  51                   push ecx
// 0041c025  89742414             mov dword ptr [esp + 0x14], esi
// 0041c029  e872f8ffff           call 0x41b8a0
// 0041c02e  50                   push eax
// 0041c02f  8bce                 mov ecx, esi
// 0041c031  e85a971700           call 0x595790
// 0041c036  8b542420             mov edx, dword ptr [esp + 0x20]
// 0041c03a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0041c03e  8d7e40               lea edi, [esi + 0x40]
// 0041c041  8bcf                 mov ecx, edi
// 0041c043  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0041c04b  c70610ef8000         mov dword ptr [esi], 0x80ef10
// 0041c051  895638               mov dword ptr [esi + 0x38], edx
// 0041c054  89463c               mov dword ptr [esi + 0x3c], eax
// 0041c057  e8648a1700           call 0x594ac0
// 0041c05c  c644241801           mov byte ptr [esp + 0x18], 1
// 0041c061  8d5e14               lea ebx, [esi + 0x14]
// 0041c064  e8e7891700           call 0x594a50
// 0041c069  57                   push edi
// 0041c06a  8903                 mov dword ptr [ebx], eax
// 0041c06c  e87f0d1500           call 0x56cdf0
// 0041c071  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0041c075  50                   push eax
// 0041c076  6aff                 push -1
// 0041c078  51                   push ecx
// 0041c079  e8127f1300           call 0x553f90
// 0041c07e  83c408               add esp, 8
// 0041c081  50                   push eax
// 0041c082  8bcb                 mov ecx, ebx
// 0041c084  e8b78a1700           call 0x594b40
// 0041c089  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041c08d  5f                   pop edi
// 0041c08e  8bc6                 mov eax, esi
// 0041c090  5e                   pop esi
// 0041c091  5b                   pop ebx
// 0041c092  64890d00000000       mov dword ptr fs:[0], ecx
// 0041c099  83c410               add esp, 0x10
// 0041c09c  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
