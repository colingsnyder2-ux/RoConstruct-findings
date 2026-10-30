// from server: 100% by auto
// roc 2008-06 006dd210  unit: CRobloxTreeCtrl  size: 506 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dd210
//
// 006dd210  81ec88000000         sub esp, 0x88
// 006dd216  53                   push ebx
// 006dd217  55                   push ebp
// 006dd218  56                   push esi
// 006dd219  8bf1                 mov esi, ecx
// 006dd21b  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dd21e  c6463800             mov byte ptr [esi + 0x38], 0
// 006dd222  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dd225  57                   push edi
// 006dd226  51                   push ecx
// 006dd227  ff15a82d8000         call dword ptr [0x802da8]
// 006dd22d  8b3d4c2d8000         mov edi, dword ptr [0x802d4c]
// 006dd233  6a45                 push 0x45
// 006dd235  33ed                 xor ebp, ebp
// 006dd237  ffd7                 call edi
// 006dd239  6a44                 push 0x44
// 006dd23b  89442414             mov dword ptr [esp + 0x14], eax
// 006dd23f  ffd7                 call edi
// 006dd241  8b1d782c8000         mov ebx, dword ptr [0x802c78]
// 006dd247  8bf8                 mov edi, eax
// 006dd249  8da42400000000       lea esp, [esp]
// 006dd250  6a00                 push 0
// 006dd252  6a00                 push 0
// 006dd254  6a00                 push 0
// 006dd256  8d542420             lea edx, [esp + 0x20]
// 006dd25a  52                   push edx
// 006dd25b  ffd3                 call ebx
// 006dd25d  85c0                 test eax, eax
// 006dd25f  746e                 je 0x6dd2cf
// 006dd261  ff15ac2d8000         call dword ptr [0x802dac]
// 006dd267  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd26a  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 006dd26d  7560                 jne 0x6dd2cf
// 006dd26f  8b442418             mov eax, dword ptr [esp + 0x18]
// 006dd273  2d00020000           sub eax, 0x200
// 006dd278  741f                 je 0x6dd299
// 006dd27a  83e802               sub eax, 2
// 006dd27d  0f84d0000000         je 0x6dd353
// 006dd283  83e803               sub eax, 3
// 006dd286  0f84c7000000         je 0x6dd353
// 006dd28c  8d542414             lea edx, [esp + 0x14]
// 006dd290  52                   push edx
// 006dd291  ff15c82c8000         call dword ptr [0x802cc8]
// 006dd297  ebb7                 jmp 0x6dd250
// 006dd299  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006dd29d  0fbfc1               movsx eax, cx
// 006dd2a0  2b8424a8000000       sub eax, dword ptr [esp + 0xa8]
// 006dd2a7  c1e910               shr ecx, 0x10
// 006dd2aa  99                   cdq 
// 006dd2ab  33c2                 xor eax, edx
// 006dd2ad  2bc2                 sub eax, edx
// 006dd2af  3bc7                 cmp eax, edi
// 006dd2b1  0fbfc9               movsx ecx, cx
// 006dd2b4  7f14                 jg 0x6dd2ca
// 006dd2b6  8bc1                 mov eax, ecx
// 006dd2b8  2b8424ac000000       sub eax, dword ptr [esp + 0xac]
// 006dd2bf  99                   cdq 
// 006dd2c0  33c2                 xor eax, edx
// 006dd2c2  2bc2                 sub eax, edx
// 006dd2c4  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006dd2c8  7e86                 jle 0x6dd250
// 006dd2ca  bd02000000           mov ebp, 2
// 006dd2cf  ff15b42d8000         call dword ptr [0x802db4]
// 006dd2d5  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dd2d8  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dd2db  894c2430             mov dword ptr [esp + 0x30], ecx
// 006dd2df  8b5020               mov edx, dword ptr [eax + 0x20]
// 006dd2e2  52                   push edx
// 006dd2e3  ff15682b8000         call dword ptr [0x802b68]
// 006dd2e9  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 006dd2f0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd2f3  57                   push edi
// 006dd2f4  89442438             mov dword ptr [esp + 0x38], eax
// 006dd2f8  c744246c14000000     mov dword ptr [esp + 0x6c], 0x14
// 006dd300  897c2470             mov dword ptr [esp + 0x70], edi
// 006dd304  e84d3cfcff           call 0x6a0f56
// 006dd309  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 006dd30c  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 006dd313  e8f2ec0d00           call 0x7bc00a
// 006dd318  8bd8                 mov ebx, eax
// 006dd31a  83fd01               cmp ebp, 1
// 006dd31d  0f8581000000         jne 0x6dd3a4
// 006dd323  8a8424a4000000       mov al, byte ptr [esp + 0xa4]
// 006dd32a  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 006dd331  a804                 test al, 4
// 006dd333  753e                 jne 0x6dd373
// 006dd335  85db                 test ebx, ebx
// 006dd337  743a                 je 0x6dd373
// 006dd339  8bce                 mov ecx, esi
// 006dd33b  a808                 test al, 8
// 006dd33d  741e                 je 0x6dd35d
// 006dd33f  6a02                 push 2
// 006dd341  57                   push edi
// 006dd342  e8e9f9ffff           call 0x6dcd30
// 006dd347  f7d0                 not eax
// 006dd349  83e002               and eax, 2
// 006dd34c  6a03                 push 3
// 006dd34e  0bc5                 or eax, ebp
// 006dd350  50                   push eax
// 006dd351  eb18                 jmp 0x6dd36b
// 006dd353  bd01000000           mov ebp, 1
// 006dd358  e972ffffff           jmp 0x6dd2cf
// 006dd35d  8b06                 mov eax, dword ptr [esi]
// 006dd35f  8b5050               mov edx, dword ptr [eax + 0x50]
// 006dd362  57                   push edi
// 006dd363  6a00                 push 0
// 006dd365  ffd2                 call edx
// 006dd367  6a03                 push 3
// 006dd369  6a03                 push 3
// 006dd36b  57                   push edi
// 006dd36c  8bce                 mov ecx, esi
// 006dd36e  e88df6ffff           call 0x6dca00
// 006dd373  8b4634               mov eax, dword ptr [esi + 0x34]
// 006dd376  8b7820               mov edi, dword ptr [eax + 0x20]
// 006dd379  ff15102e8000         call dword ptr [0x802e10]
// 006dd37f  3bc7                 cmp eax, edi
// 006dd381  7407                 je 0x6dd38a
// 006dd383  57                   push edi
// 006dd384  ff15242e8000         call dword ptr [0x802e24]
// 006dd38a  8b16                 mov edx, dword ptr [esi]
// 006dd38c  8b524c               mov edx, dword ptr [edx + 0x4c]
// 006dd38f  f7db                 neg ebx
// 006dd391  1bdb                 sbb ebx, ebx
// 006dd393  83e303               and ebx, 3
// 006dd396  83c3fb               add ebx, -5
// 006dd399  8d442430             lea eax, [esp + 0x30]
// 006dd39d  895c2438             mov dword ptr [esp + 0x38], ebx
// 006dd3a1  50                   push eax
// 006dd3a2  eb51                 jmp 0x6dd3f5
// 006dd3a4  83fd02               cmp ebp, 2
// 006dd3a7  7554                 jne 0x6dd3fd
// 006dd3a9  6a03                 push 3
// 006dd3ab  6a03                 push 3
// 006dd3ad  57                   push edi
// 006dd3ae  8bce                 mov ecx, esi
// 006dd3b0  e84bf6ffff           call 0x6dca00
// 006dd3b5  f6c310               test bl, 0x10
// 006dd3b8  753f                 jne 0x6dd3f9
// 006dd3ba  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 006dd3c1  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 006dd3c8  33c0                 xor eax, eax
// 006dd3ca  398424a0000000       cmp dword ptr [esp + 0xa0], eax
// 006dd3d1  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 006dd3d8  0f95c0               setne al
// 006dd3db  8d4c2430             lea ecx, [esp + 0x30]
// 006dd3df  89942494000000       mov dword ptr [esp + 0x94], edx
// 006dd3e6  51                   push ecx
// 006dd3e7  0568feffff           add eax, 0xfffffe68
// 006dd3ec  8944243c             mov dword ptr [esp + 0x3c], eax
// 006dd3f0  8b06                 mov eax, dword ptr [esi]
// 006dd3f2  8b504c               mov edx, dword ptr [eax + 0x4c]
// 006dd3f5  8bce                 mov ecx, esi
// 006dd3f7  ffd2                 call edx
// 006dd3f9  c6463801             mov byte ptr [esi + 0x38], 1
// 006dd3fd  5f                   pop edi
// 006dd3fe  5e                   pop esi
// 006dd3ff  5d                   pop ebp
// 006dd400  5b                   pop ebx
// 006dd401  81c488000000         add esp, 0x88
// 006dd407  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?DoAction@CXTTreeBase@@MAEXPAU_TREEITEM@@HIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
