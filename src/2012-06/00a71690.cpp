// roc 2012-06 00a71690  unit: CXTPDialogBar  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a71690
//
// 00a71690  83ec10               sub esp, 0x10
// 00a71693  53                   push ebx
// 00a71694  8bd9                 mov ebx, ecx
// 00a71696  83bbb801000000       cmp dword ptr [ebx + 0x1b8], 0
// 00a7169d  7518                 jne 0xa716b7
// 00a7169f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a716a3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a716a7  50                   push eax
// 00a716a8  51                   push ecx
// 00a716a9  8bcb                 mov ecx, ebx
// 00a716ab  e85057f2ff           call 0x996e00
// 00a716b0  5b                   pop ebx
// 00a716b1  83c410               add esp, 0x10
// 00a716b4  c20800               ret 8
// 00a716b7  8b4320               mov eax, dword ptr [ebx + 0x20]
// 00a716ba  55                   push ebp
// 00a716bb  56                   push esi
// 00a716bc  57                   push edi
// 00a716bd  8d542410             lea edx, [esp + 0x10]
// 00a716c1  52                   push edx
// 00a716c2  50                   push eax
// 00a716c3  ff15f83ab200         call dword ptr [0xb23af8]
// 00a716c9  6afd                 push -3
// 00a716cb  6afd                 push -3
// 00a716cd  8d4c2418             lea ecx, [esp + 0x18]
// 00a716d1  51                   push ecx
// 00a716d2  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a716d8  8bbb00010000         mov edi, dword ptr [ebx + 0x100]
// 00a716de  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00a716e2  83ff04               cmp edi, 4
// 00a716e5  0f8493000000         je 0xa7177e
// 00a716eb  83ff01               cmp edi, 1
// 00a716ee  7515                 jne 0xa71705
// 00a716f0  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00a716f4  7f33                 jg 0xa71729
// 00a716f6  5f                   pop edi
// 00a716f7  5e                   pop esi
// 00a716f8  5d                   pop ebp
// 00a716f9  b80c000000           mov eax, 0xc
// 00a716fe  5b                   pop ebx
// 00a716ff  83c410               add esp, 0x10
// 00a71702  c20800               ret 8
// 00a71705  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 00a71709  7c1e                 jl 0xa71729
// 00a7170b  f683ec00000040       test byte ptr [ebx + 0xec], 0x40
// 00a71712  0f84da000000         je 0xa717f2
// 00a71718  57                   push edi
// 00a71719  e8d2359cff           call 0x434cf0
// 00a7171e  83c404               add esp, 4
// 00a71721  85c0                 test eax, eax
// 00a71723  0f84c9000000         je 0xa717f2
// 00a71729  8b742424             mov esi, dword ptr [esp + 0x24]
// 00a7172d  83ff03               cmp edi, 3
// 00a71730  7519                 jne 0xa7174b
// 00a71732  3b742410             cmp esi, dword ptr [esp + 0x10]
// 00a71736  0f8fd5000000         jg 0xa71811
// 00a7173c  5f                   pop edi
// 00a7173d  5e                   pop esi
// 00a7173e  5d                   pop ebp
// 00a7173f  b80a000000           mov eax, 0xa
// 00a71744  5b                   pop ebx
// 00a71745  83c410               add esp, 0x10
// 00a71748  c20800               ret 8
// 00a7174b  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00a7174f  0f8cbc000000         jl 0xa71811
// 00a71755  f683ec00000040       test byte ptr [ebx + 0xec], 0x40
// 00a7175c  7411                 je 0xa7176f
// 00a7175e  57                   push edi
// 00a7175f  e88c359cff           call 0x434cf0
// 00a71764  83c404               add esp, 4
// 00a71767  85c0                 test eax, eax
// 00a71769  0f84a2000000         je 0xa71811
// 00a7176f  5f                   pop edi
// 00a71770  5e                   pop esi
// 00a71771  5d                   pop ebp
// 00a71772  b80b000000           mov eax, 0xb
// 00a71777  5b                   pop ebx
// 00a71778  83c410               add esp, 0x10
// 00a7177b  c20800               ret 8
// 00a7177e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a71782  3be8                 cmp ebp, eax
// 00a71784  8b742424             mov esi, dword ptr [esp + 0x24]
// 00a71788  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a7178c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a71790  7d26                 jge 0xa717b8
// 00a71792  3bf2                 cmp esi, edx
// 00a71794  7d0f                 jge 0xa717a5
// 00a71796  5f                   pop edi
// 00a71797  5e                   pop esi
// 00a71798  5d                   pop ebp
// 00a71799  b80d000000           mov eax, 0xd
// 00a7179e  5b                   pop ebx
// 00a7179f  83c410               add esp, 0x10
// 00a717a2  c20800               ret 8
// 00a717a5  3bf7                 cmp esi, edi
// 00a717a7  7c0f                 jl 0xa717b8
// 00a717a9  5f                   pop edi
// 00a717aa  5e                   pop esi
// 00a717ab  5d                   pop ebp
// 00a717ac  b80e000000           mov eax, 0xe
// 00a717b1  5b                   pop ebx
// 00a717b2  83c410               add esp, 0x10
// 00a717b5  c20800               ret 8
// 00a717b8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a717bc  3be9                 cmp ebp, ecx
// 00a717be  7c26                 jl 0xa717e6
// 00a717c0  3bf2                 cmp esi, edx
// 00a717c2  7d0f                 jge 0xa717d3
// 00a717c4  5f                   pop edi
// 00a717c5  5e                   pop esi
// 00a717c6  5d                   pop ebp
// 00a717c7  b810000000           mov eax, 0x10
// 00a717cc  5b                   pop ebx
// 00a717cd  83c410               add esp, 0x10
// 00a717d0  c20800               ret 8
// 00a717d3  3bf7                 cmp esi, edi
// 00a717d5  7c0f                 jl 0xa717e6
// 00a717d7  5f                   pop edi
// 00a717d8  5e                   pop esi
// 00a717d9  5d                   pop ebp
// 00a717da  b811000000           mov eax, 0x11
// 00a717df  5b                   pop ebx
// 00a717e0  83c410               add esp, 0x10
// 00a717e3  c20800               ret 8
// 00a717e6  3be8                 cmp ebp, eax
// 00a717e8  0f8c08ffffff         jl 0xa716f6
// 00a717ee  3be9                 cmp ebp, ecx
// 00a717f0  7c0f                 jl 0xa71801
// 00a717f2  5f                   pop edi
// 00a717f3  5e                   pop esi
// 00a717f4  5d                   pop ebp
// 00a717f5  b80f000000           mov eax, 0xf
// 00a717fa  5b                   pop ebx
// 00a717fb  83c410               add esp, 0x10
// 00a717fe  c20800               ret 8
// 00a71801  3bf2                 cmp esi, edx
// 00a71803  0f8c33ffffff         jl 0xa7173c
// 00a71809  3bf7                 cmp esi, edi
// 00a7180b  0f8d5effffff         jge 0xa7176f
// 00a71811  55                   push ebp
// 00a71812  56                   push esi
// 00a71813  8bcb                 mov ecx, ebx
// 00a71815  e8e655f2ff           call 0x996e00
// 00a7181a  5f                   pop edi
// 00a7181b  5e                   pop esi
// 00a7181c  5d                   pop ebp
// 00a7181d  5b                   pop ebx
// 00a7181e  83c410               add esp, 0x10
// 00a71821  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnNcHitTest@CXTPDialogBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
