// roc 2011-06 008f9390  unit: CXTPDialogBar  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f9390
//
// 008f9390  83ec10               sub esp, 0x10
// 008f9393  53                   push ebx
// 008f9394  8bd9                 mov ebx, ecx
// 008f9396  83bbb801000000       cmp dword ptr [ebx + 0x1b8], 0
// 008f939d  7518                 jne 0x8f93b7
// 008f939f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008f93a3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f93a7  50                   push eax
// 008f93a8  51                   push ecx
// 008f93a9  8bcb                 mov ecx, ebx
// 008f93ab  e85057f2ff           call 0x81eb00
// 008f93b0  5b                   pop ebx
// 008f93b1  83c410               add esp, 0x10
// 008f93b4  c20800               ret 8
// 008f93b7  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008f93ba  55                   push ebp
// 008f93bb  56                   push esi
// 008f93bc  57                   push edi
// 008f93bd  8d542410             lea edx, [esp + 0x10]
// 008f93c1  52                   push edx
// 008f93c2  50                   push eax
// 008f93c3  ff155c1ca400         call dword ptr [0xa41c5c]
// 008f93c9  6afd                 push -3
// 008f93cb  6afd                 push -3
// 008f93cd  8d4c2418             lea ecx, [esp + 0x18]
// 008f93d1  51                   push ecx
// 008f93d2  ff15e41ba400         call dword ptr [0xa41be4]
// 008f93d8  8bbb00010000         mov edi, dword ptr [ebx + 0x100]
// 008f93de  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008f93e2  83ff04               cmp edi, 4
// 008f93e5  0f8493000000         je 0x8f947e
// 008f93eb  83ff01               cmp edi, 1
// 008f93ee  7515                 jne 0x8f9405
// 008f93f0  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 008f93f4  7f33                 jg 0x8f9429
// 008f93f6  5f                   pop edi
// 008f93f7  5e                   pop esi
// 008f93f8  5d                   pop ebp
// 008f93f9  b80c000000           mov eax, 0xc
// 008f93fe  5b                   pop ebx
// 008f93ff  83c410               add esp, 0x10
// 008f9402  c20800               ret 8
// 008f9405  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 008f9409  7c1e                 jl 0x8f9429
// 008f940b  f683ec00000040       test byte ptr [ebx + 0xec], 0x40
// 008f9412  0f84da000000         je 0x8f94f2
// 008f9418  57                   push edi
// 008f9419  e8d26bb3ff           call 0x42fff0
// 008f941e  83c404               add esp, 4
// 008f9421  85c0                 test eax, eax
// 008f9423  0f84c9000000         je 0x8f94f2
// 008f9429  8b742424             mov esi, dword ptr [esp + 0x24]
// 008f942d  83ff03               cmp edi, 3
// 008f9430  7519                 jne 0x8f944b
// 008f9432  3b742410             cmp esi, dword ptr [esp + 0x10]
// 008f9436  0f8fd5000000         jg 0x8f9511
// 008f943c  5f                   pop edi
// 008f943d  5e                   pop esi
// 008f943e  5d                   pop ebp
// 008f943f  b80a000000           mov eax, 0xa
// 008f9444  5b                   pop ebx
// 008f9445  83c410               add esp, 0x10
// 008f9448  c20800               ret 8
// 008f944b  3b742418             cmp esi, dword ptr [esp + 0x18]
// 008f944f  0f8cbc000000         jl 0x8f9511
// 008f9455  f683ec00000040       test byte ptr [ebx + 0xec], 0x40
// 008f945c  7411                 je 0x8f946f
// 008f945e  57                   push edi
// 008f945f  e88c6bb3ff           call 0x42fff0
// 008f9464  83c404               add esp, 4
// 008f9467  85c0                 test eax, eax
// 008f9469  0f84a2000000         je 0x8f9511
// 008f946f  5f                   pop edi
// 008f9470  5e                   pop esi
// 008f9471  5d                   pop ebp
// 008f9472  b80b000000           mov eax, 0xb
// 008f9477  5b                   pop ebx
// 008f9478  83c410               add esp, 0x10
// 008f947b  c20800               ret 8
// 008f947e  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f9482  3be8                 cmp ebp, eax
// 008f9484  8b742424             mov esi, dword ptr [esp + 0x24]
// 008f9488  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008f948c  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f9490  7d26                 jge 0x8f94b8
// 008f9492  3bf2                 cmp esi, edx
// 008f9494  7d0f                 jge 0x8f94a5
// 008f9496  5f                   pop edi
// 008f9497  5e                   pop esi
// 008f9498  5d                   pop ebp
// 008f9499  b80d000000           mov eax, 0xd
// 008f949e  5b                   pop ebx
// 008f949f  83c410               add esp, 0x10
// 008f94a2  c20800               ret 8
// 008f94a5  3bf7                 cmp esi, edi
// 008f94a7  7c0f                 jl 0x8f94b8
// 008f94a9  5f                   pop edi
// 008f94aa  5e                   pop esi
// 008f94ab  5d                   pop ebp
// 008f94ac  b80e000000           mov eax, 0xe
// 008f94b1  5b                   pop ebx
// 008f94b2  83c410               add esp, 0x10
// 008f94b5  c20800               ret 8
// 008f94b8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008f94bc  3be9                 cmp ebp, ecx
// 008f94be  7c26                 jl 0x8f94e6
// 008f94c0  3bf2                 cmp esi, edx
// 008f94c2  7d0f                 jge 0x8f94d3
// 008f94c4  5f                   pop edi
// 008f94c5  5e                   pop esi
// 008f94c6  5d                   pop ebp
// 008f94c7  b810000000           mov eax, 0x10
// 008f94cc  5b                   pop ebx
// 008f94cd  83c410               add esp, 0x10
// 008f94d0  c20800               ret 8
// 008f94d3  3bf7                 cmp esi, edi
// 008f94d5  7c0f                 jl 0x8f94e6
// 008f94d7  5f                   pop edi
// 008f94d8  5e                   pop esi
// 008f94d9  5d                   pop ebp
// 008f94da  b811000000           mov eax, 0x11
// 008f94df  5b                   pop ebx
// 008f94e0  83c410               add esp, 0x10
// 008f94e3  c20800               ret 8
// 008f94e6  3be8                 cmp ebp, eax
// 008f94e8  0f8c08ffffff         jl 0x8f93f6
// 008f94ee  3be9                 cmp ebp, ecx
// 008f94f0  7c0f                 jl 0x8f9501
// 008f94f2  5f                   pop edi
// 008f94f3  5e                   pop esi
// 008f94f4  5d                   pop ebp
// 008f94f5  b80f000000           mov eax, 0xf
// 008f94fa  5b                   pop ebx
// 008f94fb  83c410               add esp, 0x10
// 008f94fe  c20800               ret 8
// 008f9501  3bf2                 cmp esi, edx
// 008f9503  0f8c33ffffff         jl 0x8f943c
// 008f9509  3bf7                 cmp esi, edi
// 008f950b  0f8d5effffff         jge 0x8f946f
// 008f9511  55                   push ebp
// 008f9512  56                   push esi
// 008f9513  8bcb                 mov ecx, ebx
// 008f9515  e8e655f2ff           call 0x81eb00
// 008f951a  5f                   pop edi
// 008f951b  5e                   pop esi
// 008f951c  5d                   pop ebp
// 008f951d  5b                   pop ebx
// 008f951e  83c410               add esp, 0x10
// 008f9521  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnNcHitTest@CXTPDialogBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
