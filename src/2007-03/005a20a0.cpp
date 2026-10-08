// roc 2007-03 005a20a0  unit: seg_005a0000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a20a0
//
// 005a20a0  6aff                 push -1
// 005a20a2  6848be7500           push 0x75be48
// 005a20a7  64a100000000         mov eax, dword ptr fs:[0]
// 005a20ad  50                   push eax
// 005a20ae  64892500000000       mov dword ptr fs:[0], esp
// 005a20b5  83ec08               sub esp, 8
// 005a20b8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a20bc  56                   push esi
// 005a20bd  57                   push edi
// 005a20be  8bf1                 mov esi, ecx
// 005a20c0  89742408             mov dword ptr [esp + 8], esi
// 005a20c4  50                   push eax
// 005a20c5  51                   push ecx
// 005a20c6  8bc4                 mov eax, esp
// 005a20c8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005a20d0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a20d8  89642414             mov dword ptr [esp + 0x14], esp
// 005a20dc  c70000000000         mov dword ptr [eax], 0
// 005a20e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a20e6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a20ea  51                   push ecx
// 005a20eb  52                   push edx
// 005a20ec  c644242801           mov byte ptr [esp + 0x28], 1
// 005a20f1  e8eafdffff           call 0x5a1ee0
// 005a20f6  50                   push eax
// 005a20f7  8bce                 mov ecx, esi
// 005a20f9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a20fe  e8ed3eeeff           call 0x485ff0
// 005a2103  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a2107  50                   push eax
// 005a2108  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005a210d  e8debf0700           call 0x61e0f0
// 005a2112  6a18                 push 0x18
// 005a2114  c70664497b00         mov dword ptr [esi], 0x7b4964
// 005a211a  e8e9bf0700           call 0x61e108
// 005a211f  83c408               add esp, 8
// 005a2122  85c0                 test eax, eax
// 005a2124  7422                 je 0x5a2148
// 005a2126  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a212a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a212e  894808               mov dword ptr [eax + 8], ecx
// 005a2131  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a2135  c7004c487b00         mov dword ptr [eax], 0x7b484c
// 005a213b  897004               mov dword ptr [eax + 4], esi
// 005a213e  895010               mov dword ptr [eax + 0x10], edx
// 005a2141  894814               mov dword ptr [eax + 0x14], ecx
// 005a2144  8bf8                 mov edi, eax
// 005a2146  eb02                 jmp 0x5a214a
// 005a2148  33ff                 xor edi, edi
// 005a214a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005a214d  3bf8                 cmp edi, eax
// 005a214f  7409                 je 0x5a215a
// 005a2151  50                   push eax
// 005a2152  e899bf0700           call 0x61e0f0
// 005a2157  83c404               add esp, 4
// 005a215a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a215e  897e18               mov dword ptr [esi + 0x18], edi
// 005a2161  5f                   pop edi
// 005a2162  8bc6                 mov eax, esi
// 005a2164  64890d00000000       mov dword ptr fs:[0], ecx
// 005a216b  5e                   pop esi
// 005a216c  83c414               add esp, 0x14
// 005a216f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
