// roc 2010-06 00814400  unit: CXTPToolTipContextToolTip  size: 742 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00814400
//
// 00814400  6aff                 push -1
// 00814402  68fc469b00           push 0x9b46fc
// 00814407  64a100000000         mov eax, dword ptr fs:[0]
// 0081440d  50                   push eax
// 0081440e  83ec78               sub esp, 0x78
// 00814411  53                   push ebx
// 00814412  55                   push ebp
// 00814413  56                   push esi
// 00814414  57                   push edi
// 00814415  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0081441a  33c4                 xor eax, esp
// 0081441c  50                   push eax
// 0081441d  8d84248c000000       lea eax, [esp + 0x8c]
// 00814424  64a300000000         mov dword ptr fs:[0], eax
// 0081442a  8bf1                 mov esi, ecx
// 0081442c  56                   push esi
// 0081442d  8d4c247c             lea ecx, [esp + 0x7c]
// 00814431  e8fe43f9ff           call 0x7a8834
// 00814436  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00814439  0598000000           add eax, 0x98
// 0081443e  33ed                 xor ebp, ebp
// 00814440  50                   push eax
// 00814441  8d4c247c             lea ecx, [esp + 0x7c]
// 00814445  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 0081444c  e8ff891600           call 0x97ce50
// 00814451  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00814458  51                   push ecx
// 00814459  8d542418             lea edx, [esp + 0x18]
// 0081445d  52                   push edx
// 0081445e  8bce                 mov ecx, esi
// 00814460  89442430             mov dword ptr [esp + 0x30], eax
// 00814464  e8a7f8ffff           call 0x813d10
// 00814469  8d4c2414             lea ecx, [esp + 0x14]
// 0081446d  c684249400000001     mov byte ptr [esp + 0x94], 1
// 00814475  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0081447b  84c0                 test al, al
// 0081447d  740f                 je 0x81448e
// 0081447f  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 00814486  896e04               mov dword ptr [esi + 4], ebp
// 00814489  e91a020000           jmp 0x8146a8
// 0081448e  8bce                 mov ecx, esi
// 00814490  e84bffffff           call 0x8143e0
// 00814495  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00814498  8b5144               mov edx, dword ptr [ecx + 0x44]
// 0081449b  8b7948               mov edi, dword ptr [ecx + 0x48]
// 0081449e  8b594c               mov ebx, dword ptr [ecx + 0x4c]
// 008144a1  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 008144a4  8d4c3906             lea ecx, [ecx + edi + 6]
// 008144a8  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 008144ac  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008144b0  8d4c1306             lea ecx, [ebx + edx + 6]
// 008144b4  8bd8                 mov ebx, eax
// 008144b6  2bd9                 sub ebx, ecx
// 008144b8  68100c0000           push 0xc10
// 008144bd  8d54244c             lea edx, [esp + 0x4c]
// 008144c1  894c2444             mov dword ptr [esp + 0x44], ecx
// 008144c5  52                   push edx
// 008144c6  8d4c241c             lea ecx, [esp + 0x1c]
// 008144ca  896c2450             mov dword ptr [esp + 0x50], ebp
// 008144ce  896c2454             mov dword ptr [esp + 0x54], ebp
// 008144d2  895c2458             mov dword ptr [esp + 0x58], ebx
// 008144d6  896c245c             mov dword ptr [esp + 0x5c], ebp
// 008144da  83c770               add edi, 0x70
// 008144dd  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008144e3  50                   push eax
// 008144e4  8d4c2420             lea ecx, [esp + 0x20]
// 008144e8  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008144ee  50                   push eax
// 008144ef  8b07                 mov eax, dword ptr [edi]
// 008144f1  8d8c2488000000       lea ecx, [esp + 0x88]
// 008144f8  ffd0                 call eax
// 008144fa  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 008144fe  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00814502  2b7c244c             sub edi, dword ptr [esp + 0x4c]
// 00814506  2b6c2448             sub ebp, dword ptr [esp + 0x48]
// 0081450a  33c9                 xor ecx, ecx
// 0081450c  398e2c010000         cmp dword ptr [esi + 0x12c], ecx
// 00814512  897c243c             mov dword ptr [esp + 0x3c], edi
// 00814516  0f95c1               setne cl
// 00814519  894c2420             mov dword ptr [esp + 0x20], ecx
// 0081451d  8d8e28010000         lea ecx, [esi + 0x128]
// 00814523  894c2424             mov dword ptr [esp + 0x24], ecx
// 00814527  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0081452d  33d2                 xor edx, edx
// 0081452f  84c0                 test al, al
// 00814531  0f94c2               sete dl
// 00814534  837c242000           cmp dword ptr [esp + 0x20], 0
// 00814539  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00814541  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00814549  8954241c             mov dword ptr [esp + 0x1c], edx
// 0081454d  744f                 je 0x81459e
// 0081454f  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00814555  e8f645faff           call 0x7b8b50
// 0081455a  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00814560  89442418             mov dword ptr [esp + 0x18], eax
// 00814564  e8379cfbff           call 0x7ce1a0
// 00814569  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081456d  33d2                 xor edx, edx
// 0081456f  83f910               cmp ecx, 0x10
// 00814572  0f9ec2               setle dl
// 00814575  89442430             mov dword ptr [esp + 0x30], eax
// 00814579  894c2434             mov dword ptr [esp + 0x34], ecx
// 0081457d  89542418             mov dword ptr [esp + 0x18], edx
// 00814581  85d2                 test edx, edx
// 00814583  740d                 je 0x814592
// 00814585  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0081458a  750a                 jne 0x814596
// 0081458c  8d6c2803             lea ebp, [eax + ebp + 3]
// 00814590  eb04                 jmp 0x814596
// 00814592  8d6c2805             lea ebp, [eax + ebp + 5]
// 00814596  3bf9                 cmp edi, ecx
// 00814598  7f04                 jg 0x81459e
// 0081459a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0081459e  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008145a3  0f84db000000         je 0x814684
// 008145a9  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008145ac  05a0000000           add eax, 0xa0
// 008145b1  50                   push eax
// 008145b2  8d4c247c             lea ecx, [esp + 0x7c]
// 008145b6  51                   push ecx
// 008145b7  8d4c2470             lea ecx, [esp + 0x70]
// 008145bb  e8e0b0feff           call 0x7ff6a0
// 008145c0  8b742478             mov esi, dword ptr [esp + 0x78]
// 008145c4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008145c8  33c9                 xor ecx, ecx
// 008145ca  68200c0000           push 0xc20
// 008145cf  8d54245c             lea edx, [esp + 0x5c]
// 008145d3  8d43e7               lea eax, [ebx - 0x19]
// 008145d6  894c245c             mov dword ptr [esp + 0x5c], ecx
// 008145da  894c2460             mov dword ptr [esp + 0x60], ecx
// 008145de  894c2468             mov dword ptr [esp + 0x68], ecx
// 008145e2  52                   push edx
// 008145e3  8bcf                 mov ecx, edi
// 008145e5  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 008145ed  89442468             mov dword ptr [esp + 0x68], eax
// 008145f1  83c670               add esi, 0x70
// 008145f4  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008145fa  50                   push eax
// 008145fb  8bcf                 mov ecx, edi
// 008145fd  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00814603  50                   push eax
// 00814604  8b06                 mov eax, dword ptr [esi]
// 00814606  8d8c2488000000       lea ecx, [esp + 0x88]
// 0081460d  ffd0                 call eax
// 0081460f  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00814613  2b4c245c             sub ecx, dword ptr [esp + 0x5c]
// 00814617  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0081461b  8d440a14             lea eax, [edx + ecx + 0x14]
// 0081461f  8944243c             mov dword ptr [esp + 0x3c], eax
// 00814623  8b442460             mov eax, dword ptr [esp + 0x60]
// 00814627  2b442458             sub eax, dword ptr [esp + 0x58]
// 0081462b  8bd3                 mov edx, ebx
// 0081462d  83c004               add eax, 4
// 00814630  3bd8                 cmp ebx, eax
// 00814632  7c02                 jl 0x814636
// 00814634  8bd0                 mov edx, eax
// 00814636  8b742420             mov esi, dword ptr [esp + 0x20]
// 0081463a  85f6                 test esi, esi
// 0081463c  740e                 je 0x81464c
// 0081463e  837c241800           cmp dword ptr [esp + 0x18], 0
// 00814643  7407                 je 0x81464c
// 00814645  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00814649  41                   inc ecx
// 0081464a  eb02                 jmp 0x81464e
// 0081464c  33c9                 xor ecx, ecx
// 0081464e  83c519               add ebp, 0x19
// 00814651  03ca                 add ecx, edx
// 00814653  3be9                 cmp ebp, ecx
// 00814655  7f1c                 jg 0x814673
// 00814657  3bd8                 cmp ebx, eax
// 00814659  7c02                 jl 0x81465d
// 0081465b  8bd8                 mov ebx, eax
// 0081465d  85f6                 test esi, esi
// 0081465f  740e                 je 0x81466f
// 00814661  837c241800           cmp dword ptr [esp + 0x18], 0
// 00814666  7407                 je 0x81466f
// 00814668  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0081466c  45                   inc ebp
// 0081466d  eb02                 jmp 0x814671
// 0081466f  33ed                 xor ebp, ebp
// 00814671  03eb                 add ebp, ebx
// 00814673  8d4c2468             lea ecx, [esp + 0x68]
// 00814677  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0081467f  e89cb0feff           call 0x7ff720
// 00814684  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00814688  51                   push ecx
// 00814689  8d4c247c             lea ecx, [esp + 0x7c]
// 0081468d  e8be871600           call 0x97ce50
// 00814692  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00814696  036c2440             add ebp, dword ptr [esp + 0x40]
// 0081469a  0344242c             add eax, dword ptr [esp + 0x2c]
// 0081469e  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 008146a5  894604               mov dword ptr [esi + 4], eax
// 008146a8  8d4c2414             lea ecx, [esp + 0x14]
// 008146ac  892e                 mov dword ptr [esi], ebp
// 008146ae  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008146b4  8d4c2478             lea ecx, [esp + 0x78]
// 008146b8  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 008146c3  e86641f9ff           call 0x7a882e
// 008146c8  8bc6                 mov eax, esi
// 008146ca  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008146d1  64890d00000000       mov dword ptr fs:[0], ecx
// 008146d8  59                   pop ecx
// 008146d9  5f                   pop edi
// 008146da  5e                   pop esi
// 008146db  5d                   pop ebp
// 008146dc  5b                   pop ebx
// 008146dd  81c484000000         add esp, 0x84
// 008146e3  c20800               ret 8
// copied from an identical function in another client (function ?GetToolSize@CXTPToolTipContextToolTip@@MAE?AVCSize@@PAUTOOLITEM@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp