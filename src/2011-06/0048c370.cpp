// roc 2011-06 0048c370  unit: Scintilla::CScintillaView  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048c370
//
// 0048c370  64a100000000         mov eax, dword ptr fs:[0]
// 0048c376  6aff                 push -1
// 0048c378  68985e9d00           push 0x9d5e98
// 0048c37d  50                   push eax
// 0048c37e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0048c382  64892500000000       mov dword ptr fs:[0], esp
// 0048c389  53                   push ebx
// 0048c38a  55                   push ebp
// 0048c38b  56                   push esi
// 0048c38c  57                   push edi
// 0048c38d  8bf1                 mov esi, ecx
// 0048c38f  50                   push eax
// 0048c390  b95c8cc100           mov ecx, 0xc18c5c
// 0048c395  ff15a42da400         call dword ptr [0xa42da4]
// 0048c39b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0048c39f  51                   push ecx
// 0048c3a0  b9608cc100           mov ecx, 0xc18c60
// 0048c3a5  ff15a42da400         call dword ptr [0xa42da4]
// 0048c3ab  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0048c3af  8b442430             mov eax, dword ptr [esp + 0x30]
// 0048c3b3  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0048c3b7  892d648cc100         mov dword ptr [0xc18c64], ebp
// 0048c3bd  89156c8cc100         mov dword ptr [0xc18c6c], edx
// 0048c3c3  c705688cc10001000000 mov dword ptr [0xc18c68], 1
// 0048c3cd  a3708cc100           mov dword ptr [0xc18c70], eax
// 0048c3d2  e845df3700           call 0x80a31c
// 0048c3d7  8b4804               mov ecx, dword ptr [eax + 4]
// 0048c3da  e825e83700           call 0x80ac04
// 0048c3df  33ff                 xor edi, edi
// 0048c3e1  6a01                 push 1
// 0048c3e3  57                   push edi
// 0048c3e4  8d5e58               lea ebx, [esi + 0x58]
// 0048c3e7  57                   push edi
// 0048c3e8  8bcb                 mov ecx, ebx
// 0048c3ea  897c2424             mov dword ptr [esp + 0x24], edi
// 0048c3ee  e8ede2ffff           call 0x48a6e0
// 0048c3f3  57                   push edi
// 0048c3f4  6a01                 push 1
// 0048c3f6  8bcb                 mov ecx, ebx
// 0048c3f8  e873e3ffff           call 0x48a770
// 0048c3fd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0048c401  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0048c405  a1688cc100           mov eax, dword ptr [0xc18c68]
// 0048c40a  51                   push ecx
// 0048c40b  52                   push edx
// 0048c40c  897c2428             mov dword ptr [esp + 0x28], edi
// 0048c410  8b3e                 mov edi, dword ptr [esi]
// 0048c412  55                   push ebp
// 0048c413  50                   push eax
// 0048c414  b95c8cc100           mov ecx, 0xc18c5c
// 0048c419  81c7b4010000         add edi, 0x1b4
// 0048c41f  ff15c82da400         call dword ptr [0xa42dc8]
// 0048c425  8b17                 mov edx, dword ptr [edi]
// 0048c427  50                   push eax
// 0048c428  8bce                 mov ecx, esi
// 0048c42a  ffd2                 call edx
// 0048c42c  85c0                 test eax, eax
// 0048c42e  7455                 je 0x48c485
// 0048c430  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0048c438  eb06                 jmp 0x48c440
// 0048c43a  8d9b00000000         lea ebx, [ebx]
// 0048c440  6a01                 push 1
// 0048c442  b9608cc100           mov ecx, 0xc18c60
// 0048c447  ff15c82da400         call dword ptr [0xa42dc8]
// 0048c44d  50                   push eax
// 0048c44e  8bcb                 mov ecx, ebx
// 0048c450  e81be4ffff           call 0x48a870
// 0048c455  8b442430             mov eax, dword ptr [esp + 0x30]
// 0048c459  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0048c45d  8b15688cc100         mov edx, dword ptr [0xc18c68]
// 0048c463  8b3e                 mov edi, dword ptr [esi]
// 0048c465  50                   push eax
// 0048c466  51                   push ecx
// 0048c467  55                   push ebp
// 0048c468  52                   push edx
// 0048c469  b95c8cc100           mov ecx, 0xc18c5c
// 0048c46e  81c7b4010000         add edi, 0x1b4
// 0048c474  ff15c82da400         call dword ptr [0xa42dc8]
// 0048c47a  50                   push eax
// 0048c47b  8b07                 mov eax, dword ptr [edi]
// 0048c47d  8bce                 mov ecx, esi
// 0048c47f  ffd0                 call eax
// 0048c481  85c0                 test eax, eax
// 0048c483  75bb                 jne 0x48c440
// 0048c485  6a00                 push 0
// 0048c487  6a00                 push 0
// 0048c489  8bcb                 mov ecx, ebx
// 0048c48b  e8e0e2ffff           call 0x48a770
// 0048c490  837c242000           cmp dword ptr [esp + 0x20], 0
// 0048c495  752d                 jne 0x48c4c4
// 0048c497  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0048c49b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0048c49f  a1688cc100           mov eax, dword ptr [0xc18c68]
// 0048c4a4  8b3e                 mov edi, dword ptr [esi]
// 0048c4a6  6a01                 push 1
// 0048c4a8  51                   push ecx
// 0048c4a9  52                   push edx
// 0048c4aa  55                   push ebp
// 0048c4ab  50                   push eax
// 0048c4ac  b95c8cc100           mov ecx, 0xc18c5c
// 0048c4b1  81c7a8010000         add edi, 0x1a8
// 0048c4b7  ff15c82da400         call dword ptr [0xa42dc8]
// 0048c4bd  8b17                 mov edx, dword ptr [edi]
// 0048c4bf  50                   push eax
// 0048c4c0  8bce                 mov ecx, esi
// 0048c4c2  ffd2                 call edx
// 0048c4c4  8d4c2430             lea ecx, [esp + 0x30]
// 0048c4c8  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0048c4d0  e85bc3fcff           call 0x458830
// 0048c4d5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048c4d9  5f                   pop edi
// 0048c4da  5e                   pop esi
// 0048c4db  5d                   pop ebp
// 0048c4dc  64890d00000000       mov dword ptr fs:[0], ecx
// 0048c4e3  5b                   pop ebx
// 0048c4e4  83c40c               add esp, 0xc
// 0048c4e7  c21400               ret 0x14
// copied from an identical function in another client (function ?replaceAll@View@@QAEXPBD0HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_replaceangleimportcast4a016e70e72eb016.cpp