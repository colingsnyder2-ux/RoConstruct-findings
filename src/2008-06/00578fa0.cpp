// roc 2008-06 00578fa0  unit: RBX::VDataModel::?$SignalDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578fa0
//
// 00578fa0  6aff                 push -1
// 00578fa2  6843797c00           push 0x7c7943
// 00578fa7  64a100000000         mov eax, dword ptr fs:[0]
// 00578fad  50                   push eax
// 00578fae  64892500000000       mov dword ptr fs:[0], esp
// 00578fb5  51                   push ecx
// 00578fb6  8b442424             mov eax, dword ptr [esp + 0x24]
// 00578fba  53                   push ebx
// 00578fbb  56                   push esi
// 00578fbc  57                   push edi
// 00578fbd  8bf1                 mov esi, ecx
// 00578fbf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00578fc3  50                   push eax
// 00578fc4  51                   push ecx
// 00578fc5  89742414             mov dword ptr [esp + 0x14], esi
// 00578fc9  e8f2f8ffff           call 0x5788c0
// 00578fce  50                   push eax
// 00578fcf  8bce                 mov ecx, esi
// 00578fd1  e8bac70100           call 0x595790
// 00578fd6  8b542420             mov edx, dword ptr [esp + 0x20]
// 00578fda  8b442424             mov eax, dword ptr [esp + 0x24]
// 00578fde  8d7e40               lea edi, [esi + 0x40]
// 00578fe1  8bcf                 mov ecx, edi
// 00578fe3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00578feb  c7065c008300         mov dword ptr [esi], 0x83005c
// 00578ff1  895638               mov dword ptr [esi + 0x38], edx
// 00578ff4  89463c               mov dword ptr [esi + 0x3c], eax
// 00578ff7  e8c4ba0100           call 0x594ac0
// 00578ffc  c644241801           mov byte ptr [esp + 0x18], 1
// 00579001  8d5e14               lea ebx, [esi + 0x14]
// 00579004  e8473bffff           call 0x56cb50
// 00579009  57                   push edi
// 0057900a  8903                 mov dword ptr [ebx], eax
// 0057900c  e86f3dffff           call 0x56cd80
// 00579011  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00579015  50                   push eax
// 00579016  6aff                 push -1
// 00579018  51                   push ecx
// 00579019  e872affdff           call 0x553f90
// 0057901e  83c408               add esp, 8
// 00579021  50                   push eax
// 00579022  8bcb                 mov ecx, ebx
// 00579024  e817bb0100           call 0x594b40
// 00579029  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057902d  5f                   pop edi
// 0057902e  8bc6                 mov eax, esi
// 00579030  5e                   pop esi
// 00579031  5b                   pop ebx
// 00579032  64890d00000000       mov dword ptr fs:[0], ecx
// 00579039  83c410               add esp, 0x10
// 0057903c  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
