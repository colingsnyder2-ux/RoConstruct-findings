// roc 2007-08 005a2090  unit: RBX::VSkin::?$FactoryProduct  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a2090
//
// 005a2090  6aff                 push -1
// 005a2092  6848b77500           push 0x75b748
// 005a2097  64a100000000         mov eax, dword ptr fs:[0]
// 005a209d  50                   push eax
// 005a209e  64892500000000       mov dword ptr fs:[0], esp
// 005a20a5  83ec08               sub esp, 8
// 005a20a8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a20ac  56                   push esi
// 005a20ad  57                   push edi
// 005a20ae  8bf1                 mov esi, ecx
// 005a20b0  89742408             mov dword ptr [esp + 8], esi
// 005a20b4  50                   push eax
// 005a20b5  51                   push ecx
// 005a20b6  8bc4                 mov eax, esp
// 005a20b8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005a20c0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a20c8  89642414             mov dword ptr [esp + 0x14], esp
// 005a20cc  c70000000000         mov dword ptr [eax], 0
// 005a20d2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a20d6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a20da  51                   push ecx
// 005a20db  52                   push edx
// 005a20dc  c644242801           mov byte ptr [esp + 0x28], 1
// 005a20e1  e8babefeff           call 0x58dfa0
// 005a20e6  50                   push eax
// 005a20e7  8bce                 mov ecx, esi
// 005a20e9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a20ee  e82d06fdff           call 0x572720
// 005a20f3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a20f7  50                   push eax
// 005a20f8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005a20fd  e860db0800           call 0x62fc62
// 005a2102  6a18                 push 0x18
// 005a2104  c706f8417b00         mov dword ptr [esi], 0x7b41f8
// 005a210a  e8e7dd0800           call 0x62fef6
// 005a210f  83c408               add esp, 8
// 005a2112  85c0                 test eax, eax
// 005a2114  7422                 je 0x5a2138
// 005a2116  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a211a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a211e  894808               mov dword ptr [eax + 8], ecx
// 005a2121  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a2125  c700f8407b00         mov dword ptr [eax], 0x7b40f8
// 005a212b  897004               mov dword ptr [eax + 4], esi
// 005a212e  895010               mov dword ptr [eax + 0x10], edx
// 005a2131  894814               mov dword ptr [eax + 0x14], ecx
// 005a2134  8bf8                 mov edi, eax
// 005a2136  eb02                 jmp 0x5a213a
// 005a2138  33ff                 xor edi, edi
// 005a213a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005a213d  3bf8                 cmp edi, eax
// 005a213f  7409                 je 0x5a214a
// 005a2141  50                   push eax
// 005a2142  e81bdb0800           call 0x62fc62
// 005a2147  83c404               add esp, 4
// 005a214a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a214e  897e18               mov dword ptr [esi + 0x18], edi
// 005a2151  5f                   pop edi
// 005a2152  8bc6                 mov eax, esi
// 005a2154  64890d00000000       mov dword ptr fs:[0], ecx
// 005a215b  5e                   pop esi
// 005a215c  83c414               add esp, 0x14
// 005a215f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
