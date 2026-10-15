// roc 2008-06 006377b0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006377b0
//
// 006377b0  6aff                 push -1
// 006377b2  68d8a17d00           push 0x7da1d8
// 006377b7  64a100000000         mov eax, dword ptr fs:[0]
// 006377bd  50                   push eax
// 006377be  64892500000000       mov dword ptr fs:[0], esp
// 006377c5  83ec08               sub esp, 8
// 006377c8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006377cc  56                   push esi
// 006377cd  57                   push edi
// 006377ce  8bf1                 mov esi, ecx
// 006377d0  89742408             mov dword ptr [esp + 8], esi
// 006377d4  50                   push eax
// 006377d5  51                   push ecx
// 006377d6  8bc4                 mov eax, esp
// 006377d8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006377e0  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 006377e8  89642414             mov dword ptr [esp + 0x14], esp
// 006377ec  c70000000000         mov dword ptr [eax], 0
// 006377f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006377f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006377fa  51                   push ecx
// 006377fb  52                   push edx
// 006377fc  c644242801           mov byte ptr [esp + 0x28], 1
// 00637801  e84af8ffff           call 0x637050
// 00637806  50                   push eax
// 00637807  8bce                 mov ecx, esi
// 00637809  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063780e  e8fd2bf6ff           call 0x59a410
// 00637813  6a18                 push 0x18
// 00637815  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0063781a  c706e88b8400         mov dword ptr [esi], 0x848be8
// 00637820  e8fb900600           call 0x6a0920
// 00637825  83c404               add esp, 4
// 00637828  85c0                 test eax, eax
// 0063782a  7422                 je 0x63784e
// 0063782c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00637830  c7005c838400         mov dword ptr [eax], 0x84835c
// 00637836  897004               mov dword ptr [eax + 4], esi
// 00637839  894808               mov dword ptr [eax + 8], ecx
// 0063783c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00637840  895010               mov dword ptr [eax + 0x10], edx
// 00637843  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00637847  894814               mov dword ptr [eax + 0x14], ecx
// 0063784a  8bf8                 mov edi, eax
// 0063784c  eb02                 jmp 0x637850
// 0063784e  33ff                 xor edi, edi
// 00637850  8b4618               mov eax, dword ptr [esi + 0x18]
// 00637853  3bf8                 cmp edi, eax
// 00637855  740d                 je 0x637864
// 00637857  85c0                 test eax, eax
// 00637859  7409                 je 0x637864
// 0063785b  50                   push eax
// 0063785c  e8198e0600           call 0x6a067a
// 00637861  83c404               add esp, 4
// 00637864  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00637868  897e18               mov dword ptr [esi + 0x18], edi
// 0063786b  5f                   pop edi
// 0063786c  8bc6                 mov eax, esi
// 0063786e  64890d00000000       mov dword ptr fs:[0], ecx
// 00637875  5e                   pop esi
// 00637876  83c414               add esp, 0x14
// 00637879  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
