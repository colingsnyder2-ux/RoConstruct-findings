// roc 2008-06 004d6350  unit: CSHA1  size: 923 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d6350
//
// 004d6350  83ec10               sub esp, 0x10
// 004d6353  a108279700           mov eax, dword ptr [0x972708]
// 004d6358  53                   push ebx
// 004d6359  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004d635d  8b0b                 mov ecx, dword ptr [ebx]
// 004d635f  55                   push ebp
// 004d6360  c1e004               shl eax, 4
// 004d6363  56                   push esi
// 004d6364  8b742428             mov esi, dword ptr [esp + 0x28]
// 004d6368  330c30               xor ecx, dword ptr [eax + esi]
// 004d636b  8b6c3008             mov ebp, dword ptr [eax + esi + 8]
// 004d636f  336b08               xor ebp, dword ptr [ebx + 8]
// 004d6372  8b543004             mov edx, dword ptr [eax + esi + 4]
// 004d6376  335304               xor edx, dword ptr [ebx + 4]
// 004d6379  57                   push edi
// 004d637a  8b7c300c             mov edi, dword ptr [eax + esi + 0xc]
// 004d637e  337b0c               xor edi, dword ptr [ebx + 0xc]
// 004d6381  03c6                 add eax, esi
// 004d6383  8bc7                 mov eax, edi
// 004d6385  c1e808               shr eax, 8
// 004d6388  8bdd                 mov ebx, ebp
// 004d638a  c1eb10               shr ebx, 0x10
// 004d638d  0fb6db               movzx ebx, bl
// 004d6390  0fb6c0               movzx eax, al
// 004d6393  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d6397  8b2c85c8e89300       mov ebp, dword ptr [eax*4 + 0x93e8c8]
// 004d639e  332c9dc8ec9300       xor ebp, dword ptr [ebx*4 + 0x93ecc8]
// 004d63a5  8bdf                 mov ebx, edi
// 004d63a7  897c241c             mov dword ptr [esp + 0x1c], edi
// 004d63ab  c1eb10               shr ebx, 0x10
// 004d63ae  0fb6fb               movzx edi, bl
// 004d63b1  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004d63b5  8bc2                 mov eax, edx
// 004d63b7  c1e818               shr eax, 0x18
// 004d63ba  332c85c8f09300       xor ebp, dword ptr [eax*4 + 0x93f0c8]
// 004d63c1  0fb6c1               movzx eax, cl
// 004d63c4  332c85c8e49300       xor ebp, dword ptr [eax*4 + 0x93e4c8]
// 004d63cb  8b442428             mov eax, dword ptr [esp + 0x28]
// 004d63cf  8928                 mov dword ptr [eax], ebp
// 004d63d1  8b3cbdc8ec9300       mov edi, dword ptr [edi*4 + 0x93ecc8]
// 004d63d8  c1eb18               shr ebx, 0x18
// 004d63db  333c9dc8f09300       xor edi, dword ptr [ebx*4 + 0x93f0c8]
// 004d63e2  8bd9                 mov ebx, ecx
// 004d63e4  c1eb08               shr ebx, 8
// 004d63e7  0fb6db               movzx ebx, bl
// 004d63ea  333c9dc8e89300       xor edi, dword ptr [ebx*4 + 0x93e8c8]
// 004d63f1  0fb6da               movzx ebx, dl
// 004d63f4  333c9dc8e49300       xor edi, dword ptr [ebx*4 + 0x93e4c8]
// 004d63fb  8bda                 mov ebx, edx
// 004d63fd  897804               mov dword ptr [eax + 4], edi
// 004d6400  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004d6404  c1ef18               shr edi, 0x18
// 004d6407  8b3cbdc8f09300       mov edi, dword ptr [edi*4 + 0x93f0c8]
// 004d640e  c1eb08               shr ebx, 8
// 004d6411  0fb6db               movzx ebx, bl
// 004d6414  333c9dc8e89300       xor edi, dword ptr [ebx*4 + 0x93e8c8]
// 004d641b  8bd9                 mov ebx, ecx
// 004d641d  c1eb10               shr ebx, 0x10
// 004d6420  0fb6db               movzx ebx, bl
// 004d6423  333c9dc8ec9300       xor edi, dword ptr [ebx*4 + 0x93ecc8]
// 004d642a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004d642e  0fb6eb               movzx ebp, bl
// 004d6431  333cadc8e49300       xor edi, dword ptr [ebp*4 + 0x93e4c8]
// 004d6438  c1eb08               shr ebx, 8
// 004d643b  897808               mov dword ptr [eax + 8], edi
// 004d643e  c1ea10               shr edx, 0x10
// 004d6441  0fb6fb               movzx edi, bl
// 004d6444  8b3cbdc8e89300       mov edi, dword ptr [edi*4 + 0x93e8c8]
// 004d644b  0fb6d2               movzx edx, dl
// 004d644e  333c95c8ec9300       xor edi, dword ptr [edx*4 + 0x93ecc8]
// 004d6455  c1e918               shr ecx, 0x18
// 004d6458  333c8dc8f09300       xor edi, dword ptr [ecx*4 + 0x93f0c8]
// 004d645f  0fb64c241c           movzx ecx, byte ptr [esp + 0x1c]
// 004d6464  333c8dc8e49300       xor edi, dword ptr [ecx*4 + 0x93e4c8]
// 004d646b  89780c               mov dword ptr [eax + 0xc], edi
// 004d646e  8b0d08279700         mov ecx, dword ptr [0x972708]
// 004d6474  49                   dec ecx
// 004d6475  83f901               cmp ecx, 1
// 004d6478  0f8e25010000         jle 0x4d65a3
// 004d647e  8bd1                 mov edx, ecx
// 004d6480  c1e204               shl edx, 4
// 004d6483  49                   dec ecx
// 004d6484  8d743208             lea esi, [edx + esi + 8]
// 004d6488  894c2424             mov dword ptr [esp + 0x24], ecx
// 004d648c  8d642400             lea esp, [esp]
// 004d6490  8b3e                 mov edi, dword ptr [esi]
// 004d6492  337808               xor edi, dword ptr [eax + 8]
// 004d6495  8b56fc               mov edx, dword ptr [esi - 4]
// 004d6498  897c2418             mov dword ptr [esp + 0x18], edi
// 004d649c  8b7e04               mov edi, dword ptr [esi + 4]
// 004d649f  33780c               xor edi, dword ptr [eax + 0xc]
// 004d64a2  335004               xor edx, dword ptr [eax + 4]
// 004d64a5  8b4ef8               mov ecx, dword ptr [esi - 8]
// 004d64a8  3308                 xor ecx, dword ptr [eax]
// 004d64aa  8bdf                 mov ebx, edi
// 004d64ac  c1eb08               shr ebx, 8
// 004d64af  897c241c             mov dword ptr [esp + 0x1c], edi
// 004d64b3  0fb6fb               movzx edi, bl
// 004d64b6  8b3cbdc8e89300       mov edi, dword ptr [edi*4 + 0x93e8c8]
// 004d64bd  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004d64c1  c1eb10               shr ebx, 0x10
// 004d64c4  0fb6db               movzx ebx, bl
// 004d64c7  333c9dc8ec9300       xor edi, dword ptr [ebx*4 + 0x93ecc8]
// 004d64ce  8bda                 mov ebx, edx
// 004d64d0  c1eb18               shr ebx, 0x18
// 004d64d3  333c9dc8f09300       xor edi, dword ptr [ebx*4 + 0x93f0c8]
// 004d64da  0fb6d9               movzx ebx, cl
// 004d64dd  333c9dc8e49300       xor edi, dword ptr [ebx*4 + 0x93e4c8]
// 004d64e4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004d64e8  c1eb10               shr ebx, 0x10
// 004d64eb  8938                 mov dword ptr [eax], edi
// 004d64ed  0fb6fb               movzx edi, bl
// 004d64f0  8b3cbdc8ec9300       mov edi, dword ptr [edi*4 + 0x93ecc8]
// 004d64f7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004d64fb  c1eb18               shr ebx, 0x18
// 004d64fe  333c9dc8f09300       xor edi, dword ptr [ebx*4 + 0x93f0c8]
// 004d6505  8bd9                 mov ebx, ecx
// 004d6507  c1eb08               shr ebx, 8
// 004d650a  0fb6db               movzx ebx, bl
// 004d650d  333c9dc8e89300       xor edi, dword ptr [ebx*4 + 0x93e8c8]
// 004d6514  0fb6da               movzx ebx, dl
// 004d6517  333c9dc8e49300       xor edi, dword ptr [ebx*4 + 0x93e4c8]
// 004d651e  8bda                 mov ebx, edx
// 004d6520  897804               mov dword ptr [eax + 4], edi
// 004d6523  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004d6527  c1ef18               shr edi, 0x18
// 004d652a  8b3cbdc8f09300       mov edi, dword ptr [edi*4 + 0x93f0c8]
// 004d6531  c1eb08               shr ebx, 8
// 004d6534  0fb6db               movzx ebx, bl
// 004d6537  333c9dc8e89300       xor edi, dword ptr [ebx*4 + 0x93e8c8]
// 004d653e  8bd9                 mov ebx, ecx
// 004d6540  c1eb10               shr ebx, 0x10
// 004d6543  0fb6db               movzx ebx, bl
// 004d6546  333c9dc8ec9300       xor edi, dword ptr [ebx*4 + 0x93ecc8]
// 004d654d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004d6551  0fb6eb               movzx ebp, bl
// 004d6554  333cadc8e49300       xor edi, dword ptr [ebp*4 + 0x93e4c8]
// 004d655b  c1eb08               shr ebx, 8
// 004d655e  897808               mov dword ptr [eax + 8], edi
// 004d6561  c1ea10               shr edx, 0x10
// 004d6564  0fb6fb               movzx edi, bl
// 004d6567  8b3cbdc8e89300       mov edi, dword ptr [edi*4 + 0x93e8c8]
// 004d656e  0fb6d2               movzx edx, dl
// 004d6571  333c95c8ec9300       xor edi, dword ptr [edx*4 + 0x93ecc8]
// 004d6578  c1e918               shr ecx, 0x18
// 004d657b  333c8dc8f09300       xor edi, dword ptr [ecx*4 + 0x93f0c8]
// 004d6582  0fb64c241c           movzx ecx, byte ptr [esp + 0x1c]
// 004d6587  333c8dc8e49300       xor edi, dword ptr [ecx*4 + 0x93e4c8]
// 004d658e  83ee10               sub esi, 0x10
// 004d6591  836c242401           sub dword ptr [esp + 0x24], 1
// 004d6596  89780c               mov dword ptr [eax + 0xc], edi
// 004d6599  0f85f1feffff         jne 0x4d6490
// 004d659f  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 004d65a3  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004d65a6  337808               xor edi, dword ptr [eax + 8]
// 004d65a9  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004d65ac  3308                 xor ecx, dword ptr [eax]
// 004d65ae  8b5614               mov edx, dword ptr [esi + 0x14]
// 004d65b1  897c2418             mov dword ptr [esp + 0x18], edi
// 004d65b5  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 004d65b8  33780c               xor edi, dword ptr [eax + 0xc]
// 004d65bb  335004               xor edx, dword ptr [eax + 4]
// 004d65be  897c241c             mov dword ptr [esp + 0x1c], edi
// 004d65c2  0fb6f9               movzx edi, cl
// 004d65c5  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d65cc  8818                 mov byte ptr [eax], bl
// 004d65ce  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004d65d2  c1eb08               shr ebx, 8
// 004d65d5  0fb6fb               movzx edi, bl
// 004d65d8  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d65df  885801               mov byte ptr [eax + 1], bl
// 004d65e2  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004d65e6  c1eb10               shr ebx, 0x10
// 004d65e9  0fb6fb               movzx edi, bl
// 004d65ec  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d65f3  885802               mov byte ptr [eax + 2], bl
// 004d65f6  8bfa                 mov edi, edx
// 004d65f8  c1ef18               shr edi, 0x18
// 004d65fb  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d6602  885803               mov byte ptr [eax + 3], bl
// 004d6605  0fb6fa               movzx edi, dl
// 004d6608  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d660f  885804               mov byte ptr [eax + 4], bl
// 004d6612  8bd9                 mov ebx, ecx
// 004d6614  c1eb08               shr ebx, 8
// 004d6617  0fb6fb               movzx edi, bl
// 004d661a  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d6621  885805               mov byte ptr [eax + 5], bl
// 004d6624  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004d6628  c1eb10               shr ebx, 0x10
// 004d662b  0fb6fb               movzx edi, bl
// 004d662e  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d6635  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d6639  885806               mov byte ptr [eax + 6], bl
// 004d663c  c1ef18               shr edi, 0x18
// 004d663f  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d6646  0fb67c2418           movzx edi, byte ptr [esp + 0x18]
// 004d664b  885807               mov byte ptr [eax + 7], bl
// 004d664e  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d6655  885808               mov byte ptr [eax + 8], bl
// 004d6658  8bda                 mov ebx, edx
// 004d665a  c1eb08               shr ebx, 8
// 004d665d  0fb6fb               movzx edi, bl
// 004d6660  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d6667  885809               mov byte ptr [eax + 9], bl
// 004d666a  8bd9                 mov ebx, ecx
// 004d666c  c1eb10               shr ebx, 0x10
// 004d666f  0fb6fb               movzx edi, bl
// 004d6672  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d6679  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004d667d  88580a               mov byte ptr [eax + 0xa], bl
// 004d6680  c1ef18               shr edi, 0x18
// 004d6683  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d668a  0fb67c241c           movzx edi, byte ptr [esp + 0x1c]
// 004d668f  88580b               mov byte ptr [eax + 0xb], bl
// 004d6692  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d6699  88580c               mov byte ptr [eax + 0xc], bl
// 004d669c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004d66a0  c1eb08               shr ebx, 8
// 004d66a3  c1ea10               shr edx, 0x10
// 004d66a6  0fb6fb               movzx edi, bl
// 004d66a9  0fb69fc8f49300       movzx ebx, byte ptr [edi + 0x93f4c8]
// 004d66b0  0fb6d2               movzx edx, dl
// 004d66b3  88580d               mov byte ptr [eax + 0xd], bl
// 004d66b6  8a92c8f49300         mov dl, byte ptr [edx + 0x93f4c8]
// 004d66bc  88500e               mov byte ptr [eax + 0xe], dl
// 004d66bf  c1e918               shr ecx, 0x18
// 004d66c2  8a89c8f49300         mov cl, byte ptr [ecx + 0x93f4c8]
// 004d66c8  88480f               mov byte ptr [eax + 0xf], cl
// 004d66cb  8b16                 mov edx, dword ptr [esi]
// 004d66cd  3110                 xor dword ptr [eax], edx
// 004d66cf  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d66d2  314804               xor dword ptr [eax + 4], ecx
// 004d66d5  8b5608               mov edx, dword ptr [esi + 8]
// 004d66d8  315008               xor dword ptr [eax + 8], edx
// 004d66db  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004d66de  31480c               xor dword ptr [eax + 0xc], ecx
// 004d66e1  5f                   pop edi
// 004d66e2  5e                   pop esi
// 004d66e3  5d                   pop ebp
// 004d66e4  33c0                 xor eax, eax
// 004d66e6  5b                   pop ebx
// 004d66e7  83c410               add esp, 0x10
// 004d66ea  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?rijndaelDecrypt@@YAHQAE0QAY133E@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
