// roc 2007-03 005e20d0  unit: seg_005e0000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e20d0
//
// 005e20d0  6aff                 push -1
// 005e20d2  6848be7500           push 0x75be48
// 005e20d7  64a100000000         mov eax, dword ptr fs:[0]
// 005e20dd  50                   push eax
// 005e20de  64892500000000       mov dword ptr fs:[0], esp
// 005e20e5  83ec08               sub esp, 8
// 005e20e8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e20ec  56                   push esi
// 005e20ed  57                   push edi
// 005e20ee  8bf1                 mov esi, ecx
// 005e20f0  89742408             mov dword ptr [esp + 8], esi
// 005e20f4  50                   push eax
// 005e20f5  51                   push ecx
// 005e20f6  8bc4                 mov eax, esp
// 005e20f8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005e2100  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e2108  89642414             mov dword ptr [esp + 0x14], esp
// 005e210c  c70000000000         mov dword ptr [eax], 0
// 005e2112  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e2116  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e211a  51                   push ecx
// 005e211b  52                   push edx
// 005e211c  c644242801           mov byte ptr [esp + 0x28], 1
// 005e2121  e88afaffff           call 0x5e1bb0
// 005e2126  50                   push eax
// 005e2127  8bce                 mov ecx, esi
// 005e2129  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e212e  e85d07e6ff           call 0x442890
// 005e2133  8b442434             mov eax, dword ptr [esp + 0x34]
// 005e2137  50                   push eax
// 005e2138  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005e213d  e8aebf0300           call 0x61e0f0
// 005e2142  6a18                 push 0x18
// 005e2144  c706c0e67800         mov dword ptr [esi], 0x78e6c0
// 005e214a  e8b9bf0300           call 0x61e108
// 005e214f  83c408               add esp, 8
// 005e2152  85c0                 test eax, eax
// 005e2154  7422                 je 0x5e2178
// 005e2156  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e215a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e215e  894808               mov dword ptr [eax + 8], ecx
// 005e2161  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e2165  c70040e47b00         mov dword ptr [eax], 0x7be440
// 005e216b  897004               mov dword ptr [eax + 4], esi
// 005e216e  895010               mov dword ptr [eax + 0x10], edx
// 005e2171  894814               mov dword ptr [eax + 0x14], ecx
// 005e2174  8bf8                 mov edi, eax
// 005e2176  eb02                 jmp 0x5e217a
// 005e2178  33ff                 xor edi, edi
// 005e217a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005e217d  3bf8                 cmp edi, eax
// 005e217f  7409                 je 0x5e218a
// 005e2181  50                   push eax
// 005e2182  e869bf0300           call 0x61e0f0
// 005e2187  83c404               add esp, 4
// 005e218a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e218e  897e18               mov dword ptr [esi + 0x18], edi
// 005e2191  5f                   pop edi
// 005e2192  8bc6                 mov eax, esi
// 005e2194  64890d00000000       mov dword ptr fs:[0], ecx
// 005e219b  5e                   pop esi
// 005e219c  83c414               add esp, 0x14
// 005e219f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
