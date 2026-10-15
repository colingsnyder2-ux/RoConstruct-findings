// roc 2008-06 005d4ec0  unit: RBX::VClothing::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d4ec0
//
// 005d4ec0  6aff                 push -1
// 005d4ec2  68d8a17d00           push 0x7da1d8
// 005d4ec7  64a100000000         mov eax, dword ptr fs:[0]
// 005d4ecd  50                   push eax
// 005d4ece  64892500000000       mov dword ptr fs:[0], esp
// 005d4ed5  83ec08               sub esp, 8
// 005d4ed8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d4edc  56                   push esi
// 005d4edd  57                   push edi
// 005d4ede  8bf1                 mov esi, ecx
// 005d4ee0  89742408             mov dword ptr [esp + 8], esi
// 005d4ee4  50                   push eax
// 005d4ee5  51                   push ecx
// 005d4ee6  8bc4                 mov eax, esp
// 005d4ee8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005d4ef0  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005d4ef8  89642414             mov dword ptr [esp + 0x14], esp
// 005d4efc  c70000000000         mov dword ptr [eax], 0
// 005d4f02  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d4f06  8b542428             mov edx, dword ptr [esp + 0x28]
// 005d4f0a  51                   push ecx
// 005d4f0b  52                   push edx
// 005d4f0c  c644242801           mov byte ptr [esp + 0x28], 1
// 005d4f11  e89afdffff           call 0x5d4cb0
// 005d4f16  50                   push eax
// 005d4f17  8bce                 mov ecx, esi
// 005d4f19  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005d4f1e  e85d62ebff           call 0x48b180
// 005d4f23  6a18                 push 0x18
// 005d4f25  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005d4f2a  c70620c58300         mov dword ptr [esi], 0x83c520
// 005d4f30  e8ebb90c00           call 0x6a0920
// 005d4f35  83c404               add esp, 4
// 005d4f38  85c0                 test eax, eax
// 005d4f3a  7422                 je 0x5d4f5e
// 005d4f3c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d4f40  c70094c48300         mov dword ptr [eax], 0x83c494
// 005d4f46  897004               mov dword ptr [eax + 4], esi
// 005d4f49  894808               mov dword ptr [eax + 8], ecx
// 005d4f4c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005d4f50  895010               mov dword ptr [eax + 0x10], edx
// 005d4f53  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005d4f57  894814               mov dword ptr [eax + 0x14], ecx
// 005d4f5a  8bf8                 mov edi, eax
// 005d4f5c  eb02                 jmp 0x5d4f60
// 005d4f5e  33ff                 xor edi, edi
// 005d4f60  8b4618               mov eax, dword ptr [esi + 0x18]
// 005d4f63  3bf8                 cmp edi, eax
// 005d4f65  740d                 je 0x5d4f74
// 005d4f67  85c0                 test eax, eax
// 005d4f69  7409                 je 0x5d4f74
// 005d4f6b  50                   push eax
// 005d4f6c  e809b70c00           call 0x6a067a
// 005d4f71  83c404               add esp, 4
// 005d4f74  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d4f78  897e18               mov dword ptr [esi + 0x18], edi
// 005d4f7b  5f                   pop edi
// 005d4f7c  8bc6                 mov eax, esi
// 005d4f7e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4f85  5e                   pop esi
// 005d4f86  83c414               add esp, 0x14
// 005d4f89  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
