// roc 2007-03 005e24b0  unit: seg_005e0000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e24b0
//
// 005e24b0  6aff                 push -1
// 005e24b2  6848be7500           push 0x75be48
// 005e24b7  64a100000000         mov eax, dword ptr fs:[0]
// 005e24bd  50                   push eax
// 005e24be  64892500000000       mov dword ptr fs:[0], esp
// 005e24c5  83ec08               sub esp, 8
// 005e24c8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e24cc  56                   push esi
// 005e24cd  57                   push edi
// 005e24ce  8bf1                 mov esi, ecx
// 005e24d0  89742408             mov dword ptr [esp + 8], esi
// 005e24d4  50                   push eax
// 005e24d5  51                   push ecx
// 005e24d6  8bc4                 mov eax, esp
// 005e24d8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005e24e0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e24e8  89642414             mov dword ptr [esp + 0x14], esp
// 005e24ec  c70000000000         mov dword ptr [eax], 0
// 005e24f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e24f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e24fa  51                   push ecx
// 005e24fb  52                   push edx
// 005e24fc  c644242801           mov byte ptr [esp + 0x28], 1
// 005e2501  e8faf7ffff           call 0x5e1d00
// 005e2506  50                   push eax
// 005e2507  8bce                 mov ecx, esi
// 005e2509  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e250e  e8dd13f9ff           call 0x5738f0
// 005e2513  8b442434             mov eax, dword ptr [esp + 0x34]
// 005e2517  50                   push eax
// 005e2518  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005e251d  e8cebb0300           call 0x61e0f0
// 005e2522  6a18                 push 0x18
// 005e2524  c70690cf7b00         mov dword ptr [esi], 0x7bcf90
// 005e252a  e8d9bb0300           call 0x61e108
// 005e252f  83c408               add esp, 8
// 005e2532  85c0                 test eax, eax
// 005e2534  7422                 je 0x5e2558
// 005e2536  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e253a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e253e  894808               mov dword ptr [eax + 8], ecx
// 005e2541  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e2545  c70070e47b00         mov dword ptr [eax], 0x7be470
// 005e254b  897004               mov dword ptr [eax + 4], esi
// 005e254e  895010               mov dword ptr [eax + 0x10], edx
// 005e2551  894814               mov dword ptr [eax + 0x14], ecx
// 005e2554  8bf8                 mov edi, eax
// 005e2556  eb02                 jmp 0x5e255a
// 005e2558  33ff                 xor edi, edi
// 005e255a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005e255d  3bf8                 cmp edi, eax
// 005e255f  7409                 je 0x5e256a
// 005e2561  50                   push eax
// 005e2562  e889bb0300           call 0x61e0f0
// 005e2567  83c404               add esp, 4
// 005e256a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e256e  897e18               mov dword ptr [esi + 0x18], edi
// 005e2571  5f                   pop edi
// 005e2572  8bc6                 mov eax, esi
// 005e2574  64890d00000000       mov dword ptr fs:[0], ecx
// 005e257b  5e                   pop esi
// 005e257c  83c414               add esp, 0x14
// 005e257f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
