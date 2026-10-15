// roc 2008-06 006372d0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006372d0
//
// 006372d0  6aff                 push -1
// 006372d2  68d8a17d00           push 0x7da1d8
// 006372d7  64a100000000         mov eax, dword ptr fs:[0]
// 006372dd  50                   push eax
// 006372de  64892500000000       mov dword ptr fs:[0], esp
// 006372e5  83ec08               sub esp, 8
// 006372e8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006372ec  56                   push esi
// 006372ed  57                   push edi
// 006372ee  8bf1                 mov esi, ecx
// 006372f0  89742408             mov dword ptr [esp + 8], esi
// 006372f4  50                   push eax
// 006372f5  51                   push ecx
// 006372f6  8bc4                 mov eax, esp
// 006372f8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00637300  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00637308  89642414             mov dword ptr [esp + 0x14], esp
// 0063730c  c70000000000         mov dword ptr [eax], 0
// 00637312  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00637316  8b542428             mov edx, dword ptr [esp + 0x28]
// 0063731a  51                   push ecx
// 0063731b  52                   push edx
// 0063731c  c644242801           mov byte ptr [esp + 0x28], 1
// 00637321  e8aaf5ffff           call 0x6368d0
// 00637326  50                   push eax
// 00637327  8bce                 mov ecx, esi
// 00637329  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063732e  e86dbfe0ff           call 0x4432a0
// 00637333  6a18                 push 0x18
// 00637335  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0063733a  c70688598100         mov dword ptr [esi], 0x815988
// 00637340  e8db950600           call 0x6a0920
// 00637345  83c404               add esp, 4
// 00637348  85c0                 test eax, eax
// 0063734a  7422                 je 0x63736e
// 0063734c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00637350  c700e4828400         mov dword ptr [eax], 0x8482e4
// 00637356  897004               mov dword ptr [eax + 4], esi
// 00637359  894808               mov dword ptr [eax + 8], ecx
// 0063735c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00637360  895010               mov dword ptr [eax + 0x10], edx
// 00637363  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00637367  894814               mov dword ptr [eax + 0x14], ecx
// 0063736a  8bf8                 mov edi, eax
// 0063736c  eb02                 jmp 0x637370
// 0063736e  33ff                 xor edi, edi
// 00637370  8b4618               mov eax, dword ptr [esi + 0x18]
// 00637373  3bf8                 cmp edi, eax
// 00637375  740d                 je 0x637384
// 00637377  85c0                 test eax, eax
// 00637379  7409                 je 0x637384
// 0063737b  50                   push eax
// 0063737c  e8f9920600           call 0x6a067a
// 00637381  83c404               add esp, 4
// 00637384  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00637388  897e18               mov dword ptr [esi + 0x18], edi
// 0063738b  5f                   pop edi
// 0063738c  8bc6                 mov eax, esi
// 0063738e  64890d00000000       mov dword ptr fs:[0], ecx
// 00637395  5e                   pop esi
// 00637396  83c414               add esp, 0x14
// 00637399  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
