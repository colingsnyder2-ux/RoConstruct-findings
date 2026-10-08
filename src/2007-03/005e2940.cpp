// roc 2007-03 005e2940  unit: seg_005e0000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e2940
//
// 005e2940  6aff                 push -1
// 005e2942  6848be7500           push 0x75be48
// 005e2947  64a100000000         mov eax, dword ptr fs:[0]
// 005e294d  50                   push eax
// 005e294e  64892500000000       mov dword ptr fs:[0], esp
// 005e2955  83ec08               sub esp, 8
// 005e2958  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e295c  56                   push esi
// 005e295d  57                   push edi
// 005e295e  8bf1                 mov esi, ecx
// 005e2960  89742408             mov dword ptr [esp + 8], esi
// 005e2964  50                   push eax
// 005e2965  51                   push ecx
// 005e2966  8bc4                 mov eax, esp
// 005e2968  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005e2970  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e2978  89642414             mov dword ptr [esp + 0x14], esp
// 005e297c  c70000000000         mov dword ptr [eax], 0
// 005e2982  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e2986  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e298a  51                   push ecx
// 005e298b  52                   push edx
// 005e298c  c644242801           mov byte ptr [esp + 0x28], 1
// 005e2991  e84af4ffff           call 0x5e1de0
// 005e2996  50                   push eax
// 005e2997  8bce                 mov ecx, esi
// 005e2999  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e299e  e8dd0ef9ff           call 0x573880
// 005e29a3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005e29a7  50                   push eax
// 005e29a8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005e29ad  e83eb70300           call 0x61e0f0
// 005e29b2  6a18                 push 0x18
// 005e29b4  c70678e57b00         mov dword ptr [esi], 0x7be578
// 005e29ba  e849b70300           call 0x61e108
// 005e29bf  83c408               add esp, 8
// 005e29c2  85c0                 test eax, eax
// 005e29c4  7422                 je 0x5e29e8
// 005e29c6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e29ca  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e29ce  894808               mov dword ptr [eax + 8], ecx
// 005e29d1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e29d5  c70090e47b00         mov dword ptr [eax], 0x7be490
// 005e29db  897004               mov dword ptr [eax + 4], esi
// 005e29de  895010               mov dword ptr [eax + 0x10], edx
// 005e29e1  894814               mov dword ptr [eax + 0x14], ecx
// 005e29e4  8bf8                 mov edi, eax
// 005e29e6  eb02                 jmp 0x5e29ea
// 005e29e8  33ff                 xor edi, edi
// 005e29ea  8b4618               mov eax, dword ptr [esi + 0x18]
// 005e29ed  3bf8                 cmp edi, eax
// 005e29ef  7409                 je 0x5e29fa
// 005e29f1  50                   push eax
// 005e29f2  e8f9b60300           call 0x61e0f0
// 005e29f7  83c404               add esp, 4
// 005e29fa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e29fe  897e18               mov dword ptr [esi + 0x18], edi
// 005e2a01  5f                   pop edi
// 005e2a02  8bc6                 mov eax, esi
// 005e2a04  64890d00000000       mov dword ptr fs:[0], ecx
// 005e2a0b  5e                   pop esi
// 005e2a0c  83c414               add esp, 0x14
// 005e2a0f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
