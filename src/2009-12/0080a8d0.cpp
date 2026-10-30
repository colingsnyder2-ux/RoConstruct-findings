// roc 2009-12 0080a8d0  unit: CXTPImageManagerResource::CBitmapDC  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080a8d0
//
// 0080a8d0  83ec2c               sub esp, 0x2c
// 0080a8d3  56                   push esi
// 0080a8d4  8b742438             mov esi, dword ptr [esp + 0x38]
// 0080a8d8  85f6                 test esi, esi
// 0080a8da  7507                 jne 0x80a8e3
// 0080a8dc  33c0                 xor eax, eax
// 0080a8de  5e                   pop esi
// 0080a8df  83c42c               add esp, 0x2c
// 0080a8e2  c3                   ret 
// 0080a8e3  53                   push ebx
// 0080a8e4  6a2c                 push 0x2c
// 0080a8e6  8d44240c             lea eax, [esp + 0xc]
// 0080a8ea  6a00                 push 0
// 0080a8ec  50                   push eax
// 0080a8ed  e8b2a1feff           call 0x7f4aa4
// 0080a8f2  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0080a8f6  83c40c               add esp, 0xc
// 0080a8f9  c744240828000000     mov dword ptr [esp + 8], 0x28
// 0080a901  85db                 test ebx, ebx
// 0080a903  7504                 jne 0x80a909
// 0080a905  33c0                 xor eax, eax
// 0080a907  eb03                 jmp 0x80a90c
// 0080a909  8b4304               mov eax, dword ptr [ebx + 4]
// 0080a90c  55                   push ebp
// 0080a90d  8b2d44b19800         mov ebp, dword ptr [0x98b144]
// 0080a913  6a00                 push 0
// 0080a915  8d4c2410             lea ecx, [esp + 0x10]
// 0080a919  51                   push ecx
// 0080a91a  6a00                 push 0
// 0080a91c  6a00                 push 0
// 0080a91e  6a00                 push 0
// 0080a920  56                   push esi
// 0080a921  50                   push eax
// 0080a922  ffd5                 call ebp
// 0080a924  85c0                 test eax, eax
// 0080a926  7408                 je 0x80a930
// 0080a928  66837c241a20         cmp word ptr [esp + 0x1a], 0x20
// 0080a92e  7409                 je 0x80a939
// 0080a930  5d                   pop ebp
// 0080a931  5b                   pop ebx
// 0080a932  33c0                 xor eax, eax
// 0080a934  5e                   pop esi
// 0080a935  83c42c               add esp, 0x2c
// 0080a938  c3                   ret 
// 0080a939  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080a93d  0faf442414           imul eax, dword ptr [esp + 0x14]
// 0080a942  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0080a946  03c0                 add eax, eax
// 0080a948  03c0                 add eax, eax
// 0080a94a  57                   push edi
// 0080a94b  8b3d78b79800         mov edi, dword ptr [0x98b778]
// 0080a951  50                   push eax
// 0080a952  8902                 mov dword ptr [edx], eax
// 0080a954  ffd7                 call edi
// 0080a956  8b742450             mov esi, dword ptr [esp + 0x50]
// 0080a95a  83c404               add esp, 4
// 0080a95d  8906                 mov dword ptr [esi], eax
// 0080a95f  85c0                 test eax, eax
// 0080a961  0f8494000000         je 0x80a9fb
// 0080a967  6a34                 push 0x34
// 0080a969  ffd7                 call edi
// 0080a96b  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0080a96f  83c404               add esp, 4
// 0080a972  8907                 mov dword ptr [edi], eax
// 0080a974  85c0                 test eax, eax
// 0080a976  7520                 jne 0x80a998
// 0080a978  8b06                 mov eax, dword ptr [esi]
// 0080a97a  85c0                 test eax, eax
// 0080a97c  7410                 je 0x80a98e
// 0080a97e  50                   push eax
// 0080a97f  ff1540b79800         call dword ptr [0x98b740]
// 0080a985  83c404               add esp, 4
// 0080a988  c70600000000         mov dword ptr [esi], 0
// 0080a98e  5f                   pop edi
// 0080a98f  5d                   pop ebp
// 0080a990  5b                   pop ebx
// 0080a991  33c0                 xor eax, eax
// 0080a993  5e                   pop esi
// 0080a994  83c42c               add esp, 0x2c
// 0080a997  c3                   ret 
// 0080a998  6a28                 push 0x28
// 0080a99a  8d4c2414             lea ecx, [esp + 0x14]
// 0080a99e  51                   push ecx
// 0080a99f  6a28                 push 0x28
// 0080a9a1  50                   push eax
// 0080a9a2  ff157cb79800         call dword ptr [0x98b77c]
// 0080a9a8  83c410               add esp, 0x10
// 0080a9ab  85db                 test ebx, ebx
// 0080a9ad  7504                 jne 0x80a9b3
// 0080a9af  33c0                 xor eax, eax
// 0080a9b1  eb03                 jmp 0x80a9b6
// 0080a9b3  8b4304               mov eax, dword ptr [ebx + 4]
// 0080a9b6  8b17                 mov edx, dword ptr [edi]
// 0080a9b8  8b0e                 mov ecx, dword ptr [esi]
// 0080a9ba  6a00                 push 0
// 0080a9bc  52                   push edx
// 0080a9bd  8b542420             mov edx, dword ptr [esp + 0x20]
// 0080a9c1  51                   push ecx
// 0080a9c2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0080a9c6  52                   push edx
// 0080a9c7  6a00                 push 0
// 0080a9c9  51                   push ecx
// 0080a9ca  50                   push eax
// 0080a9cb  ffd5                 call ebp
// 0080a9cd  85c0                 test eax, eax
// 0080a9cf  7534                 jne 0x80aa05
// 0080a9d1  8b06                 mov eax, dword ptr [esi]
// 0080a9d3  8b1d40b79800         mov ebx, dword ptr [0x98b740]
// 0080a9d9  85c0                 test eax, eax
// 0080a9db  740c                 je 0x80a9e9
// 0080a9dd  50                   push eax
// 0080a9de  ffd3                 call ebx
// 0080a9e0  83c404               add esp, 4
// 0080a9e3  c70600000000         mov dword ptr [esi], 0
// 0080a9e9  8b07                 mov eax, dword ptr [edi]
// 0080a9eb  85c0                 test eax, eax
// 0080a9ed  740c                 je 0x80a9fb
// 0080a9ef  50                   push eax
// 0080a9f0  ffd3                 call ebx
// 0080a9f2  83c404               add esp, 4
// 0080a9f5  c70700000000         mov dword ptr [edi], 0
// 0080a9fb  5f                   pop edi
// 0080a9fc  5d                   pop ebp
// 0080a9fd  5b                   pop ebx
// 0080a9fe  33c0                 xor eax, eax
// 0080aa00  5e                   pop esi
// 0080aa01  83c42c               add esp, 0x2c
// 0080aa04  c3                   ret 
// 0080aa05  5f                   pop edi
// 0080aa06  5d                   pop ebp
// 0080aa07  5b                   pop ebx
// 0080aa08  b801000000           mov eax, 1
// 0080aa0d  5e                   pop esi
// 0080aa0e  83c42c               add esp, 0x2c
// 0080aa11  c3                   ret 
// copied from an identical function in another client (function ?GetBitmapBits@CXTPImageManagerIcon@@SAHAAVCDC@@PAUHBITMAP__@@AAPAUtagBITMAPINFO@@AAPAXAAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp