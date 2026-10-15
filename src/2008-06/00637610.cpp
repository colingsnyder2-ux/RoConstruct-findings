// roc 2008-06 00637610  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637610
//
// 00637610  6aff                 push -1
// 00637612  68d8a17d00           push 0x7da1d8
// 00637617  64a100000000         mov eax, dword ptr fs:[0]
// 0063761d  50                   push eax
// 0063761e  64892500000000       mov dword ptr fs:[0], esp
// 00637625  83ec08               sub esp, 8
// 00637628  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063762c  56                   push esi
// 0063762d  57                   push edi
// 0063762e  8bf1                 mov esi, ecx
// 00637630  89742408             mov dword ptr [esp + 8], esi
// 00637634  50                   push eax
// 00637635  51                   push ecx
// 00637636  8bc4                 mov eax, esp
// 00637638  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00637640  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00637648  89642414             mov dword ptr [esp + 0x14], esp
// 0063764c  c70000000000         mov dword ptr [eax], 0
// 00637652  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00637656  8b542428             mov edx, dword ptr [esp + 0x28]
// 0063765a  51                   push ecx
// 0063765b  52                   push edx
// 0063765c  c644242801           mov byte ptr [esp + 0x28], 1
// 00637661  e86af7ffff           call 0x636dd0
// 00637666  50                   push eax
// 00637667  8bce                 mov ecx, esi
// 00637669  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063766e  e83d2ef6ff           call 0x59a4b0
// 00637673  6a18                 push 0x18
// 00637675  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0063767a  c706e45c8400         mov dword ptr [esi], 0x845ce4
// 00637680  e89b920600           call 0x6a0920
// 00637685  83c404               add esp, 4
// 00637688  85c0                 test eax, eax
// 0063768a  7422                 je 0x6376ae
// 0063768c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00637690  c70034838400         mov dword ptr [eax], 0x848334
// 00637696  897004               mov dword ptr [eax + 4], esi
// 00637699  894808               mov dword ptr [eax + 8], ecx
// 0063769c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006376a0  895010               mov dword ptr [eax + 0x10], edx
// 006376a3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006376a7  894814               mov dword ptr [eax + 0x14], ecx
// 006376aa  8bf8                 mov edi, eax
// 006376ac  eb02                 jmp 0x6376b0
// 006376ae  33ff                 xor edi, edi
// 006376b0  8b4618               mov eax, dword ptr [esi + 0x18]
// 006376b3  3bf8                 cmp edi, eax
// 006376b5  740d                 je 0x6376c4
// 006376b7  85c0                 test eax, eax
// 006376b9  7409                 je 0x6376c4
// 006376bb  50                   push eax
// 006376bc  e8b98f0600           call 0x6a067a
// 006376c1  83c404               add esp, 4
// 006376c4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006376c8  897e18               mov dword ptr [esi + 0x18], edi
// 006376cb  5f                   pop edi
// 006376cc  8bc6                 mov eax, esi
// 006376ce  64890d00000000       mov dword ptr fs:[0], ecx
// 006376d5  5e                   pop esi
// 006376d6  83c414               add esp, 0x14
// 006376d9  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
