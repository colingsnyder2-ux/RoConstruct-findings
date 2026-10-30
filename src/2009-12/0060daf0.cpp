// roc 2009-12 0060daf0  unit: seg_00600000  size: 1096 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060daf0
//
// 0060daf0  83ec18               sub esp, 0x18
// 0060daf3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060daf7  53                   push ebx
// 0060daf8  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0060dafc  56                   push esi
// 0060dafd  c644240849           mov byte ptr [esp + 8], 0x49
// 0060db02  c644240948           mov byte ptr [esp + 9], 0x48
// 0060db07  c644240a44           mov byte ptr [esp + 0xa], 0x44
// 0060db0c  c644240b52           mov byte ptr [esp + 0xb], 0x52
// 0060db11  c644240c00           mov byte ptr [esp + 0xc], 0
// 0060db16  83f806               cmp eax, 6
// 0060db19  0f87c3000000         ja 0x60dbe2
// 0060db1f  ff2485f4de6000       jmp dword ptr [eax*4 + 0x60def4]
// 0060db26  8d43ff               lea eax, [ebx - 1]
// 0060db29  83f80f               cmp eax, 0xf
// 0060db2c  771e                 ja 0x60db4c
// 0060db2e  0fb68018df6000       movzx eax, byte ptr [eax + 0x60df18]
// 0060db35  ff248510df6000       jmp dword ptr [eax*4 + 0x60df10]
// 0060db3c  8b742424             mov esi, dword ptr [esp + 0x24]
// 0060db40  c6862a01000001       mov byte ptr [esi + 0x12a], 1
// 0060db47  e9a8000000           jmp 0x60dbf4
// 0060db4c  68c45d9c00           push 0x9c5dc4
// 0060db51  e991000000           jmp 0x60dbe7
// 0060db56  8b742424             mov esi, dword ptr [esp + 0x24]
// 0060db5a  83fb08               cmp ebx, 8
// 0060db5d  7413                 je 0x60db72
// 0060db5f  83fb10               cmp ebx, 0x10
// 0060db62  740e                 je 0x60db72
// 0060db64  68a45d9c00           push 0x9c5da4
// 0060db69  56                   push esi
// 0060db6a  e821260000           call 0x610190
// 0060db6f  83c408               add esp, 8
// 0060db72  c6862a01000003       mov byte ptr [esi + 0x12a], 3
// 0060db79  eb79                 jmp 0x60dbf4
// 0060db7b  8d43ff               lea eax, [ebx - 1]
// 0060db7e  83f807               cmp eax, 7
// 0060db81  770e                 ja 0x60db91
// 0060db83  0fb68830df6000       movzx ecx, byte ptr [eax + 0x60df30]
// 0060db8a  ff248d28df6000       jmp dword ptr [ecx*4 + 0x60df28]
// 0060db91  687c5d9c00           push 0x9c5d7c
// 0060db96  eb4f                 jmp 0x60dbe7
// 0060db98  8b742424             mov esi, dword ptr [esp + 0x24]
// 0060db9c  83fb08               cmp ebx, 8
// 0060db9f  7413                 je 0x60dbb4
// 0060dba1  83fb10               cmp ebx, 0x10
// 0060dba4  740e                 je 0x60dbb4
// 0060dba6  68505d9c00           push 0x9c5d50
// 0060dbab  56                   push esi
// 0060dbac  e8df250000           call 0x610190
// 0060dbb1  83c408               add esp, 8
// 0060dbb4  c6862a01000002       mov byte ptr [esi + 0x12a], 2
// 0060dbbb  eb37                 jmp 0x60dbf4
// 0060dbbd  8b742424             mov esi, dword ptr [esp + 0x24]
// 0060dbc1  83fb08               cmp ebx, 8
// 0060dbc4  7413                 je 0x60dbd9
// 0060dbc6  83fb10               cmp ebx, 0x10
// 0060dbc9  740e                 je 0x60dbd9
// 0060dbcb  682c5d9c00           push 0x9c5d2c
// 0060dbd0  56                   push esi
// 0060dbd1  e8ba250000           call 0x610190
// 0060dbd6  83c408               add esp, 8
// 0060dbd9  c6862a01000004       mov byte ptr [esi + 0x12a], 4
// 0060dbe0  eb12                 jmp 0x60dbf4
// 0060dbe2  68085d9c00           push 0x9c5d08
// 0060dbe7  8b742428             mov esi, dword ptr [esp + 0x28]
// 0060dbeb  56                   push esi
// 0060dbec  e89f250000           call 0x610190
// 0060dbf1  83c408               add esp, 8
// 0060dbf4  837c243800           cmp dword ptr [esp + 0x38], 0
// 0060dbf9  7416                 je 0x60dc11
// 0060dbfb  68e45c9c00           push 0x9c5ce4
// 0060dc00  56                   push esi
// 0060dc01  e83a260000           call 0x610240
// 0060dc06  83c408               add esp, 8
// 0060dc09  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0060dc11  f6863002000004       test byte ptr [esi + 0x230], 4
// 0060dc18  741e                 je 0x60dc38
// 0060dc1a  f7466800100000       test dword ptr [esi + 0x68], 0x1000
// 0060dc21  7515                 jne 0x60dc38
// 0060dc23  8b442434             mov eax, dword ptr [esp + 0x34]
// 0060dc27  83f802               cmp eax, 2
// 0060dc2a  7405                 je 0x60dc31
// 0060dc2c  83f806               cmp eax, 6
// 0060dc2f  7507                 jne 0x60dc38
// 0060dc31  837c243c40           cmp dword ptr [esp + 0x3c], 0x40
// 0060dc36  741d                 je 0x60dc55
// 0060dc38  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0060dc3d  7416                 je 0x60dc55
// 0060dc3f  68c45c9c00           push 0x9c5cc4
// 0060dc44  56                   push esi
// 0060dc45  e8f6250000           call 0x610240
// 0060dc4a  83c408               add esp, 8
// 0060dc4d  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0060dc55  8b442440             mov eax, dword ptr [esp + 0x40]
// 0060dc59  85c0                 test eax, eax
// 0060dc5b  741c                 je 0x60dc79
// 0060dc5d  83f801               cmp eax, 1
// 0060dc60  7417                 je 0x60dc79
// 0060dc62  68a05c9c00           push 0x9c5ca0
// 0060dc67  56                   push esi
// 0060dc68  e8d3250000           call 0x610240
// 0060dc6d  b801000000           mov eax, 1
// 0060dc72  83c408               add esp, 8
// 0060dc75  89442440             mov dword ptr [esp + 0x40], eax
// 0060dc79  8a542434             mov dl, byte ptr [esp + 0x34]
// 0060dc7d  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 0060dc81  888623010000         mov byte ptr [esi + 0x123], al
// 0060dc87  8a44243c             mov al, byte ptr [esp + 0x3c]
// 0060dc8b  888638020000         mov byte ptr [esi + 0x238], al
// 0060dc91  8a862a010000         mov al, byte ptr [esi + 0x12a]
// 0060dc97  f6eb                 imul bl
// 0060dc99  889626010000         mov byte ptr [esi + 0x126], dl
// 0060dc9f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0060dca3  888e60020000         mov byte ptr [esi + 0x260], cl
// 0060dca9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060dcad  888629010000         mov byte ptr [esi + 0x129], al
// 0060dcb3  3c08                 cmp al, 8
// 0060dcb5  889e27010000         mov byte ptr [esi + 0x127], bl
// 0060dcbb  898ec8000000         mov dword ptr [esi + 0xc8], ecx
// 0060dcc1  8996cc000000         mov dword ptr [esi + 0xcc], edx
// 0060dcc7  0fb6c0               movzx eax, al
// 0060dcca  7208                 jb 0x60dcd4
// 0060dccc  c1e803               shr eax, 3
// 0060dccf  0fafc1               imul eax, ecx
// 0060dcd2  eb09                 jmp 0x60dcdd
// 0060dcd4  0fafc1               imul eax, ecx
// 0060dcd7  83c007               add eax, 7
// 0060dcda  c1e803               shr eax, 3
// 0060dcdd  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0060dce3  8a862a010000         mov al, byte ptr [esi + 0x12a]
// 0060dce9  88862b010000         mov byte ptr [esi + 0x12b], al
// 0060dcef  8bc1                 mov eax, ecx
// 0060dcf1  c1e818               shr eax, 0x18
// 0060dcf4  88442410             mov byte ptr [esp + 0x10], al
// 0060dcf8  8bc1                 mov eax, ecx
// 0060dcfa  c1e810               shr eax, 0x10
// 0060dcfd  88442411             mov byte ptr [esp + 0x11], al
// 0060dd01  8bc1                 mov eax, ecx
// 0060dd03  c1e808               shr eax, 8
// 0060dd06  898ed4000000         mov dword ptr [esi + 0xd4], ecx
// 0060dd0c  88442412             mov byte ptr [esp + 0x12], al
// 0060dd10  884c2413             mov byte ptr [esp + 0x13], cl
// 0060dd14  8bc2                 mov eax, edx
// 0060dd16  8bca                 mov ecx, edx
// 0060dd18  c1e918               shr ecx, 0x18
// 0060dd1b  c1e810               shr eax, 0x10
// 0060dd1e  884c2414             mov byte ptr [esp + 0x14], cl
// 0060dd22  88442415             mov byte ptr [esp + 0x15], al
// 0060dd26  8a442438             mov al, byte ptr [esp + 0x38]
// 0060dd2a  8bca                 mov ecx, edx
// 0060dd2c  88542417             mov byte ptr [esp + 0x17], dl
// 0060dd30  8a542434             mov dl, byte ptr [esp + 0x34]
// 0060dd34  c1e908               shr ecx, 8
// 0060dd37  8844241a             mov byte ptr [esp + 0x1a], al
// 0060dd3b  6a0d                 push 0xd
// 0060dd3d  8d44240c             lea eax, [esp + 0xc]
// 0060dd41  884c241a             mov byte ptr [esp + 0x1a], cl
// 0060dd45  8a4c2440             mov cl, byte ptr [esp + 0x40]
// 0060dd49  8854241d             mov byte ptr [esp + 0x1d], dl
// 0060dd4d  8a542444             mov dl, byte ptr [esp + 0x44]
// 0060dd51  50                   push eax
// 0060dd52  56                   push esi
// 0060dd53  889e28010000         mov byte ptr [esi + 0x128], bl
// 0060dd59  885c2424             mov byte ptr [esp + 0x24], bl
// 0060dd5d  884c2427             mov byte ptr [esp + 0x27], cl
// 0060dd61  88542428             mov byte ptr [esp + 0x28], dl
// 0060dd65  e8a6ebffff           call 0x60c910
// 0060dd6a  6a0d                 push 0xd
// 0060dd6c  8d4c2420             lea ecx, [esp + 0x20]
// 0060dd70  51                   push ecx
// 0060dd71  56                   push esi
// 0060dd72  e81956ffff           call 0x603390
// 0060dd77  6a0d                 push 0xd
// 0060dd79  8d54242c             lea edx, [esp + 0x2c]
// 0060dd7d  52                   push edx
// 0060dd7e  56                   push esi
// 0060dd7f  e8ec58ffff           call 0x603670
// 0060dd84  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0060dd8a  8bd0                 mov edx, eax
// 0060dd8c  8bc8                 mov ecx, eax
// 0060dd8e  c1e918               shr ecx, 0x18
// 0060dd91  c1ea10               shr edx, 0x10
// 0060dd94  884c2448             mov byte ptr [esp + 0x48], cl
// 0060dd98  88542449             mov byte ptr [esp + 0x49], dl
// 0060dd9c  6a04                 push 4
// 0060dd9e  8d54244c             lea edx, [esp + 0x4c]
// 0060dda2  8bc8                 mov ecx, eax
// 0060dda4  52                   push edx
// 0060dda5  c1e908               shr ecx, 8
// 0060dda8  56                   push esi
// 0060dda9  884c2456             mov byte ptr [esp + 0x56], cl
// 0060ddad  88442457             mov byte ptr [esp + 0x57], al
// 0060ddb1  e8da55ffff           call 0x603390
// 0060ddb6  83c430               add esp, 0x30
// 0060ddb9  80be2501000000       cmp byte ptr [esi + 0x125], 0
// 0060ddc0  c78694000000f0356000 mov dword ptr [esi + 0x94], 0x6035f0
// 0060ddca  c7869800000040366000 mov dword ptr [esi + 0x98], 0x603640
// 0060ddd4  89b69c000000         mov dword ptr [esi + 0x9c], esi
// 0060ddda  7522                 jne 0x60ddfe
// 0060dddc  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 0060dde3  7412                 je 0x60ddf7
// 0060dde5  80be2701000008       cmp byte ptr [esi + 0x127], 8
// 0060ddec  7209                 jb 0x60ddf7
// 0060ddee  c68625010000f8       mov byte ptr [esi + 0x125], 0xf8
// 0060ddf5  eb07                 jmp 0x60ddfe
// 0060ddf7  c6862501000008       mov byte ptr [esi + 0x125], 8
// 0060ddfe  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0060de01  a801                 test al, 1
// 0060de03  7512                 jne 0x60de17
// 0060de05  33c9                 xor ecx, ecx
// 0060de07  80be2501000008       cmp byte ptr [esi + 0x125], 8
// 0060de0e  0f95c1               setne cl
// 0060de11  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 0060de17  a802                 test al, 2
// 0060de19  750a                 jne 0x60de25
// 0060de1b  c786b4000000ffffffff mov dword ptr [esi + 0xb4], 0xffffffff
// 0060de25  a804                 test al, 4
// 0060de27  750a                 jne 0x60de33
// 0060de29  c786c000000008000000 mov dword ptr [esi + 0xc0], 8
// 0060de33  a808                 test al, 8
// 0060de35  750a                 jne 0x60de41
// 0060de37  c786bc0000000f000000 mov dword ptr [esi + 0xbc], 0xf
// 0060de41  a810                 test al, 0x10
// 0060de43  750a                 jne 0x60de4f
// 0060de45  c786b800000008000000 mov dword ptr [esi + 0xb8], 8
// 0060de4f  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0060de55  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0060de5b  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0060de61  6a38                 push 0x38
// 0060de63  68884d9c00           push 0x9c4d88
// 0060de68  52                   push edx
// 0060de69  8b96b8000000         mov edx, dword ptr [esi + 0xb8]
// 0060de6f  50                   push eax
// 0060de70  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0060de76  51                   push ecx
// 0060de77  52                   push edx
// 0060de78  50                   push eax
// 0060de79  8d4e74               lea ecx, [esi + 0x74]
// 0060de7c  51                   push ecx
// 0060de7d  e81e460000           call 0x6124a0
// 0060de82  83c420               add esp, 0x20
// 0060de85  85c0                 test eax, eax
// 0060de87  7439                 je 0x60dec2
// 0060de89  83f8fa               cmp eax, -6
// 0060de8c  7507                 jne 0x60de95
// 0060de8e  68685c9c00           push 0x9c5c68
// 0060de93  eb16                 jmp 0x60deab
// 0060de95  83f8fe               cmp eax, -2
// 0060de98  7507                 jne 0x60dea1
// 0060de9a  68305c9c00           push 0x9c5c30
// 0060de9f  eb0a                 jmp 0x60deab
// 0060dea1  83f8fc               cmp eax, -4
// 0060dea4  750e                 jne 0x60deb4
// 0060dea6  68fc5b9c00           push 0x9c5bfc
// 0060deab  56                   push esi
// 0060deac  e8df220000           call 0x610190
// 0060deb1  83c408               add esp, 8
// 0060deb4  68d45b9c00           push 0x9c5bd4
// 0060deb9  56                   push esi
// 0060deba  e8d1220000           call 0x610190
// 0060debf  83c408               add esp, 8
// 0060dec2  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 0060dec8  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0060dece  899680000000         mov dword ptr [esi + 0x80], edx
// 0060ded4  898684000000         mov dword ptr [esi + 0x84], eax
// 0060deda  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 0060dee4  c7466801000000       mov dword ptr [esi + 0x68], 1
// 0060deeb  5e                   pop esi
// 0060deec  5b                   pop ebx
// 0060deed  83c418               add esp, 0x18
// 0060def0  c3                   ret 
// 0060def1  8d4900               lea ecx, [ecx]
// copied from an identical function in another client (function _png_write_IHDR)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.32 pngwutil.c