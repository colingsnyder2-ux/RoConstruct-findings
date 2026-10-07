// roc 2011-06 007de270  unit: seg_007d0000  size: 700 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007de270
//
// 007de270  83ec08               sub esp, 8
// 007de273  53                   push ebx
// 007de274  55                   push ebp
// 007de275  56                   push esi
// 007de276  8bf0                 mov esi, eax
// 007de278  e8a3fbffff           call 0x7dde20
// 007de27d  8bd8                 mov ebx, eax
// 007de27f  8d4301               lea eax, [ebx + 1]
// 007de282  3dffffff3f           cmp eax, 0x3fffffff
// 007de287  7719                 ja 0x7de2a2
// 007de289  8b16                 mov edx, dword ptr [esi]
// 007de28b  8d0c9d00000000       lea ecx, [ebx*4]
// 007de292  51                   push ecx
// 007de293  6a00                 push 0
// 007de295  6a00                 push 0
// 007de297  52                   push edx
// 007de298  e8a3cbffff           call 0x7dae40
// 007de29d  83c410               add esp, 0x10
// 007de2a0  eb0b                 jmp 0x7de2ad
// 007de2a2  8b06                 mov eax, dword ptr [esi]
// 007de2a4  50                   push eax
// 007de2a5  e876cbffff           call 0x7dae20
// 007de2aa  83c404               add esp, 4
// 007de2ad  8d0c9d00000000       lea ecx, [ebx*4]
// 007de2b4  51                   push ecx
// 007de2b5  894714               mov dword ptr [edi + 0x14], eax
// 007de2b8  895f30               mov dword ptr [edi + 0x30], ebx
// 007de2bb  8b5604               mov edx, dword ptr [esi + 4]
// 007de2be  50                   push eax
// 007de2bf  52                   push edx
// 007de2c0  e86bc5ffff           call 0x7da830
// 007de2c5  83c40c               add esp, 0xc
// 007de2c8  85c0                 test eax, eax
// 007de2ca  7423                 je 0x7de2ef
// 007de2cc  8b460c               mov eax, dword ptr [esi + 0xc]
// 007de2cf  8b0e                 mov ecx, dword ptr [esi]
// 007de2d1  68b4e3ab00           push 0xabe3b4
// 007de2d6  50                   push eax
// 007de2d7  6898e3ab00           push 0xabe398
// 007de2dc  51                   push ecx
// 007de2dd  e83eebf9ff           call 0x77ce20
// 007de2e2  8b16                 mov edx, dword ptr [esi]
// 007de2e4  6a03                 push 3
// 007de2e6  52                   push edx
// 007de2e7  e80405faff           call 0x77e7f0
// 007de2ec  83c418               add esp, 0x18
// 007de2ef  e82cfbffff           call 0x7dde20
// 007de2f4  8bd8                 mov ebx, eax
// 007de2f6  8d4301               lea eax, [ebx + 1]
// 007de2f9  3d55555515           cmp eax, 0x15555555
// 007de2fe  7719                 ja 0x7de319
// 007de300  8b16                 mov edx, dword ptr [esi]
// 007de302  8d0c5b               lea ecx, [ebx + ebx*2]
// 007de305  03c9                 add ecx, ecx
// 007de307  03c9                 add ecx, ecx
// 007de309  51                   push ecx
// 007de30a  6a00                 push 0
// 007de30c  6a00                 push 0
// 007de30e  52                   push edx
// 007de30f  e82ccbffff           call 0x7dae40
// 007de314  83c410               add esp, 0x10
// 007de317  eb0b                 jmp 0x7de324
// 007de319  8b06                 mov eax, dword ptr [esi]
// 007de31b  50                   push eax
// 007de31c  e8ffcaffff           call 0x7dae20
// 007de321  83c404               add esp, 4
// 007de324  894718               mov dword ptr [edi + 0x18], eax
// 007de327  895f38               mov dword ptr [edi + 0x38], ebx
// 007de32a  85db                 test ebx, ebx
// 007de32c  0f8e23010000         jle 0x7de455
// 007de332  33c0                 xor eax, eax
// 007de334  8bcb                 mov ecx, ebx
// 007de336  eb08                 jmp 0x7de340
// 007de338  8da42400000000       lea esp, [esp]
// 007de33f  90                   nop 
// 007de340  8b5718               mov edx, dword ptr [edi + 0x18]
// 007de343  c7041000000000       mov dword ptr [eax + edx], 0
// 007de34a  83c00c               add eax, 0xc
// 007de34d  83e901               sub ecx, 1
// 007de350  75ee                 jne 0x7de340
// 007de352  85db                 test ebx, ebx
// 007de354  0f8efb000000         jle 0x7de455
// 007de35a  33ed                 xor ebp, ebp
// 007de35c  8d642400             lea esp, [esp]
// 007de360  e82bfbffff           call 0x7dde90
// 007de365  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 007de368  6a04                 push 4
// 007de36a  8d542410             lea edx, [esp + 0x10]
// 007de36e  890429               mov dword ptr [ecx + ebp], eax
// 007de371  8b4604               mov eax, dword ptr [esi + 4]
// 007de374  52                   push edx
// 007de375  50                   push eax
// 007de376  e8b5c4ffff           call 0x7da830
// 007de37b  83c40c               add esp, 0xc
// 007de37e  85c0                 test eax, eax
// 007de380  7423                 je 0x7de3a5
// 007de382  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007de385  8b16                 mov edx, dword ptr [esi]
// 007de387  68b4e3ab00           push 0xabe3b4
// 007de38c  51                   push ecx
// 007de38d  6898e3ab00           push 0xabe398
// 007de392  52                   push edx
// 007de393  e888eaf9ff           call 0x77ce20
// 007de398  8b06                 mov eax, dword ptr [esi]
// 007de39a  6a03                 push 3
// 007de39c  50                   push eax
// 007de39d  e84e04faff           call 0x77e7f0
// 007de3a2  83c418               add esp, 0x18
// 007de3a5  837c240c00           cmp dword ptr [esp + 0xc], 0
// 007de3aa  7d23                 jge 0x7de3cf
// 007de3ac  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007de3af  8b16                 mov edx, dword ptr [esi]
// 007de3b1  68c4e3ab00           push 0xabe3c4
// 007de3b6  51                   push ecx
// 007de3b7  6898e3ab00           push 0xabe398
// 007de3bc  52                   push edx
// 007de3bd  e85eeaf9ff           call 0x77ce20
// 007de3c2  8b06                 mov eax, dword ptr [esi]
// 007de3c4  6a03                 push 3
// 007de3c6  50                   push eax
// 007de3c7  e82404faff           call 0x77e7f0
// 007de3cc  83c418               add esp, 0x18
// 007de3cf  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 007de3d2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007de3d6  6a04                 push 4
// 007de3d8  8d442414             lea eax, [esp + 0x14]
// 007de3dc  89542904             mov dword ptr [ecx + ebp + 4], edx
// 007de3e0  8b4e04               mov ecx, dword ptr [esi + 4]
// 007de3e3  50                   push eax
// 007de3e4  51                   push ecx
// 007de3e5  e846c4ffff           call 0x7da830
// 007de3ea  83c40c               add esp, 0xc
// 007de3ed  85c0                 test eax, eax
// 007de3ef  7423                 je 0x7de414
// 007de3f1  8b560c               mov edx, dword ptr [esi + 0xc]
// 007de3f4  8b06                 mov eax, dword ptr [esi]
// 007de3f6  68b4e3ab00           push 0xabe3b4
// 007de3fb  52                   push edx
// 007de3fc  6898e3ab00           push 0xabe398
// 007de401  50                   push eax
// 007de402  e819eaf9ff           call 0x77ce20
// 007de407  8b0e                 mov ecx, dword ptr [esi]
// 007de409  6a03                 push 3
// 007de40b  51                   push ecx
// 007de40c  e8df03faff           call 0x77e7f0
// 007de411  83c418               add esp, 0x18
// 007de414  837c241000           cmp dword ptr [esp + 0x10], 0
// 007de419  7d23                 jge 0x7de43e
// 007de41b  8b560c               mov edx, dword ptr [esi + 0xc]
// 007de41e  8b06                 mov eax, dword ptr [esi]
// 007de420  68c4e3ab00           push 0xabe3c4
// 007de425  52                   push edx
// 007de426  6898e3ab00           push 0xabe398
// 007de42b  50                   push eax
// 007de42c  e8efe9f9ff           call 0x77ce20
// 007de431  8b0e                 mov ecx, dword ptr [esi]
// 007de433  6a03                 push 3
// 007de435  51                   push ecx
// 007de436  e8b503faff           call 0x77e7f0
// 007de43b  83c418               add esp, 0x18
// 007de43e  8b5718               mov edx, dword ptr [edi + 0x18]
// 007de441  8b442410             mov eax, dword ptr [esp + 0x10]
// 007de445  89442a08             mov dword ptr [edx + ebp + 8], eax
// 007de449  83c50c               add ebp, 0xc
// 007de44c  83eb01               sub ebx, 1
// 007de44f  0f850bffffff         jne 0x7de360
// 007de455  8b5604               mov edx, dword ptr [esi + 4]
// 007de458  6a04                 push 4
// 007de45a  8d4c2414             lea ecx, [esp + 0x14]
// 007de45e  51                   push ecx
// 007de45f  52                   push edx
// 007de460  e8cbc3ffff           call 0x7da830
// 007de465  83c40c               add esp, 0xc
// 007de468  85c0                 test eax, eax
// 007de46a  7423                 je 0x7de48f
// 007de46c  8b460c               mov eax, dword ptr [esi + 0xc]
// 007de46f  8b0e                 mov ecx, dword ptr [esi]
// 007de471  68b4e3ab00           push 0xabe3b4
// 007de476  50                   push eax
// 007de477  6898e3ab00           push 0xabe398
// 007de47c  51                   push ecx
// 007de47d  e89ee9f9ff           call 0x77ce20
// 007de482  8b16                 mov edx, dword ptr [esi]
// 007de484  6a03                 push 3
// 007de486  52                   push edx
// 007de487  e86403faff           call 0x77e7f0
// 007de48c  83c418               add esp, 0x18
// 007de48f  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007de493  85db                 test ebx, ebx
// 007de495  7d27                 jge 0x7de4be
// 007de497  8b460c               mov eax, dword ptr [esi + 0xc]
// 007de49a  8b0e                 mov ecx, dword ptr [esi]
// 007de49c  68c4e3ab00           push 0xabe3c4
// 007de4a1  50                   push eax
// 007de4a2  6898e3ab00           push 0xabe398
// 007de4a7  51                   push ecx
// 007de4a8  e873e9f9ff           call 0x77ce20
// 007de4ad  8b16                 mov edx, dword ptr [esi]
// 007de4af  6a03                 push 3
// 007de4b1  52                   push edx
// 007de4b2  e83903faff           call 0x77e7f0
// 007de4b7  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007de4bb  83c418               add esp, 0x18
// 007de4be  8d4301               lea eax, [ebx + 1]
// 007de4c1  3dffffff3f           cmp eax, 0x3fffffff
// 007de4c6  7719                 ja 0x7de4e1
// 007de4c8  8b16                 mov edx, dword ptr [esi]
// 007de4ca  8d0c9d00000000       lea ecx, [ebx*4]
// 007de4d1  51                   push ecx
// 007de4d2  6a00                 push 0
// 007de4d4  6a00                 push 0
// 007de4d6  52                   push edx
// 007de4d7  e864c9ffff           call 0x7dae40
// 007de4dc  83c410               add esp, 0x10
// 007de4df  eb0b                 jmp 0x7de4ec
// 007de4e1  8b06                 mov eax, dword ptr [esi]
// 007de4e3  50                   push eax
// 007de4e4  e837c9ffff           call 0x7dae20
// 007de4e9  83c404               add esp, 4
// 007de4ec  89471c               mov dword ptr [edi + 0x1c], eax
// 007de4ef  33c0                 xor eax, eax
// 007de4f1  895f24               mov dword ptr [edi + 0x24], ebx
// 007de4f4  85db                 test ebx, ebx
// 007de4f6  7e17                 jle 0x7de50f
// 007de4f8  eb06                 jmp 0x7de500
// 007de4fa  8d9b00000000         lea ebx, [ebx]
// 007de500  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 007de503  c7048100000000       mov dword ptr [ecx + eax*4], 0
// 007de50a  40                   inc eax
// 007de50b  3bc3                 cmp eax, ebx
// 007de50d  7cf1                 jl 0x7de500
// 007de50f  33ed                 xor ebp, ebp
// 007de511  85db                 test ebx, ebx
// 007de513  7e10                 jle 0x7de525
// 007de515  e876f9ffff           call 0x7dde90
// 007de51a  8b571c               mov edx, dword ptr [edi + 0x1c]
// 007de51d  8904aa               mov dword ptr [edx + ebp*4], eax
// 007de520  45                   inc ebp
// 007de521  3beb                 cmp ebp, ebx
// 007de523  7cf0                 jl 0x7de515
// 007de525  5e                   pop esi
// 007de526  5d                   pop ebp
// 007de527  5b                   pop ebx
// 007de528  83c408               add esp, 8
// 007de52b  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadDebug)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
