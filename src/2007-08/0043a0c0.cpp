// roc 2007-08 0043a0c0  unit: IIHAAH::?$CMap  size: 884 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043a0c0
//
// 0043a0c0  83ec14               sub esp, 0x14
// 0043a0c3  53                   push ebx
// 0043a0c4  55                   push ebp
// 0043a0c5  56                   push esi
// 0043a0c6  8bf1                 mov esi, ecx
// 0043a0c8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0043a0cc  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0043a0cf  f7d0                 not eax
// 0043a0d1  a801                 test al, 1
// 0043a0d3  57                   push edi
// 0043a0d4  89742414             mov dword ptr [esp + 0x14], esi
// 0043a0d8  0f847f010000         je 0x43a25d
// 0043a0de  8b560c               mov edx, dword ptr [esi + 0xc]
// 0043a0e1  52                   push edx
// 0043a0e2  e8c5651f00           call 0x6306ac
// 0043a0e7  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0043a0eb  0f8439030000         je 0x43a42a
// 0043a0f1  33c0                 xor eax, eax
// 0043a0f3  394608               cmp dword ptr [esi + 8], eax
// 0043a0f6  8944241c             mov dword ptr [esp + 0x1c], eax
// 0043a0fa  0f862a030000         jbe 0x43a42a
// 0043a100  8b4e04               mov ecx, dword ptr [esi + 4]
// 0043a103  8b2c81               mov ebp, dword ptr [ecx + eax*4]
// 0043a106  85ed                 test ebp, ebp
// 0043a108  896c2410             mov dword ptr [esp + 0x10], ebp
// 0043a10c  0f8422010000         je 0x43a234
// 0043a112  eb04                 jmp 0x43a118
// 0043a114  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0043a118  85ed                 test ebp, ebp
// 0043a11a  8d5504               lea edx, [ebp + 4]
// 0043a11d  89542418             mov dword ptr [esp + 0x18], edx
// 0043a121  0f8428010000         je 0x43a24f
// 0043a127  8b442428             mov eax, dword ptr [esp + 0x28]
// 0043a12b  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0043a12e  f7d1                 not ecx
// 0043a130  f6c101               test cl, 1
// 0043a133  bf01000000           mov edi, 1
// 0043a138  7436                 je 0x43a170
// 0043a13a  8d9b00000000         lea ebx, [ebx]
// 0043a140  81ffffffff1f         cmp edi, 0x1fffffff
// 0043a146  8bdf                 mov ebx, edi
// 0043a148  7205                 jb 0x43a14f
// 0043a14a  bbffffff1f           mov ebx, 0x1fffffff
// 0043a14f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0043a153  8d349d00000000       lea esi, [ebx*4]
// 0043a15a  56                   push esi
// 0043a15b  55                   push ebp
// 0043a15c  e833651f00           call 0x630694
// 0043a161  2bfb                 sub edi, ebx
// 0043a163  03ee                 add ebp, esi
// 0043a165  85ff                 test edi, edi
// 0043a167  77d7                 ja 0x43a140
// 0043a169  eb36                 jmp 0x43a1a1
// 0043a16b  eb03                 jmp 0x43a170
// 0043a16d  8d4900               lea ecx, [ecx]
// 0043a170  81ffffffff1f         cmp edi, 0x1fffffff
// 0043a176  8bdf                 mov ebx, edi
// 0043a178  7205                 jb 0x43a17f
// 0043a17a  bbffffff1f           mov ebx, 0x1fffffff
// 0043a17f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0043a183  8d349d00000000       lea esi, [ebx*4]
// 0043a18a  56                   push esi
// 0043a18b  55                   push ebp
// 0043a18c  e8fd641f00           call 0x63068e
// 0043a191  3bc6                 cmp eax, esi
// 0043a193  0f85bb000000         jne 0x43a254
// 0043a199  2bfb                 sub edi, ebx
// 0043a19b  03ee                 add ebp, esi
// 0043a19d  85ff                 test edi, edi
// 0043a19f  77cf                 ja 0x43a170
// 0043a1a1  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0043a1a5  85ed                 test ebp, ebp
// 0043a1a7  0f84a2000000         je 0x43a24f
// 0043a1ad  8b542428             mov edx, dword ptr [esp + 0x28]
// 0043a1b1  8b4218               mov eax, dword ptr [edx + 0x18]
// 0043a1b4  f7d0                 not eax
// 0043a1b6  a801                 test al, 1
// 0043a1b8  bf01000000           mov edi, 1
// 0043a1bd  7431                 je 0x43a1f0
// 0043a1bf  90                   nop 
// 0043a1c0  81ffffffff1f         cmp edi, 0x1fffffff
// 0043a1c6  8bdf                 mov ebx, edi
// 0043a1c8  7205                 jb 0x43a1cf
// 0043a1ca  bbffffff1f           mov ebx, 0x1fffffff
// 0043a1cf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0043a1d3  8d349d00000000       lea esi, [ebx*4]
// 0043a1da  56                   push esi
// 0043a1db  55                   push ebp
// 0043a1dc  e8b3641f00           call 0x630694
// 0043a1e1  2bfb                 sub edi, ebx
// 0043a1e3  03ee                 add ebp, esi
// 0043a1e5  85ff                 test edi, edi
// 0043a1e7  77d7                 ja 0x43a1c0
// 0043a1e9  eb32                 jmp 0x43a21d
// 0043a1eb  eb03                 jmp 0x43a1f0
// 0043a1ed  8d4900               lea ecx, [ecx]
// 0043a1f0  81ffffffff1f         cmp edi, 0x1fffffff
// 0043a1f6  8bdf                 mov ebx, edi
// 0043a1f8  7205                 jb 0x43a1ff
// 0043a1fa  bbffffff1f           mov ebx, 0x1fffffff
// 0043a1ff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0043a203  8d349d00000000       lea esi, [ebx*4]
// 0043a20a  56                   push esi
// 0043a20b  55                   push ebp
// 0043a20c  e87d641f00           call 0x63068e
// 0043a211  3bc6                 cmp eax, esi
// 0043a213  753f                 jne 0x43a254
// 0043a215  2bfb                 sub edi, ebx
// 0043a217  03ee                 add ebp, esi
// 0043a219  85ff                 test edi, edi
// 0043a21b  77d3                 ja 0x43a1f0
// 0043a21d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0043a221  8b4108               mov eax, dword ptr [ecx + 8]
// 0043a224  85c0                 test eax, eax
// 0043a226  89442410             mov dword ptr [esp + 0x10], eax
// 0043a22a  0f85e4feffff         jne 0x43a114
// 0043a230  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0043a234  8b542414             mov edx, dword ptr [esp + 0x14]
// 0043a238  83c001               add eax, 1
// 0043a23b  3b4208               cmp eax, dword ptr [edx + 8]
// 0043a23e  8944241c             mov dword ptr [esp + 0x1c], eax
// 0043a242  0f83e2010000         jae 0x43a42a
// 0043a248  8bf2                 mov esi, edx
// 0043a24a  e9b1feffff           jmp 0x43a100
// 0043a24f  e8cc5c1f00           call 0x62ff20
// 0043a254  6a00                 push 0
// 0043a256  6a03                 push 3
// 0043a258  e82b641f00           call 0x630688
// 0043a25d  e844641f00           call 0x6306a6
// 0043a262  85c0                 test eax, eax
// 0043a264  89442410             mov dword ptr [esp + 0x10], eax
// 0043a268  0f84bc010000         je 0x43a42a
// 0043a26e  8bff                 mov edi, edi
// 0043a270  8b442428             mov eax, dword ptr [esp + 0x28]
// 0043a274  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0043a277  bd01000000           mov ebp, 1
// 0043a27c  296c2410             sub dword ptr [esp + 0x10], ebp
// 0043a280  f7d1                 not ecx
// 0043a282  f6c101               test cl, 1
// 0043a285  8d5c241c             lea ebx, [esp + 0x1c]
// 0043a289  7435                 je 0x43a2c0
// 0043a28b  8bfd                 mov edi, ebp
// 0043a28d  8d4900               lea ecx, [ecx]
// 0043a290  81ffffffff1f         cmp edi, 0x1fffffff
// 0043a296  8bef                 mov ebp, edi
// 0043a298  7205                 jb 0x43a29f
// 0043a29a  bdffffff1f           mov ebp, 0x1fffffff
// 0043a29f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0043a2a3  8d34ad00000000       lea esi, [ebp*4]
// 0043a2aa  56                   push esi
// 0043a2ab  53                   push ebx
// 0043a2ac  e8e3631f00           call 0x630694
// 0043a2b1  2bfd                 sub edi, ebp
// 0043a2b3  03de                 add ebx, esi
// 0043a2b5  85ff                 test edi, edi
// 0043a2b7  77d7                 ja 0x43a290
// 0043a2b9  eb36                 jmp 0x43a2f1
// 0043a2bb  eb03                 jmp 0x43a2c0
// 0043a2bd  8d4900               lea ecx, [ecx]
// 0043a2c0  81fdffffff1f         cmp ebp, 0x1fffffff
// 0043a2c6  8bfd                 mov edi, ebp
// 0043a2c8  7205                 jb 0x43a2cf
// 0043a2ca  bfffffff1f           mov edi, 0x1fffffff
// 0043a2cf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0043a2d3  8d34bd00000000       lea esi, [edi*4]
// 0043a2da  56                   push esi
// 0043a2db  53                   push ebx
// 0043a2dc  e8ad631f00           call 0x63068e
// 0043a2e1  3bc6                 cmp eax, esi
// 0043a2e3  0f856bffffff         jne 0x43a254
// 0043a2e9  2bef                 sub ebp, edi
// 0043a2eb  03de                 add ebx, esi
// 0043a2ed  85ed                 test ebp, ebp
// 0043a2ef  77cf                 ja 0x43a2c0
// 0043a2f1  8b542428             mov edx, dword ptr [esp + 0x28]
// 0043a2f5  8b4218               mov eax, dword ptr [edx + 0x18]
// 0043a2f8  f7d0                 not eax
// 0043a2fa  a801                 test al, 1
// 0043a2fc  8d5c2418             lea ebx, [esp + 0x18]
// 0043a300  7439                 je 0x43a33b
// 0043a302  bf01000000           mov edi, 1
// 0043a307  eb07                 jmp 0x43a310
// 0043a309  8da42400000000       lea esp, [esp]
// 0043a310  81ffffffff1f         cmp edi, 0x1fffffff
// 0043a316  8bef                 mov ebp, edi
// 0043a318  7205                 jb 0x43a31f
// 0043a31a  bdffffff1f           mov ebp, 0x1fffffff
// 0043a31f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0043a323  8d34ad00000000       lea esi, [ebp*4]
// 0043a32a  56                   push esi
// 0043a32b  53                   push ebx
// 0043a32c  e863631f00           call 0x630694
// 0043a331  2bfd                 sub edi, ebp
// 0043a333  03de                 add ebx, esi
// 0043a335  85ff                 test edi, edi
// 0043a337  77d7                 ja 0x43a310
// 0043a339  eb36                 jmp 0x43a371
// 0043a33b  bd01000000           mov ebp, 1
// 0043a340  81fdffffff1f         cmp ebp, 0x1fffffff
// 0043a346  8bfd                 mov edi, ebp
// 0043a348  7205                 jb 0x43a34f
// 0043a34a  bfffffff1f           mov edi, 0x1fffffff
// 0043a34f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0043a353  8d34bd00000000       lea esi, [edi*4]
// 0043a35a  56                   push esi
// 0043a35b  53                   push ebx
// 0043a35c  e82d631f00           call 0x63068e
// 0043a361  3bc6                 cmp eax, esi
// 0043a363  0f85ebfeffff         jne 0x43a254
// 0043a369  2bef                 sub ebp, edi
// 0043a36b  03de                 add ebx, esi
// 0043a36d  85ed                 test ebp, ebp
// 0043a36f  77cf                 ja 0x43a340
// 0043a371  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0043a375  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0043a379  8b6f08               mov ebp, dword ptr [edi + 8]
// 0043a37c  8bf3                 mov esi, ebx
// 0043a37e  c1ee04               shr esi, 4
// 0043a381  33d2                 xor edx, edx
// 0043a383  8bc6                 mov eax, esi
// 0043a385  f7f5                 div ebp
// 0043a387  8b4f04               mov ecx, dword ptr [edi + 4]
// 0043a38a  85c9                 test ecx, ecx
// 0043a38c  89542420             mov dword ptr [esp + 0x20], edx
// 0043a390  7422                 je 0x43a3b4
// 0043a392  8b0491               mov eax, dword ptr [ecx + edx*4]
// 0043a395  85c0                 test eax, eax
// 0043a397  7417                 je 0x43a3b0
// 0043a399  8da42400000000       lea esp, [esp]
// 0043a3a0  39700c               cmp dword ptr [eax + 0xc], esi
// 0043a3a3  7504                 jne 0x43a3a9
// 0043a3a5  3918                 cmp dword ptr [eax], ebx
// 0043a3a7  746f                 je 0x43a418
// 0043a3a9  8b4008               mov eax, dword ptr [eax + 8]
// 0043a3ac  85c0                 test eax, eax
// 0043a3ae  75f0                 jne 0x43a3a0
// 0043a3b0  85c9                 test ecx, ecx
// 0043a3b2  753c                 jne 0x43a3f0
// 0043a3b4  33c9                 xor ecx, ecx
// 0043a3b6  8bc5                 mov eax, ebp
// 0043a3b8  ba04000000           mov edx, 4
// 0043a3bd  f7e2                 mul edx
// 0043a3bf  0f90c1               seto cl
// 0043a3c2  f7d9                 neg ecx
// 0043a3c4  0bc8                 or ecx, eax
// 0043a3c6  51                   push ecx
// 0043a3c7  e8665b1f00           call 0x62ff32
// 0043a3cc  83c404               add esp, 4
// 0043a3cf  85c0                 test eax, eax
// 0043a3d1  894704               mov dword ptr [edi + 4], eax
// 0043a3d4  0f8475feffff         je 0x43a24f
// 0043a3da  8d0cad00000000       lea ecx, [ebp*4]
// 0043a3e1  51                   push ecx
// 0043a3e2  6a00                 push 0
// 0043a3e4  50                   push eax
// 0043a3e5  e8a2671f00           call 0x630b8c
// 0043a3ea  83c40c               add esp, 0xc
// 0043a3ed  896f08               mov dword ptr [edi + 8], ebp
// 0043a3f0  837f0400             cmp dword ptr [edi + 4], 0
// 0043a3f4  0f8455feffff         je 0x43a24f
// 0043a3fa  53                   push ebx
// 0043a3fb  8bcf                 mov ecx, edi
// 0043a3fd  e89e5d2500           call 0x6901a0
// 0043a402  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0043a406  89700c               mov dword ptr [eax + 0xc], esi
// 0043a409  8b5704               mov edx, dword ptr [edi + 4]
// 0043a40c  8b148a               mov edx, dword ptr [edx + ecx*4]
// 0043a40f  895008               mov dword ptr [eax + 8], edx
// 0043a412  8b5704               mov edx, dword ptr [edi + 4]
// 0043a415  89048a               mov dword ptr [edx + ecx*4], eax
// 0043a418  837c241000           cmp dword ptr [esp + 0x10], 0
// 0043a41d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0043a421  894804               mov dword ptr [eax + 4], ecx
// 0043a424  0f8546feffff         jne 0x43a270
// 0043a42a  5f                   pop edi
// 0043a42b  5e                   pop esi
// 0043a42c  5d                   pop ebp
// 0043a42d  5b                   pop ebx
// 0043a42e  83c414               add esp, 0x14
// 0043a431  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTMDIWndTab.cpp (function ?Serialize@?$CMap@PAUHWND__@@PAU1@PAUHICON__@@AAPAU2@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTMDIWndTab.cpp
