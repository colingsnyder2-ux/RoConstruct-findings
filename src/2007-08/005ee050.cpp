// roc 2007-08 005ee050  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ee050
//
// 005ee050  6aff                 push -1
// 005ee052  6848b77500           push 0x75b748
// 005ee057  64a100000000         mov eax, dword ptr fs:[0]
// 005ee05d  50                   push eax
// 005ee05e  64892500000000       mov dword ptr fs:[0], esp
// 005ee065  83ec08               sub esp, 8
// 005ee068  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ee06c  56                   push esi
// 005ee06d  57                   push edi
// 005ee06e  8bf1                 mov esi, ecx
// 005ee070  89742408             mov dword ptr [esp + 8], esi
// 005ee074  50                   push eax
// 005ee075  51                   push ecx
// 005ee076  8bc4                 mov eax, esp
// 005ee078  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005ee080  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ee088  89642414             mov dword ptr [esp + 0x14], esp
// 005ee08c  c70000000000         mov dword ptr [eax], 0
// 005ee092  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ee096  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ee09a  51                   push ecx
// 005ee09b  52                   push edx
// 005ee09c  c644242801           mov byte ptr [esp + 0x28], 1
// 005ee0a1  e80afcffff           call 0x5edcb0
// 005ee0a6  50                   push eax
// 005ee0a7  8bce                 mov ecx, esi
// 005ee0a9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ee0ae  e82d72e5ff           call 0x4452e0
// 005ee0b3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005ee0b7  50                   push eax
// 005ee0b8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005ee0bd  e8a01b0400           call 0x62fc62
// 005ee0c2  6a18                 push 0x18
// 005ee0c4  c706bccd7900         mov dword ptr [esi], 0x79cdbc
// 005ee0ca  e8271e0400           call 0x62fef6
// 005ee0cf  83c408               add esp, 8
// 005ee0d2  85c0                 test eax, eax
// 005ee0d4  7422                 je 0x5ee0f8
// 005ee0d6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ee0da  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005ee0de  894808               mov dword ptr [eax + 8], ecx
// 005ee0e1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005ee0e5  c70020ec7b00         mov dword ptr [eax], 0x7bec20
// 005ee0eb  897004               mov dword ptr [eax + 4], esi
// 005ee0ee  895010               mov dword ptr [eax + 0x10], edx
// 005ee0f1  894814               mov dword ptr [eax + 0x14], ecx
// 005ee0f4  8bf8                 mov edi, eax
// 005ee0f6  eb02                 jmp 0x5ee0fa
// 005ee0f8  33ff                 xor edi, edi
// 005ee0fa  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ee0fd  3bf8                 cmp edi, eax
// 005ee0ff  7409                 je 0x5ee10a
// 005ee101  50                   push eax
// 005ee102  e85b1b0400           call 0x62fc62
// 005ee107  83c404               add esp, 4
// 005ee10a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ee10e  897e18               mov dword ptr [esi + 0x18], edi
// 005ee111  5f                   pop edi
// 005ee112  8bc6                 mov eax, esi
// 005ee114  64890d00000000       mov dword ptr fs:[0], ecx
// 005ee11b  5e                   pop esi
// 005ee11c  83c414               add esp, 0x14
// 005ee11f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
