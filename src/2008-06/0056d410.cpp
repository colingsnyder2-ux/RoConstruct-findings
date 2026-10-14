// from server: 100% by colin
// roc 2008-06 0056d410  unit: G3D::VColor3::?$holder  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d410
//
// 0056d410  64a100000000         mov eax, dword ptr fs:[0]
// 0056d416  6aff                 push -1
// 0056d418  68b9fe7c00           push 0x7cfeb9
// 0056d41d  50                   push eax
// 0056d41e  64892500000000       mov dword ptr fs:[0], esp
// 0056d425  83ec48               sub esp, 0x48
// 0056d428  53                   push ebx
// 0056d429  8b1d78288000         mov ebx, dword ptr [0x802878]
// 0056d42f  56                   push esi
// 0056d430  57                   push edi
// 0056d431  8bf9                 mov edi, ecx
// 0056d433  8d7704               lea esi, [edi + 4]
// 0056d436  85f6                 test esi, esi
// 0056d438  7428                 je 0x56d462
// 0056d43a  8b0e                 mov ecx, dword ptr [esi]
// 0056d43c  85c9                 test ecx, ecx
// 0056d43e  7409                 je 0x56d449
// 0056d440  8b01                 mov eax, dword ptr [ecx]
// 0056d442  8b5004               mov edx, dword ptr [eax + 4]
// 0056d445  ffd2                 call edx
// 0056d447  eb05                 jmp 0x56d44e
// 0056d449  b814969200           mov eax, 0x929614
// 0056d44e  68d0be9200           push 0x92bed0
// 0056d453  8bc8                 mov ecx, eax
// 0056d455  ffd3                 call ebx
// 0056d457  84c0                 test al, al
// 0056d459  7407                 je 0x56d462
// 0056d45b  8b06                 mov eax, dword ptr [esi]
// 0056d45d  83c004               add eax, 4
// 0056d460  7548                 jne 0x56d4aa
// 0056d462  8b07                 mov eax, dword ptr [edi]
// 0056d464  8b4008               mov eax, dword ptr [eax + 8]
// 0056d467  50                   push eax
// 0056d468  b9f8be9200           mov ecx, 0x92bef8
// 0056d46d  ffd3                 call ebx
// 0056d46f  84c0                 test al, al
// 0056d471  7449                 je 0x56d4bc
// 0056d473  8d4c240c             lea ecx, [esp + 0xc]
// 0056d477  51                   push ecx
// 0056d478  56                   push esi
// 0056d479  e81288eaff           call 0x415c90
// 0056d47e  83c404               add esp, 4
// 0056d481  50                   push eax
// 0056d482  e819110500           call 0x5be5a0
// 0056d487  83c408               add esp, 8
// 0056d48a  84c0                 test al, al
// 0056d48c  742e                 je 0x56d4bc
// 0056d48e  8d54240c             lea edx, [