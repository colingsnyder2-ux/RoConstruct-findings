// roc 2008-06 005d4df0  unit: RBX::VClothing::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d4df0
//
// 005d4df0  6aff                 push -1
// 005d4df2  68d8a17d00           push 0x7da1d8
// 005d4df7  64a100000000         mov eax, dword ptr fs:[0]
// 005d4dfd  50                   push eax
// 005d4dfe  64892500000000       mov dword ptr fs:[0], esp
// 005d4e05  83ec08               sub esp, 8
// 005d4e08  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d4e0c  56                   push esi
// 005d4e0d  57                   push edi
// 005d4e0e  8bf1                 mov esi, ecx
// 005d4e10  89742408             mov dword ptr [esp + 8], esi
// 005d4e14  50                   push eax
// 005d4e15  51                   push ecx
// 005d4e16  8bc4                 mov eax, esp
// 005d4e18  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005d4e20  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005d4e28  89642414             mov dword ptr [esp + 0x14], esp
// 005d4e2c  c70000000000         mov dword ptr [eax], 0
// 005d4e32  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d4e36  8b542428             mov edx, dword ptr [esp + 0x28]
// 005d4e3a  51                   push ecx
// 005d4e3b  52                   push edx
// 005d4e3c  c644242801           mov byte ptr [esp + 0x28], 1
// 005d4e41  e8aabbebff           call 0x4909f0
// 005d4e46  50                   push eax
// 005d4e47  8bce                 mov ecx, esi
// 005d4e49  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005d4e4e  e84d2afcff           call 0x5978a0
// 005d4e53  6a18                 push 0x18
// 005d4e55  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005d4e5a  c706ecc48300         mov dword ptr [esi], 0x83c4ec
// 005d4e60  e8bbba0c00           call 0x6a0920
// 005d4e65  83c404               add esp, 4
// 005d4e68  85c0                 test eax, eax
// 005d4e6a  7422                 je 0x5d4e8e
// 005d4e6c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d4e70  c70080c48300         mov dword ptr [eax], 0x83c480
// 005d4e76  897004               mov dword ptr [eax + 4], esi
// 005d4e79  894808               mov dword ptr [eax + 8], ecx
// 005d4e7c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005d4e80  895010               mov dword ptr [eax + 0x10], edx
// 005d4e83  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005d4e87  894814               mov dword ptr [eax + 0x14], ecx
// 005d4e8a  8bf8                 mov edi, eax
// 005d4e8c  eb02                 jmp 0x5d4e90
// 005d4e8e  33ff                 xor edi, edi
// 005d4e90  8b4618               mov eax, dword ptr [esi + 0x18]
// 005d4e93  3bf8                 cmp edi, eax
// 005d4e95  740d                 je 0x5d4ea4
// 005d4e97  85c0                 test eax, eax
// 005d4e99  7409                 je 0x5d4ea4
// 005d4e9b  50                   push eax
// 005d4e9c  e8d9b70c00           call 0x6a067a
// 005d4ea1  83c404               add esp, 4
// 005d4ea4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d4ea8  897e18               mov dword ptr [esi + 0x18], edi
// 005d4eab  5f                   pop edi
// 005d4eac  8bc6                 mov eax, esi
// 005d4eae  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4eb5  5e                   pop esi
// 005d4eb6  83c414               add esp, 0x14
// 005d4eb9  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
