// roc 2007-03 00585a50  unit: seg_00580000  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00585a50
//
// 00585a50  64a100000000         mov eax, dword ptr fs:[0]
// 00585a56  6aff                 push -1
// 00585a58  6880cb7500           push 0x75cb80
// 00585a5d  50                   push eax
// 00585a5e  64892500000000       mov dword ptr fs:[0], esp
// 00585a65  8b442424             mov eax, dword ptr [esp + 0x24]
// 00585a69  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00585a6d  56                   push esi
// 00585a6e  50                   push eax
// 00585a6f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00585a73  8bf1                 mov esi, ecx
// 00585a75  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00585a79  51                   push ecx
// 00585a7a  52                   push edx
// 00585a7b  50                   push eax
// 00585a7c  8d4c2438             lea ecx, [esp + 0x38]
// 00585a80  51                   push ecx
// 00585a81  e85ae8ffff           call 0x5842e0
// 00585a86  8b10                 mov edx, dword ptr [eax]
// 00585a88  83c40c               add esp, 0xc
// 00585a8b  8bcc                 mov ecx, esp
// 00585a8d  c70000000000         mov dword ptr [eax], 0
// 00585a93  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00585a9b  8964242c             mov dword ptr [esp + 0x2c], esp
// 00585a9f  8911                 mov dword ptr [ecx], edx
// 00585aa1  8b442420             mov eax, dword ptr [esp + 0x20]
// 00585aa5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00585aa9  50                   push eax
// 00585aaa  51                   push ecx
// 00585aab  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00585ab0  e8cbfbffff           call 0x585680
// 00585ab5  50                   push eax
// 00585ab6  8bce                 mov ecx, esi
// 00585ab8  c644242000           mov byte ptr [esp + 0x20], 0
// 00585abd  e8cecdebff           call 0x442890
// 00585ac2  8b542428             mov edx, dword ptr [esp + 0x28]
// 00585ac6  52                   push edx
// 00585ac7  e824860900           call 0x61e0f0
// 00585acc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00585ad0  83c404               add esp, 4
// 00585ad3  c70678fd7a00         mov dword ptr [esi], 0x7afd78
// 00585ad9  8bc6                 mov eax, esi
// 00585adb  64890d00000000       mov dword ptr fs:[0], ecx
// 00585ae2  5e                   pop esi
// 00585ae3  83c40c               add esp, 0xc
// 00585ae6  c21800               ret 0x18
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??$?0P8DebugSettings@RBX@@BEMXZH@?$PropDescriptor@VDebugSettings@RBX@@M@Reflection@RBX@@QAE@PBD0P8DebugSettings@2@BEMXZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
