// roc 2007-08 005f45a0  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f45a0
//
// 005f45a0  6aff                 push -1
// 005f45a2  6848b77500           push 0x75b748
// 005f45a7  64a100000000         mov eax, dword ptr fs:[0]
// 005f45ad  50                   push eax
// 005f45ae  64892500000000       mov dword ptr fs:[0], esp
// 005f45b5  83ec08               sub esp, 8
// 005f45b8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f45bc  56                   push esi
// 005f45bd  57                   push edi
// 005f45be  8bf1                 mov esi, ecx
// 005f45c0  89742408             mov dword ptr [esp + 8], esi
// 005f45c4  50                   push eax
// 005f45c5  51                   push ecx
// 005f45c6  8bc4                 mov eax, esp
// 005f45c8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005f45d0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f45d8  89642414             mov dword ptr [esp + 0x14], esp
// 005f45dc  c70000000000         mov dword ptr [eax], 0
// 005f45e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f45e6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005f45ea  51                   push ecx
// 005f45eb  52                   push edx
// 005f45ec  c644242801           mov byte ptr [esp + 0x28], 1
// 005f45f1  e84af4ffff           call 0x5f3a40
// 005f45f6  50                   push eax
// 005f45f7  8bce                 mov ecx, esi
// 005f45f9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f45fe  e84d09f8ff           call 0x574f50
// 005f4603  8b442434             mov eax, dword ptr [esp + 0x34]
// 005f4607  50                   push eax
// 005f4608  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005f460d  e850b60300           call 0x62fc62
// 005f4612  6a18                 push 0x18
// 005f4614  c70694087c00         mov dword ptr [esi], 0x7c0894
// 005f461a  e8d7b80300           call 0x62fef6
// 005f461f  83c408               add esp, 8
// 005f4622  85c0                 test eax, eax
// 005f4624  7422                 je 0x5f4648
// 005f4626  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f462a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f462e  894808               mov dword ptr [eax + 8], ecx
// 005f4631  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f4635  c700ac077c00         mov dword ptr [eax], 0x7c07ac
// 005f463b  897004               mov dword ptr [eax + 4], esi
// 005f463e  895010               mov dword ptr [eax + 0x10], edx
// 005f4641  894814               mov dword ptr [eax + 0x14], ecx
// 005f4644  8bf8                 mov edi, eax
// 005f4646  eb02                 jmp 0x5f464a
// 005f4648  33ff                 xor edi, edi
// 005f464a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005f464d  3bf8                 cmp edi, eax
// 005f464f  7409                 je 0x5f465a
// 005f4651  50                   push eax
// 005f4652  e80bb60300           call 0x62fc62
// 005f4657  83c404               add esp, 4
// 005f465a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f465e  897e18               mov dword ptr [esi + 0x18], edi
// 005f4661  5f                   pop edi
// 005f4662  8bc6                 mov eax, esi
// 005f4664  64890d00000000       mov dword ptr fs:[0], ecx
// 005f466b  5e                   pop esi
// 005f466c  83c414               add esp, 0x14
// 005f466f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
