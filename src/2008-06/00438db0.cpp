// roc 2008-06 00438db0  unit: IIHAAH::?$CMap  size: 884 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00438db0
//
// 00438db0  83ec14               sub esp, 0x14
// 00438db3  53                   push ebx
// 00438db4  55                   push ebp
// 00438db5  56                   push esi
// 00438db6  8bf1                 mov esi, ecx
// 00438db8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00438dbc  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00438dbf  f7d0                 not eax
// 00438dc1  57                   push edi
// 00438dc2  89742414             mov dword ptr [esp + 0x14], esi
// 00438dc6  a801                 test al, 1
// 00438dc8  0f847d010000         je 0x438f4b
// 00438dce  8b560c               mov edx, dword ptr [esi + 0xc]
// 00438dd1  52                   push edx
// 00438dd2  e871832600           call 0x6a1148
// 00438dd7  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00438ddb  0f8439030000         je 0x43911a
// 00438de1  33c0                 xor eax, eax
// 00438de3  8944241c             mov dword ptr [esp + 0x1c], eax
// 00438de7  394608               cmp dword ptr [esi + 8], eax
// 00438dea  0f862a030000         jbe 0x43911a
// 00438df0  8b4e04               mov ecx, dword ptr [esi + 4]
// 00438df3  8b2c81               mov ebp, dword ptr [ecx + eax*4]
// 00438df6  896c2410             mov dword ptr [esp + 0x10], ebp
// 00438dfa  85ed                 test ebp, ebp
// 00438dfc  0f8422010000         je 0x438f24
// 00438e02  eb04                 jmp 0x438e08
// 00438e04  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00438e08  8d5504               lea edx, [ebp + 4]
// 00438e0b  89542418             mov dword ptr [esp + 0x18], edx
// 00438e0f  85ed                 test ebp, ebp
// 00438e11  0f8426010000         je 0x438f3d
// 00438e17  8b442428             mov eax, dword ptr [esp + 0x28]
// 00438e1b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00438e1e  f7d1                 not ecx
// 00438e20  bf01000000           mov edi, 1
// 00438e25  f6c101               test cl, 1
// 00438e28  7436                 je 0x438e60
// 00438e2a  8d9b00000000         lea ebx, [ebx]
// 00438e30  8bdf                 mov ebx, edi
// 00438e32  81ffffffff1f         cmp edi, 0x1fffffff
// 00438e38  7205                 jb 0x438e3f
// 00438e3a  bbffffff1f           mov ebx, 0x1fffffff
// 00438e3f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00438e43  8d349d00000000       lea esi, [ebx*4]
// 00438e4a  56                   push esi
// 00438e4b  55                   push ebp
// 00438e4c  e8df822600           call 0x6a1130
// 00438e51  2bfb                 sub edi, ebx
// 00438e53  03ee                 add ebp, esi
// 00438e55  85ff                 test edi, edi
// 00438e57  77d7                 ja 0x438e30
// 00438e59  eb36                 jmp 0x438e91
// 00438e5b  eb03                 jmp 0x438e60
// 00438e5d  8d4900               lea ecx, [ecx]
// 00438e60  8bdf                 mov ebx, edi
// 00438e62  81ffffffff1f         cmp edi, 0x1fffffff
// 00438e68  7205                 jb 0x438e6f
// 00438e6a  bbffffff1f           mov ebx, 0x1fffffff
// 00438e6f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00438e73  8d349d00000000       lea esi, [ebx*4]
// 00438e7a  56                   push esi
// 00438e7b  55                   push ebp
// 00438e7c  e8a9822600           call 0x6a112a
// 00438e81  3bc6                 cmp eax, esi
// 00438e83  0f85b9000000         jne 0x438f42
// 00438e89  2bfb                 sub edi, ebx
// 00438e8b  03ee                 add ebp, esi
// 00438e8d  85ff                 test edi, edi
// 00438e8f  77cf                 ja 0x438e60
// 00438e91  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00438e95  85ed                 test ebp, ebp
// 00438e97  0f84a0000000         je 0x438f3d
// 00438e9d  8b542428             mov edx, dword ptr [esp + 0x28]
// 00438ea1  8b4218               mov eax, dword ptr [edx + 0x18]
// 00438ea4  f7d0                 not eax
// 00438ea6  bf01000000           mov edi, 1
// 00438eab  a801                 test al, 1
// 00438ead  7431                 je 0x438ee0
// 00438eaf  90                   nop 
// 00438eb0  8bdf                 mov ebx, edi
// 00438eb2  81ffffffff1f         cmp edi, 0x1fffffff
// 00438eb8  7205                 jb 0x438ebf
// 00438eba  bbffffff1f           mov ebx, 0x1fffffff
// 00438ebf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00438ec3  8d349d00000000       lea esi, [ebx*4]
// 00438eca  56                   push esi
// 00438ecb  55                   push ebp
// 00438ecc  e85f822600           call 0x6a1130
// 00438ed1  2bfb                 sub edi, ebx
// 00438ed3  03ee                 add ebp, esi
// 00438ed5  85ff                 test edi, edi
// 00438ed7  77d7                 ja 0x438eb0
// 00438ed9  eb32                 jmp 0x438f0d
// 00438edb  eb03                 jmp 0x438ee0
// 00438edd  8d4900               lea ecx, [ecx]
// 00438ee0  8bdf                 mov ebx, edi
// 00438ee2  81ffffffff1f         cmp edi, 0x1fffffff
// 00438ee8  7205                 jb 0x438eef
// 00438eea  bbffffff1f           mov ebx, 0x1fffffff
// 00438eef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00438ef3  8d349d00000000       lea esi, [ebx*4]
// 00438efa  56                   push esi
// 00438efb  55                   push ebp
// 00438efc  e829822600           call 0x6a112a
// 00438f01  3bc6                 cmp eax, esi
// 00438f03  753d                 jne 0x438f42
// 00438f05  2bfb                 sub edi, ebx
// 00438f07  03ee                 add ebp, esi
// 00438f09  85ff                 test edi, edi
// 00438f0b  77d3                 ja 0x438ee0
// 00438f0d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00438f11  8b4108               mov eax, dword ptr [ecx + 8]
// 00438f14  89442410             mov dword ptr [esp + 0x10], eax
// 00438f18  85c0                 test eax, eax
// 00438f1a  0f85e4feffff         jne 0x438e04
// 00438f20  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00438f24  8b542414             mov edx, dword ptr [esp + 0x14]
// 00438f28  40                   inc eax
// 00438f29  8944241c             mov dword ptr [esp + 0x1c], eax
// 00438f2d  3b4208               cmp eax, dword ptr [edx + 8]
// 00438f30  0f83e4010000         jae 0x43911a
// 00438f36  8bf2                 mov esi, edx
// 00438f38  e9b3feffff           jmp 0x438df0
// 00438f3d  e8027a2600           call 0x6a0944
// 00438f42  6a00                 push 0
// 00438f44  6a03                 push 3
// 00438f46  e8d9812600           call 0x6a1124
// 00438f4b  e8f2812600           call 0x6a1142
// 00438f50  89442410             mov dword ptr [esp + 0x10], eax
// 00438f54  85c0                 test eax, eax
// 00438f56  0f84be010000         je 0x43911a
// 00438f5c  8d642400             lea esp, [esp]
// 00438f60  8b442428             mov eax, dword ptr [esp + 0x28]
// 00438f64  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00438f67  bd01000000           mov ebp, 1
// 00438f6c  296c2410             sub dword ptr [esp + 0x10], ebp
// 00438f70  f7d1                 not ecx
// 00438f72  8d5c241c             lea ebx, [esp + 0x1c]
// 00438f76  f6c101               test cl, 1
// 00438f79  7435                 je 0x438fb0
// 00438f7b  8bfd                 mov edi, ebp
// 00438f7d  8d4900               lea ecx, [ecx]
// 00438f80  8bef                 mov ebp, edi
// 00438f82  81ffffffff1f         cmp edi, 0x1fffffff
// 00438f88  7205                 jb 0x438f8f
// 00438f8a  bdffffff1f           mov ebp, 0x1fffffff
// 00438f8f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00438f93  8d34ad00000000       lea esi, [ebp*4]
// 00438f9a  56                   push esi
// 00438f9b  53                   push ebx
// 00438f9c  e88f812600           call 0x6a1130
// 00438fa1  2bfd                 sub edi, ebp
// 00438fa3  03de                 add ebx, esi
// 00438fa5  85ff                 test edi, edi
// 00438fa7  77d7                 ja 0x438f80
// 00438fa9  eb36                 jmp 0x438fe1
// 00438fab  eb03                 jmp 0x438fb0
// 00438fad  8d4900               lea ecx, [ecx]
// 00438fb0  8bfd                 mov edi, ebp
// 00438fb2  81fdffffff1f         cmp ebp, 0x1fffffff
// 00438fb8  7205                 jb 0x438fbf
// 00438fba  bfffffff1f           mov edi, 0x1fffffff
// 00438fbf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00438fc3  8d34bd00000000       lea esi, [edi*4]
// 00438fca  56                   push esi
// 00438fcb  53                   push ebx
// 00438fcc  e859812600           call 0x6a112a
// 00438fd1  3bc6                 cmp eax, esi
// 00438fd3  0f8569ffffff         jne 0x438f42
// 00438fd9  2bef                 sub ebp, edi
// 00438fdb  03de                 add ebx, esi
// 00438fdd  85ed                 test ebp, ebp
// 00438fdf  77cf                 ja 0x438fb0
// 00438fe1  8b542428             mov edx, dword ptr [esp + 0x28]
// 00438fe5  8b4218               mov eax, dword ptr [edx + 0x18]
// 00438fe8  f7d0                 not eax
// 00438fea  8d5c2418             lea ebx, [esp + 0x18]
// 00438fee  a801                 test al, 1
// 00438ff0  7439                 je 0x43902b
// 00438ff2  bf01000000           mov edi, 1
// 00438ff7  eb07                 jmp 0x439000
// 00438ff9  8da42400000000       lea esp, [esp]
// 00439000  8bef                 mov ebp, edi
// 00439002  81ffffffff1f         cmp edi, 0x1fffffff
// 00439008  7205                 jb 0x43900f
// 0043900a  bdffffff1f           mov ebp, 0x1fffffff
// 0043900f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00439013  8d34ad00000000       lea esi, [ebp*4]
// 0043901a  56                   push esi
// 0043901b  53                   push ebx
// 0043901c  e80f812600           call 0x6a1130
// 00439021  2bfd                 sub edi, ebp
// 00439023  03de                 add ebx, esi
// 00439025  85ff                 test edi, edi
// 00439027  77d7                 ja 0x439000
// 00439029  eb36                 jmp 0x439061
// 0043902b  bd01000000           mov ebp, 1
// 00439030  8bfd                 mov edi, ebp
// 00439032  81fdffffff1f         cmp ebp, 0x1fffffff
// 00439038  7205                 jb 0x43903f
// 0043903a  bfffffff1f           mov edi, 0x1fffffff
// 0043903f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00439043  8d34bd00000000       lea esi, [edi*4]
// 0043904a  56                   push esi
// 0043904b  53                   push ebx
// 0043904c  e8d9802600           call 0x6a112a
// 00439051  3bc6                 cmp eax, esi
// 00439053  0f85e9feffff         jne 0x438f42
// 00439059  2bef                 sub ebp, edi
// 0043905b  03de                 add ebx, esi
// 0043905d  85ed                 test ebp, ebp
// 0043905f  77cf                 ja 0x439030
// 00439061  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00439065  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00439069  8b6f08               mov ebp, dword ptr [edi + 8]
// 0043906c  8bf3                 mov esi, ebx
// 0043906e  c1ee04               shr esi, 4
// 00439071  33d2                 xor edx, edx
// 00439073  8bc6                 mov eax, esi
// 00439075  f7f5                 div ebp
// 00439077  8b4f04               mov ecx, dword ptr [edi + 4]
// 0043907a  89542420             mov dword ptr [esp + 0x20], edx
// 0043907e  85c9                 test ecx, ecx
// 00439080  7422                 je 0x4390a4
// 00439082  8b0491               mov eax, dword ptr [ecx + edx*4]
// 00439085  85c0                 test eax, eax
// 00439087  7417                 je 0x4390a0
// 00439089  8da42400000000       lea esp, [esp]
// 00439090  39700c               cmp dword ptr [eax + 0xc], esi
// 00439093  7504                 jne 0x439099
// 00439095  3918                 cmp dword ptr [eax], ebx
// 00439097  746f                 je 0x439108
// 00439099  8b4008               mov eax, dword ptr [eax + 8]
// 0043909c  85c0                 test eax, eax
// 0043909e  75f0                 jne 0x439090
// 004390a0  85c9                 test ecx, ecx
// 004390a2  753c                 jne 0x4390e0
// 004390a4  33c9                 xor ecx, ecx
// 004390a6  8bc5                 mov eax, ebp
// 004390a8  ba04000000           mov edx, 4
// 004390ad  f7e2                 mul edx
// 004390af  0f90c1               seto cl
// 004390b2  f7d9                 neg ecx
// 004390b4  0bc8                 or ecx, eax
// 004390b6  51                   push ecx
// 004390b7  e89a782600           call 0x6a0956
// 004390bc  83c404               add esp, 4
// 004390bf  894704               mov dword ptr [edi + 4], eax
// 004390c2  85c0                 test eax, eax
// 004390c4  0f8473feffff         je 0x438f3d
// 004390ca  8d0cad00000000       lea ecx, [ebp*4]
// 004390d1  51                   push ecx
// 004390d2  6a00                 push 0
// 004390d4  50                   push eax
// 004390d5  e82a862600           call 0x6a1704
// 004390da  83c40c               add esp, 0xc
// 004390dd  896f08               mov dword ptr [edi + 8], ebp
// 004390e0  837f0400             cmp dword ptr [edi + 4], 0
// 004390e4  0f8453feffff         je 0x438f3d
// 004390ea  53                   push ebx
// 004390eb  8bcf                 mov ecx, edi
// 004390ed  e84e832e00           call 0x721440
// 004390f2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004390f6  89700c               mov dword ptr [eax + 0xc], esi
// 004390f9  8b5704               mov edx, dword ptr [edi + 4]
// 004390fc  8b148a               mov edx, dword ptr [edx + ecx*4]
// 004390ff  895008               mov dword ptr [eax + 8], edx
// 00439102  8b5704               mov edx, dword ptr [edi + 4]
// 00439105  89048a               mov dword ptr [edx + ecx*4], eax
// 00439108  837c241000           cmp dword ptr [esp + 0x10], 0
// 0043910d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00439111  894804               mov dword ptr [eax + 4], ecx
// 00439114  0f8546feffff         jne 0x438f60
// 0043911a  5f                   pop edi
// 0043911b  5e                   pop esi
// 0043911c  5d                   pop ebp
// 0043911d  5b                   pop ebx
// 0043911e  83c414               add esp, 0x14
// 00439121  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTMDIWndTab.cpp (function ?Serialize@?$CMap@PAUHWND__@@PAU1@PAUHICON__@@AAPAU2@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTMDIWndTab.cpp
