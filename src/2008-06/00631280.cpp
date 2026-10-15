// roc 2008-06 00631280  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631280
//
// 00631280  6aff                 push -1
// 00631282  68d8a17d00           push 0x7da1d8
// 00631287  64a100000000         mov eax, dword ptr fs:[0]
// 0063128d  50                   push eax
// 0063128e  64892500000000       mov dword ptr fs:[0], esp
// 00631295  83ec08               sub esp, 8
// 00631298  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063129c  56                   push esi
// 0063129d  57                   push edi
// 0063129e  8bf1                 mov esi, ecx
// 006312a0  89742408             mov dword ptr [esp + 8], esi
// 006312a4  50                   push eax
// 006312a5  51                   push ecx
// 006312a6  8bc4                 mov eax, esp
// 006312a8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006312b0  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 006312b8  89642414             mov dword ptr [esp + 0x14], esp
// 006312bc  c70000000000         mov dword ptr [eax], 0
// 006312c2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006312c6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006312ca  51                   push ecx
// 006312cb  52                   push edx
// 006312cc  c644242801           mov byte ptr [esp + 0x28], 1
// 006312d1  e88afdffff           call 0x631060
// 006312d6  50                   push eax
// 006312d7  8bce                 mov ecx, esi
// 006312d9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 006312de  e82d43e1ff           call 0x445610
// 006312e3  6a18                 push 0x18
// 006312e5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 006312ea  c70634418200         mov dword ptr [esi], 0x824134
// 006312f0  e82bf60600           call 0x6a0920
// 006312f5  83c404               add esp, 4
// 006312f8  85c0                 test eax, eax
// 006312fa  7422                 je 0x63131e
// 006312fc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00631300  c700d8728400         mov dword ptr [eax], 0x8472d8
// 00631306  897004               mov dword ptr [eax + 4], esi
// 00631309  894808               mov dword ptr [eax + 8], ecx
// 0063130c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00631310  895010               mov dword ptr [eax + 0x10], edx
// 00631313  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00631317  894814               mov dword ptr [eax + 0x14], ecx
// 0063131a  8bf8                 mov edi, eax
// 0063131c  eb02                 jmp 0x631320
// 0063131e  33ff                 xor edi, edi
// 00631320  8b4618               mov eax, dword ptr [esi + 0x18]
// 00631323  3bf8                 cmp edi, eax
// 00631325  740d                 je 0x631334
// 00631327  85c0                 test eax, eax
// 00631329  7409                 je 0x631334
// 0063132b  50                   push eax
// 0063132c  e849f30600           call 0x6a067a
// 00631331  83c404               add esp, 4
// 00631334  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00631338  897e18               mov dword ptr [esi + 0x18], edi
// 0063133b  5f                   pop edi
// 0063133c  8bc6                 mov eax, esi
// 0063133e  64890d00000000       mov dword ptr fs:[0], ecx
// 00631345  5e                   pop esi
// 00631346  83c414               add esp, 0x14
// 00631349  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
