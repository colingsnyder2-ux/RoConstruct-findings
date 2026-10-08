// roc 2007-03 005e2290  unit: seg_005e0000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e2290
//
// 005e2290  6aff                 push -1
// 005e2292  6848be7500           push 0x75be48
// 005e2297  64a100000000         mov eax, dword ptr fs:[0]
// 005e229d  50                   push eax
// 005e229e  64892500000000       mov dword ptr fs:[0], esp
// 005e22a5  83ec08               sub esp, 8
// 005e22a8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e22ac  56                   push esi
// 005e22ad  57                   push edi
// 005e22ae  8bf1                 mov esi, ecx
// 005e22b0  89742408             mov dword ptr [esp + 8], esi
// 005e22b4  50                   push eax
// 005e22b5  51                   push ecx
// 005e22b6  8bc4                 mov eax, esp
// 005e22b8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005e22c0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e22c8  89642414             mov dword ptr [esp + 0x14], esp
// 005e22cc  c70000000000         mov dword ptr [eax], 0
// 005e22d2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e22d6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e22da  51                   push ecx
// 005e22db  52                   push edx
// 005e22dc  c644242801           mov byte ptr [esp + 0x28], 1
// 005e22e1  e8aaf9ffff           call 0x5e1c90
// 005e22e6  50                   push eax
// 005e22e7  8bce                 mov ecx, esi
// 005e22e9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e22ee  e82d06e6ff           call 0x442920
// 005e22f3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005e22f7  50                   push eax
// 005e22f8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005e22fd  e8eebd0300           call 0x61e0f0
// 005e2302  6a18                 push 0x18
// 005e2304  c706e8e67800         mov dword ptr [esi], 0x78e6e8
// 005e230a  e8f9bd0300           call 0x61e108
// 005e230f  83c408               add esp, 8
// 005e2312  85c0                 test eax, eax
// 005e2314  7422                 je 0x5e2338
// 005e2316  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e231a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e231e  894808               mov dword ptr [eax + 8], ecx
// 005e2321  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e2325  c70060e47b00         mov dword ptr [eax], 0x7be460
// 005e232b  897004               mov dword ptr [eax + 4], esi
// 005e232e  895010               mov dword ptr [eax + 0x10], edx
// 005e2331  894814               mov dword ptr [eax + 0x14], ecx
// 005e2334  8bf8                 mov edi, eax
// 005e2336  eb02                 jmp 0x5e233a
// 005e2338  33ff                 xor edi, edi
// 005e233a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005e233d  3bf8                 cmp edi, eax
// 005e233f  7409                 je 0x5e234a
// 005e2341  50                   push eax
// 005e2342  e8a9bd0300           call 0x61e0f0
// 005e2347  83c404               add esp, 4
// 005e234a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e234e  897e18               mov dword ptr [esi + 0x18], edi
// 005e2351  5f                   pop edi
// 005e2352  8bc6                 mov eax, esi
// 005e2354  64890d00000000       mov dword ptr fs:[0], ecx
// 005e235b  5e                   pop esi
// 005e235c  83c414               add esp, 0x14
// 005e235f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
