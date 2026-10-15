// roc 2008-06 005ad2b0  unit: RBX::Reflection::UTuple::?$holder  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ad2b0
//
// 005ad2b0  6aff                 push -1
// 005ad2b2  68d8a17d00           push 0x7da1d8
// 005ad2b7  64a100000000         mov eax, dword ptr fs:[0]
// 005ad2bd  50                   push eax
// 005ad2be  64892500000000       mov dword ptr fs:[0], esp
// 005ad2c5  83ec08               sub esp, 8
// 005ad2c8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005ad2cc  56                   push esi
// 005ad2cd  57                   push edi
// 005ad2ce  8bf1                 mov esi, ecx
// 005ad2d0  89742408             mov dword ptr [esp + 8], esi
// 005ad2d4  50                   push eax
// 005ad2d5  51                   push ecx
// 005ad2d6  8bc4                 mov eax, esp
// 005ad2d8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ad2e0  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005ad2e8  89642414             mov dword ptr [esp + 0x14], esp
// 005ad2ec  c70000000000         mov dword ptr [eax], 0
// 005ad2f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ad2f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ad2fa  51                   push ecx
// 005ad2fb  52                   push edx
// 005ad2fc  c644242801           mov byte ptr [esp + 0x28], 1
// 005ad301  e8fafeffff           call 0x5ad200
// 005ad306  50                   push eax
// 005ad307  8bce                 mov ecx, esi
// 005ad309  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ad30e  e87dcfe5ff           call 0x40a290
// 005ad313  6a18                 push 0x18
// 005ad315  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005ad31a  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 005ad320  e8fb350f00           call 0x6a0920
// 005ad325  83c404               add esp, 4
// 005ad328  85c0                 test eax, eax
// 005ad32a  7422                 je 0x5ad34e
// 005ad32c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005ad330  c700e0448300         mov dword ptr [eax], 0x8344e0
// 005ad336  897004               mov dword ptr [eax + 4], esi
// 005ad339  894808               mov dword ptr [eax + 8], ecx
// 005ad33c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005ad340  895010               mov dword ptr [eax + 0x10], edx
// 005ad343  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005ad347  894814               mov dword ptr [eax + 0x14], ecx
// 005ad34a  8bf8                 mov edi, eax
// 005ad34c  eb02                 jmp 0x5ad350
// 005ad34e  33ff                 xor edi, edi
// 005ad350  8b4618               mov eax, dword ptr [esi + 0x18]
// 005ad353  3bf8                 cmp edi, eax
// 005ad355  740d                 je 0x5ad364
// 005ad357  85c0                 test eax, eax
// 005ad359  7409                 je 0x5ad364
// 005ad35b  50                   push eax
// 005ad35c  e819330f00           call 0x6a067a
// 005ad361  83c404               add esp, 4
// 005ad364  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ad368  897e18               mov dword ptr [esi + 0x18], edi
// 005ad36b  5f                   pop edi
// 005ad36c  8bc6                 mov eax, esi
// 005ad36e  64890d00000000       mov dword ptr fs:[0], ecx
// 005ad375  5e                   pop esi
// 005ad376  83c414               add esp, 0x14
// 005ad379  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
