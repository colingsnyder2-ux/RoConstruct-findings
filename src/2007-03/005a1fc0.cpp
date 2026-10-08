// roc 2007-03 005a1fc0  unit: seg_005a0000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a1fc0
//
// 005a1fc0  6aff                 push -1
// 005a1fc2  6848be7500           push 0x75be48
// 005a1fc7  64a100000000         mov eax, dword ptr fs:[0]
// 005a1fcd  50                   push eax
// 005a1fce  64892500000000       mov dword ptr fs:[0], esp
// 005a1fd5  83ec08               sub esp, 8
// 005a1fd8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a1fdc  56                   push esi
// 005a1fdd  57                   push edi
// 005a1fde  8bf1                 mov esi, ecx
// 005a1fe0  89742408             mov dword ptr [esp + 8], esi
// 005a1fe4  50                   push eax
// 005a1fe5  51                   push ecx
// 005a1fe6  8bc4                 mov eax, esp
// 005a1fe8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005a1ff0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a1ff8  89642414             mov dword ptr [esp + 0x14], esp
// 005a1ffc  c70000000000         mov dword ptr [eax], 0
// 005a2002  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a2006  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a200a  51                   push ecx
// 005a200b  52                   push edx
// 005a200c  c644242801           mov byte ptr [esp + 0x28], 1
// 005a2011  e83a67feff           call 0x588750
// 005a2016  50                   push eax
// 005a2017  8bce                 mov ecx, esi
// 005a2019  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a201e  e83df1fcff           call 0x571160
// 005a2023  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a2027  50                   push eax
// 005a2028  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005a202d  e8bec00700           call 0x61e0f0
// 005a2032  6a18                 push 0x18
// 005a2034  c7063c497b00         mov dword ptr [esi], 0x7b493c
// 005a203a  e8c9c00700           call 0x61e108
// 005a203f  83c408               add esp, 8
// 005a2042  85c0                 test eax, eax
// 005a2044  7422                 je 0x5a2068
// 005a2046  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a204a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a204e  894808               mov dword ptr [eax + 8], ecx
// 005a2051  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a2055  c7003c487b00         mov dword ptr [eax], 0x7b483c
// 005a205b  897004               mov dword ptr [eax + 4], esi
// 005a205e  895010               mov dword ptr [eax + 0x10], edx
// 005a2061  894814               mov dword ptr [eax + 0x14], ecx
// 005a2064  8bf8                 mov edi, eax
// 005a2066  eb02                 jmp 0x5a206a
// 005a2068  33ff                 xor edi, edi
// 005a206a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005a206d  3bf8                 cmp edi, eax
// 005a206f  7409                 je 0x5a207a
// 005a2071  50                   push eax
// 005a2072  e879c00700           call 0x61e0f0
// 005a2077  83c404               add esp, 4
// 005a207a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a207e  897e18               mov dword ptr [esi + 0x18], edi
// 005a2081  5f                   pop edi
// 005a2082  8bc6                 mov eax, esi
// 005a2084  64890d00000000       mov dword ptr fs:[0], ecx
// 005a208b  5e                   pop esi
// 005a208c  83c414               add esp, 0x14
// 005a208f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
