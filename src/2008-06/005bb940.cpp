// roc 2008-06 005bb940  unit: RBX::Soundscape::SoundService  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bb940
//
// 005bb940  6aff                 push -1
// 005bb942  68d8a17d00           push 0x7da1d8
// 005bb947  64a100000000         mov eax, dword ptr fs:[0]
// 005bb94d  50                   push eax
// 005bb94e  64892500000000       mov dword ptr fs:[0], esp
// 005bb955  83ec08               sub esp, 8
// 005bb958  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005bb95c  56                   push esi
// 005bb95d  57                   push edi
// 005bb95e  8bf1                 mov esi, ecx
// 005bb960  89742408             mov dword ptr [esp + 8], esi
// 005bb964  50                   push eax
// 005bb965  51                   push ecx
// 005bb966  8bc4                 mov eax, esp
// 005bb968  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005bb970  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005bb978  89642414             mov dword ptr [esp + 0x14], esp
// 005bb97c  c70000000000         mov dword ptr [eax], 0
// 005bb982  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005bb986  8b542428             mov edx, dword ptr [esp + 0x28]
// 005bb98a  51                   push ecx
// 005bb98b  52                   push edx
// 005bb98c  c644242801           mov byte ptr [esp + 0x28], 1
// 005bb991  e85afeffff           call 0x5bb7f0
// 005bb996  50                   push eax
// 005bb997  8bce                 mov ecx, esi
// 005bb999  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005bb99e  e86d9ce8ff           call 0x445610
// 005bb9a3  6a18                 push 0x18
// 005bb9a5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005bb9aa  c70634418200         mov dword ptr [esi], 0x824134
// 005bb9b0  e86b4f0e00           call 0x6a0920
// 005bb9b5  83c404               add esp, 4
// 005bb9b8  85c0                 test eax, eax
// 005bb9ba  7422                 je 0x5bb9de
// 005bb9bc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005bb9c0  c7000c768300         mov dword ptr [eax], 0x83760c
// 005bb9c6  897004               mov dword ptr [eax + 4], esi
// 005bb9c9  894808               mov dword ptr [eax + 8], ecx
// 005bb9cc  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005bb9d0  895010               mov dword ptr [eax + 0x10], edx
// 005bb9d3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005bb9d7  894814               mov dword ptr [eax + 0x14], ecx
// 005bb9da  8bf8                 mov edi, eax
// 005bb9dc  eb02                 jmp 0x5bb9e0
// 005bb9de  33ff                 xor edi, edi
// 005bb9e0  8b4618               mov eax, dword ptr [esi + 0x18]
// 005bb9e3  3bf8                 cmp edi, eax
// 005bb9e5  740d                 je 0x5bb9f4
// 005bb9e7  85c0                 test eax, eax
// 005bb9e9  7409                 je 0x5bb9f4
// 005bb9eb  50                   push eax
// 005bb9ec  e8894c0e00           call 0x6a067a
// 005bb9f1  83c404               add esp, 4
// 005bb9f4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005bb9f8  897e18               mov dword ptr [esi + 0x18], edi
// 005bb9fb  5f                   pop edi
// 005bb9fc  8bc6                 mov eax, esi
// 005bb9fe  64890d00000000       mov dword ptr fs:[0], ecx
// 005bba05  5e                   pop esi
// 005bba06  83c414               add esp, 0x14
// 005bba09  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
