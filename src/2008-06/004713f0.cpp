// from server: 100% by auto
// roc 2008-06 004713f0  unit: G3D::PBVTextureFormat::?$Table  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004713f0
//
// 004713f0  6aff                 push -1
// 004713f2  68f6427c00           push 0x7c42f6
// 004713f7  64a100000000         mov eax, dword ptr fs:[0]
// 004713fd  50                   push eax
// 004713fe  64892500000000       mov dword ptr fs:[0], esp
// 00471405  51                   push ecx
// 00471406  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047140a  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0047140e  53                   push ebx
// 0047140f  55                   push ebp
// 00471410  56                   push esi
// 00471411  57                   push edi
// 00471412  8bf9                 mov edi, ecx
// 00471414  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00471417  7205                 jb 0x47141e
// 00471419  8b4004               mov eax, dword ptr [eax + 4]
// 0047141c  eb03                 jmp 0x471421
// 0047141e  83c004               add eax, 4
// 00471421  51                   push ecx
// 00471422  50                   push eax
// 00471423  e8f80e0a00           call 0x512320
// 00471428  33d2                 xor edx, edx
// 0047142a  8be8                 mov ebp, eax
// 0047142c  f7770c               div dword ptr [edi + 0xc]
// 0047142f  8b4708               mov eax, dword ptr [edi + 8]
// 00471432  83c408               add esp, 8
// 00471435  8bda                 mov ebx, edx
// 00471437  8b3498               mov esi, dword ptr [eax + ebx*4]
// 0047143a  85f6                 test esi, esi
// 0047143c  7548                 jne 0x471486
// 0047143e  6a28                 push 0x28
// 00471440  e8eb700900           call 0x508530
// 00471445  8bf0                 mov esi, eax
// 00471447  83c404               add esp, 4
// 0047144a  89742410             mov dword ptr [esp + 0x10], esi
// 0047144e  33c0                 xor eax, eax
// 00471450  8944241c             mov dword ptr [esp + 0x1c], eax
// 00471454  3bf0                 cmp esi, eax
// 00471456  0f840f010000         je 0x47156b
// 0047145c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00471460  0fb611               movzx edx, byte ptr [ecx]
// 00471463  50                   push eax
// 00471464  8b442428             mov eax, dword ptr [esp + 0x28]
// 00471468  55                   push ebp
// 00471469  52                   push edx
// 0047146a  83ec1c               sub esp, 0x1c
// 0047146d  8bcc                 mov ecx, esp
// 0047146f  89642450             mov dword ptr [esp + 0x50], esp
// 00471473  50                   push eax
// 00471474  ff155c248000         call dword ptr [0x80245c]
// 0047147a  8bce                 mov ecx, esi
// 0047147c  e8eff6ffff           call 0x470b70
// 00471481  e9e5000000           jmp 0x47156b
// 00471486  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0047148e  b301                 mov bl, 1
// 00471490  84db                 test bl, bl
// 00471492  7408                 je 0x47149c
// 00471494  3b2e                 cmp ebp, dword ptr [esi]
// 00471496  7504                 jne 0x47149c
// 00471498  b301                 mov bl, 1
// 0047149a  eb02                 jmp 0x47149e
// 0047149c  32db                 xor bl, bl
// 0047149e  3b2e                 cmp ebp, dword ptr [esi]
// 004714a0  751a                 jne 0x4714bc
// 004714a2  8b542424             mov edx, dword ptr [esp + 0x24]
// 004714a6  52                   push edx
// 004714a7  8d4604               lea eax, [esi + 4]
// 004714aa  50                   push eax
// 004714ab  ff1544248000         call dword ptr [0x802444]
// 004714b1  83c408               add esp, 8
// 004714b4  84c0                 test al, al
// 004714b6  0f858f000000         jne 0x47154b
// 004714bc  8b7624               mov esi, dword ptr [esi + 0x24]
// 004714bf  ff442410             inc dword ptr [esp + 0x10]
// 004714c3  85f6                 test esi, esi
// 004714c5  75c9                 jne 0x471490
// 004714c7  33c0                 xor eax, eax
// 004714c9  84db                 test bl, bl
// 004714cb  0f94c0               sete al
// 004714ce  33c9                 xor ecx, ecx
// 004714d0  837c241005           cmp dword ptr [esp + 0x10], 5
// 004714d5  0f9fc1               setg cl
// 004714d8  85c1                 test ecx, eax
// 004714da  741d                 je 0x4714f9
// 004714dc  8b4704               mov eax, dword ptr [edi + 4]
// 004714df  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004714e2  8d1480               lea edx, [eax + eax*4]
// 004714e5  03d2                 add edx, edx
// 004714e7  03d2                 add edx, edx
// 004714e9  3bca                 cmp ecx, edx
// 004714eb  7d0c                 jge 0x4714f9
// 004714ed  8d440901             lea eax, [ecx + ecx + 1]
// 004714f1  50                   push eax
// 004714f2  8bcf                 mov ecx, edi
// 004714f4  e887f1ffff           call 0x470680
// 004714f9  33d2                 xor edx, edx
// 004714fb  8bc5                 mov eax, ebp
// 004714fd  f7770c               div dword ptr [edi + 0xc]
// 00471500  6a28                 push 0x28
// 00471502  8bda                 mov ebx, edx
// 00471504  e827700900           call 0x508530
// 00471509  8bf0                 mov esi, eax
// 0047150b  83c404               add esp, 4
// 0047150e  89742410             mov dword ptr [esp + 0x10], esi
// 00471512  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0047151a  85f6                 test esi, esi
// 0047151c  744b                 je 0x471569
// 0047151e  8b4f08               mov ecx, dword ptr [edi + 8]
// 00471521  8b1499               mov edx, dword ptr [ecx + ebx*4]
// 00471524  8b442428             mov eax, dword ptr [esp + 0x28]
// 00471528  0fb608               movzx ecx, byte ptr [eax]
// 0047152b  52                   push edx
// 0047152c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00471530  55                   push ebp
// 00471531  51                   push ecx
// 00471532  83ec1c               sub esp, 0x1c
// 00471535  8bcc                 mov ecx, esp
// 00471537  89642450             mov dword ptr [esp + 0x50], esp
// 0047153b  52                   push edx
// 0047153c  ff155c248000         call dword ptr [0x80245c]
// 00471542  8bce                 mov ecx, esi
// 00471544  e827f6ffff           call 0x470b70
// 00471549  eb20                 jmp 0x47156b
// 0047154b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0047154f  8a11                 mov dl, byte ptr [ecx]
// 00471551  885620               mov byte ptr [esi + 0x20], dl
// 00471554  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00471558  64890d00000000       mov dword ptr fs:[0], ecx
// 0047155f  5f                   pop edi
// 00471560  5e                   pop esi
// 00471561  5d                   pop ebp
// 00471562  5b                   pop ebx
// 00471563  83c410               add esp, 0x10
// 00471566  c20800               ret 8
// 00471569  33c0                 xor eax, eax
// 0047156b  8b4f08               mov ecx, dword ptr [edi + 8]
// 0047156e  890499               mov dword ptr [ecx + ebx*4], eax
// 00471571  ff4704               inc dword ptr [edi + 4]
// 00471574  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00471578  5f                   pop edi
// 00471579  5e                   pop esi
// 0047157a  5d                   pop ebp
// 0047157b  64890d00000000       mov dword ptr fs:[0], ecx
// 00471582  5b                   pop ebx
// 00471583  83c410               add esp, 0x10
// 00471586  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?set@?$Table@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AB_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
