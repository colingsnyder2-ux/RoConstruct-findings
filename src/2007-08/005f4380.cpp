// roc 2007-08 005f4380  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f4380
//
// 005f4380  6aff                 push -1
// 005f4382  6848b77500           push 0x75b748
// 005f4387  64a100000000         mov eax, dword ptr fs:[0]
// 005f438d  50                   push eax
// 005f438e  64892500000000       mov dword ptr fs:[0], esp
// 005f4395  83ec08               sub esp, 8
// 005f4398  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f439c  56                   push esi
// 005f439d  57                   push edi
// 005f439e  8bf1                 mov esi, ecx
// 005f43a0  89742408             mov dword ptr [esp + 8], esi
// 005f43a4  50                   push eax
// 005f43a5  51                   push ecx
// 005f43a6  8bc4                 mov eax, esp
// 005f43a8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005f43b0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f43b8  89642414             mov dword ptr [esp + 0x14], esp
// 005f43bc  c70000000000         mov dword ptr [eax], 0
// 005f43c2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f43c6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005f43ca  51                   push ecx
// 005f43cb  52                   push edx
// 005f43cc  c644242801           mov byte ptr [esp + 0x28], 1
// 005f43d1  e8faf5ffff           call 0x5f39d0
// 005f43d6  50                   push eax
// 005f43d7  8bce                 mov ecx, esi
// 005f43d9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f43de  e8edcaf3ff           call 0x530ed0
// 005f43e3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005f43e7  50                   push eax
// 005f43e8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005f43ed  e870b80300           call 0x62fc62
// 005f43f2  6a18                 push 0x18
// 005f43f4  c70668f17b00         mov dword ptr [esi], 0x7bf168
// 005f43fa  e8f7ba0300           call 0x62fef6
// 005f43ff  83c408               add esp, 8
// 005f4402  85c0                 test eax, eax
// 005f4404  7422                 je 0x5f4428
// 005f4406  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f440a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f440e  894808               mov dword ptr [eax + 8], ecx
// 005f4411  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f4415  c7009c077c00         mov dword ptr [eax], 0x7c079c
// 005f441b  897004               mov dword ptr [eax + 4], esi
// 005f441e  895010               mov dword ptr [eax + 0x10], edx
// 005f4421  894814               mov dword ptr [eax + 0x14], ecx
// 005f4424  8bf8                 mov edi, eax
// 005f4426  eb02                 jmp 0x5f442a
// 005f4428  33ff                 xor edi, edi
// 005f442a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005f442d  3bf8                 cmp edi, eax
// 005f442f  7409                 je 0x5f443a
// 005f4431  50                   push eax
// 005f4432  e82bb80300           call 0x62fc62
// 005f4437  83c404               add esp, 4
// 005f443a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f443e  897e18               mov dword ptr [esi + 0x18], edi
// 005f4441  5f                   pop edi
// 005f4442  8bc6                 mov eax, esi
// 005f4444  64890d00000000       mov dword ptr fs:[0], ecx
// 005f444b  5e                   pop esi
// 005f444c  83c414               add esp, 0x14
// 005f444f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
