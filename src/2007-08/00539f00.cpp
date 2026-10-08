// roc 2007-08 00539f00  unit: RBX::Reflection::VValue::V?$vector::?$holder  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00539f00
//
// 00539f00  6aff                 push -1
// 00539f02  6848b77500           push 0x75b748
// 00539f07  64a100000000         mov eax, dword ptr fs:[0]
// 00539f0d  50                   push eax
// 00539f0e  64892500000000       mov dword ptr fs:[0], esp
// 00539f15  83ec08               sub esp, 8
// 00539f18  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00539f1c  56                   push esi
// 00539f1d  57                   push edi
// 00539f1e  8bf1                 mov esi, ecx
// 00539f20  89742408             mov dword ptr [esp + 8], esi
// 00539f24  50                   push eax
// 00539f25  51                   push ecx
// 00539f26  8bc4                 mov eax, esp
// 00539f28  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00539f30  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00539f38  89642414             mov dword ptr [esp + 0x14], esp
// 00539f3c  c70000000000         mov dword ptr [eax], 0
// 00539f42  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00539f46  8b542428             mov edx, dword ptr [esp + 0x28]
// 00539f4a  51                   push ecx
// 00539f4b  52                   push edx
// 00539f4c  c644242801           mov byte ptr [esp + 0x28], 1
// 00539f51  e8fafeffff           call 0x539e50
// 00539f56  50                   push eax
// 00539f57  8bce                 mov ecx, esi
// 00539f59  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00539f5e  e8fd8df0ff           call 0x442d60
// 00539f63  8b442434             mov eax, dword ptr [esp + 0x34]
// 00539f67  50                   push eax
// 00539f68  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00539f6d  e8f05c0f00           call 0x62fc62
// 00539f72  6a18                 push 0x18
// 00539f74  c706ccf77800         mov dword ptr [esi], 0x78f7cc
// 00539f7a  e8775f0f00           call 0x62fef6
// 00539f7f  83c408               add esp, 8
// 00539f82  85c0                 test eax, eax
// 00539f84  7422                 je 0x539fa8
// 00539f86  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00539f8a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00539f8e  894808               mov dword ptr [eax + 8], ecx
// 00539f91  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00539f95  c700d0577a00         mov dword ptr [eax], 0x7a57d0
// 00539f9b  897004               mov dword ptr [eax + 4], esi
// 00539f9e  895010               mov dword ptr [eax + 0x10], edx
// 00539fa1  894814               mov dword ptr [eax + 0x14], ecx
// 00539fa4  8bf8                 mov edi, eax
// 00539fa6  eb02                 jmp 0x539faa
// 00539fa8  33ff                 xor edi, edi
// 00539faa  8b4618               mov eax, dword ptr [esi + 0x18]
// 00539fad  3bf8                 cmp edi, eax
// 00539faf  7409                 je 0x539fba
// 00539fb1  50                   push eax
// 00539fb2  e8ab5c0f00           call 0x62fc62
// 00539fb7  83c404               add esp, 4
// 00539fba  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00539fbe  897e18               mov dword ptr [esi + 0x18], edi
// 00539fc1  5f                   pop edi
// 00539fc2  8bc6                 mov eax, esi
// 00539fc4  64890d00000000       mov dword ptr fs:[0], ecx
// 00539fcb  5e                   pop esi
// 00539fcc  83c414               add esp, 0x14
// 00539fcf  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
