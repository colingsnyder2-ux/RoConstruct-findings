// roc 2007-03 005a4fc0  unit: seg_005a0000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a4fc0
//
// 005a4fc0  6aff                 push -1
// 005a4fc2  6848be7500           push 0x75be48
// 005a4fc7  64a100000000         mov eax, dword ptr fs:[0]
// 005a4fcd  50                   push eax
// 005a4fce  64892500000000       mov dword ptr fs:[0], esp
// 005a4fd5  83ec08               sub esp, 8
// 005a4fd8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a4fdc  56                   push esi
// 005a4fdd  57                   push edi
// 005a4fde  8bf1                 mov esi, ecx
// 005a4fe0  89742408             mov dword ptr [esp + 8], esi
// 005a4fe4  50                   push eax
// 005a4fe5  51                   push ecx
// 005a4fe6  8bc4                 mov eax, esp
// 005a4fe8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005a4ff0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a4ff8  89642414             mov dword ptr [esp + 0x14], esp
// 005a4ffc  c70000000000         mov dword ptr [eax], 0
// 005a5002  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a5006  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a500a  51                   push ecx
// 005a500b  52                   push edx
// 005a500c  c644242801           mov byte ptr [esp + 0x28], 1
// 005a5011  e8ba33feff           call 0x5883d0
// 005a5016  50                   push eax
// 005a5017  8bce                 mov ecx, esi
// 005a5019  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a501e  e89df8e9ff           call 0x4448c0
// 005a5023  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a5027  50                   push eax
// 005a5028  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005a502d  e8be900700           call 0x61e0f0
// 005a5032  6a18                 push 0x18
// 005a5034  c70648bd7900         mov dword ptr [esi], 0x79bd48
// 005a503a  e8c9900700           call 0x61e108
// 005a503f  83c408               add esp, 8
// 005a5042  85c0                 test eax, eax
// 005a5044  7422                 je 0x5a5068
// 005a5046  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a504a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a504e  894808               mov dword ptr [eax + 8], ecx
// 005a5051  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a5055  c70058547b00         mov dword ptr [eax], 0x7b5458
// 005a505b  897004               mov dword ptr [eax + 4], esi
// 005a505e  895010               mov dword ptr [eax + 0x10], edx
// 005a5061  894814               mov dword ptr [eax + 0x14], ecx
// 005a5064  8bf8                 mov edi, eax
// 005a5066  eb02                 jmp 0x5a506a
// 005a5068  33ff                 xor edi, edi
// 005a506a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005a506d  3bf8                 cmp edi, eax
// 005a506f  7409                 je 0x5a507a
// 005a5071  50                   push eax
// 005a5072  e879900700           call 0x61e0f0
// 005a5077  83c404               add esp, 4
// 005a507a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a507e  897e18               mov dword ptr [esi + 0x18], edi
// 005a5081  5f                   pop edi
// 005a5082  8bc6                 mov eax, esi
// 005a5084  64890d00000000       mov dword ptr fs:[0], ecx
// 005a508b  5e                   pop esi
// 005a508c  83c414               add esp, 0x14
// 005a508f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
