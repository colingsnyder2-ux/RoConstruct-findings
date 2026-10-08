// roc 2007-03 005e2b50  unit: seg_005e0000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e2b50
//
// 005e2b50  6aff                 push -1
// 005e2b52  6848be7500           push 0x75be48
// 005e2b57  64a100000000         mov eax, dword ptr fs:[0]
// 005e2b5d  50                   push eax
// 005e2b5e  64892500000000       mov dword ptr fs:[0], esp
// 005e2b65  83ec08               sub esp, 8
// 005e2b68  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e2b6c  56                   push esi
// 005e2b6d  57                   push edi
// 005e2b6e  8bf1                 mov esi, ecx
// 005e2b70  89742408             mov dword ptr [esp + 8], esi
// 005e2b74  50                   push eax
// 005e2b75  51                   push ecx
// 005e2b76  8bc4                 mov eax, esp
// 005e2b78  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005e2b80  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e2b88  89642414             mov dword ptr [esp + 0x14], esp
// 005e2b8c  c70000000000         mov dword ptr [eax], 0
// 005e2b92  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e2b96  8b542428             mov edx, dword ptr [esp + 0x28]
// 005e2b9a  51                   push ecx
// 005e2b9b  52                   push edx
// 005e2b9c  c644242801           mov byte ptr [esp + 0x28], 1
// 005e2ba1  e8aaf2ffff           call 0x5e1e50
// 005e2ba6  50                   push eax
// 005e2ba7  8bce                 mov ecx, esi
// 005e2ba9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e2bae  e83d34eaff           call 0x485ff0
// 005e2bb3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005e2bb7  50                   push eax
// 005e2bb8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005e2bbd  e82eb50300           call 0x61e0f0
// 005e2bc2  6a18                 push 0x18
// 005e2bc4  c70664497b00         mov dword ptr [esi], 0x7b4964
// 005e2bca  e839b50300           call 0x61e108
// 005e2bcf  83c408               add esp, 8
// 005e2bd2  85c0                 test eax, eax
// 005e2bd4  7422                 je 0x5e2bf8
// 005e2bd6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e2bda  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e2bde  894808               mov dword ptr [eax + 8], ecx
// 005e2be1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e2be5  c700a0e47b00         mov dword ptr [eax], 0x7be4a0
// 005e2beb  897004               mov dword ptr [eax + 4], esi
// 005e2bee  895010               mov dword ptr [eax + 0x10], edx
// 005e2bf1  894814               mov dword ptr [eax + 0x14], ecx
// 005e2bf4  8bf8                 mov edi, eax
// 005e2bf6  eb02                 jmp 0x5e2bfa
// 005e2bf8  33ff                 xor edi, edi
// 005e2bfa  8b4618               mov eax, dword ptr [esi + 0x18]
// 005e2bfd  3bf8                 cmp edi, eax
// 005e2bff  7409                 je 0x5e2c0a
// 005e2c01  50                   push eax
// 005e2c02  e8e9b40300           call 0x61e0f0
// 005e2c07  83c404               add esp, 4
// 005e2c0a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005e2c0e  897e18               mov dword ptr [esi + 0x18], edi
// 005e2c11  5f                   pop edi
// 005e2c12  8bc6                 mov eax, esi
// 005e2c14  64890d00000000       mov dword ptr fs:[0], ecx
// 005e2c1b  5e                   pop esi
// 005e2c1c  83c414               add esp, 0x14
// 005e2c1f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
