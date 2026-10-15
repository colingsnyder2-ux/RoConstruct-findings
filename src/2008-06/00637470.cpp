// roc 2008-06 00637470  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637470
//
// 00637470  6aff                 push -1
// 00637472  68d8a17d00           push 0x7da1d8
// 00637477  64a100000000         mov eax, dword ptr fs:[0]
// 0063747d  50                   push eax
// 0063747e  64892500000000       mov dword ptr fs:[0], esp
// 00637485  83ec08               sub esp, 8
// 00637488  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063748c  56                   push esi
// 0063748d  57                   push edi
// 0063748e  8bf1                 mov esi, ecx
// 00637490  89742408             mov dword ptr [esp + 8], esi
// 00637494  50                   push eax
// 00637495  51                   push ecx
// 00637496  8bc4                 mov eax, esp
// 00637498  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006374a0  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 006374a8  89642414             mov dword ptr [esp + 0x14], esp
// 006374ac  c70000000000         mov dword ptr [eax], 0
// 006374b2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006374b6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006374ba  51                   push ecx
// 006374bb  52                   push edx
// 006374bc  c644242801           mov byte ptr [esp + 0x28], 1
// 006374c1  e88af6ffff           call 0x636b50
// 006374c6  50                   push eax
// 006374c7  8bce                 mov ecx, esi
// 006374c9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006374ce  e88dc7f2ff           call 0x563c60
// 006374d3  6a18                 push 0x18
// 006374d5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006374da  c706b48b8400         mov dword ptr [esi], 0x848bb4
// 006374e0  e83b940600           call 0x6a0920
// 006374e5  83c404               add esp, 4
// 006374e8  85c0                 test eax, eax
// 006374ea  7422                 je 0x63750e
// 006374ec  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006374f0  c7000c838400         mov dword ptr [eax], 0x84830c
// 006374f6  897004               mov dword ptr [eax + 4], esi
// 006374f9  894808               mov dword ptr [eax + 8], ecx
// 006374fc  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00637500  895010               mov dword ptr [eax + 0x10], edx
// 00637503  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00637507  894814               mov dword ptr [eax + 0x14], ecx
// 0063750a  8bf8                 mov edi, eax
// 0063750c  eb02                 jmp 0x637510
// 0063750e  33ff                 xor edi, edi
// 00637510  8b4618               mov eax, dword ptr [esi + 0x18]
// 00637513  3bf8                 cmp edi, eax
// 00637515  740d                 je 0x637524
// 00637517  85c0                 test eax, eax
// 00637519  7409                 je 0x637524
// 0063751b  50                   push eax
// 0063751c  e859910600           call 0x6a067a
// 00637521  83c404               add esp, 4
// 00637524  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00637528  897e18               mov dword ptr [esi + 0x18], edi
// 0063752b  5f                   pop edi
// 0063752c  8bc6                 mov eax, esi
// 0063752e  64890d00000000       mov dword ptr fs:[0], ecx
// 00637535  5e                   pop esi
// 00637536  83c414               add esp, 0x14
// 00637539  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
