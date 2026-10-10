// roc 2008-06 0072c140  unit: CXTPRibbonTheme  size: 808 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072c140
//
// 0072c140  83ec30               sub esp, 0x30
// 0072c143  53                   push ebx
// 0072c144  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0072c148  55                   push ebp
// 0072c149  56                   push esi
// 0072c14a  8bb300010000         mov esi, dword ptr [ebx + 0x100]
// 0072c150  57                   push edi
// 0072c151  8bf9                 mov edi, ecx
// 0072c153  8bce                 mov ecx, esi
// 0072c155  897c2418             mov dword ptr [esp + 0x18], edi
// 0072c159  e84262ffff           call 0x7223a0
// 0072c15e  85c0                 test eax, eax
// 0072c160  0f84e4020000         je 0x72c44a
// 0072c166  8bce                 mov ecx, esi
// 0072c168  e87361ffff           call 0x7222e0
// 0072c16d  85c0                 test eax, eax
// 0072c16f  0f84d5020000         je 0x72c44a
// 0072c175  8b03                 mov eax, dword ptr [ebx]
// 0072c177  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0072c17d  8bcb                 mov ecx, ebx
// 0072c17f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0072c187  ffd2                 call edx
// 0072c189  85c0                 test eax, eax
// 0072c18b  740a                 je 0x72c197
// 0072c18d  c744241004000000     mov dword ptr [esp + 0x10], 4
// 0072c195  eb15                 jmp 0x72c1ac
// 0072c197  8b03                 mov eax, dword ptr [ebx]
// 0072c199  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0072c19c  8bcb                 mov ecx, ebx
// 0072c19e  ffd2                 call edx
// 0072c1a0  85c0                 test eax, eax
// 0072c1a2  7408                 je 0x72c1ac
// 0072c1a4  c744241002000000     mov dword ptr [esp + 0x10], 2
// 0072c1ac  8b03                 mov eax, dword ptr [ebx]
// 0072c1ae  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0072c1b4  6a20                 push 0x20
// 0072c1b6  8bcb                 mov ecx, ebx
// 0072c1b8  ffd2                 call edx
// 0072c1ba  8bf0                 mov esi, eax
// 0072c1bc  85f6                 test esi, esi
// 0072c1be  0f8482000000         je 0x72c246
// 0072c1c4  8bce                 mov ecx, esi
// 0072c1c6  e8d5e3fcff           call 0x6fa5a0
// 0072c1cb  83f820               cmp eax, 0x20
// 0072c1ce  7e76                 jle 0x72c246
// 0072c1d0  8bce                 mov ecx, esi
// 0072c1d2  e889d8f8ff           call 0x6b9a60
// 0072c1d7  8b542458             mov edx, dword ptr [esp + 0x58]
// 0072c1db  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0072c1df  03ca                 add ecx, edx
// 0072c1e1  2bc8                 sub ecx, eax
// 0072c1e3  8bc1                 mov eax, ecx
// 0072c1e5  99                   cdq 
// 0072c1e6  2bc2                 sub eax, edx
// 0072c1e8  8bf8                 mov edi, eax
// 0072c1ea  8bce                 mov ecx, esi
// 0072c1ec  d1ff                 sar edi, 1
// 0072c1ee  e8ade3fcff           call 0x6fa5a0
// 0072c1f3  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0072c1f7  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0072c1fb  03d1                 add edx, ecx
// 0072c1fd  2bd0                 sub edx, eax
// 0072c1ff  8bc2                 mov eax, edx
// 0072c201  99                   cdq 
// 0072c202  2bc2                 sub eax, edx
// 0072c204  8be8                 mov ebp, eax
// 0072c206  8bcb                 mov ecx, ebx
// 0072c208  d1fd                 sar ebp, 1
// 0072c20a  e8a1c5ffff           call 0x7287b0
// 0072c20f  894620               mov dword ptr [esi + 0x20], eax
// 0072c212  83ec08               sub esp, 8
// 0072c215  8bc4                 mov eax, esp
// 0072c217  33db                 xor ebx, ebx
// 0072c219  8918                 mov dword ptr [eax], ebx
// 0072c21b  895804               mov dword ptr [eax + 4], ebx
// 0072c21e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0072c222  50                   push eax
// 0072c223  8bce                 mov ecx, esi
// 0072c225  e8064cf9ff           call 0x6c0e30
// 0072c22a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0072c22e  50                   push eax
// 0072c22f  57                   push edi
// 0072c230  55                   push ebp
// 0072c231  51                   push ecx
// 0072c232  8bce                 mov ecx, esi
// 0072c234  e84756f9ff           call 0x6c1880
// 0072c239  895e20               mov dword ptr [esi + 0x20], ebx
// 0072c23c  5f                   pop edi
// 0072c23d  5e                   pop esi
// 0072c23e  5d                   pop ebp
// 0072c23f  5b                   pop ebx
// 0072c240  83c430               add esp, 0x30
// 0072c243  c21800               ret 0x18
// 0072c246  8b542454             mov edx, dword ptr [esp + 0x54]
// 0072c24a  2b54244c             sub edx, dword ptr [esp + 0x4c]
// 0072c24e  83fa36               cmp edx, 0x36
// 0072c251  7e1f                 jle 0x72c272
// 0072c253  8b442458             mov eax, dword ptr [esp + 0x58]
// 0072c257  2b442450             sub eax, dword ptr [esp + 0x50]
// 0072c25b  83f836               cmp eax, 0x36
// 0072c25e  7e12                 jle 0x72c272
// 0072c260  68c41f8600           push 0x861fc4
// 0072c265  8bcf                 mov ecx, edi
// 0072c267  e884940000           call 0x7356f0
// 0072c26c  8be8                 mov ebp, eax
// 0072c26e  85ed                 test ebp, ebp
// 0072c270  7516                 jne 0x72c288
// 0072c272  68b01f8600           push 0x861fb0
// 0072c277  8bcf                 mov ecx, edi
// 0072c279  e872940000           call 0x7356f0
// 0072c27e  8be8                 mov ebp, eax
// 0072c280  85ed                 test ebp, ebp
// 0072c282  0f84d6010000         je 0x72c45e
// 0072c288  8b442450             mov eax, dword ptr [esp + 0x50]
// 0072c28c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0072c294  85c0                 test eax, eax
// 0072c296  7d14                 jge 0x72c2ac
// 0072c298  89442414             mov dword ptr [esp + 0x14], eax
// 0072c29c  f7d8                 neg eax
// 0072c29e  50                   push eax
// 0072c29f  6a00                 push 0
// 0072c2a1  8d4c2454             lea ecx, [esp + 0x54]
// 0072c2a5  51                   push ecx
// 0072c2a6  ff15682d8000         call dword ptr [0x802d68]
// 0072c2ac  8b442410             mov eax, dword ptr [esp + 0x10]
// 0072c2b0  85c0                 test eax, eax
// 0072c2b2  740b                 je 0x72c2bf
// 0072c2b4  33d2                 xor edx, edx
// 0072c2b6  83f802               cmp eax, 2
// 0072c2b9  0f95c2               setne dl
// 0072c2bc  42                   inc edx
// 0072c2bd  8bc2                 mov eax, edx
// 0072c2bf  6a03                 push 3
// 0072c2c1  50                   push eax
// 0072c2c2  8d442428             lea eax, [esp + 0x28]
// 0072c2c6  50                   push eax
// 0072c2c7  8bcd                 mov ecx, ebp
// 0072c2c9  e862140600           call 0x78d730
// 0072c2ce  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0072c2d2  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 0072c2d6  8b442454             mov eax, dword ptr [esp + 0x54]
// 0072c2da  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0072c2de  2b7c2424             sub edi, dword ptr [esp + 0x24]
// 0072c2e2  2bc1                 sub eax, ecx
// 0072c2e4  0344244c             add eax, dword ptr [esp + 0x4c]
// 0072c2e8  83ec10               sub esp, 0x10
// 0072c2eb  99                   cdq 
// 0072c2ec  2bc2                 sub eax, edx
// 0072c2ee  8bd8                 mov ebx, eax
// 0072c2f0  8b442468             mov eax, dword ptr [esp + 0x68]
// 0072c2f4  2bc7                 sub eax, edi
// 0072c2f6  03442460             add eax, dword ptr [esp + 0x60]
// 0072c2fa  d1fb                 sar ebx, 1
// 0072c2fc  99                   cdq 
// 0072c2fd  2bc2                 sub eax, edx
// 0072c2ff  d1f8                 sar eax, 1
// 0072c301  03442424             add eax, dword ptr [esp + 0x24]
// 0072c305  895c2440             mov dword ptr [esp + 0x40], ebx
// 0072c309  89442444             mov dword ptr [esp + 0x44], eax
// 0072c30d  03c7                 add eax, edi
// 0072c30f  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0072c313  03d9                 add ebx, ecx
// 0072c315  33c9                 xor ecx, ecx
// 0072c317  8944244c             mov dword ptr [esp + 0x4c], eax
// 0072c31b  8bc4                 mov eax, esp
// 0072c31d  8908                 mov dword ptr [eax], ecx
// 0072c31f  894804               mov dword ptr [eax + 4], ecx
// 0072c322  894808               mov dword ptr [eax + 8], ecx
// 0072c325  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0072c329  33d2                 xor edx, edx
// 0072c32b  89500c               mov dword ptr [eax + 0xc], edx
// 0072c32e  8b542434             mov edx, dword ptr [esp + 0x34]
// 0072c332  83ec10               sub esp, 0x10
// 0072c335  8bc4                 mov eax, esp
// 0072c337  8908                 mov dword ptr [eax], ecx
// 0072c339  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072c33d  895004               mov dword ptr [eax + 4], edx
// 0072c340  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0072c344  894808               mov dword ptr [eax + 8], ecx
// 0072c347  89500c               mov dword ptr [eax + 0xc], edx
// 0072c34a  8d442450             lea eax, [esp + 0x50]
// 0072c34e  50                   push eax
// 0072c34f  57                   push edi
// 0072c350  8bcd                 mov ecx, ebp
// 0072c352  895c2460             mov dword ptr [esp + 0x60], ebx
// 0072c356  e8a50c0600           call 0x78d000
// 0072c35b  33ed                 xor ebp, ebp
// 0072c35d  3bf5                 cmp esi, ebp
// 0072c35f  747b                 je 0x72c3dc
// 0072c361  8bce                 mov ecx, esi
// 0072c363  e8f8d6f8ff           call 0x6b9a60
// 0072c368  8b542450             mov edx, dword ptr [esp + 0x50]
// 0072c36c  8bc8                 mov ecx, eax
// 0072c36e  8b442458             mov eax, dword ptr [esp + 0x58]
// 0072c372  03c2                 add eax, edx
// 0072c374  2bc1                 sub eax, ecx
// 0072c376  40                   inc eax
// 0072c377  99                   cdq 
// 0072c378  2bc2                 sub eax, edx
// 0072c37a  8bf8                 mov edi, eax
// 0072c37c  d1ff                 sar edi, 1
// 0072c37e  037c2414             add edi, dword ptr [esp + 0x14]
// 0072c382  8bce                 mov ecx, esi
// 0072c384  e817e2fcff           call 0x6fa5a0
// 0072c389  8b542454             mov edx, dword ptr [esp + 0x54]
// 0072c38d  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0072c391  03ca                 add ecx, edx
// 0072c393  2bc8                 sub ecx, eax
// 0072c395  8bc1                 mov eax, ecx
// 0072c397  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072c39b  99                   cdq 
// 0072c39c  2bc2                 sub eax, edx
// 0072c39e  8bd8                 mov ebx, eax
// 0072c3a0  d1fb                 sar ebx, 1
// 0072c3a2  e809c4ffff           call 0x7287b0
// 0072c3a7  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072c3ab  894620               mov dword ptr [esi + 0x20], eax
// 0072c3ae  83ec08               sub esp, 8
// 0072c3b1  8bc4                 mov eax, esp
// 0072c3b3  52                   push edx
// 0072c3b4  8bce                 mov ecx, esi
// 0072c3b6  8928                 mov dword ptr [eax], ebp
// 0072c3b8  896804               mov dword ptr [eax + 4], ebp
// 0072c3bb  e8704af9ff           call 0x6c0e30
// 0072c3c0  50                   push eax
// 0072c3c1  8b442450             mov eax, dword ptr [esp + 0x50]
// 0072c3c5  57                   push edi
// 0072c3c6  53                   push ebx
// 0072c3c7  50                   push eax
// 0072c3c8  8bce                 mov ecx, esi
// 0072c3ca  e8b154f9ff           call 0x6c1880
// 0072c3cf  896e20               mov dword ptr [esi + 0x20], ebp
// 0072c3d2  5f                   pop edi
// 0072c3d3  5e                   pop esi
// 0072c3d4  5d                   pop ebp
// 0072c3d5  5b                   pop ebx
// 0072c3d6  83c430               add esp, 0x30
// 0072c3d9  c21800               ret 0x18
// 0072c3dc  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0072c3e0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0072c3e6  e8d5b5f8ff           call 0x6b79c0
// 0072c3eb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072c3ef  50                   push eax
// 0072c3f0  e8cbad0000           call 0x7371c0
// 0072c3f5  8bf0                 mov esi, eax
// 0072c3f7  3bf5                 cmp esi, ebp
// 0072c3f9  7463                 je 0x72c45e
// 0072c3fb  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0072c3ff  8b442454             mov eax, dword ptr [esp + 0x54]
// 0072c403  8d4410df             lea eax, [eax + edx - 0x21]
// 0072c407  99                   cdq 
// 0072c408  2bc2                 sub eax, edx
// 0072c40a  8b542450             mov edx, dword ptr [esp + 0x50]
// 0072c40e  8bc8                 mov ecx, eax
// 0072c410  8b442458             mov eax, dword ptr [esp + 0x58]
// 0072c414  8d4410e1             lea eax, [eax + edx - 0x1f]
// 0072c418  99                   cdq 
// 0072c419  2bc2                 sub eax, edx
// 0072c41b  d1f8                 sar eax, 1
// 0072c41d  03442414             add eax, dword ptr [esp + 0x14]
// 0072c421  d1f9                 sar ecx, 1
// 0072c423  3bfd                 cmp edi, ebp
// 0072c425  7504                 jne 0x72c42b
// 0072c427  33ff                 xor edi, edi
// 0072c429  eb03                 jmp 0x72c42e
// 0072c42b  8b7f04               mov edi, dword ptr [edi + 4]
// 0072c42e  6a03                 push 3
// 0072c430  55                   push ebp
// 0072c431  55                   push ebp
// 0072c432  6a20                 push 0x20
// 0072c434  6a20                 push 0x20
// 0072c436  56                   push esi
// 0072c437  50                   push eax
// 0072c438  51                   push ecx
// 0072c439  57                   push edi
// 0072c43a  ff15982b8000         call dword ptr [0x802b98]
// 0072c440  5f                   pop edi
// 0072c441  5e                   pop esi
// 0072c442  5d                   pop ebp
// 0072c443  5b                   pop ebx
// 0072c444  83c430               add esp, 0x30
// 0072c447  c21800               ret 0x18
// 0072c44a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0072c44e  6a01                 push 1
// 0072c450  53                   push ebx
// 0072c451  51                   push ecx
// 0072c452  8d542424             lea edx, [esp + 0x24]
// 0072c456  52                   push edx
// 0072c457  8bcf                 mov ecx, edi
// 0072c459  e83262f8ff           call 0x6b2690
// 0072c45e  5f                   pop edi
// 0072c45f  5e                   pop esi
// 0072c460  5d                   pop ebp
// 0072c461  5b                   pop ebx
// 0072c462  83c430               add esp, 0x30
// 0072c465  c21800               ret 0x18
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawRibbonFrameSystemButton@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPControlPopup@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp
