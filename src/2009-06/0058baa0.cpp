// roc 2009-06 0058baa0  unit: seg_00580000  size: 1096 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058baa0
//
// 0058baa0  83ec18               sub esp, 0x18
// 0058baa3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0058baa7  53                   push ebx
// 0058baa8  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0058baac  56                   push esi
// 0058baad  c644240849           mov byte ptr [esp + 8], 0x49
// 0058bab2  c644240948           mov byte ptr [esp + 9], 0x48
// 0058bab7  c644240a44           mov byte ptr [esp + 0xa], 0x44
// 0058babc  c644240b52           mov byte ptr [esp + 0xb], 0x52
// 0058bac1  c644240c00           mov byte ptr [esp + 0xc], 0
// 0058bac6  83f806               cmp eax, 6
// 0058bac9  0f87c3000000         ja 0x58bb92
// 0058bacf  ff2485a4be5800       jmp dword ptr [eax*4 + 0x58bea4]
// 0058bad6  8d43ff               lea eax, [ebx - 1]
// 0058bad9  83f80f               cmp eax, 0xf
// 0058badc  771e                 ja 0x58bafc
// 0058bade  0fb680c8be5800       movzx eax, byte ptr [eax + 0x58bec8]
// 0058bae5  ff2485c0be5800       jmp dword ptr [eax*4 + 0x58bec0]
// 0058baec  8b742424             mov esi, dword ptr [esp + 0x24]
// 0058baf0  c6862a01000001       mov byte ptr [esi + 0x12a], 1
// 0058baf7  e9a8000000           jmp 0x58bba4
// 0058bafc  682cef8c00           push 0x8cef2c
// 0058bb01  e991000000           jmp 0x58bb97
// 0058bb06  8b742424             mov esi, dword ptr [esp + 0x24]
// 0058bb0a  83fb08               cmp ebx, 8
// 0058bb0d  7413                 je 0x58bb22
// 0058bb0f  83fb10               cmp ebx, 0x10
// 0058bb12  740e                 je 0x58bb22
// 0058bb14  680cef8c00           push 0x8cef0c
// 0058bb19  56                   push esi
// 0058bb1a  e841260000           call 0x58e160
// 0058bb1f  83c408               add esp, 8
// 0058bb22  c6862a01000003       mov byte ptr [esi + 0x12a], 3
// 0058bb29  eb79                 jmp 0x58bba4
// 0058bb2b  8d43ff               lea eax, [ebx - 1]
// 0058bb2e  83f807               cmp eax, 7
// 0058bb31  770e                 ja 0x58bb41
// 0058bb33  0fb688e0be5800       movzx ecx, byte ptr [eax + 0x58bee0]
// 0058bb3a  ff248dd8be5800       jmp dword ptr [ecx*4 + 0x58bed8]
// 0058bb41  68e4ee8c00           push 0x8ceee4
// 0058bb46  eb4f                 jmp 0x58bb97
// 0058bb48  8b742424             mov esi, dword ptr [esp + 0x24]
// 0058bb4c  83fb08               cmp ebx, 8
// 0058bb4f  7413                 je 0x58bb64
// 0058bb51  83fb10               cmp ebx, 0x10
// 0058bb54  740e                 je 0x58bb64
// 0058bb56  68b8ee8c00           push 0x8ceeb8
// 0058bb5b  56                   push esi
// 0058bb5c  e8ff250000           call 0x58e160
// 0058bb61  83c408               add esp, 8
// 0058bb64  c6862a01000002       mov byte ptr [esi + 0x12a], 2
// 0058bb6b  eb37                 jmp 0x58bba4
// 0058bb6d  8b742424             mov esi, dword ptr [esp + 0x24]
// 0058bb71  83fb08               cmp ebx, 8
// 0058bb74  7413                 je 0x58bb89
// 0058bb76  83fb10               cmp ebx, 0x10
// 0058bb79  740e                 je 0x58bb89
// 0058bb7b  6894ee8c00           push 0x8cee94
// 0058bb80  56                   push esi
// 0058bb81  e8da250000           call 0x58e160
// 0058bb86  83c408               add esp, 8
// 0058bb89  c6862a01000004       mov byte ptr [esi + 0x12a], 4
// 0058bb90  eb12                 jmp 0x58bba4
// 0058bb92  6870ee8c00           push 0x8cee70
// 0058bb97  8b742428             mov esi, dword ptr [esp + 0x28]
// 0058bb9b  56                   push esi
// 0058bb9c  e8bf250000           call 0x58e160
// 0058bba1  83c408               add esp, 8
// 0058bba4  837c243800           cmp dword ptr [esp + 0x38], 0
// 0058bba9  7416                 je 0x58bbc1
// 0058bbab  684cee8c00           push 0x8cee4c
// 0058bbb0  56                   push esi
// 0058bbb1  e85a260000           call 0x58e210
// 0058bbb6  83c408               add esp, 8
// 0058bbb9  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0058bbc1  f6863002000004       test byte ptr [esi + 0x230], 4
// 0058bbc8  741e                 je 0x58bbe8
// 0058bbca  f7466800100000       test dword ptr [esi + 0x68], 0x1000
// 0058bbd1  7515                 jne 0x58bbe8
// 0058bbd3  8b442434             mov eax, dword ptr [esp + 0x34]
// 0058bbd7  83f802               cmp eax, 2
// 0058bbda  7405                 je 0x58bbe1
// 0058bbdc  83f806               cmp eax, 6
// 0058bbdf  7507                 jne 0x58bbe8
// 0058bbe1  837c243c40           cmp dword ptr [esp + 0x3c], 0x40
// 0058bbe6  741d                 je 0x58bc05
// 0058bbe8  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0058bbed  7416                 je 0x58bc05
// 0058bbef  682cee8c00           push 0x8cee2c
// 0058bbf4  56                   push esi
// 0058bbf5  e816260000           call 0x58e210
// 0058bbfa  83c408               add esp, 8
// 0058bbfd  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0058bc05  8b442440             mov eax, dword ptr [esp + 0x40]
// 0058bc09  85c0                 test eax, eax
// 0058bc0b  741c                 je 0x58bc29
// 0058bc0d  83f801               cmp eax, 1
// 0058bc10  7417                 je 0x58bc29
// 0058bc12  6808ee8c00           push 0x8cee08
// 0058bc17  56                   push esi
// 0058bc18  e8f3250000           call 0x58e210
// 0058bc1d  b801000000           mov eax, 1
// 0058bc22  83c408               add esp, 8
// 0058bc25  89442440             mov dword ptr [esp + 0x40], eax
// 0058bc29  8a542434             mov dl, byte ptr [esp + 0x34]
// 0058bc2d  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 0058bc31  888623010000         mov byte ptr [esi + 0x123], al
// 0058bc37  8a44243c             mov al, byte ptr [esp + 0x3c]
// 0058bc3b  888638020000         mov byte ptr [esi + 0x238], al
// 0058bc41  8a862a010000         mov al, byte ptr [esi + 0x12a]
// 0058bc47  f6eb                 imul bl
// 0058bc49  889626010000         mov byte ptr [esi + 0x126], dl
// 0058bc4f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0058bc53  888e60020000         mov byte ptr [esi + 0x260], cl
// 0058bc59  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0058bc5d  888629010000         mov byte ptr [esi + 0x129], al
// 0058bc63  3c08                 cmp al, 8
// 0058bc65  889e27010000         mov byte ptr [esi + 0x127], bl
// 0058bc6b  898ec8000000         mov dword ptr [esi + 0xc8], ecx
// 0058bc71  8996cc000000         mov dword ptr [esi + 0xcc], edx
// 0058bc77  0fb6c0               movzx eax, al
// 0058bc7a  7208                 jb 0x58bc84
// 0058bc7c  c1e803               shr eax, 3
// 0058bc7f  0fafc1               imul eax, ecx
// 0058bc82  eb09                 jmp 0x58bc8d
// 0058bc84  0fafc1               imul eax, ecx
// 0058bc87  83c007               add eax, 7
// 0058bc8a  c1e803               shr eax, 3
// 0058bc8d  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0058bc93  8a862a010000         mov al, byte ptr [esi + 0x12a]
// 0058bc99  88862b010000         mov byte ptr [esi + 0x12b], al
// 0058bc9f  8bc1                 mov eax, ecx
// 0058bca1  c1e818               shr eax, 0x18
// 0058bca4  88442410             mov byte ptr [esp + 0x10], al
// 0058bca8  8bc1                 mov eax, ecx
// 0058bcaa  c1e810               shr eax, 0x10
// 0058bcad  88442411             mov byte ptr [esp + 0x11], al
// 0058bcb1  8bc1                 mov eax, ecx
// 0058bcb3  c1e808               shr eax, 8
// 0058bcb6  898ed4000000         mov dword ptr [esi + 0xd4], ecx
// 0058bcbc  88442412             mov byte ptr [esp + 0x12], al
// 0058bcc0  884c2413             mov byte ptr [esp + 0x13], cl
// 0058bcc4  8bc2                 mov eax, edx
// 0058bcc6  8bca                 mov ecx, edx
// 0058bcc8  c1e918               shr ecx, 0x18
// 0058bccb  c1e810               shr eax, 0x10
// 0058bcce  884c2414             mov byte ptr [esp + 0x14], cl
// 0058bcd2  88442415             mov byte ptr [esp + 0x15], al
// 0058bcd6  8a442438             mov al, byte ptr [esp + 0x38]
// 0058bcda  8bca                 mov ecx, edx
// 0058bcdc  88542417             mov byte ptr [esp + 0x17], dl
// 0058bce0  8a542434             mov dl, byte ptr [esp + 0x34]
// 0058bce4  c1e908               shr ecx, 8
// 0058bce7  8844241a             mov byte ptr [esp + 0x1a], al
// 0058bceb  6a0d                 push 0xd
// 0058bced  8d44240c             lea eax, [esp + 0xc]
// 0058bcf1  884c241a             mov byte ptr [esp + 0x1a], cl
// 0058bcf5  8a4c2440             mov cl, byte ptr [esp + 0x40]
// 0058bcf9  8854241d             mov byte ptr [esp + 0x1d], dl
// 0058bcfd  8a542444             mov dl, byte ptr [esp + 0x44]
// 0058bd01  50                   push eax
// 0058bd02  56                   push esi
// 0058bd03  889e28010000         mov byte ptr [esi + 0x128], bl
// 0058bd09  885c2424             mov byte ptr [esp + 0x24], bl
// 0058bd0d  884c2427             mov byte ptr [esp + 0x27], cl
// 0058bd11  88542428             mov byte ptr [esp + 0x28], dl
// 0058bd15  e8a6ebffff           call 0x58a8c0
// 0058bd1a  6a0d                 push 0xd
// 0058bd1c  8d4c2420             lea ecx, [esp + 0x20]
// 0058bd20  51                   push ecx
// 0058bd21  56                   push esi
// 0058bd22  e8b958ffff           call 0x5815e0
// 0058bd27  6a0d                 push 0xd
// 0058bd29  8d54242c             lea edx, [esp + 0x2c]
// 0058bd2d  52                   push edx
// 0058bd2e  56                   push esi
// 0058bd2f  e88c5bffff           call 0x5818c0
// 0058bd34  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0058bd3a  8bd0                 mov edx, eax
// 0058bd3c  8bc8                 mov ecx, eax
// 0058bd3e  c1e918               shr ecx, 0x18
// 0058bd41  c1ea10               shr edx, 0x10
// 0058bd44  884c2448             mov byte ptr [esp + 0x48], cl
// 0058bd48  88542449             mov byte ptr [esp + 0x49], dl
// 0058bd4c  6a04                 push 4
// 0058bd4e  8d54244c             lea edx, [esp + 0x4c]
// 0058bd52  8bc8                 mov ecx, eax
// 0058bd54  52                   push edx
// 0058bd55  c1e908               shr ecx, 8
// 0058bd58  56                   push esi
// 0058bd59  884c2456             mov byte ptr [esp + 0x56], cl
// 0058bd5d  88442457             mov byte ptr [esp + 0x57], al
// 0058bd61  e87a58ffff           call 0x5815e0
// 0058bd66  83c430               add esp, 0x30
// 0058bd69  80be2501000000       cmp byte ptr [esi + 0x125], 0
// 0058bd70  c7869400000040185800 mov dword ptr [esi + 0x94], 0x581840
// 0058bd7a  c7869800000090185800 mov dword ptr [esi + 0x98], 0x581890
// 0058bd84  89b69c000000         mov dword ptr [esi + 0x9c], esi
// 0058bd8a  7522                 jne 0x58bdae
// 0058bd8c  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 0058bd93  7412                 je 0x58bda7
// 0058bd95  80be2701000008       cmp byte ptr [esi + 0x127], 8
// 0058bd9c  7209                 jb 0x58bda7
// 0058bd9e  c68625010000f8       mov byte ptr [esi + 0x125], 0xf8
// 0058bda5  eb07                 jmp 0x58bdae
// 0058bda7  c6862501000008       mov byte ptr [esi + 0x125], 8
// 0058bdae  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0058bdb1  a801                 test al, 1
// 0058bdb3  7512                 jne 0x58bdc7
// 0058bdb5  33c9                 xor ecx, ecx
// 0058bdb7  80be2501000008       cmp byte ptr [esi + 0x125], 8
// 0058bdbe  0f95c1               setne cl
// 0058bdc1  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 0058bdc7  a802                 test al, 2
// 0058bdc9  750a                 jne 0x58bdd5
// 0058bdcb  c786b4000000ffffffff mov dword ptr [esi + 0xb4], 0xffffffff
// 0058bdd5  a804                 test al, 4
// 0058bdd7  750a                 jne 0x58bde3
// 0058bdd9  c786c000000008000000 mov dword ptr [esi + 0xc0], 8
// 0058bde3  a808                 test al, 8
// 0058bde5  750a                 jne 0x58bdf1
// 0058bde7  c786bc0000000f000000 mov dword ptr [esi + 0xbc], 0xf
// 0058bdf1  a810                 test al, 0x10
// 0058bdf3  750a                 jne 0x58bdff
// 0058bdf5  c786b800000008000000 mov dword ptr [esi + 0xb8], 8
// 0058bdff  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0058be05  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0058be0b  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0058be11  6a38                 push 0x38
// 0058be13  68e8de8c00           push 0x8cdee8
// 0058be18  52                   push edx
// 0058be19  8b96b8000000         mov edx, dword ptr [esi + 0xb8]
// 0058be1f  50                   push eax
// 0058be20  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0058be26  51                   push ecx
// 0058be27  52                   push edx
// 0058be28  50                   push eax
// 0058be29  8d4e74               lea ecx, [esi + 0x74]
// 0058be2c  51                   push ecx
// 0058be2d  e84e460000           call 0x590480
// 0058be32  83c420               add esp, 0x20
// 0058be35  85c0                 test eax, eax
// 0058be37  7439                 je 0x58be72
// 0058be39  83f8fa               cmp eax, -6
// 0058be3c  7507                 jne 0x58be45
// 0058be3e  68d0ed8c00           push 0x8cedd0
// 0058be43  eb16                 jmp 0x58be5b
// 0058be45  83f8fe               cmp eax, -2
// 0058be48  7507                 jne 0x58be51
// 0058be4a  6898ed8c00           push 0x8ced98
// 0058be4f  eb0a                 jmp 0x58be5b
// 0058be51  83f8fc               cmp eax, -4
// 0058be54  750e                 jne 0x58be64
// 0058be56  6864ed8c00           push 0x8ced64
// 0058be5b  56                   push esi
// 0058be5c  e8ff220000           call 0x58e160
// 0058be61  83c408               add esp, 8
// 0058be64  683ced8c00           push 0x8ced3c
// 0058be69  56                   push esi
// 0058be6a  e8f1220000           call 0x58e160
// 0058be6f  83c408               add esp, 8
// 0058be72  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 0058be78  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0058be7e  899680000000         mov dword ptr [esi + 0x80], edx
// 0058be84  898684000000         mov dword ptr [esi + 0x84], eax
// 0058be8a  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 0058be94  c7466801000000       mov dword ptr [esi + 0x68], 1
// 0058be9b  5e                   pop esi
// 0058be9c  5b                   pop ebx
// 0058be9d  83c418               add esp, 0x18
// 0058bea0  c3                   ret 
// 0058bea1  8d4900               lea ecx, [ecx]
// 0058bea4  d6                   salc 
// 0058bea5  ba580092bb           mov edx, 0xbb920058
// 0058beaa  58                   pop eax
// 0058beab  0006                 add byte ptr [esi], al
// 0058bead  bb58002bbb           mov ebx, 0xbb2b0058
// 0058beb2  58                   pop eax
// 0058beb3  0048bb               add byte ptr [eax - 0x45], cl
// 0058beb6  58                   pop eax
// 0058beb7  0092bb58006d         add byte ptr [edx + 0x6d0058bb], dl
// 0058bebd  bb5800ecba           mov ebx, 0xbaec0058
// 0058bec2  58                   pop eax
// 0058bec3  00fc                 add ah, bh
// 0058bec5  ba58000000           mov edx, 0x58
// 0058beca  0100                 add dword ptr [eax], eax
// 0058becc  0101                 add dword ptr [ecx], eax
// 0058bece  0100                 add dword ptr [eax], eax
// 0058bed0  0101                 add dword ptr [ecx], eax
// 0058bed2  0101                 add dword ptr [ecx], eax
// 0058bed4  0101                 add dword ptr [ecx], eax
// 0058bed6  0100                 add dword ptr [eax], eax
// 0058bed8  ec                   in al, dx
// 0058bed9  ba580041bb           mov edx, 0xbb410058
// 0058bede  58                   pop eax
// 0058bedf  0000                 add byte ptr [eax], al
// 0058bee1  0001                 add byte ptr [ecx], al
// 0058bee3  0001                 add byte ptr [ecx], al
// 0058bee5  0101                 add dword ptr [ecx], eax
// copied from an identical function in another client (function _png_write_IHDR)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.32 pngwutil.c