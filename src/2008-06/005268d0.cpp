// from server: 100% by auto
// roc 2008-06 005268d0  unit: G3D::Line  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005268d0
//
// 005268d0  51                   push ecx
// 005268d1  55                   push ebp
// 005268d2  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005268d6  56                   push esi
// 005268d7  8b742410             mov esi, dword ptr [esp + 0x10]
// 005268db  f6863002000001       test byte ptr [esi + 0x230], 1
// 005268e2  7504                 jne 0x5268e8
// 005268e4  85ed                 test ebp, ebp
// 005268e6  7408                 je 0x5268f0
// 005268e8  81fd00010000         cmp ebp, 0x100
// 005268ee  7617                 jbe 0x526907
// 005268f0  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 005268f7  6814b48200           push 0x82b414
// 005268fc  56                   push esi
// 005268fd  7517                 jne 0x526916
// 005268ff  e8ac300000           call 0x5299b0
// 00526904  83c408               add esp, 8
// 00526907  f6862601000002       test byte ptr [esi + 0x126], 2
// 0052690e  7512                 jne 0x526922
// 00526910  68dcb38200           push 0x82b3dc
// 00526915  56                   push esi
// 00526916  e835310000           call 0x529a50
// 0052691b  83c408               add esp, 8
// 0052691e  5e                   pop esi
// 0052691f  5d                   pop ebp
// 00526920  59                   pop ecx
// 00526921  c3                   ret 
// 00526922  8d446d00             lea eax, [ebp + ebp*2]
// 00526926  50                   push eax
// 00526927  685c948200           push 0x82945c
// 0052692c  56                   push esi
// 0052692d  6689ae18010000       mov word ptr [esi + 0x118], bp
// 00526934  e8e7faffff           call 0x526420
// 00526939  83c40c               add esp, 0xc
// 0052693c  85ed                 test ebp, ebp
// 0052693e  7642                 jbe 0x526982
// 00526940  57                   push edi
// 00526941  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00526945  83c702               add edi, 2
// 00526948  8a4ffe               mov cl, byte ptr [edi - 2]
// 0052694b  8a57ff               mov dl, byte ptr [edi - 1]
// 0052694e  8a07                 mov al, byte ptr [edi]
// 00526950  884c2414             mov byte ptr [esp + 0x14], cl
// 00526954  6a03                 push 3
// 00526956  8d4c2418             lea ecx, [esp + 0x18]
// 0052695a  51                   push ecx
// 0052695b  56                   push esi
// 0052695c  88542421             mov byte ptr [esp + 0x21], dl
// 00526960  88442422             mov byte ptr [esp + 0x22], al
// 00526964  e81774ffff           call 0x51dd80
// 00526969  6a03                 push 3
// 0052696b  8d542424             lea edx, [esp + 0x24]
// 0052696f  52                   push edx
// 00526970  56                   push esi
// 00526971  e83a71ffff           call 0x51dab0
// 00526976  83c418               add esp, 0x18
// 00526979  83c703               add edi, 3
// 0052697c  83ed01               sub ebp, 1
// 0052697f  75c7                 jne 0x526948
// 00526981  5f                   pop edi
// 00526982  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00526988  8bd0                 mov edx, eax
// 0052698a  8bc8                 mov ecx, eax
// 0052698c  c1e918               shr ecx, 0x18
// 0052698f  c1ea10               shr edx, 0x10
// 00526992  884c2408             mov byte ptr [esp + 8], cl
// 00526996  88542409             mov byte ptr [esp + 9], dl
// 0052699a  6a04                 push 4
// 0052699c  8d54240c             lea edx, [esp + 0xc]
// 005269a0  8bc8                 mov ecx, eax
// 005269a2  52                   push edx
// 005269a3  c1e908               shr ecx, 8
// 005269a6  56                   push esi
// 005269a7  884c2416             mov byte ptr [esp + 0x16], cl
// 005269ab  88442417             mov byte ptr [esp + 0x17], al
// 005269af  e8fc70ffff           call 0x51dab0
// 005269b4  83c40c               add esp, 0xc
// 005269b7  834e6802             or dword ptr [esi + 0x68], 2
// 005269bb  5e                   pop esi
// 005269bc  5d                   pop ebp
// 005269bd  59                   pop ecx
// 005269be  c3                   ret 
// library libpng-1.2.5/pngwutil.c (function _png_write_PLTE)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwutil.c
