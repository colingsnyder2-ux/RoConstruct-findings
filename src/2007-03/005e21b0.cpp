// roc 2007-03 005e21b0  unit: seg_005e0000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e21b0
//
// 005e21b0  6aff                 push -1
// 005e21b2  6848be7500           push 0x75be48
// 005e21b7  64a100000000         mov eax, dword ptr fs:[0]
// 005e21bd  50                   push eax
// 005e21be  64892500000000       mov dword ptr fs:[0], esp
// 005e21c5  83ec08               sub esp, 8
// 005e21c8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e21cc  56                   push esi
// 005e21cd  57                   push edi
// 005e21ce  8bf1                 mov esi, ecx
// 005e21d0  89742408             mov dword ptr [esp + 8], esi
// 005e21d4  50                   push eax
// 005e21d5  51                   push ecx
// 005e21d6  8bc4                 mov eax, esp
// 005e21d8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005e21e0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e21e8  89642414             mov dword ptr [esp + 0x14], esp
// 005e21ec  c70000000000         mov dword ptr [eax], 0
// 005e21f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e21f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e21fa  51                   push ecx
// 005e21fb  52                   push edx
// 005e21fc  c644242801           mov byte ptr [esp + 0x28], 1
// 005e2201  e81afaffff           call 0x5e1c20
// 005e2206  50                   push eax
// 005e2207  8bce                 mov ecx, esi
// 005e2209  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e220e  e8ad26e6ff           call 0x4448c0
// 005e2213  8b442434             mov eax, dword ptr [esp + 0x34]
// 005e2217  50                   push eax
// 005e2218  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005e221d  e8cebe0300           call 0x61e0f0
// 005e2222  6a18                 push 0x18
// 005e2224  c70648bd7900         mov dword ptr [esi], 0x79bd48
// 005e222a  e8d9be0300           call 0x61e108
// 005e222f  83c408               add esp, 8
// 005e2232  85c0                 test eax, eax
// 005e2234  7422                 je 0x5e2258
// 005e2236  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e223a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e223e  894808               mov dword ptr [eax + 8], ecx
// 005e2241  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e2245  c70050e47b00         mov dword ptr [eax], 0x7be450
// 005e224b  897004               mov dword ptr [eax + 4], esi
// 005e224e  895010               mov dword ptr [eax + 0x10], edx
// 005e2251  894814               mov dword ptr [eax + 0x14], ecx
// 005e2254  8bf8                 mov edi, eax
// 005e2256  eb02                 jmp 0x5e225a
// 005e2258  33ff                 xor edi, edi
// 005e225a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005e225d  3bf8                 cmp edi, eax
// 005e225f  7409                 je 0x5e226a
// 005e2261  50                   push eax
// 005e2262  e889be0300           call 0x61e0f0
// 005e2267  83c404               add esp, 4
// 005e226a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e226e  897e18               mov dword ptr [esi + 0x18], edi
// 005e2271  5f                   pop edi
// 005e2272  8bc6                 mov eax, esi
// 005e2274  64890d00000000       mov dword ptr fs:[0], ecx
// 005e227b  5e                   pop esi
// 005e227c  83c414               add esp, 0x14
// 005e227f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
