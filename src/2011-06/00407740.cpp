// roc 2011-06 00407740  unit: VCApp::?$CComObject  size: 672 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407740
//
// 00407740  55                   push ebp
// 00407741  8bec                 mov ebp, esp
// 00407743  64a100000000         mov eax, dword ptr fs:[0]
// 00407749  6aff                 push -1
// 0040774b  6848d39c00           push 0x9cd348
// 00407750  50                   push eax
// 00407751  64892500000000       mov dword ptr fs:[0], esp
// 00407758  81ec18010000         sub esp, 0x118
// 0040775e  53                   push ebx
// 0040775f  56                   push esi
// 00407760  8bf1                 mov esi, ecx
// 00407762  33db                 xor ebx, ebx
// 00407764  57                   push edi
// 00407765  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00407768  740c                 je 0x407776
// 0040776a  395e14               cmp dword ptr [esi + 0x14], ebx
// 0040776d  7407                 je 0x407776
// 0040776f  33c0                 xor eax, eax
// 00407771  e951020000           jmp 0x4079c7
// 00407776  a1b415cb00           mov eax, dword ptr [0xcb15b4]
// 0040777b  83c010               add eax, 0x10
// 0040777e  8945e0               mov dword ptr [ebp - 0x20], eax
// 00407781  50                   push eax
// 00407782  895dfc               mov dword ptr [ebp - 4], ebx
// 00407785  ff158403a400         call dword ptr [0xa40384]
// 0040778b  c645e401             mov byte ptr [ebp - 0x1c], 1
// 0040778f  bf05400080           mov edi, 0x80004005
// 00407794  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00407797  0f8506020000         jne 0x4079a3
// 0040779d  8b4604               mov eax, dword ptr [esi + 4]
// 004077a0  8b0db815cb00         mov ecx, dword ptr [0xcb15b8]
// 004077a6  895dec               mov dword ptr [ebp - 0x14], ebx
// 004077a9  3b08                 cmp ecx, dword ptr [eax]
// 004077ab  0f8515010000         jne 0x4078c6
// 004077b1  8b15bc15cb00         mov edx, dword ptr [0xcb15bc]
// 004077b7  3b5004               cmp edx, dword ptr [eax + 4]
// 004077ba  0f8506010000         jne 0x4078c6
// 004077c0  8b0dc015cb00         mov ecx, dword ptr [0xcb15c0]
// 004077c6  3b4808               cmp ecx, dword ptr [eax + 8]
// 004077c9  0f85f7000000         jne 0x4078c6
// 004077cf  8b15c415cb00         mov edx, dword ptr [0xcb15c4]
// 004077d5  3b500c               cmp edx, dword ptr [eax + 0xc]
// 004077d8  0f85e8000000         jne 0x4078c6
// 004077de  b9ffff0000           mov ecx, 0xffff
// 004077e3  66394e08             cmp word ptr [esi + 8], cx
// 004077e7  0f85d9000000         jne 0x4078c6
// 004077ed  8bd1                 mov edx, ecx
// 004077ef  6639560a             cmp word ptr [esi + 0xa], dx
// 004077f3  0f85cd000000         jne 0x4078c6
// 004077f9  8b0d3c93d100         mov ecx, dword ptr [0xd1933c]
// 004077ff  6804010000           push 0x104
// 00407804  8d85dcfeffff         lea eax, [ebp - 0x124]
// 0040780a  50                   push eax
// 0040780b  51                   push ecx
// 0040780c  ff154403a400         call dword ptr [0xa40344]
// 00407812  3bc3                 cmp eax, ebx
// 00407814  0f848b010000         je 0x4079a5
// 0040781a  3d04010000           cmp eax, 0x104
// 0040781f  0f8480010000         je 0x4079a5
// 00407825  895d08               mov dword ptr [ebp + 8], ebx
// 00407828  8d95dcfeffff         lea edx, [ebp - 0x124]
// 0040782e  52                   push edx
// 0040782f  c645fc01             mov byte ptr [ebp - 4], 1
// 00407833  ff156403a400         call dword ptr [0xa40364]
// 00407839  40                   inc eax
// 0040783a  6a02                 push 2
// 0040783c  50                   push eax
// 0040783d  8945f0               mov dword ptr [ebp - 0x10], eax
// 00407840  8d45f0               lea eax, [ebp - 0x10]
// 00407843  50                   push eax
// 00407844  e857bcffff           call 0x4034a0
// 00407849  83c40c               add esp, 0xc
// 0040784c  85c0                 test eax, eax
// 0040784e  7c42                 jl 0x407892
// 00407850  8b7df0               mov edi, dword ptr [ebp - 0x10]
// 00407853  81ff00040000         cmp edi, 0x400
// 00407859  7f18                 jg 0x407873
// 0040785b  57                   push edi
// 0040785c  e8bfcdffff           call 0x404620
// 00407861  83c404               add esp, 4
// 00407864  84c0                 test al, al
// 00407866  740b                 je 0x407873
// 00407868  8bc7                 mov eax, edi
// 0040786a  e8113a4000           call 0x80b280
// 0040786f  8bc4                 mov eax, esp
// 00407871  eb09                 jmp 0x40787c
// 00407873  57                   push edi
// 00407874  8d4d08               lea ecx, [ebp + 8]
// 00407877  e854d3ffff           call 0x404bd0
// 0040787c  6a03                 push 3
// 0040787e  d1ef                 shr edi, 1
// 00407880  57                   push edi
// 00407881  8d8ddcfeffff         lea ecx, [ebp - 0x124]
// 00407887  51                   push ecx
// 00407888  50                   push eax
// 00407889  e862bcffff           call 0x4034f0
// 0040788e  3bc3                 cmp eax, ebx
// 00407890  751a                 jne 0x4078ac
// 00407892  8d4d08               lea ecx, [ebp + 8]
// 00407895  e826caffff           call 0x4042c0
// 0040789a  8d4de0               lea ecx, [ebp - 0x20]
// 0040789d  e8eefbffff           call 0x407490
// 004078a2  b80e000780           mov eax, 0x8007000e
// 004078a7  e91b010000           jmp 0x4079c7
// 004078ac  8d55ec               lea edx, [ebp - 0x14]
// 004078af  52                   push edx
// 004078b0  50                   push eax
// 004078b1  ff15e40aa400         call dword ptr [0xa40ae4]
// 004078b7  8d4d08               lea ecx, [ebp + 8]
// 004078ba  8bf8                 mov edi, eax
// 004078bc  885dfc               mov byte ptr [ebp - 4], bl
// 004078bf  e8fcc9ffff           call 0x4042c0
// 004078c4  eb1b                 jmp 0x4078e1
// 004078c6  8b5508               mov edx, dword ptr [ebp + 8]
// 004078c9  8d4dec               lea ecx, [ebp - 0x14]
// 004078cc  51                   push ecx
// 004078cd  0fb74e0a             movzx ecx, word ptr [esi + 0xa]
// 004078d1  52                   push edx
// 004078d2  0fb75608             movzx edx, word ptr [esi + 8]
// 004078d6  51                   push ecx
// 004078d7  52                   push edx
// 004078d8  50                   push eax
// 004078d9  ff15e80aa400         call dword ptr [0xa40ae8]
// 004078df  8bf8                 mov edi, eax
// 004078e1  3bfb                 cmp edi, ebx
// 004078e3  0f8cbc000000         jl 0x4079a5
// 004078e9  895de8               mov dword ptr [ebp - 0x18], ebx
// 004078ec  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 004078ef  8b08                 mov ecx, dword ptr [eax]
// 004078f1  8d55e8               lea edx, [ebp - 0x18]
// 004078f4  52                   push edx
// 004078f5  8b16                 mov edx, dword ptr [esi]
// 004078f7  52                   push edx
// 004078f8  50                   push eax
// 004078f9  8b4118               mov eax, dword ptr [ecx + 0x18]
// 004078fc  c645fc02             mov byte ptr [ebp - 4], 2
// 00407900  ffd0                 call eax
// 00407902  8bf8                 mov edi, eax
// 00407904  3bfb                 cmp edi, ebx
// 00407906  7c7c                 jl 0x407984
// 00407908  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0040790b  894508               mov dword ptr [ebp + 8], eax
// 0040790e  3bc3                 cmp eax, ebx
// 00407910  740b                 je 0x40791d
// 00407912  8b08                 mov ecx, dword ptr [eax]
// 00407914  8b5104               mov edx, dword ptr [ecx + 4]
// 00407917  50                   push eax
// 00407918  ffd2                 call edx
// 0040791a  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 0040791d  895df0               mov dword ptr [ebp - 0x10], ebx
// 00407920  8b08                 mov ecx, dword ptr [eax]
// 00407922  8d55f0               lea edx, [ebp - 0x10]
// 00407925  52                   push edx
// 00407926  68d0bca500           push 0xa5bcd0
// 0040792b  50                   push eax
// 0040792c  8b01                 mov eax, dword ptr [ecx]
// 0040792e  c645fc04             mov byte ptr [ebp - 4], 4
// 00407932  ffd0                 call eax
// 00407934  85c0                 test eax, eax
// 00407936  7c0c                 jl 0x407944
// 00407938  8d4df0               lea ecx, [ebp - 0x10]
// 0040793b  51                   push ecx
// 0040793c  8d4d08               lea ecx, [ebp + 8]
// 0040793f  e87cfdffff           call 0x4076c0
// 00407944  8b4508               mov eax, dword ptr [ebp + 8]
// 00407947  56                   push esi
// 00407948  89460c               mov dword ptr [esi + 0xc], eax
// 0040794b  8b0db415cb00         mov ecx, dword ptr [0xcb15b4]
// 00407951  6820744000           push 0x407420
// 00407956  895d08               mov dword ptr [ebp + 8], ebx
// 00407959  e8b2fdffff           call 0x407710
// 0040795e  8b45f0               mov eax, dword ptr [ebp - 0x10]
// 00407961  c645fc03             mov byte ptr [ebp - 4], 3
// 00407965  3bc3                 cmp eax, ebx
// 00407967  7408                 je 0x407971
// 00407969  8b10                 mov edx, dword ptr [eax]
// 0040796b  50                   push eax
// 0040796c  8b4208               mov eax, dword ptr [edx + 8]
// 0040796f  ffd0                 call eax
// 00407971  8b4508               mov eax, dword ptr [ebp + 8]
// 00407974  c645fc02             mov byte ptr [ebp - 4], 2
// 00407978  3bc3                 cmp eax, ebx
// 0040797a  7408                 je 0x407984
// 0040797c  8b08                 mov ecx, dword ptr [eax]
// 0040797e  8b5108               mov edx, dword ptr [ecx + 8]
// 00407981  50                   push eax
// 00407982  ffd2                 call edx
// 00407984  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00407987  8b08                 mov ecx, dword ptr [eax]
// 00407989  8b5108               mov edx, dword ptr [ecx + 8]
// 0040798c  50                   push eax
// 0040798d  ffd2                 call edx
// 0040798f  8b45e8               mov eax, dword ptr [ebp - 0x18]
// 00407992  885dfc               mov byte ptr [ebp - 4], bl
// 00407995  3bc3                 cmp eax, ebx
// 00407997  740c                 je 0x4079a5
// 00407999  8b08                 mov ecx, dword ptr [eax]
// 0040799b  8b5108               mov edx, dword ptr [ecx + 8]
// 0040799e  50                   push eax
// 0040799f  ffd2                 call edx
// 004079a1  eb02                 jmp 0x4079a5
// 004079a3  33ff                 xor edi, edi
// 004079a5  8b460c               mov eax, dword ptr [esi + 0xc]
// 004079a8  3bc3                 cmp eax, ebx
// 004079aa  740f                 je 0x4079bb
// 004079ac  395e14               cmp dword ptr [esi + 0x14], ebx
// 004079af  750a                 jne 0x4079bb
// 004079b1  50                   push eax
// 004079b2  8bce                 mov ecx, esi
// 004079b4  e897f8ffff           call 0x407250
// 004079b9  8bf8                 mov edi, eax
// 004079bb  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 004079be  50                   push eax
// 004079bf  ff158003a400         call dword ptr [0xa40380]
// 004079c5  8bc7                 mov eax, edi
// 004079c7  8da5d0feffff         lea esp, [ebp - 0x130]
// 004079cd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004079d0  64890d00000000       mov dword ptr fs:[0], ecx
// 004079d7  5f                   pop edi
// 004079d8  5e                   pop esi
// 004079d9  5b                   pop ebx
// 004079da  8be5                 mov esp, ebp
// 004079dc  5d                   pop ebp
// 004079dd  c20400               ret 4
// copied from an identical function in another client (function ?GetTI@CComTypeInfoHolder@ATL@@QAEJK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_typeinfo_getti_88c46520c3afb67d.cpp