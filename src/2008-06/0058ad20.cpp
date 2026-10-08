// roc 2008-06 0058ad20  unit: RBX::ChangeHistoryService  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058ad20
//
// 0058ad20  6aff                 push -1
// 0058ad22  6843797c00           push 0x7c7943
// 0058ad27  64a100000000         mov eax, dword ptr fs:[0]
// 0058ad2d  50                   push eax
// 0058ad2e  64892500000000       mov dword ptr fs:[0], esp
// 0058ad35  51                   push ecx
// 0058ad36  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058ad3a  53                   push ebx
// 0058ad3b  56                   push esi
// 0058ad3c  57                   push edi
// 0058ad3d  8bf1                 mov esi, ecx
// 0058ad3f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0058ad43  50                   push eax
// 0058ad44  51                   push ecx
// 0058ad45  89742414             mov dword ptr [esp + 0x14], esi
// 0058ad49  e852f5ffff           call 0x58a2a0
// 0058ad4e  50                   push eax
// 0058ad4f  8bce                 mov ecx, esi
// 0058ad51  e83aaa0000           call 0x595790
// 0058ad56  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058ad5a  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058ad5e  8d7e40               lea edi, [esi + 0x40]
// 0058ad61  8bcf                 mov ecx, edi
// 0058ad63  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058ad6b  c7060c198300         mov dword ptr [esi], 0x83190c
// 0058ad71  895638               mov dword ptr [esi + 0x38], edx
// 0058ad74  89463c               mov dword ptr [esi + 0x3c], eax
// 0058ad77  e8449d0000           call 0x594ac0
// 0058ad7c  c644241801           mov byte ptr [esp + 0x18], 1
// 0058ad81  8d5e14               lea ebx, [esi + 0x14]
// 0058ad84  e8c79c0000           call 0x594a50
// 0058ad89  57                   push edi
// 0058ad8a  8903                 mov dword ptr [ebx], eax
// 0058ad8c  e89f1efeff           call 0x56cc30
// 0058ad91  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0058ad95  50                   push eax
// 0058ad96  6aff                 push -1
// 0058ad98  51                   push ecx
// 0058ad99  e8f291fcff           call 0x553f90
// 0058ad9e  83c408               add esp, 8
// 0058ada1  50                   push eax
// 0058ada2  8bcb                 mov ecx, ebx
// 0058ada4  e8979d0000           call 0x594b40
// 0058ada9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058adad  5f                   pop edi
// 0058adae  8bc6                 mov eax, esi
// 0058adb0  5e                   pop esi
// 0058adb1  5b                   pop ebx
// 0058adb2  64890d00000000       mov dword ptr fs:[0], ecx
// 0058adb9  83c410               add esp, 0x10
// 0058adbc  c21400               ret 0x14
// library rbxgs/v8datamodel\Lighting.cpp (function ??0?$BoundFuncDesc@VLighting@RBX@@$$A6AXN@Z$00@Reflection@RBX@@QAE@P8Lighting@2@AEXN@ZPBD1W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
