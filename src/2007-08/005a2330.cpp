// roc 2007-08 005a2330  unit: RBX::VSkin::?$FactoryProduct  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a2330
//
// 005a2330  6aff                 push -1
// 005a2332  6848b77500           push 0x75b748
// 005a2337  64a100000000         mov eax, dword ptr fs:[0]
// 005a233d  50                   push eax
// 005a233e  64892500000000       mov dword ptr fs:[0], esp
// 005a2345  83ec08               sub esp, 8
// 005a2348  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a234c  56                   push esi
// 005a234d  57                   push edi
// 005a234e  8bf1                 mov esi, ecx
// 005a2350  89742408             mov dword ptr [esp + 8], esi
// 005a2354  50                   push eax
// 005a2355  51                   push ecx
// 005a2356  8bc4                 mov eax, esp
// 005a2358  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005a2360  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a2368  89642414             mov dword ptr [esp + 0x14], esp
// 005a236c  c70000000000         mov dword ptr [eax], 0
// 005a2372  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a2376  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a237a  51                   push ecx
// 005a237b  52                   push edx
// 005a237c  c644242801           mov byte ptr [esp + 0x28], 1
// 005a2381  e88abcfeff           call 0x58e010
// 005a2386  50                   push eax
// 005a2387  8bce                 mov ecx, esi
// 005a2389  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a238e  e84d5deeff           call 0x4880e0
// 005a2393  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a2397  50                   push eax
// 005a2398  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005a239d  e8c0d80800           call 0x62fc62
// 005a23a2  6a18                 push 0x18
// 005a23a4  c70620427b00         mov dword ptr [esi], 0x7b4220
// 005a23aa  e847db0800           call 0x62fef6
// 005a23af  83c408               add esp, 8
// 005a23b2  85c0                 test eax, eax
// 005a23b4  7422                 je 0x5a23d8
// 005a23b6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a23ba  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a23be  894808               mov dword ptr [eax + 8], ecx
// 005a23c1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a23c5  c70028417b00         mov dword ptr [eax], 0x7b4128
// 005a23cb  897004               mov dword ptr [eax + 4], esi
// 005a23ce  895010               mov dword ptr [eax + 0x10], edx
// 005a23d1  894814               mov dword ptr [eax + 0x14], ecx
// 005a23d4  8bf8                 mov edi, eax
// 005a23d6  eb02                 jmp 0x5a23da
// 005a23d8  33ff                 xor edi, edi
// 005a23da  8b4618               mov eax, dword ptr [esi + 0x18]
// 005a23dd  3bf8                 cmp edi, eax
// 005a23df  7409                 je 0x5a23ea
// 005a23e1  50                   push eax
// 005a23e2  e87bd80800           call 0x62fc62
// 005a23e7  83c404               add esp, 4
// 005a23ea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a23ee  897e18               mov dword ptr [esi + 0x18], edi
// 005a23f1  5f                   pop edi
// 005a23f2  8bc6                 mov eax, esi
// 005a23f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005a23fb  5e                   pop esi
// 005a23fc  83c414               add esp, 0x14
// 005a23ff  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
