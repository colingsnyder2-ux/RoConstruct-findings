// roc 2007-08 005ce010  unit: RBX::BlockBlockContact  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ce010
//
// 005ce010  83ec08               sub esp, 8
// 005ce013  53                   push ebx
// 005ce014  56                   push esi
// 005ce015  8b742414             mov esi, dword ptr [esp + 0x14]
// 005ce019  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ce01c  85c9                 test ecx, ecx
// 005ce01e  7504                 jne 0x5ce024
// 005ce020  33c0                 xor eax, eax
// 005ce022  eb08                 jmp 0x5ce02c
// 005ce024  8b4608               mov eax, dword ptr [esi + 8]
// 005ce027  2bc1                 sub eax, ecx
// 005ce029  c1f802               sar eax, 2
// 005ce02c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005ce030  83c0ff               add eax, -1
// 005ce033  3bd8                 cmp ebx, eax
// 005ce035  89442414             mov dword ptr [esp + 0x14], eax
// 005ce039  7351                 jae 0x5ce08c
// 005ce03b  55                   push ebp
// 005ce03c  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 005ce042  57                   push edi
// 005ce043  8b7e08               mov edi, dword ptr [esi + 8]
// 005ce046  3bcf                 cmp ecx, edi
// 005ce048  7602                 jbe 0x5ce04c
// 005ce04a  ffd5                 call ebp
// 005ce04c  8d47fc               lea eax, [edi - 4]
// 005ce04f  3b4608               cmp eax, dword ptr [esi + 8]
// 005ce052  897c2414             mov dword ptr [esp + 0x14], edi
// 005ce056  7705                 ja 0x5ce05d
// 005ce058  3b4604               cmp eax, dword ptr [esi + 4]
// 005ce05b  7302                 jae 0x5ce05f
// 005ce05d  ffd5                 call ebp
// 005ce05f  83c7fc               add edi, -4
// 005ce062  3b7e08               cmp edi, dword ptr [esi + 8]
// 005ce065  7202                 jb 0x5ce069
// 005ce067  ffd5                 call ebp
// 005ce069  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ce06c  85c9                 test ecx, ecx
// 005ce06e  740c                 je 0x5ce07c
// 005ce070  8b4608               mov eax, dword ptr [esi + 8]
// 005ce073  2bc1                 sub eax, ecx
// 005ce075  c1f802               sar eax, 2
// 005ce078  3bd8                 cmp ebx, eax
// 005ce07a  7202                 jb 0x5ce07e
// 005ce07c  ffd5                 call ebp
// 005ce07e  8b4604               mov eax, dword ptr [esi + 4]
// 005ce081  8b0f                 mov ecx, dword ptr [edi]
// 005ce083  5f                   pop edi
// 005ce084  890c98               mov dword ptr [eax + ebx*4], ecx
// 005ce087  8b442418             mov eax, dword ptr [esp + 0x18]
// 005ce08b  5d                   pop ebp
// 005ce08c  6a00                 push 0
// 005ce08e  50                   push eax
// 005ce08f  8bce                 mov ecx, esi
// 005ce091  e82afeffff           call 0x5cdec0
// 005ce096  5e                   pop esi
// 005ce097  5b                   pop ebx
// 005ce098  83c408               add esp, 8
// 005ce09b  c3                   ret 
// library openrbx-client/App\v8world\Contact.cpp (function ??$fastRemoveIndex@PAVContactConnector@RBX@@@RBX@@YAXAAV?$vector@PAVContactConnector@RBX@@V?$allocator@PAVContactConnector@RBX@@@std@@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Contact.cpp
