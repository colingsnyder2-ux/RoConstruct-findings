// from server: 100% by colin
// roc 2008-06 0052bf50  unit: seg_00520000  size: 844 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052bf50
//
// 0052bf50  8b442408             mov eax, dword ptr [esp + 8]
// 0052bf54  83ec34               sub esp, 0x34
// 0052bf57  85c0                 test eax, eax
// 0052bf59  0f8504030000         jne 0x52c263
// 0052bf5f  8b442440             mov eax, dword ptr [esp + 0x40]
// 0052bf63  53                   push ebx
// 0052bf64  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 0052bf68  55                   push ebp
// 0052bf69  56                   push esi
// 0052bf6a  8b742444             mov esi, dword ptr [esp + 0x44]
// 0052bf6e  8b8eac000000         mov ecx, dword ptr [esi + 0xac]
// 0052bf74  8b96b0000000         mov edx, dword ptr [esi + 0xb0]
// 0052bf7a  03c3                 add eax, ebx
// 0052bf7c  894674               mov dword ptr [esi + 0x74], eax
// 0052bf7f  8b442450             mov eax, dword ptr [esp + 0x50]
// 0052bf83  2bc3                 sub eax, ebx
// 0052bf85  bd00000000           mov ebp, 0
// 0052bf8a  57                   push edi
// 0052bf8b  894678               mov dword ptr [esi + 0x78], eax
// 0052bf8e  898e80000000         mov dword ptr [esi + 0x80], ecx
// 0052bf94  899684000000         mov dword ptr [esi + 0x84], edx
// 0052bf9a  8bfd                 mov edi, ebp
// 0052bf9c  0f8426020000         je 0x52c1c8
// 0052bfa2  6a01                 push 1
// 0052bfa4  8d4674               lea eax, [esi + 0x74]
// 0052bfa7  50                   push eax
// 0052bfa8  e8d3c32700           call 0x7a8380
// 0052bfad  8944244c             mov dword ptr [esp + 0x4c], eax
// 0052bfb1  85c0                 test eax, eax
// 0052bfb3  7409                 je 0x52bfbe
// 0052bfb5  83f801               cmp eax, 1
// 0052bfb8  0f8531010000         jne 0x52c0ef
// 0052bfbe  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0052bfc4  85c9                 test ecx, ecx
// 0052bfc6  7409                 je 0x52bfd1
// 0052bfc8  83f801               cmp eax, 1
// 0052bfcb  0f850f010000         jne 0x52c0e0
// 0052bfd1  85ff                 test edi, edi
// 0052bfd3  755f                 jne 0x52c034
// 0052bfd5  8beb                 mov ebp, ebx
// 0052bfd7  2be9                 sub ebp, ecx
// 0052bfd9  03aeb0000000         add ebp, dword ptr [esi + 0xb0]
// 0052bfdf  8d4501               lea eax, [ebp + 1]
// 0052bfe2  50                   push eax
// 0052bfe3  56                   push esi
// 0052bfe4  e847e5ffff           call 0x52a530
// 0052bfe9  8bf8                 mov edi, eax
// 0052bfeb  83c408               add esp, 8
// 0052bfee  85ff                 test edi, edi
// 0052bff0  7519                 jne 0x52c00b
// 0052bff2  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0052bff6  51                   push ecx
// 0052bff7  56                   push esi
// 0052bff8  e803e5ffff           call 0x52a500
// 0052bffd  6898bc8200           push 0x82bc98
// 0052c002  56                   push esi
// 0052c003  e8a8d9ffff           call 0x5299b0
// 0052c008  83c410               add esp, 0x10
// 0052c00b  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0052c011  8bd5                 mov edx, ebp
// 0052c013  2bd3                 sub edx, ebx
// 0052c015  52                   push edx
// 0052c016  50                   push eax
// 0052c017  8d0c1f               lea ecx, [edi + ebx]
// 0052c01a  51                   push ecx
// 0052c01b  e8c0571700           call 0x6a17e0
// 0052c020  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0052c024  53                   push ebx
// 0052c025  52                   push edx
// 0052c026  57                   push edi
// 0052c027  e8b4571700           call 0x6a17e0
// 0052c02c  83c418               add esp, 0x18
// 0052c02f  e981000000           jmp 0x52c0b5
// 0052c034  8bc5                 mov eax, ebp
// 0052c036  2bc1                 sub eax, ecx
// 0052c038  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0052c03e  8d540801             lea edx, [eax + ecx + 1]
// 0052c042  52                   push edx
// 0052c043  56                   push esi
// 0052c044  8bdf                 mov ebx, edi
// 0052c046  e8e5e4ffff           call 0x52a530
// 0052c04b  8bf8                 mov edi, eax
// 0052c04d  83c408               add esp, 8
// 0052c050  85ff                 test edi, edi
// 0052c052  7520                 jne 0x52c074
// 0052c054  53                   push ebx
// 0052c055  56                   push esi
// 0052c056  e8a5e4ffff           call 0x52a500
// 0052c05b  8b442458             mov eax, dword ptr [esp + 0x58]
// 0052c05f  50                   push eax
// 0052c060  56                   push esi
// 0052c061  e89ae4ffff           call 0x52a500
// 0052c066  6870bc8200           push 0x82bc70
// 0052c06b  56                   push esi
// 0052c06c  e83fd9ffff           call 0x5299b0
// 0052c071  83c418               add esp, 0x18
// 0052c074  55                   push ebp
// 0052c075  53                   push ebx
// 0052c076  57                   push edi
// 0052c077  e864571700           call 0x6a17e0
// 0052c07c  53                   push ebx
// 0052c07d  56                   push esi
// 0052c07e  e87de4ffff           call 0x52a500
// 0052c083  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0052c089  2b8e84000000         sub ecx, dword ptr [esi + 0x84]
// 0052c08f  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 0052c095  51                   push ecx
// 0052c096  52                   push edx
// 0052c097  8d042f               lea eax, [edi + ebp]
// 0052c09a  50                   push eax
// 0052c09b  e840571700           call 0x6a17e0
// 0052c0a0  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 0052c0a6  2b8e84000000         sub ecx, dword ptr [esi + 0x84]
// 0052c0ac  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 0052c0b0  83c420               add esp, 0x20
// 0052c0b3  03e9                 add ebp, ecx
// 0052c0b5  837c244c01           cmp dword ptr [esp + 0x4c], 1
// 0052c0ba  c6042f00             mov byte ptr [edi + ebp], 0
// 0052c0be  0f8471010000         je 0x52c235
// 0052c0c4  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0052c0ca  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 0052c0d0  898684000000         mov dword ptr [esi + 0x84], eax
// 0052c0d6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0052c0da  899680000000         mov dword ptr [esi + 0x80], edx
// 0052c0e0  837e7800             cmp dword ptr [esi + 0x78], 0
// 0052c0e4  0f85b8feffff         jne 0x52bfa2
// 0052c0ea  e9a0000000           jmp 0x52c18f
// 0052c0ef  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0052c0f5  85c0                 test eax, eax
// 0052c0f7  7403                 je 0x52c0fc
// 0052c0f9  50                   push eax
// 0052c0fa  eb05                 jmp 0x52c101
// 0052c0fc  68cc2d9400           push 0x942dcc
// 0052c101  56                   push esi
// 0052c102  e849d9ffff           call 0x529a50
// 0052c107  83c408               add esp, 8
// 0052c10a  8d4674               lea eax, [esi + 0x74]
// 0052c10d  50                   push eax
// 0052c10e  e81dc02700           call 0x7a8130
// 0052c113  c7467800000000       mov dword ptr [esi + 0x78], 0
// 0052c11a  85ff                 test edi, edi
// 0052c11c  753b                 jne 0x52c159
// 0052c11e  8d6b20               lea ebp, [ebx + 0x20]
// 0052c121  55                   push ebp
// 0052c122  56                   push esi
// 0052c123  e808e4ffff           call 0x52a530
// 0052c128  8bf8                 mov edi, eax
// 0052c12a  83c408               add esp, 8
// 0052c12d  85ff                 test edi, edi
// 0052c12f  7519                 jne 0x52c14a
// 0052c131  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0052c135  51                   push ecx
// 0052c136  56                   push esi
// 0052c137  e8c4e3ffff           call 0x52a500
// 0052c13c  6848bc8200           push 0x82bc48
// 0052c141  56                   push esi
// 0052c142  e869d8ffff           call 0x5299b0
// 0052c147  83c410               add esp, 0x10
// 0052c14a  8b542450             mov edx, dword ptr [esp + 0x50]
// 0052c14e  53                   push ebx
// 0052c14f  52                   push edx
// 0052c150  57                   push edi
// 0052c151  e88a561700           call 0x6a17e0
// 0052c156  83c40c               add esp, 0xc
// 0052c159  8b442450             mov eax, dword ptr [esp + 0x50]
// 0052c15d  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0052c161  2bc7                 sub eax, edi
// 0052c163  c6442fff00           mov byte ptr [edi + ebp - 1], 0
// 0052c168  8d6c08ff             lea ebp, [eax + ecx - 1]
// 0052c16c  83fd1f               cmp ebp, 0x1f
// 0052c16f  7205                 jb 0x52c176
// 0052c171  bd1f000000           mov ebp, 0x1f
// 0052c176  8d5501               lea edx, [ebp + 1]
// 0052c179  52                   push edx
// 0052c17a  8d041f               lea eax, [edi + ebx]
// 0052c17d  68cc2d9400           push 0x942dcc
// 0052c182  50                   push eax
// 0052c183  e858561700           call 0x6a17e0
// 0052c188  8b442458             mov eax, dword ptr [esp + 0x58]
// 0052c18c  83c40c               add esp, 0xc
// 0052c18f  83f801               cmp eax, 1
// 0052c192  0f849d000000         je 0x52c235
// 0052c198  83f8fb               cmp eax, -5
// 0052c19b  7513                 jne 0x52c1b0
// 0052c19d  8d8e1c010000         lea ecx, [esi + 0x11c]
// 0052c1a3  51                   push ecx
// 0052c1a4  6814bc8200           push 0x82bc14
// 0052c1a9  8d542418             lea edx, [esp + 0x18]
// 0052c1ad  52                   push edx
// 0052c1ae  eb29                 jmp 0x52c1d9
// 0052c1b0  83f8fd               cmp eax, -3
// 0052c1b3  7513                 jne 0x52c1c8
// 0052c1b5  8d861c010000         lea eax, [esi + 0x11c]
// 0052c1bb  50                   push eax
// 0052c1bc  68e4bb8200           push 0x82bbe4
// 0052c1c1  8d4c2418             lea ecx, [esp + 0x18]
// 0052c1c5  51                   push ecx
// 0052c1c6  eb11                 jmp 0x52c1d9
// 0052c1c8  8d961c010000         lea edx, [esi + 0x11c]
// 0052c1ce  52                   push edx
// 0052c1cf  68b4bb8200           push 0x82bbb4
// 0052c1d4  8d442418             lea eax, [esp + 0x18]
// 0052c1d8  50                   push eax
// 0052c1d9  ff1530288000         call dword ptr [0x802830]
// 0052c1df  83c40c               add esp, 0xc
// 0052c1e2  8d4c2410             lea ecx, [esp + 0x10]
// 0052c1e6  51                   push ecx
// 0052c1e7  56                   push esi
// 0052c1e8  e863d8ffff           call 0x529a50
// 0052c1ed  83c408               add esp, 8
// 0052c1f0  8beb                 mov ebp, ebx
// 0052c1f2  85ff                 test edi, edi
// 0052c1f4  753b                 jne 0x52c231
// 0052c1f6  8d5301               lea edx, [ebx + 1]
// 0052c1f9  52                   push edx
// 0052c1fa  56                   push esi
// 0052c1fb  e830e3ffff           call 0x52a530
// 0052c200  8bf8                 mov edi, eax
// 0052c202  83c408               add esp, 8
// 0052c205  85ff                 test edi, edi
// 0052c207  7519                 jne 0x52c222
// 0052c209  8b442450             mov eax, dword ptr [esp + 0x50]
// 0052c20d  50                   push eax
// 0052c20e  56                   push esi
// 0052c20f  e8ece2ffff           call 0x52a500
// 0052c214  6898bb8200           push 0x82bb98
// 0052c219  56                   push esi
// 0052c21a  e891d7ffff           call 0x5299b0
// 0052c21f  83c410               add esp, 0x10
// 0052c222  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0052c226  53                   push ebx
// 0052c227  51                   push ecx
// 0052c228  57                   push edi
// 0052c229  e8b2551700           call 0x6a17e0
// 0052c22e  83c40c               add esp, 0xc
// 0052c231  c6041f00             mov byte ptr [edi + ebx], 0
// 0052c235  8d4674               lea eax, [esi + 0x74]
// 0052c238  50                   push eax
// 0052c239  e8f2be2700           call 0x7a8130
// 0052c23e  8b542450             mov edx, dword ptr [esp + 0x50]
// 0052c242  52                   push edx
// 0052c243  56                   push esi
// 0052c244  c7467800000000       mov dword ptr [esi + 0x78], 0
// 0052c24b  e8b0e2ffff           call 0x52a500
// 0052c250  8b442464             mov eax, dword ptr [esp + 0x64]
// 0052c254  83c408               add esp, 8
// 0052c257  8928                 mov dword ptr [eax], ebp
// 0052c259  8bc7                 mov eax, edi
// 0052c25b  5f                   pop edi
// 0052c25c  5e                   pop esi
// 0052c25d  5d                   pop ebp
// 0052c25e  5b                   pop ebx
// 0052c25f  83c434               add esp, 0x34
// 0052c262  c3                   ret 
// 0052c263  50                   push eax
// 0052c264  8d4c2404             lea ecx, [esp + 4]
// 0052c268  6874bb8200           push 0x82bb74
// 0052c26d  51                   push ecx
// 0052c26e  ff1530288000         call dword ptr [0x802830]
// 0052c274  8b442444             mov eax, dword ptr [esp + 0x44]
// 0052c278  8d54240c             lea edx, [esp + 0xc]
// 0052c27c  52                   push edx
// 0052c27d  50                   push eax
// 0052c27e  e8cdd7ffff           call 0x529a50
// 0052c283  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0052c287  8b442454             mov eax, dword ptr [esp + 0x54]
// 0052c28b  8b542460             mov edx, dword ptr [esp + 0x60]
// 0052c28f  c6040800             mov byte ptr [eax + ecx], 0
// 0052c293  83c414               add esp, 0x14
// 0052c296  890a                 mov dword ptr [edx], ecx
// 0052c298  83c434               add esp, 0x34
// 0052c29b  c3                   ret 
// library g3d-6.09-png-dll/pngrutil.c (function _png_decompress_chunk)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-png-dll pngrutil.c
