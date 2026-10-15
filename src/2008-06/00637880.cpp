// roc 2008-06 00637880  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637880
//
// 00637880  6aff                 push -1
// 00637882  68d8a17d00           push 0x7da1d8
// 00637887  64a100000000         mov eax, dword ptr fs:[0]
// 0063788d  50                   push eax
// 0063788e  64892500000000       mov dword ptr fs:[0], esp
// 00637895  83ec08               sub esp, 8
// 00637898  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063789c  56                   push esi
// 0063789d  57                   push edi
// 0063789e  8bf1                 mov esi, ecx
// 006378a0  89742408             mov dword ptr [esp + 8], esi
// 006378a4  50                   push eax
// 006378a5  51                   push ecx
// 006378a6  8bc4                 mov eax, esp
// 006378a8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006378b0  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 006378b8  89642414             mov dword ptr [esp + 0x14], esp
// 006378bc  c70000000000         mov dword ptr [eax], 0
// 006378c2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006378c6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006378ca  51                   push ecx
// 006378cb  52                   push edx
// 006378cc  c644242801           mov byte ptr [esp + 0x28], 1
// 006378d1  e8baf8ffff           call 0x637190
// 006378d6  50                   push eax
// 006378d7  8bce                 mov ecx, esi
// 006378d9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006378de  e89d38e5ff           call 0x48b180
// 006378e3  6a18                 push 0x18
// 006378e5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006378ea  c70620c58300         mov dword ptr [esi], 0x83c520
// 006378f0  e82b900600           call 0x6a0920
// 006378f5  83c404               add esp, 4
// 006378f8  85c0                 test eax, eax
// 006378fa  7422                 je 0x63791e
// 006378fc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00637900  c70070838400         mov dword ptr [eax], 0x848370
// 00637906  897004               mov dword ptr [eax + 4], esi
// 00637909  894808               mov dword ptr [eax + 8], ecx
// 0063790c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00637910  895010               mov dword ptr [eax + 0x10], edx
// 00637913  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00637917  894814               mov dword ptr [eax + 0x14], ecx
// 0063791a  8bf8                 mov edi, eax
// 0063791c  eb02                 jmp 0x637920
// 0063791e  33ff                 xor edi, edi
// 00637920  8b4618               mov eax, dword ptr [esi + 0x18]
// 00637923  3bf8                 cmp edi, eax
// 00637925  740d                 je 0x637934
// 00637927  85c0                 test eax, eax
// 00637929  7409                 je 0x637934
// 0063792b  50                   push eax
// 0063792c  e8498d0600           call 0x6a067a
// 00637931  83c404               add esp, 4
// 00637934  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00637938  897e18               mov dword ptr [esi + 0x18], edi
// 0063793b  5f                   pop edi
// 0063793c  8bc6                 mov eax, esi
// 0063793e  64890d00000000       mov dword ptr fs:[0], ecx
// 00637945  5e                   pop esi
// 00637946  83c414               add esp, 0x14
// 00637949  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
