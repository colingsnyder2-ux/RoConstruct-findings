// roc 2011-06 008af1b0  unit: CXTPReportPaintManager  size: 746 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008af1b0
//
// 008af1b0  6aff                 push -1
// 008af1b2  6838afa000           push 0xa0af38
// 008af1b7  64a100000000         mov eax, dword ptr fs:[0]
// 008af1bd  50                   push eax
// 008af1be  83ec50               sub esp, 0x50
// 008af1c1  53                   push ebx
// 008af1c2  55                   push ebp
// 008af1c3  56                   push esi
// 008af1c4  57                   push edi
// 008af1c5  a12058c900           mov eax, dword ptr [0xc95820]
// 008af1ca  33c4                 xor eax, esp
// 008af1cc  50                   push eax
// 008af1cd  8d442464             lea eax, [esp + 0x64]
// 008af1d1  64a300000000         mov dword ptr fs:[0], eax
// 008af1d7  8bf9                 mov edi, ecx
// 008af1d9  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 008af1dd  53                   push ebx
// 008af1de  8d4c2418             lea ecx, [esp + 0x18]
// 008af1e2  e8a9dbfaff           call 0x85cd90
// 008af1e7  83bf5c02000000       cmp dword ptr [edi + 0x25c], 0
// 008af1ee  0f8452010000         je 0x8af346
// 008af1f4  837b7865             cmp dword ptr [ebx + 0x78], 0x65
// 008af1f8  7559                 jne 0x8af253
// 008af1fa  8db7d8020000         lea esi, [edi + 0x2d8]
// 008af200  8bce                 mov ecx, esi
// 008af202  e8c9e0fcff           call 0x87d2d0
// 008af207  85c0                 test eax, eax
// 008af209  7448                 je 0x8af253
// 008af20b  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 008af212  7410                 je 0x8af224
// 008af214  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 008af21b  7407                 je 0x8af224
// 008af21d  b901000000           mov ecx, 1
// 008af222  eb02                 jmp 0x8af226
// 008af224  33c9                 xor ecx, ecx
// 008af226  8b442474             mov eax, dword ptr [esp + 0x74]
// 008af22a  85c0                 test eax, eax
// 008af22c  7403                 je 0x8af231
// 008af22e  8b4004               mov eax, dword ptr [eax + 4]
// 008af231  6a00                 push 0
// 008af233  8d542418             lea edx, [esp + 0x18]
// 008af237  52                   push edx
// 008af238  33d2                 xor edx, edx
// 008af23a  85c9                 test ecx, ecx
// 008af23c  0f95c2               setne dl
// 008af23f  8bce                 mov ecx, esi
// 008af241  8d541201             lea edx, [edx + edx + 1]
// 008af245  52                   push edx
// 008af246  6a01                 push 1
// 008af248  50                   push eax
// 008af249  e8b2ddfcff           call 0x87d000
// 008af24e  e931020000           jmp 0x8af484
// 008af253  837b7864             cmp dword ptr [ebx + 0x78], 0x64
// 008af257  0f85e9000000         jne 0x8af346
// 008af25d  8dafcc020000         lea ebp, [edi + 0x2cc]
// 008af263  8bcd                 mov ecx, ebp
// 008af265  e866e0fcff           call 0x87d2d0
// 008af26a  85c0                 test eax, eax
// 008af26c  0f84d4000000         je 0x8af346
// 008af272  e86961f9ff           call 0x8453e0
// 008af277  6a0f                 push 0xf
// 008af279  8bc8                 mov ecx, eax
// 008af27b  e83059f9ff           call 0x844bb0
// 008af280  8b742474             mov esi, dword ptr [esp + 0x74]
// 008af284  50                   push eax
// 008af285  8d442418             lea eax, [esp + 0x18]
// 008af289  50                   push eax
// 008af28a  8bce                 mov ecx, esi
// 008af28c  e88fbbf5ff           call 0x80ae20
// 008af291  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 008af298  7410                 je 0x8af2aa
// 008af29a  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 008af2a1  7407                 je 0x8af2aa
// 008af2a3  b903000000           mov ecx, 3
// 008af2a8  eb1a                 jmp 0x8af2c4
// 008af2aa  ff15f819a400         call dword ptr [0xa419f8]
// 008af2b0  50                   push eax
// 008af2b1  e872b0f5ff           call 0x80a328
// 008af2b6  33c9                 xor ecx, ecx
// 008af2b8  3bc3                 cmp eax, ebx
// 008af2ba  0f94c1               sete cl
// 008af2bd  8d0c8d01000000       lea ecx, [ecx*4 + 1]
// 008af2c4  85f6                 test esi, esi
// 008af2c6  7504                 jne 0x8af2cc
// 008af2c8  33c0                 xor eax, eax
// 008af2ca  eb03                 jmp 0x8af2cf
// 008af2cc  8b4604               mov eax, dword ptr [esi + 4]
// 008af2cf  6a00                 push 0
// 008af2d1  8d542418             lea edx, [esp + 0x18]
// 008af2d5  52                   push edx
// 008af2d6  51                   push ecx
// 008af2d7  6a01                 push 1
// 008af2d9  50                   push eax
// 008af2da  8bcd                 mov ecx, ebp
// 008af2dc  e81fddfcff           call 0x87d000
// 008af2e1  8b442420             mov eax, dword ptr [esp + 0x20]
// 008af2e5  8b3dc000a400         mov edi, dword ptr [0xa400c0]
// 008af2eb  8d48fd               lea ecx, [eax - 3]
// 008af2ee  51                   push ecx
// 008af2ef  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008af2f3  8d5105               lea edx, [ecx + 5]
// 008af2f6  52                   push edx
// 008af2f7  83c0fb               add eax, -5
// 008af2fa  50                   push eax
// 008af2fb  8b4604               mov eax, dword ptr [esi + 4]
// 008af2fe  83c103               add ecx, 3
// 008af301  51                   push ecx
// 008af302  50                   push eax
// 008af303  ffd7                 call edi
// 008af305  8b442420             mov eax, dword ptr [esp + 0x20]
// 008af309  8d48fd               lea ecx, [eax - 3]
// 008af30c  51                   push ecx
// 008af30d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008af311  8d5109               lea edx, [ecx + 9]
// 008af314  52                   push edx
// 008af315  83c0fb               add eax, -5
// 008af318  50                   push eax
// 008af319  8b4604               mov eax, dword ptr [esi + 4]
// 008af31c  83c107               add ecx, 7
// 008af31f  51                   push ecx
// 008af320  50                   push eax
// 008af321  ffd7                 call edi
// 008af323  8b442420             mov eax, dword ptr [esp + 0x20]
// 008af327  8d48fd               lea ecx, [eax - 3]
// 008af32a  51                   push ecx
// 008af32b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008af32f  8d510d               lea edx, [ecx + 0xd]
// 008af332  52                   push edx
// 008af333  83c0fb               add eax, -5
// 008af336  50                   push eax
// 008af337  8b4604               mov eax, dword ptr [esi + 4]
// 008af33a  83c10b               add ecx, 0xb
// 008af33d  51                   push ecx
// 008af33e  50                   push eax
// 008af33f  ffd7                 call edi
// 008af341  e93e010000           jmp 0x8af484
// 008af346  8b17                 mov edx, dword ptr [edi]
// 008af348  8b742474             mov esi, dword ptr [esp + 0x74]
// 008af34c  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 008af352  53                   push ebx
// 008af353  56                   push esi
// 008af354  8bcf                 mov ecx, edi
// 008af356  ffd0                 call eax
// 008af358  e88360f9ff           call 0x8453e0
// 008af35d  6a12                 push 0x12
// 008af35f  8bc8                 mov ecx, eax
// 008af361  e84a58f9ff           call 0x844bb0
// 008af366  85f6                 test esi, esi
// 008af368  7504                 jne 0x8af36e
// 008af36a  33c9                 xor ecx, ecx
// 008af36c  eb03                 jmp 0x8af371
// 008af36e  8b4e04               mov ecx, dword ptr [esi + 4]
// 008af371  50                   push eax
// 008af372  51                   push ecx
// 008af373  8d4c2440             lea ecx, [esp + 0x40]
// 008af377  e844defaff           call 0x85d1c0
// 008af37c  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 008af384  e85760f9ff           call 0x8453e0
// 008af389  6a12                 push 0x12
// 008af38b  8bc8                 mov ecx, eax
// 008af38d  e81e58f9ff           call 0x844bb0
// 008af392  85f6                 test esi, esi
// 008af394  7504                 jne 0x8af39a
// 008af396  33c9                 xor ecx, ecx
// 008af398  eb03                 jmp 0x8af39d
// 008af39a  8b4e04               mov ecx, dword ptr [esi + 4]
// 008af39d  50                   push eax
// 008af39e  51                   push ecx
// 008af39f  8d4c242c             lea ecx, [esp + 0x2c]
// 008af3a3  e8d8defaff           call 0x85d280
// 008af3a8  837b7865             cmp dword ptr [ebx + 0x78], 0x65
// 008af3ac  7556                 jne 0x8af404
// 008af3ae  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008af3b2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008af3b6  8d040a               lea eax, [edx + ecx]
// 008af3b9  99                   cdq 
// 008af3ba  2bc2                 sub eax, edx
// 008af3bc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008af3c0  8bc8                 mov ecx, eax
// 008af3c2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008af3c6  03c2                 add eax, edx
// 008af3c8  99                   cdq 
// 008af3c9  2bc2                 sub eax, edx
// 008af3cb  d1f8                 sar eax, 1
// 008af3cd  d1f9                 sar ecx, 1
// 008af3cf  8d78fd               lea edi, [eax - 3]
// 008af3d2  8d51ff               lea edx, [ecx - 1]
// 008af3d5  897c244c             mov dword ptr [esp + 0x4c], edi
// 008af3d9  8d7803               lea edi, [eax + 3]
// 008af3dc  83c102               add ecx, 2
// 008af3df  8944245c             mov dword ptr [esp + 0x5c], eax
// 008af3e3  6a03                 push 3
// 008af3e5  8d442450             lea eax, [esp + 0x50]
// 008af3e9  894c2464             mov dword ptr [esp + 0x64], ecx
// 008af3ed  8b4e04               mov ecx, dword ptr [esi + 4]
// 008af3f0  50                   push eax
// 008af3f1  51                   push ecx
// 008af3f2  8954245c             mov dword ptr [esp + 0x5c], edx
// 008af3f6  897c2460             mov dword ptr [esp + 0x60], edi
// 008af3fa  89542464             mov dword ptr [esp + 0x64], edx
// 008af3fe  ff151801a400         call dword ptr [0xa40118]
// 008af404  837b7864             cmp dword ptr [ebx + 0x78], 0x64
// 008af408  7560                 jne 0x8af46a
// 008af40a  8b442420             mov eax, dword ptr [esp + 0x20]
// 008af40e  8b542414             mov edx, dword ptr [esp + 0x14]
// 008af412  8d48fd               lea ecx, [eax - 3]
// 008af415  8d7a05               lea edi, [edx + 5]
// 008af418  51                   push ecx
// 008af419  57                   push edi
// 008af41a  8b3dc000a400         mov edi, dword ptr [0xa400c0]
// 008af420  83c0fb               add eax, -5
// 008af423  83c203               add edx, 3
// 008af426  50                   push eax
// 008af427  52                   push edx
// 008af428  8b5604               mov edx, dword ptr [esi + 4]
// 008af42b  52                   push edx
// 008af42c  ffd7                 call edi
// 008af42e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008af432  8b542414             mov edx, dword ptr [esp + 0x14]
// 008af436  8d48fd               lea ecx, [eax - 3]
// 008af439  51                   push ecx
// 008af43a  8d5a09               lea ebx, [edx + 9]
// 008af43d  53                   push ebx
// 008af43e  83c0fb               add eax, -5
// 008af441  50                   push eax
// 008af442  8b4604               mov eax, dword ptr [esi + 4]
// 008af445  83c207               add edx, 7
// 008af448  52                   push edx
// 008af449  50                   push eax
// 008af44a  ffd7                 call edi
// 008af44c  8b442420             mov eax, dword ptr [esp + 0x20]
// 008af450  8b542414             mov edx, dword ptr [esp + 0x14]
// 008af454  8d48fd               lea ecx, [eax - 3]
// 008af457  51                   push ecx
// 008af458  8b4e04               mov ecx, dword ptr [esi + 4]
// 008af45b  8d5a0d               lea ebx, [edx + 0xd]
// 008af45e  53                   push ebx
// 008af45f  83c0fb               add eax, -5
// 008af462  50                   push eax
// 008af463  83c20b               add edx, 0xb
// 008af466  52                   push edx
// 008af467  51                   push ecx
// 008af468  ffd7                 call edi
// 008af46a  8d4c2424             lea ecx, [esp + 0x24]
// 008af46e  e89ddefaff           call 0x85d310
// 008af473  8d4c2438             lea ecx, [esp + 0x38]
// 008af477  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 008af47f  e8ccddfaff           call 0x85d250
// 008af484  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008af488  64890d00000000       mov dword ptr fs:[0], ecx
// 008af48f  59                   pop ecx
// 008af490  5f                   pop edi
// 008af491  5e                   pop esi
// 008af492  5d                   pop ebp
// 008af493  5b                   pop ebx
// 008af494  83c45c               add esp, 0x5c
// 008af497  c20800               ret 8
// copied from an identical function in another client (function ?DrawInplaceButton@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp