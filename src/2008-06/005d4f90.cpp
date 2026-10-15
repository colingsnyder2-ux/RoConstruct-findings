// roc 2008-06 005d4f90  unit: RBX::VClothing::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d4f90
//
// 005d4f90  6aff                 push -1
// 005d4f92  68d8a17d00           push 0x7da1d8
// 005d4f97  64a100000000         mov eax, dword ptr fs:[0]
// 005d4f9d  50                   push eax
// 005d4f9e  64892500000000       mov dword ptr fs:[0], esp
// 005d4fa5  83ec08               sub esp, 8
// 005d4fa8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d4fac  56                   push esi
// 005d4fad  57                   push edi
// 005d4fae  8bf1                 mov esi, ecx
// 005d4fb0  89742408             mov dword ptr [esp + 8], esi
// 005d4fb4  50                   push eax
// 005d4fb5  51                   push ecx
// 005d4fb6  8bc4                 mov eax, esp
// 005d4fb8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005d4fc0  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005d4fc8  89642414             mov dword ptr [esp + 0x14], esp
// 005d4fcc  c70000000000         mov dword ptr [eax], 0
// 005d4fd2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d4fd6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005d4fda  51                   push ecx
// 005d4fdb  52                   push edx
// 005d4fdc  c644242801           mov byte ptr [esp + 0x28], 1
// 005d4fe1  e85ab2feff           call 0x5c0240
// 005d4fe6  50                   push eax
// 005d4fe7  8bce                 mov ecx, esi
// 005d4fe9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005d4fee  e88d61ebff           call 0x48b180
// 005d4ff3  6a18                 push 0x18
// 005d4ff5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005d4ffa  c70620c58300         mov dword ptr [esi], 0x83c520
// 005d5000  e81bb90c00           call 0x6a0920
// 005d5005  83c404               add esp, 4
// 005d5008  85c0                 test eax, eax
// 005d500a  7422                 je 0x5d502e
// 005d500c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d5010  c700a8c48300         mov dword ptr [eax], 0x83c4a8
// 005d5016  897004               mov dword ptr [eax + 4], esi
// 005d5019  894808               mov dword ptr [eax + 8], ecx
// 005d501c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005d5020  895010               mov dword ptr [eax + 0x10], edx
// 005d5023  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005d5027  894814               mov dword ptr [eax + 0x14], ecx
// 005d502a  8bf8                 mov edi, eax
// 005d502c  eb02                 jmp 0x5d5030
// 005d502e  33ff                 xor edi, edi
// 005d5030  8b4618               mov eax, dword ptr [esi + 0x18]
// 005d5033  3bf8                 cmp edi, eax
// 005d5035  740d                 je 0x5d5044
// 005d5037  85c0                 test eax, eax
// 005d5039  7409                 je 0x5d5044
// 005d503b  50                   push eax
// 005d503c  e839b60c00           call 0x6a067a
// 005d5041  83c404               add esp, 4
// 005d5044  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d5048  897e18               mov dword ptr [esi + 0x18], edi
// 005d504b  5f                   pop edi
// 005d504c  8bc6                 mov eax, esi
// 005d504e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5055  5e                   pop esi
// 005d5056  83c414               add esp, 0x14
// 005d5059  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
