// from server: 100% by auto
// roc 2008-06 0079f610  unit: CXTPDialogBar  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079f610
//
// 0079f610  83ec10               sub esp, 0x10
// 0079f613  53                   push ebx
// 0079f614  8bd9                 mov ebx, ecx
// 0079f616  83bbb801000000       cmp dword ptr [ebx + 0x1b8], 0
// 0079f61d  7518                 jne 0x79f637
// 0079f61f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079f623  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0079f627  50                   push eax
// 0079f628  51                   push ecx
// 0079f629  8bcb                 mov ecx, ebx
// 0079f62b  e80098f1ff           call 0x6b8e30
// 0079f630  5b                   pop ebx
// 0079f631  83c410               add esp, 0x10
// 0079f634  c20800               ret 8
// 0079f637  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0079f63a  55                   push ebp
// 0079f63b  56                   push esi
// 0079f63c  57                   push edi
// 0079f63d  8d542410             lea edx, [esp + 0x10]
// 0079f641  52                   push edx
// 0079f642  50                   push eax
// 0079f643  ff15342e8000         call dword ptr [0x802e34]
// 0079f649  6afd                 push -3
// 0079f64b  6afd                 push -3
// 0079f64d  8d4c2418             lea ecx, [esp + 0x18]
// 0079f651  51                   push ecx
// 0079f652  ff15282d8000         call dword ptr [0x802d28]
// 0079f658  8bbb00010000         mov edi, dword ptr [ebx + 0x100]
// 0079f65e  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0079f662  83ff04               cmp edi, 4
// 0079f665  0f8493000000         je 0x79f6fe
// 0079f66b  83ff01               cmp edi, 1
// 0079f66e  7515                 jne 0x79f685
// 0079f670  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0079f674  7f33                 jg 0x79f6a9
// 0079f676  5f                   pop edi
// 0079f677  5e                   pop esi
// 0079f678  5d                   pop ebp
// 0079f679  b80c000000           mov eax, 0xc
// 0079f67e  5b                   pop ebx
// 0079f67f  83c410               add esp, 0x10
// 0079f682  c20800               ret 8
// 0079f685  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0079f689  7c1e                 jl 0x79f6a9
// 0079f68b  f683ec00000040       test byte ptr [ebx + 0xec], 0x40
// 0079f692  0f84da000000         je 0x79f772
// 0079f698  57                   push edi
// 0079f699  e872edc8ff           call 0x42e410
// 0079f69e  83c404               add esp, 4
// 0079f6a1  85c0                 test eax, eax
// 0079f6a3  0f84c9000000         je 0x79f772
// 0079f6a9  8b742424             mov esi, dword ptr [esp + 0x24]
// 0079f6ad  83ff03               cmp edi, 3
// 0079f6b0  7519                 jne 0x79f6cb
// 0079f6b2  3b742410             cmp esi, dword ptr [esp + 0x10]
// 0079f6b6  0f8fd5000000         jg 0x79f791
// 0079f6bc  5f                   pop edi
// 0079f6bd  5e                   pop esi
// 0079f6be  5d                   pop ebp
// 0079f6bf  b80a000000           mov eax, 0xa
// 0079f6c4  5b                   pop ebx
// 0079f6c5  83c410               add esp, 0x10
// 0079f6c8  c20800               ret 8
// 0079f6cb  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0079f6cf  0f8cbc000000         jl 0x79f791
// 0079f6d5  f683ec00000040       test byte ptr [ebx + 0xec], 0x40
// 0079f6dc  7411                 je 0x79f6ef
// 0079f6de  57                   push edi
// 0079f6df  e82cedc8ff           call 0x42e410
// 0079f6e4  83c404               add esp, 4
// 0079f6e7  85c0                 test eax, eax
// 0079f6e9  0f84a2000000         je 0x79f791
// 0079f6ef  5f                   pop edi
// 0079f6f0  5e                   pop esi
// 0079f6f1  5d                   pop ebp
// 0079f6f2  b80b000000           mov eax, 0xb
// 0079f6f7  5b                   pop ebx
// 0079f6f8  83c410               add esp, 0x10
// 0079f6fb  c20800               ret 8
// 0079f6fe  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079f702  3be8                 cmp ebp, eax
// 0079f704  8b742424             mov esi, dword ptr [esp + 0x24]
// 0079f708  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0079f70c  8b542410             mov edx, dword ptr [esp + 0x10]
// 0079f710  7d26                 jge 0x79f738
// 0079f712  3bf2                 cmp esi, edx
// 0079f714  7d0f                 jge 0x79f725
// 0079f716  5f                   pop edi
// 0079f717  5e                   pop esi
// 0079f718  5d                   pop ebp
// 0079f719  b80d000000           mov eax, 0xd
// 0079f71e  5b                   pop ebx
// 0079f71f  83c410               add esp, 0x10
// 0079f722  c20800               ret 8
// 0079f725  3bf7                 cmp esi, edi
// 0079f727  7c0f                 jl 0x79f738
// 0079f729  5f                   pop edi
// 0079f72a  5e                   pop esi
// 0079f72b  5d                   pop ebp
// 0079f72c  b80e000000           mov eax, 0xe
// 0079f731  5b                   pop ebx
// 0079f732  83c410               add esp, 0x10
// 0079f735  c20800               ret 8
// 0079f738  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0079f73c  3be9                 cmp ebp, ecx
// 0079f73e  7c26                 jl 0x79f766
// 0079f740  3bf2                 cmp esi, edx
// 0079f742  7d0f                 jge 0x79f753
// 0079f744  5f                   pop edi
// 0079f745  5e                   pop esi
// 0079f746  5d                   pop ebp
// 0079f747  b810000000           mov eax, 0x10
// 0079f74c  5b                   pop ebx
// 0079f74d  83c410               add esp, 0x10
// 0079f750  c20800               ret 8
// 0079f753  3bf7                 cmp esi, edi
// 0079f755  7c0f                 jl 0x79f766
// 0079f757  5f                   pop edi
// 0079f758  5e                   pop esi
// 0079f759  5d                   pop ebp
// 0079f75a  b811000000           mov eax, 0x11
// 0079f75f  5b                   pop ebx
// 0079f760  83c410               add esp, 0x10
// 0079f763  c20800               ret 8
// 0079f766  3be8                 cmp ebp, eax
// 0079f768  0f8c08ffffff         jl 0x79f676
// 0079f76e  3be9                 cmp ebp, ecx
// 0079f770  7c0f                 jl 0x79f781
// 0079f772  5f                   pop edi
// 0079f773  5e                   pop esi
// 0079f774  5d                   pop ebp
// 0079f775  b80f000000           mov eax, 0xf
// 0079f77a  5b                   pop ebx
// 0079f77b  83c410               add esp, 0x10
// 0079f77e  c20800               ret 8
// 0079f781  3bf2                 cmp esi, edx
// 0079f783  0f8c33ffffff         jl 0x79f6bc
// 0079f789  3bf7                 cmp esi, edi
// 0079f78b  0f8d5effffff         jge 0x79f6ef
// 0079f791  55                   push ebp
// 0079f792  56                   push esi
// 0079f793  8bcb                 mov ecx, ebx
// 0079f795  e89696f1ff           call 0x6b8e30
// 0079f79a  5f                   pop edi
// 0079f79b  5e                   pop esi
// 0079f79c  5d                   pop ebp
// 0079f79d  5b                   pop ebx
// 0079f79e  83c410               add esp, 0x10
// 0079f7a1  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnNcHitTest@CXTPDialogBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
