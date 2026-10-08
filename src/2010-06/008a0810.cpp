// roc 2010-06 008a0810  unit: CXTPDialogBar  size: 404 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a0810
//
// 008a0810  83ec10               sub esp, 0x10
// 008a0813  53                   push ebx
// 008a0814  8bd9                 mov ebx, ecx
// 008a0816  83bbb801000000       cmp dword ptr [ebx + 0x1b8], 0
// 008a081d  7518                 jne 0x8a0837
// 008a081f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008a0823  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a0827  50                   push eax
// 008a0828  51                   push ecx
// 008a0829  8bcb                 mov ecx, ebx
// 008a082b  e890bef1ff           call 0x7bc6c0
// 008a0830  5b                   pop ebx
// 008a0831  83c410               add esp, 0x10
// 008a0834  c20800               ret 8
// 008a0837  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008a083a  55                   push ebp
// 008a083b  56                   push esi
// 008a083c  57                   push edi
// 008a083d  8d542410             lea edx, [esp + 0x10]
// 008a0841  52                   push edx
// 008a0842  50                   push eax
// 008a0843  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 008a0849  6afd                 push -3
// 008a084b  6afd                 push -3
// 008a084d  8d4c2418             lea ecx, [esp + 0x18]
// 008a0851  51                   push ecx
// 008a0852  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 008a0858  8bbb00010000         mov edi, dword ptr [ebx + 0x100]
// 008a085e  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008a0862  83ff04               cmp edi, 4
// 008a0865  0f8493000000         je 0x8a08fe
// 008a086b  83ff01               cmp edi, 1
// 008a086e  7515                 jne 0x8a0885
// 008a0870  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 008a0874  7f33                 jg 0x8a08a9
// 008a0876  5f                   pop edi
// 008a0877  5e                   pop esi
// 008a0878  5d                   pop ebp
// 008a0879  b80c000000           mov eax, 0xc
// 008a087e  5b                   pop ebx
// 008a087f  83c410               add esp, 0x10
// 008a0882  c20800               ret 8
// 008a0885  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 008a0889  7c1e                 jl 0x8a08a9
// 008a088b  f683ec00000040       test byte ptr [ebx + 0xec], 0x40
// 008a0892  0f84da000000         je 0x8a0972
// 008a0898  57                   push edi
// 008a0899  e8c279b8ff           call 0x428260
// 008a089e  83c404               add esp, 4
// 008a08a1  85c0                 test eax, eax
// 008a08a3  0f84c9000000         je 0x8a0972
// 008a08a9  8b742424             mov esi, dword ptr [esp + 0x24]
// 008a08ad  83ff03               cmp edi, 3
// 008a08b0  7519                 jne 0x8a08cb
// 008a08b2  3b742410             cmp esi, dword ptr [esp + 0x10]
// 008a08b6  0f8fd5000000         jg 0x8a0991
// 008a08bc  5f                   pop edi
// 008a08bd  5e                   pop esi
// 008a08be  5d                   pop ebp
// 008a08bf  b80a000000           mov eax, 0xa
// 008a08c4  5b                   pop ebx
// 008a08c5  83c410               add esp, 0x10
// 008a08c8  c20800               ret 8
// 008a08cb  3b742418             cmp esi, dword ptr [esp + 0x18]
// 008a08cf  0f8cbc000000         jl 0x8a0991
// 008a08d5  f683ec00000040       test byte ptr [ebx + 0xec], 0x40
// 008a08dc  7411                 je 0x8a08ef
// 008a08de  57                   push edi
// 008a08df  e87c79b8ff           call 0x428260
// 008a08e4  83c404               add esp, 4
// 008a08e7  85c0                 test eax, eax
// 008a08e9  0f84a2000000         je 0x8a0991
// 008a08ef  5f                   pop edi
// 008a08f0  5e                   pop esi
// 008a08f1  5d                   pop ebp
// 008a08f2  b80b000000           mov eax, 0xb
// 008a08f7  5b                   pop ebx
// 008a08f8  83c410               add esp, 0x10
// 008a08fb  c20800               ret 8
// 008a08fe  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a0902  3be8                 cmp ebp, eax
// 008a0904  8b742424             mov esi, dword ptr [esp + 0x24]
// 008a0908  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008a090c  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a0910  7d26                 jge 0x8a0938
// 008a0912  3bf2                 cmp esi, edx
// 008a0914  7d0f                 jge 0x8a0925
// 008a0916  5f                   pop edi
// 008a0917  5e                   pop esi
// 008a0918  5d                   pop ebp
// 008a0919  b80d000000           mov eax, 0xd
// 008a091e  5b                   pop ebx
// 008a091f  83c410               add esp, 0x10
// 008a0922  c20800               ret 8
// 008a0925  3bf7                 cmp esi, edi
// 008a0927  7c0f                 jl 0x8a0938
// 008a0929  5f                   pop edi
// 008a092a  5e                   pop esi
// 008a092b  5d                   pop ebp
// 008a092c  b80e000000           mov eax, 0xe
// 008a0931  5b                   pop ebx
// 008a0932  83c410               add esp, 0x10
// 008a0935  c20800               ret 8
// 008a0938  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a093c  3be9                 cmp ebp, ecx
// 008a093e  7c26                 jl 0x8a0966
// 008a0940  3bf2                 cmp esi, edx
// 008a0942  7d0f                 jge 0x8a0953
// 008a0944  5f                   pop edi
// 008a0945  5e                   pop esi
// 008a0946  5d                   pop ebp
// 008a0947  b810000000           mov eax, 0x10
// 008a094c  5b                   pop ebx
// 008a094d  83c410               add esp, 0x10
// 008a0950  c20800               ret 8
// 008a0953  3bf7                 cmp esi, edi
// 008a0955  7c0f                 jl 0x8a0966
// 008a0957  5f                   pop edi
// 008a0958  5e                   pop esi
// 008a0959  5d                   pop ebp
// 008a095a  b811000000           mov eax, 0x11
// 008a095f  5b                   pop ebx
// 008a0960  83c410               add esp, 0x10
// 008a0963  c20800               ret 8
// 008a0966  3be8                 cmp ebp, eax
// 008a0968  0f8c08ffffff         jl 0x8a0876
// 008a096e  3be9                 cmp ebp, ecx
// 008a0970  7c0f                 jl 0x8a0981
// 008a0972  5f                   pop edi
// 008a0973  5e                   pop esi
// 008a0974  5d                   pop ebp
// 008a0975  b80f000000           mov eax, 0xf
// 008a097a  5b                   pop ebx
// 008a097b  83c410               add esp, 0x10
// 008a097e  c20800               ret 8
// 008a0981  3bf2                 cmp esi, edx
// 008a0983  0f8c33ffffff         jl 0x8a08bc
// 008a0989  3bf7                 cmp esi, edi
// 008a098b  0f8d5effffff         jge 0x8a08ef
// 008a0991  55                   push ebp
// 008a0992  56                   push esi
// 008a0993  8bcb                 mov ecx, ebx
// 008a0995  e826bdf1ff           call 0x7bc6c0
// 008a099a  5f                   pop edi
// 008a099b  5e                   pop esi
// 008a099c  5d                   pop ebp
// 008a099d  5b                   pop ebx
// 008a099e  83c410               add esp, 0x10
// 008a09a1  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?OnNcHitTest@CXTPDialogBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
