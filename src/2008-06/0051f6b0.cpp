// from server: 100% by auto
// roc 2008-06 0051f6b0  unit: seg_00510000  size: 562 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051f6b0
//
// 0051f6b0  53                   push ebx
// 0051f6b1  55                   push ebp
// 0051f6b2  56                   push esi
// 0051f6b3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051f6b7  57                   push edi
// 0051f6b8  6a00                 push 0
// 0051f6ba  56                   push esi
// 0051f6bb  e820d80000           call 0x52cee0
// 0051f6c0  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0051f6c4  83c408               add esp, 8
// 0051f6c7  8d9e1c010000         lea ebx, [esi + 0x11c]
// 0051f6cd  8d4900               lea ecx, [ecx]
// 0051f6d0  6a04                 push 4
// 0051f6d2  8d442418             lea eax, [esp + 0x18]
// 0051f6d6  50                   push eax
// 0051f6d7  56                   push esi
// 0051f6d8  e8d3530000           call 0x524ab0
// 0051f6dd  8d4c2420             lea ecx, [esp + 0x20]
// 0051f6e1  51                   push ecx
// 0051f6e2  56                   push esi
// 0051f6e3  e8a8d70000           call 0x52ce90
// 0051f6e8  56                   push esi
// 0051f6e9  8bf8                 mov edi, eax
// 0051f6eb  e870e6ffff           call 0x51dd60
// 0051f6f0  6a04                 push 4
// 0051f6f2  53                   push ebx
// 0051f6f3  56                   push esi
// 0051f6f4  e8a7c70000           call 0x52bea0
// 0051f6f9  8b03                 mov eax, dword ptr [ebx]
// 0051f6fb  83c424               add esp, 0x24
// 0051f6fe  3b0544948200         cmp eax, dword ptr [0x829444]
// 0051f704  750d                 jne 0x51f713
// 0051f706  57                   push edi
// 0051f707  55                   push ebp
// 0051f708  56                   push esi
// 0051f709  e8a2d80000           call 0x52cfb0
// 0051f70e  e9bd010000           jmp 0x51f8d0
// 0051f713  3b0554948200         cmp eax, dword ptr [0x829454]
// 0051f719  750d                 jne 0x51f728
// 0051f71b  57                   push edi
// 0051f71c  55                   push ebp
// 0051f71d  56                   push esi
// 0051f71e  e8eddb0000           call 0x52d310
// 0051f723  e9a8010000           jmp 0x51f8d0
// 0051f728  53                   push ebx
// 0051f729  56                   push esi
// 0051f72a  e8a1eaffff           call 0x51e1d0
// 0051f72f  83c408               add esp, 8
// 0051f732  85c0                 test eax, eax
// 0051f734  744a                 je 0x51f780
// 0051f736  8b13                 mov edx, dword ptr [ebx]
// 0051f738  3b154c948200         cmp edx, dword ptr [0x82944c]
// 0051f73e  751a                 jne 0x51f75a
// 0051f740  85ff                 test edi, edi
// 0051f742  7706                 ja 0x51f74a
// 0051f744  f6466808             test byte ptr [esi + 0x68], 8
// 0051f748  7414                 je 0x51f75e
// 0051f74a  68f8ab8200           push 0x82abf8
// 0051f74f  56                   push esi
// 0051f750  e85ba20000           call 0x5299b0
// 0051f755  83c408               add esp, 8
// 0051f758  eb04                 jmp 0x51f75e
// 0051f75a  834e6808             or dword ptr [esi + 0x68], 8
// 0051f75e  57                   push edi
// 0051f75f  55                   push ebp
// 0051f760  56                   push esi
// 0051f761  e87afa0000           call 0x52f1e0
// 0051f766  8b03                 mov eax, dword ptr [ebx]
// 0051f768  83c40c               add esp, 0xc
// 0051f76b  3b055c948200         cmp eax, dword ptr [0x82945c]
// 0051f771  0f855c010000         jne 0x51f8d3
// 0051f777  834e6802             or dword ptr [esi + 0x68], 2
// 0051f77b  e953010000           jmp 0x51f8d3
// 0051f780  8b03                 mov eax, dword ptr [ebx]
// 0051f782  3b054c948200         cmp eax, dword ptr [0x82944c]
// 0051f788  7527                 jne 0x51f7b1
// 0051f78a  85ff                 test edi, edi
// 0051f78c  7706                 ja 0x51f794
// 0051f78e  f6466808             test byte ptr [esi + 0x68], 8
// 0051f792  740e                 je 0x51f7a2
// 0051f794  68f8ab8200           push 0x82abf8
// 0051f799  56                   push esi
// 0051f79a  e811a20000           call 0x5299b0
// 0051f79f  83c408               add esp, 8
// 0051f7a2  57                   push edi
// 0051f7a3  56                   push esi
// 0051f7a4  e837d70000           call 0x52cee0
// 0051f7a9  83c408               add esp, 8
// 0051f7ac  e922010000           jmp 0x51f8d3
// 0051f7b1  57                   push edi
// 0051f7b2  55                   push ebp
// 0051f7b3  56                   push esi
// 0051f7b4  3b055c948200         cmp eax, dword ptr [0x82945c]
// 0051f7ba  750a                 jne 0x51f7c6
// 0051f7bc  e8afd90000           call 0x52d170
// 0051f7c1  e90a010000           jmp 0x51f8d0
// 0051f7c6  3b0564948200         cmp eax, dword ptr [0x829464]
// 0051f7cc  750a                 jne 0x51f7d8
// 0051f7ce  e81dec0000           call 0x52e3f0
// 0051f7d3  e9f8000000           jmp 0x51f8d0
// 0051f7d8  3b056c948200         cmp eax, dword ptr [0x82946c]
// 0051f7de  750a                 jne 0x51f7ea
// 0051f7e0  e87bde0000           call 0x52d660
// 0051f7e5  e9e6000000           jmp 0x51f8d0
// 0051f7ea  3b0574948200         cmp eax, dword ptr [0x829474]
// 0051f7f0  750a                 jne 0x51f7fc
// 0051f7f2  e869db0000           call 0x52d360
// 0051f7f7  e9d4000000           jmp 0x51f8d0
// 0051f7fc  3b057c948200         cmp eax, dword ptr [0x82947c]
// 0051f802  750a                 jne 0x51f80e
// 0051f804  e807ee0000           call 0x52e610
// 0051f809  e9c2000000           jmp 0x51f8d0
// 0051f80e  3b0594948200         cmp eax, dword ptr [0x829494]
// 0051f814  750a                 jne 0x51f820
// 0051f816  e895f00000           call 0x52e8b0
// 0051f81b  e9b0000000           jmp 0x51f8d0
// 0051f820  3b059c948200         cmp eax, dword ptr [0x82949c]
// 0051f826  750a                 jne 0x51f832
// 0051f828  e8a3f10000           call 0x52e9d0
// 0051f82d  e99e000000           jmp 0x51f8d0
// 0051f832  3b05a4948200         cmp eax, dword ptr [0x8294a4]
// 0051f838  750a                 jne 0x51f844
// 0051f83a  e851f40000           call 0x52ec90
// 0051f83f  e98c000000           jmp 0x51f8d0
// 0051f844  3b05ac948200         cmp eax, dword ptr [0x8294ac]
// 0051f84a  7507                 jne 0x51f853
// 0051f84c  e83fef0000           call 0x52e790
// 0051f851  eb7d                 jmp 0x51f8d0
// 0051f853  3b05b4948200         cmp eax, dword ptr [0x8294b4]
// 0051f859  7507                 jne 0x51f862
// 0051f85b  e880dc0000           call 0x52d4e0
// 0051f860  eb6e                 jmp 0x51f8d0
// 0051f862  3b05c4948200         cmp eax, dword ptr [0x8294c4]
// 0051f868  7507                 jne 0x51f871
// 0051f86a  e811e30000           call 0x52db80
// 0051f86f  eb5f                 jmp 0x51f8d0
// 0051f871  3b0584948200         cmp eax, dword ptr [0x829484]
// 0051f877  7507                 jne 0x51f880
// 0051f879  e802e50000           call 0x52dd80
// 0051f87e  eb50                 jmp 0x51f8d0
// 0051f880  3b05bc948200         cmp eax, dword ptr [0x8294bc]
// 0051f886  7507                 jne 0x51f88f
// 0051f888  e8a3e60000           call 0x52df30
// 0051f88d  eb41                 jmp 0x51f8d0
// 0051f88f  3b05cc948200         cmp eax, dword ptr [0x8294cc]
// 0051f895  7507                 jne 0x51f89e
// 0051f897  e8c4f60000           call 0x52ef60
// 0051f89c  eb32                 jmp 0x51f8d0
// 0051f89e  3b05d4948200         cmp eax, dword ptr [0x8294d4]
// 0051f8a4  7507                 jne 0x51f8ad
// 0051f8a6  e8a5f50000           call 0x52ee50
// 0051f8ab  eb23                 jmp 0x51f8d0
// 0051f8ad  3b05dc948200         cmp eax, dword ptr [0x8294dc]
// 0051f8b3  7507                 jne 0x51f8bc
// 0051f8b5  e8c6e80000           call 0x52e180
// 0051f8ba  eb14                 jmp 0x51f8d0
// 0051f8bc  3b05e4948200         cmp eax, dword ptr [0x8294e4]
// 0051f8c2  7507                 jne 0x51f8cb
// 0051f8c4  e8b7f70000           call 0x52f080
// 0051f8c9  eb05                 jmp 0x51f8d0
// 0051f8cb  e810f90000           call 0x52f1e0
// 0051f8d0  83c40c               add esp, 0xc
// 0051f8d3  f6466810             test byte ptr [esi + 0x68], 0x10
// 0051f8d7  0f84f3fdffff         je 0x51f6d0
// 0051f8dd  5f                   pop edi
// 0051f8de  5e                   pop esi
// 0051f8df  5d                   pop ebp
// 0051f8e0  5b                   pop ebx
// 0051f8e1  c3                   ret 
// library libpng-1.2.6/pngread.c (function _png_read_end)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngread.c
