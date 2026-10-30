// roc 2009-06 0079a260  unit: CXTPRibbonTheme  size: 634 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079a260
//
// 0079a260  6aff                 push -1
// 0079a262  688abc8700           push 0x87bc8a
// 0079a267  64a100000000         mov eax, dword ptr fs:[0]
// 0079a26d  50                   push eax
// 0079a26e  83ec44               sub esp, 0x44
// 0079a271  53                   push ebx
// 0079a272  55                   push ebp
// 0079a273  56                   push esi
// 0079a274  57                   push edi
// 0079a275  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0079a27a  33c4                 xor eax, esp
// 0079a27c  50                   push eax
// 0079a27d  8d442458             lea eax, [esp + 0x58]
// 0079a281  64a300000000         mov dword ptr fs:[0], eax
// 0079a287  8bf9                 mov edi, ecx
// 0079a289  897c2414             mov dword ptr [esp + 0x14], edi
// 0079a28d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0079a291  e82a240500           call 0x7ec6c0
// 0079a296  8bf0                 mov esi, eax
// 0079a298  33db                 xor ebx, ebx
// 0079a29a  89742420             mov dword ptr [esp + 0x20], esi
// 0079a29e  3bf3                 cmp esi, ebx
// 0079a2a0  0f841e020000         je 0x79a4c4
// 0079a2a6  8b8768060000         mov eax, dword ptr [edi + 0x668]
// 0079a2ac  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 0079a2b0  050c010000           add eax, 0x10c
// 0079a2b5  50                   push eax
// 0079a2b6  55                   push ebp
// 0079a2b7  8d4c2440             lea ecx, [esp + 0x40]
// 0079a2bb  e8a065fdff           call 0x770860
// 0079a2c0  6a01                 push 1
// 0079a2c2  8bcd                 mov ecx, ebp
// 0079a2c4  895c2464             mov dword ptr [esp + 0x64], ebx
// 0079a2c8  e8391c0b00           call 0x84bf06
// 0079a2cd  8b8768060000         mov eax, dword ptr [edi + 0x668]
// 0079a2d3  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 0079a2d9  8b88ac000000         mov ecx, dword ptr [eax + 0xac]
// 0079a2df  83f9ff               cmp ecx, -1
// 0079a2e2  7508                 jne 0x79a2ec
// 0079a2e4  8b80a8000000         mov eax, dword ptr [eax + 0xa8]
// 0079a2ea  eb02                 jmp 0x79a2ee
// 0079a2ec  8bc1                 mov eax, ecx
// 0079a2ee  8b5500               mov edx, dword ptr [ebp]
// 0079a2f1  50                   push eax
// 0079a2f2  8b4238               mov eax, dword ptr [edx + 0x38]
// 0079a2f5  8bcd                 mov ecx, ebp
// 0079a2f7  ffd0                 call eax
// 0079a2f9  3bf3                 cmp esi, ebx
// 0079a2fb  895c2468             mov dword ptr [esp + 0x68], ebx
// 0079a2ff  0f8eae010000         jle 0x79a4b3
// 0079a305  eb04                 jmp 0x79a30b
// 0079a307  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0079a30b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0079a30f  51                   push ecx
// 0079a310  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0079a314  e8b72b0500           call 0x7eced0
// 0079a319  8bf0                 mov esi, eax
// 0079a31b  8b560c               mov edx, dword ptr [esi + 0xc]
// 0079a31e  52                   push edx
// 0079a31f  8d442420             lea eax, [esp + 0x20]
// 0079a323  50                   push eax
// 0079a324  e8d7a3ffff           call 0x794700
// 0079a329  83c408               add esp, 8
// 0079a32c  8bc8                 mov ecx, eax
// 0079a32e  c644246001           mov byte ptr [esp + 0x60], 1
// 0079a333  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0079a339  50                   push eax
// 0079a33a  8d4c241c             lea ecx, [esp + 0x1c]
// 0079a33e  68900c9000           push 0x900c90
// 0079a343  51                   push ecx
// 0079a344  e847a3ffff           call 0x794690
// 0079a349  83c40c               add esp, 0xc
// 0079a34c  8bc8                 mov ecx, eax
// 0079a34e  c644246002           mov byte ptr [esp + 0x60], 2
// 0079a353  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0079a359  50                   push eax
// 0079a35a  8bcf                 mov ecx, edi
// 0079a35c  e85f9a0000           call 0x7a3dc0
// 0079a361  8d4c2418             lea ecx, [esp + 0x18]
// 0079a365  8bf8                 mov edi, eax
// 0079a367  ff1510fd8900         call dword ptr [0x89fd10]
// 0079a36d  8d4c241c             lea ecx, [esp + 0x1c]
// 0079a371  c644246000           mov byte ptr [esp + 0x60], 0
// 0079a376  ff1510fd8900         call dword ptr [0x89fd10]
// 0079a37c  85ff                 test edi, edi
// 0079a37e  0f842f010000         je 0x79a4b3
// 0079a384  8b5610               mov edx, dword ptr [esi + 0x10]
// 0079a387  89542428             mov dword ptr [esp + 0x28], edx
// 0079a38b  8b4614               mov eax, dword ptr [esi + 0x14]
// 0079a38e  8944242c             mov dword ptr [esp + 0x2c], eax
// 0079a392  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0079a395  bb01000000           mov ebx, 1
// 0079a39a  53                   push ebx
// 0079a39b  894c2434             mov dword ptr [esp + 0x34], ecx
// 0079a39f  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0079a3a2  6a00                 push 0
// 0079a3a4  8d442450             lea eax, [esp + 0x50]
// 0079a3a8  50                   push eax
// 0079a3a9  8bcf                 mov ecx, edi
// 0079a3ab  89542440             mov dword ptr [esp + 0x40], edx
// 0079a3af  e80cba0600           call 0x805dc0
// 0079a3b4  83ec10               sub esp, 0x10
// 0079a3b7  8bcc                 mov ecx, esp
// 0079a3b9  8919                 mov dword ptr [ecx], ebx
// 0079a3bb  8bd3                 mov edx, ebx
// 0079a3bd  895104               mov dword ptr [ecx + 4], edx
// 0079a3c0  895108               mov dword ptr [ecx + 8], edx
// 0079a3c3  89510c               mov dword ptr [ecx + 0xc], edx
// 0079a3c6  8b10                 mov edx, dword ptr [eax]
// 0079a3c8  83ec10               sub esp, 0x10
// 0079a3cb  8bcc                 mov ecx, esp
// 0079a3cd  8911                 mov dword ptr [ecx], edx
// 0079a3cf  8b5004               mov edx, dword ptr [eax + 4]
// 0079a3d2  895104               mov dword ptr [ecx + 4], edx
// 0079a3d5  8b5008               mov edx, dword ptr [eax + 8]
// 0079a3d8  8b400c               mov eax, dword ptr [eax + 0xc]
// 0079a3db  895108               mov dword ptr [ecx + 8], edx
// 0079a3de  89410c               mov dword ptr [ecx + 0xc], eax
// 0079a3e1  8d4c2448             lea ecx, [esp + 0x48]
// 0079a3e5  51                   push ecx
// 0079a3e6  55                   push ebp
// 0079a3e7  8bcf                 mov ecx, edi
// 0079a3e9  e8a2b20600           call 0x805690
// 0079a3ee  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 0079a3f2  8344242806           add dword ptr [esp + 0x28], 6
// 0079a3f7  8bcf                 mov ecx, edi
// 0079a3f9  e882d60100           call 0x7b7a80
// 0079a3fe  85c0                 test eax, eax
// 0079a400  740b                 je 0x79a40d
// 0079a402  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 0079a408  8b4040               mov eax, dword ptr [eax + 0x40]
// 0079a40b  eb02                 jmp 0x79a40f
// 0079a40d  33c0                 xor eax, eax
// 0079a40f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0079a413  8d4402fe             lea eax, [edx + eax - 2]
// 0079a417  8bcf                 mov ecx, edi
// 0079a419  8944242c             mov dword ptr [esp + 0x2c], eax
// 0079a41d  e84edd0100           call 0x7b8170
// 0079a422  85c0                 test eax, eax
// 0079a424  744f                 je 0x79a475
// 0079a426  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 0079a42c  8b4018               mov eax, dword ptr [eax + 0x18]
// 0079a42f  50                   push eax
// 0079a430  8bcf                 mov ecx, edi
// 0079a432  e8f95af9ff           call 0x72ff30
// 0079a437  50                   push eax
// 0079a438  51                   push ecx
// 0079a439  83c608               add esi, 8
// 0079a43c  8bcc                 mov ecx, esp
// 0079a43e  89642430             mov dword ptr [esp + 0x30], esp
// 0079a442  56                   push esi
// 0079a443  ff15e4fc8900         call dword ptr [0x89fce4]
// 0079a449  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0079a44d  8b542438             mov edx, dword ptr [esp + 0x38]
// 0079a451  83ec10               sub esp, 0x10
// 0079a454  8bc4                 mov eax, esp
// 0079a456  8908                 mov dword ptr [eax], ecx
// 0079a458  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0079a45c  895004               mov dword ptr [eax + 4], edx
// 0079a45f  8b542450             mov edx, dword ptr [esp + 0x50]
// 0079a463  894808               mov dword ptr [eax + 8], ecx
// 0079a466  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0079a46a  55                   push ebp
// 0079a46b  89500c               mov dword ptr [eax + 0xc], edx
// 0079a46e  e8eddcffff           call 0x798160
// 0079a473  eb2b                 jmp 0x79a4a0
// 0079a475  8d7e08               lea edi, [esi + 8]
// 0079a478  8b7500               mov esi, dword ptr [ebp]
// 0079a47b  6824880000           push 0x8824
// 0079a480  8d44242c             lea eax, [esp + 0x2c]
// 0079a484  50                   push eax
// 0079a485  8bcf                 mov ecx, edi
// 0079a487  83c670               add esi, 0x70
// 0079a48a  ff1554fb8900         call dword ptr [0x89fb54]
// 0079a490  50                   push eax
// 0079a491  8bcf                 mov ecx, edi
// 0079a493  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0079a499  8b16                 mov edx, dword ptr [esi]
// 0079a49b  50                   push eax
// 0079a49c  8bcd                 mov ecx, ebp
// 0079a49e  ffd2                 call edx
// 0079a4a0  8b442468             mov eax, dword ptr [esp + 0x68]
// 0079a4a4  40                   inc eax
// 0079a4a5  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0079a4a9  89442468             mov dword ptr [esp + 0x68], eax
// 0079a4ad  0f8c54feffff         jl 0x79a307
// 0079a4b3  8d4c2438             lea ecx, [esp + 0x38]
// 0079a4b7  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 0079a4bf  e81c64fdff           call 0x7708e0
// 0079a4c4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0079a4c8  64890d00000000       mov dword ptr fs:[0], ecx
// 0079a4cf  59                   pop ecx
// 0079a4d0  5f                   pop edi
// 0079a4d1  5e                   pop esi
// 0079a4d2  5d                   pop ebp
// 0079a4d3  5b                   pop ebx
// 0079a4d4  83c450               add esp, 0x50
// 0079a4d7  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonFrameContextHeaders@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@PAVCXTPRibbonTabContextHeaders@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp