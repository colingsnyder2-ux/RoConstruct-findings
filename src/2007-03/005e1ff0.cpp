// roc 2007-03 005e1ff0  unit: seg_005e0000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e1ff0
//
// 005e1ff0  6aff                 push -1
// 005e1ff2  6848be7500           push 0x75be48
// 005e1ff7  64a100000000         mov eax, dword ptr fs:[0]
// 005e1ffd  50                   push eax
// 005e1ffe  64892500000000       mov dword ptr fs:[0], esp
// 005e2005  83ec08               sub esp, 8
// 005e2008  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e200c  56                   push esi
// 005e200d  57                   push edi
// 005e200e  8bf1                 mov esi, ecx
// 005e2010  89742408             mov dword ptr [esp + 8], esi
// 005e2014  50                   push eax
// 005e2015  51                   push ecx
// 005e2016  8bc4                 mov eax, esp
// 005e2018  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005e2020  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e2028  89642414             mov dword ptr [esp + 0x14], esp
// 005e202c  c70000000000         mov dword ptr [eax], 0
// 005e2032  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e2036  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e203a  51                   push ecx
// 005e203b  52                   push edx
// 005e203c  c644242801           mov byte ptr [esp + 0x28], 1
// 005e2041  e8fafaffff           call 0x5e1b40
// 005e2046  50                   push eax
// 005e2047  8bce                 mov ecx, esi
// 005e2049  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e204e  e84d09e6ff           call 0x4429a0
// 005e2053  8b442434             mov eax, dword ptr [esp + 0x34]
// 005e2057  50                   push eax
// 005e2058  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005e205d  e88ec00300           call 0x61e0f0
// 005e2062  6a18                 push 0x18
// 005e2064  c70610e77800         mov dword ptr [esi], 0x78e710
// 005e206a  e899c00300           call 0x61e108
// 005e206f  83c408               add esp, 8
// 005e2072  85c0                 test eax, eax
// 005e2074  7422                 je 0x5e2098
// 005e2076  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e207a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e207e  894808               mov dword ptr [eax + 8], ecx
// 005e2081  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e2085  c70030e47b00         mov dword ptr [eax], 0x7be430
// 005e208b  897004               mov dword ptr [eax + 4], esi
// 005e208e  895010               mov dword ptr [eax + 0x10], edx
// 005e2091  894814               mov dword ptr [eax + 0x14], ecx
// 005e2094  8bf8                 mov edi, eax
// 005e2096  eb02                 jmp 0x5e209a
// 005e2098  33ff                 xor edi, edi
// 005e209a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005e209d  3bf8                 cmp edi, eax
// 005e209f  7409                 je 0x5e20aa
// 005e20a1  50                   push eax
// 005e20a2  e849c00300           call 0x61e0f0
// 005e20a7  83c404               add esp, 4
// 005e20aa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e20ae  897e18               mov dword ptr [esi + 0x18], edi
// 005e20b1  5f                   pop edi
// 005e20b2  8bc6                 mov eax, esi
// 005e20b4  64890d00000000       mov dword ptr fs:[0], ecx
// 005e20bb  5e                   pop esi
// 005e20bc  83c414               add esp, 0x14
// 005e20bf  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
