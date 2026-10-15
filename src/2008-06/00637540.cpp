// roc 2008-06 00637540  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00637540
//
// 00637540  6aff                 push -1
// 00637542  68d8a17d00           push 0x7da1d8
// 00637547  64a100000000         mov eax, dword ptr fs:[0]
// 0063754d  50                   push eax
// 0063754e  64892500000000       mov dword ptr fs:[0], esp
// 00637555  83ec08               sub esp, 8
// 00637558  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063755c  56                   push esi
// 0063755d  57                   push edi
// 0063755e  8bf1                 mov esi, ecx
// 00637560  89742408             mov dword ptr [esp + 8], esi
// 00637564  50                   push eax
// 00637565  51                   push ecx
// 00637566  8bc4                 mov eax, esp
// 00637568  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00637570  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00637578  89642414             mov dword ptr [esp + 0x14], esp
// 0063757c  c70000000000         mov dword ptr [eax], 0
// 00637582  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00637586  8b542428             mov edx, dword ptr [esp + 0x28]
// 0063758a  51                   push ecx
// 0063758b  52                   push edx
// 0063758c  c644242801           mov byte ptr [esp + 0x28], 1
// 00637591  e8faf6ffff           call 0x636c90
// 00637596  50                   push eax
// 00637597  8bce                 mov ecx, esi
// 00637599  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063759e  e88dbce0ff           call 0x443230
// 006375a3  6a18                 push 0x18
// 006375a5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006375aa  c70654598100         mov dword ptr [esi], 0x815954
// 006375b0  e86b930600           call 0x6a0920
// 006375b5  83c404               add esp, 4
// 006375b8  85c0                 test eax, eax
// 006375ba  7422                 je 0x6375de
// 006375bc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006375c0  c70020838400         mov dword ptr [eax], 0x848320
// 006375c6  897004               mov dword ptr [eax + 4], esi
// 006375c9  894808               mov dword ptr [eax + 8], ecx
// 006375cc  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006375d0  895010               mov dword ptr [eax + 0x10], edx
// 006375d3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006375d7  894814               mov dword ptr [eax + 0x14], ecx
// 006375da  8bf8                 mov edi, eax
// 006375dc  eb02                 jmp 0x6375e0
// 006375de  33ff                 xor edi, edi
// 006375e0  8b4618               mov eax, dword ptr [esi + 0x18]
// 006375e3  3bf8                 cmp edi, eax
// 006375e5  740d                 je 0x6375f4
// 006375e7  85c0                 test eax, eax
// 006375e9  7409                 je 0x6375f4
// 006375eb  50                   push eax
// 006375ec  e889900600           call 0x6a067a
// 006375f1  83c404               add esp, 4
// 006375f4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006375f8  897e18               mov dword ptr [esi + 0x18], edi
// 006375fb  5f                   pop edi
// 006375fc  8bc6                 mov eax, esi
// 006375fe  64890d00000000       mov dword ptr fs:[0], ecx
// 00637605  5e                   pop esi
// 00637606  83c414               add esp, 0x14
// 00637609  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
