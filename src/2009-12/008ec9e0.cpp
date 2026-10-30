// roc 2009-12 008ec9e0  unit: CXTPDialogBar  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ec9e0
//
// 008ec9e0  53                   push ebx
// 008ec9e1  56                   push esi
// 008ec9e2  57                   push edi
// 008ec9e3  8bf9                 mov edi, ecx
// 008ec9e5  ff15eccb9800         call dword ptr [0x98cbec]
// 008ec9eb  50                   push eax
// 008ec9ec  e83971f0ff           call 0x7f3b2a
// 008ec9f1  8bf0                 mov esi, eax
// 008ec9f3  85f6                 test esi, esi
// 008ec9f5  7463                 je 0x8eca5a
// 008ec9f7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008ec9fa  85c0                 test eax, eax
// 008ec9fc  745c                 je 0x8eca5a
// 008ec9fe  3bf7                 cmp esi, edi
// 008eca00  7451                 je 0x8eca53
// 008eca02  50                   push eax
// 008eca03  8b4720               mov eax, dword ptr [edi + 0x20]
// 008eca06  50                   push eax
// 008eca07  ff15f4ca9800         call dword ptr [0x98caf4]
// 008eca0d  85c0                 test eax, eax
// 008eca0f  7542                 jne 0x8eca53
// 008eca11  8b4638               mov eax, dword ptr [esi + 0x38]
// 008eca14  8b1dbccb9800         mov ebx, dword ptr [0x98cbbc]
// 008eca1a  85c0                 test eax, eax
// 008eca1c  7506                 jne 0x8eca24
// 008eca1e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008eca21  51                   push ecx
// 008eca22  ffd3                 call ebx
// 008eca24  50                   push eax
// 008eca25  e80071f0ff           call 0x7f3b2a
// 008eca2a  85c0                 test eax, eax
// 008eca2c  742c                 je 0x8eca5a
// 008eca2e  83782000             cmp dword ptr [eax + 0x20], 0
// 008eca32  7426                 je 0x8eca5a
// 008eca34  8b4638               mov eax, dword ptr [esi + 0x38]
// 008eca37  85c0                 test eax, eax
// 008eca39  7506                 jne 0x8eca41
// 008eca3b  8b5620               mov edx, dword ptr [esi + 0x20]
// 008eca3e  52                   push edx
// 008eca3f  ffd3                 call ebx
// 008eca41  50                   push eax
// 008eca42  e8e370f0ff           call 0x7f3b2a
// 008eca47  50                   push eax
// 008eca48  8bcf                 mov ecx, edi
// 008eca4a  e8518df6ff           call 0x8557a0
// 008eca4f  85c0                 test eax, eax
// 008eca51  7407                 je 0x8eca5a
// 008eca53  b801000000           mov eax, 1
// 008eca58  eb02                 jmp 0x8eca5c
// 008eca5a  33c0                 xor eax, eax
// 008eca5c  3b87ec010000         cmp eax, dword ptr [edi + 0x1ec]
// 008eca62  7416                 je 0x8eca7a
// 008eca64  8987ec010000         mov dword ptr [edi + 0x1ec], eax
// 008eca6a  8b07                 mov eax, dword ptr [edi]
// 008eca6c  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 008eca72  6a01                 push 1
// 008eca74  6a00                 push 0
// 008eca76  8bcf                 mov ecx, edi
// 008eca78  ffd2                 call edx
// 008eca7a  8b442414             mov eax, dword ptr [esp + 0x14]
// 008eca7e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008eca82  50                   push eax
// 008eca83  51                   push ecx
// 008eca84  8bcf                 mov ecx, edi
// 008eca86  e895b5f1ff           call 0x808020
// 008eca8b  5f                   pop edi
// 008eca8c  5e                   pop esi
// 008eca8d  5b                   pop ebx
// 008eca8e  c20800               ret 8
// copied from an identical function in another client (function ?OnIdleUpdateCmdUI@CXTPDialogBar@@MAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDialogBar.cpp