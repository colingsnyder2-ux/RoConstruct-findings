// roc 2008-06 006373a0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006373a0
//
// 006373a0  6aff                 push -1
// 006373a2  68d8a17d00           push 0x7da1d8
// 006373a7  64a100000000         mov eax, dword ptr fs:[0]
// 006373ad  50                   push eax
// 006373ae  64892500000000       mov dword ptr fs:[0], esp
// 006373b5  83ec08               sub esp, 8
// 006373b8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006373bc  56                   push esi
// 006373bd  57                   push edi
// 006373be  8bf1                 mov esi, ecx
// 006373c0  89742408             mov dword ptr [esp + 8], esi
// 006373c4  50                   push eax
// 006373c5  51                   push ecx
// 006373c6  8bc4                 mov eax, esp
// 006373c8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006373d0  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 006373d8  89642414             mov dword ptr [esp + 0x14], esp
// 006373dc  c70000000000         mov dword ptr [eax], 0
// 006373e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006373e6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006373ea  51                   push ecx
// 006373eb  52                   push edx
// 006373ec  c644242801           mov byte ptr [esp + 0x28], 1
// 006373f1  e81af6ffff           call 0x636a10
// 006373f6  50                   push eax
// 006373f7  8bce                 mov ecx, esi
// 006373f9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006373fe  e88d2eddff           call 0x40a290
// 00637403  6a18                 push 0x18
// 00637405  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0063740a  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 00637410  e80b950600           call 0x6a0920
// 00637415  83c404               add esp, 4
// 00637418  85c0                 test eax, eax
// 0063741a  7422                 je 0x63743e
// 0063741c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00637420  c700f8828400         mov dword ptr [eax], 0x8482f8
// 00637426  897004               mov dword ptr [eax + 4], esi
// 00637429  894808               mov dword ptr [eax + 8], ecx
// 0063742c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00637430  895010               mov dword ptr [eax + 0x10], edx
// 00637433  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00637437  894814               mov dword ptr [eax + 0x14], ecx
// 0063743a  8bf8                 mov edi, eax
// 0063743c  eb02                 jmp 0x637440
// 0063743e  33ff                 xor edi, edi
// 00637440  8b4618               mov eax, dword ptr [esi + 0x18]
// 00637443  3bf8                 cmp edi, eax
// 00637445  740d                 je 0x637454
// 00637447  85c0                 test eax, eax
// 00637449  7409                 je 0x637454
// 0063744b  50                   push eax
// 0063744c  e829920600           call 0x6a067a
// 00637451  83c404               add esp, 4
// 00637454  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00637458  897e18               mov dword ptr [esi + 0x18], edi
// 0063745b  5f                   pop edi
// 0063745c  8bc6                 mov eax, esi
// 0063745e  64890d00000000       mov dword ptr fs:[0], ecx
// 00637465  5e                   pop esi
// 00637466  83c414               add esp, 0x14
// 00637469  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
