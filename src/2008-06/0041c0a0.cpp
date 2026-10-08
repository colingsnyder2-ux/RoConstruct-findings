// roc 2008-06 0041c0a0  unit: VDHTMLWindow::?$BoundFuncDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041c0a0
//
// 0041c0a0  6aff                 push -1
// 0041c0a2  6843797c00           push 0x7c7943
// 0041c0a7  64a100000000         mov eax, dword ptr fs:[0]
// 0041c0ad  50                   push eax
// 0041c0ae  64892500000000       mov dword ptr fs:[0], esp
// 0041c0b5  51                   push ecx
// 0041c0b6  8b442424             mov eax, dword ptr [esp + 0x24]
// 0041c0ba  53                   push ebx
// 0041c0bb  56                   push esi
// 0041c0bc  57                   push edi
// 0041c0bd  8bf1                 mov esi, ecx
// 0041c0bf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0041c0c3  50                   push eax
// 0041c0c4  51                   push ecx
// 0041c0c5  89742414             mov dword ptr [esp + 0x14], esi
// 0041c0c9  e8d2f7ffff           call 0x41b8a0
// 0041c0ce  50                   push eax
// 0041c0cf  8bce                 mov ecx, esi
// 0041c0d1  e8ba961700           call 0x595790
// 0041c0d6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0041c0da  8b442424             mov eax, dword ptr [esp + 0x24]
// 0041c0de  8d7e40               lea edi, [esi + 0x40]
// 0041c0e1  8bcf                 mov ecx, edi
// 0041c0e3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0041c0eb  c7061cef8000         mov dword ptr [esi], 0x80ef1c
// 0041c0f1  895638               mov dword ptr [esi + 0x38], edx
// 0041c0f4  89463c               mov dword ptr [esi + 0x3c], eax
// 0041c0f7  e8c4891700           call 0x594ac0
// 0041c0fc  c644241801           mov byte ptr [esp + 0x18], 1
// 0041c101  8d5e14               lea ebx, [esi + 0x14]
// 0041c104  e847891700           call 0x594a50
// 0041c109  57                   push edi
// 0041c10a  8903                 mov dword ptr [ebx], eax
// 0041c10c  e80f7c1700           call 0x593d20
// 0041c111  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0041c115  50                   push eax
// 0041c116  6aff                 push -1
// 0041c118  51                   push ecx
// 0041c119  e8727e1300           call 0x553f90
// 0041c11e  83c408               add esp, 8
// 0041c121  50                   push eax
// 0041c122  8bcb                 mov ecx, ebx
// 0041c124  e8178a1700           call 0x594b40
// 0041c129  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041c12d  5f                   pop edi
// 0041c12e  8bc6                 mov eax, esi
// 0041c130  5e                   pop esi
// 0041c131  5b                   pop ebx
// 0041c132  64890d00000000       mov dword ptr fs:[0], ecx
// 0041c139  83c410               add esp, 0x10
// 0041c13c  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
