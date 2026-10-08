// roc 2008-06 005ad9f0  unit: RBX::VScriptContext::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ad9f0
//
// 005ad9f0  6aff                 push -1
// 005ad9f2  6843797c00           push 0x7c7943
// 005ad9f7  64a100000000         mov eax, dword ptr fs:[0]
// 005ad9fd  50                   push eax
// 005ad9fe  64892500000000       mov dword ptr fs:[0], esp
// 005ada05  51                   push ecx
// 005ada06  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ada0a  53                   push ebx
// 005ada0b  56                   push esi
// 005ada0c  57                   push edi
// 005ada0d  8bf1                 mov esi, ecx
// 005ada0f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ada13  50                   push eax
// 005ada14  51                   push ecx
// 005ada15  89742414             mov dword ptr [esp + 0x14], esi
// 005ada19  e8e2f7ffff           call 0x5ad200
// 005ada1e  50                   push eax
// 005ada1f  8bce                 mov ecx, esi
// 005ada21  e86a7dfeff           call 0x595790
// 005ada26  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ada2a  8b442424             mov eax, dword ptr [esp + 0x24]
// 005ada2e  8d7e40               lea edi, [esi + 0x40]
// 005ada31  8bcf                 mov ecx, edi
// 005ada33  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005ada3b  c706a0468300         mov dword ptr [esi], 0x8346a0
// 005ada41  895638               mov dword ptr [esi + 0x38], edx
// 005ada44  89463c               mov dword ptr [esi + 0x3c], eax
// 005ada47  e87470feff           call 0x594ac0
// 005ada4c  c644241801           mov byte ptr [esp + 0x18], 1
// 005ada51  8d5e14               lea ebx, [esi + 0x14]
// 005ada54  e8f76ffeff           call 0x594a50
// 005ada59  57                   push edi
// 005ada5a  8903                 mov dword ptr [ebx], eax
// 005ada5c  e8aff2fbff           call 0x56cd10
// 005ada61  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005ada65  50                   push eax
// 005ada66  6aff                 push -1
// 005ada68  51                   push ecx
// 005ada69  e82265faff           call 0x553f90
// 005ada6e  83c408               add esp, 8
// 005ada71  50                   push eax
// 005ada72  8bcb                 mov ecx, ebx
// 005ada74  e8c770feff           call 0x594b40
// 005ada79  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ada7d  5f                   pop edi
// 005ada7e  8bc6                 mov eax, esi
// 005ada80  5e                   pop esi
// 005ada81  5b                   pop ebx
// 005ada82  64890d00000000       mov dword ptr fs:[0], ecx
// 005ada89  83c410               add esp, 0x10
// 005ada8c  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
