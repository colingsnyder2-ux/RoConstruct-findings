// roc 2007-03 005a2260  unit: seg_005a0000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a2260
//
// 005a2260  6aff                 push -1
// 005a2262  6848be7500           push 0x75be48
// 005a2267  64a100000000         mov eax, dword ptr fs:[0]
// 005a226d  50                   push eax
// 005a226e  64892500000000       mov dword ptr fs:[0], esp
// 005a2275  83ec08               sub esp, 8
// 005a2278  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a227c  56                   push esi
// 005a227d  57                   push edi
// 005a227e  8bf1                 mov esi, ecx
// 005a2280  89742408             mov dword ptr [esp + 8], esi
// 005a2284  50                   push eax
// 005a2285  51                   push ecx
// 005a2286  8bc4                 mov eax, esp
// 005a2288  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005a2290  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a2298  89642414             mov dword ptr [esp + 0x14], esp
// 005a229c  c70000000000         mov dword ptr [eax], 0
// 005a22a2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a22a6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a22aa  51                   push ecx
// 005a22ab  52                   push edx
// 005a22ac  c644242801           mov byte ptr [esp + 0x28], 1
// 005a22b1  e80a65feff           call 0x5887c0
// 005a22b6  50                   push eax
// 005a22b7  8bce                 mov ecx, esi
// 005a22b9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a22be  e82d3deeff           call 0x485ff0
// 005a22c3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a22c7  50                   push eax
// 005a22c8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005a22cd  e81ebe0700           call 0x61e0f0
// 005a22d2  6a18                 push 0x18
// 005a22d4  c70664497b00         mov dword ptr [esi], 0x7b4964
// 005a22da  e829be0700           call 0x61e108
// 005a22df  83c408               add esp, 8
// 005a22e2  85c0                 test eax, eax
// 005a22e4  7422                 je 0x5a2308
// 005a22e6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a22ea  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a22ee  894808               mov dword ptr [eax + 8], ecx
// 005a22f1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a22f5  c7006c487b00         mov dword ptr [eax], 0x7b486c
// 005a22fb  897004               mov dword ptr [eax + 4], esi
// 005a22fe  895010               mov dword ptr [eax + 0x10], edx
// 005a2301  894814               mov dword ptr [eax + 0x14], ecx
// 005a2304  8bf8                 mov edi, eax
// 005a2306  eb02                 jmp 0x5a230a
// 005a2308  33ff                 xor edi, edi
// 005a230a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005a230d  3bf8                 cmp edi, eax
// 005a230f  7409                 je 0x5a231a
// 005a2311  50                   push eax
// 005a2312  e8d9bd0700           call 0x61e0f0
// 005a2317  83c404               add esp, 4
// 005a231a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a231e  897e18               mov dword ptr [esi + 0x18], edi
// 005a2321  5f                   pop edi
// 005a2322  8bc6                 mov eax, esi
// 005a2324  64890d00000000       mov dword ptr fs:[0], ecx
// 005a232b  5e                   pop esi
// 005a232c  83c414               add esp, 0x14
// 005a232f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
