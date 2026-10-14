// roc 2009-06 0057ac80  unit: G3D::TextInput::WrongSymbol  size: 3042 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057ac80
//
// 0057ac80  6aff                 push -1
// 0057ac82  685e0a8600           push 0x860a5e
// 0057ac87  64a100000000         mov eax, dword ptr fs:[0]
// 0057ac8d  50                   push eax
// 0057ac8e  64892500000000       mov dword ptr fs:[0], esp
// 0057ac95  81ec90000000         sub esp, 0x90
// 0057ac9b  53                   push ebx
// 0057ac9c  55                   push ebp
// 0057ac9d  56                   push esi
// 0057ac9e  8bf1                 mov esi, ecx
// 0057aca0  6816d28a00           push 0x8ad216
// 0057aca5  8d4c2414             lea ecx, [esp + 0x14]
// 0057aca9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057acb1  ff15b4e48900         call dword ptr [0x89e4b4]
// 0057acb7  8b4630               mov eax, dword ptr [esi + 0x30]
// 0057acba  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0057acbd  8944242c             mov dword ptr [esp + 0x2c], eax
// 0057acc1  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0057acc4  894c2430             mov dword ptr [esp + 0x30], ecx
// 0057acc8  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0057accb  bd01000000           mov ebp, 1
// 0057acd0  89ac24a4000000       mov dword ptr [esp + 0xa4], ebp
// 0057acd7  c744243403000000     mov dword ptr [esp + 0x34], 3
// 0057acdf  c744243805000000     mov dword ptr [esp + 0x38], 5
// 0057ace7  3bc1                 cmp eax, ecx
// 0057ace9  730c                 jae 0x57acf7
// 0057aceb  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057acee  0fb61c10             movzx ebx, byte ptr [eax + edx]
// 0057acf2  83fbff               cmp ebx, -1
// 0057acf5  754b                 jne 0x57ad42
// 0057acf7  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 0057acfe  8d442410             lea eax, [esp + 0x10]
// 0057ad02  50                   push eax
// 0057ad03  8bce                 mov ecx, esi
// 0057ad05  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057ad0b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057ad0f  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057ad13  8b442434             mov eax, dword ptr [esp + 0x34]
// 0057ad17  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0057ad1a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0057ad1e  895620               mov dword ptr [esi + 0x20], edx
// 0057ad21  894624               mov dword ptr [esi + 0x24], eax
// 0057ad24  894e28               mov dword ptr [esi + 0x28], ecx
// 0057ad27  8d4c2410             lea ecx, [esp + 0x10]
// 0057ad2b  896c240c             mov dword ptr [esp + 0xc], ebp
// 0057ad2f  c68424a400000000     mov byte ptr [esp + 0xa4], 0
// 0057ad37  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057ad3d  e97f0a0000           jmp 0x57b7c1
// 0057ad42  57                   push edi
// 0057ad43  8b3df4e88900         mov edi, dword ptr [0x89e8f4]
// 0057ad49  8da42400000000       lea esp, [esp]
// 0057ad50  0fbed3               movsx edx, bl
// 0057ad53  52                   push edx
// 0057ad54  ffd7                 call edi
// 0057ad56  83c404               add esp, 4
// 0057ad59  85c0                 test eax, eax
// 0057ad5b  7447                 je 0x57ada4
// 0057ad5d  8d4900               lea ecx, [ecx]
// 0057ad60  8b5624               mov edx, dword ptr [esi + 0x24]
// 0057ad63  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0057ad66  3bc2                 cmp eax, edx
// 0057ad68  731a                 jae 0x57ad84
// 0057ad6a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0057ad6d  8a0c08               mov cl, byte ptr [eax + ecx]
// 0057ad70  40                   inc eax
// 0057ad71  89462c               mov dword ptr [esi + 0x2c], eax
// 0057ad74  80f90a               cmp cl, 0xa
// 0057ad77  7508                 jne 0x57ad81
// 0057ad79  016e30               add dword ptr [esi + 0x30], ebp
// 0057ad7c  896e34               mov dword ptr [esi + 0x34], ebp
// 0057ad7f  eb03                 jmp 0x57ad84
// 0057ad81  016e34               add dword ptr [esi + 0x34], ebp
// 0057ad84  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0057ad87  3bc2                 cmp eax, edx
// 0057ad89  7205                 jb 0x57ad90
// 0057ad8b  83cbff               or ebx, 0xffffffff
// 0057ad8e  eb07                 jmp 0x57ad97
// 0057ad90  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057ad93  0fb61c10             movzx ebx, byte ptr [eax + edx]
// 0057ad97  0fbec3               movsx eax, bl
// 0057ad9a  50                   push eax
// 0057ad9b  ffd7                 call edi
// 0057ad9d  83c404               add esp, 4
// 0057ada0  85c0                 test eax, eax
// 0057ada2  75bc                 jne 0x57ad60
// 0057ada4  55                   push ebp
// 0057ada5  8bce                 mov ecx, esi
// 0057ada7  e8c4fcffff           call 0x57aa70
// 0057adac  807e3900             cmp byte ptr [esi + 0x39], 0
// 0057adb0  7409                 je 0x57adbb
// 0057adb2  83fb2f               cmp ebx, 0x2f
// 0057adb5  7504                 jne 0x57adbb
// 0057adb7  3bc3                 cmp eax, ebx
// 0057adb9  741c                 je 0x57add7
// 0057adbb  8a4e3b               mov cl, byte ptr [esi + 0x3b]
// 0057adbe  84c9                 test cl, cl
// 0057adc0  7407                 je 0x57adc9
// 0057adc2  0fbec9               movsx ecx, cl
// 0057adc5  3bd9                 cmp ebx, ecx
// 0057adc7  740e                 je 0x57add7
// 0057adc9  8a4e3c               mov cl, byte ptr [esi + 0x3c]
// 0057adcc  84c9                 test cl, cl
// 0057adce  7460                 je 0x57ae30
// 0057add0  0fbed1               movsx edx, cl
// 0057add3  3bda                 cmp ebx, edx
// 0057add5  7559                 jne 0x57ae30
// 0057add7  8b5624               mov edx, dword ptr [esi + 0x24]
// 0057adda  8d9b00000000         lea ebx, [ebx]
// 0057ade0  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0057ade3  3bc2                 cmp eax, edx
// 0057ade5  731a                 jae 0x57ae01
// 0057ade7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0057adea  8a0c08               mov cl, byte ptr [eax + ecx]
// 0057aded  40                   inc eax
// 0057adee  89462c               mov dword ptr [esi + 0x2c], eax
// 0057adf1  80f90a               cmp cl, 0xa
// 0057adf4  7508                 jne 0x57adfe
// 0057adf6  016e30               add dword ptr [esi + 0x30], ebp
// 0057adf9  896e34               mov dword ptr [esi + 0x34], ebp
// 0057adfc  eb03                 jmp 0x57ae01
// 0057adfe  016e34               add dword ptr [esi + 0x34], ebp
// 0057ae01  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0057ae04  3bc2                 cmp eax, edx
// 0057ae06  7205                 jb 0x57ae0d
// 0057ae08  83cbff               or ebx, 0xffffffff
// 0057ae0b  eb07                 jmp 0x57ae14
// 0057ae0d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0057ae10  0fb61c08             movzx ebx, byte ptr [eax + ecx]
// 0057ae14  80fb0a               cmp bl, 0xa
// 0057ae17  0f8433ffffff         je 0x57ad50
// 0057ae1d  80fb0d               cmp bl, 0xd
// 0057ae20  0f842affffff         je 0x57ad50
// 0057ae26  83fbff               cmp ebx, -1
// 0057ae29  75b5                 jne 0x57ade0
// 0057ae2b  e920ffffff           jmp 0x57ad50
// 0057ae30  807e3800             cmp byte ptr [esi + 0x38], 0
// 0057ae34  0f84fc000000         je 0x57af36
// 0057ae3a  83fb2f               cmp ebx, 0x2f
// 0057ae3d  0f85f3000000         jne 0x57af36
// 0057ae43  83f82a               cmp eax, 0x2a
// 0057ae46  0f85ea000000         jne 0x57af36
// 0057ae4c  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 0057ae4f  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0057ae52  3bc3                 cmp eax, ebx
// 0057ae54  731a                 jae 0x57ae70
// 0057ae56  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057ae59  8a0c10               mov cl, byte ptr [eax + edx]
// 0057ae5c  40                   inc eax
// 0057ae5d  89462c               mov dword ptr [esi + 0x2c], eax
// 0057ae60  80f90a               cmp cl, 0xa
// 0057ae63  7508                 jne 0x57ae6d
// 0057ae65  016e30               add dword ptr [esi + 0x30], ebp
// 0057ae68  896e34               mov dword ptr [esi + 0x34], ebp
// 0057ae6b  eb03                 jmp 0x57ae70
// 0057ae6d  016e34               add dword ptr [esi + 0x34], ebp
// 0057ae70  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0057ae73  3bc3                 cmp eax, ebx
// 0057ae75  731a                 jae 0x57ae91
// 0057ae77  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0057ae7a  8a0c08               mov cl, byte ptr [eax + ecx]
// 0057ae7d  40                   inc eax
// 0057ae7e  89462c               mov dword ptr [esi + 0x2c], eax
// 0057ae81  80f90a               cmp cl, 0xa
// 0057ae84  7508                 jne 0x57ae8e
// 0057ae86  016e30               add dword ptr [esi + 0x30], ebp
// 0057ae89  896e34               mov dword ptr [esi + 0x34], ebp
// 0057ae8c  eb03                 jmp 0x57ae91
// 0057ae8e  016e34               add dword ptr [esi + 0x34], ebp
// 0057ae91  6a00                 push 0
// 0057ae93  8bce                 mov ecx, esi
// 0057ae95  e8d6fbffff           call 0x57aa70
// 0057ae9a  55                   push ebp
// 0057ae9b  8bce                 mov ecx, esi
// 0057ae9d  8bf8                 mov edi, eax
// 0057ae9f  e8ccfbffff           call 0x57aa70
// 0057aea4  83ff2a               cmp edi, 0x2a
// 0057aea7  7505                 jne 0x57aeae
// 0057aea9  83f82f               cmp eax, 0x2f
// 0057aeac  eb03                 jmp 0x57aeb1
// 0057aeae  83ffff               cmp edi, -1
// 0057aeb1  7423                 je 0x57aed6
// 0057aeb3  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0057aeb6  3bcb                 cmp ecx, ebx
// 0057aeb8  73e0                 jae 0x57ae9a
// 0057aeba  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057aebd  8a1411               mov dl, byte ptr [ecx + edx]
// 0057aec0  41                   inc ecx
// 0057aec1  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0057aec4  80fa0a               cmp dl, 0xa
// 0057aec7  7508                 jne 0x57aed1
// 0057aec9  016e30               add dword ptr [esi + 0x30], ebp
// 0057aecc  896e34               mov dword ptr [esi + 0x34], ebp
// 0057aecf  ebc9                 jmp 0x57ae9a
// 0057aed1  016e34               add dword ptr [esi + 0x34], ebp
// 0057aed4  ebc4                 jmp 0x57ae9a
// 0057aed6  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0057aed9  3bc3                 cmp eax, ebx
// 0057aedb  731a                 jae 0x57aef7
// 0057aedd  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0057aee0  8a0c08               mov cl, byte ptr [eax + ecx]
// 0057aee3  40                   inc eax
// 0057aee4  89462c               mov dword ptr [esi + 0x2c], eax
// 0057aee7  80f90a               cmp cl, 0xa
// 0057aeea  7508                 jne 0x57aef4
// 0057aeec  016e30               add dword ptr [esi + 0x30], ebp
// 0057aeef  896e34               mov dword ptr [esi + 0x34], ebp
// 0057aef2  eb03                 jmp 0x57aef7
// 0057aef4  016e34               add dword ptr [esi + 0x34], ebp
// 0057aef7  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0057aefa  3bc3                 cmp eax, ebx
// 0057aefc  7328                 jae 0x57af26
// 0057aefe  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057af01  8a0c10               mov cl, byte ptr [eax + edx]
// 0057af04  40                   inc eax
// 0057af05  89462c               mov dword ptr [esi + 0x2c], eax
// 0057af08  80f90a               cmp cl, 0xa
// 0057af0b  7516                 jne 0x57af23
// 0057af0d  016e30               add dword ptr [esi + 0x30], ebp
// 0057af10  6a00                 push 0
// 0057af12  8bce                 mov ecx, esi
// 0057af14  896e34               mov dword ptr [esi + 0x34], ebp
// 0057af17  e854fbffff           call 0x57aa70
// 0057af1c  8bd8                 mov ebx, eax
// 0057af1e  e920feffff           jmp 0x57ad43
// 0057af23  016e34               add dword ptr [esi + 0x34], ebp
// 0057af26  6a00                 push 0
// 0057af28  8bce                 mov ecx, esi
// 0057af2a  e841fbffff           call 0x57aa70
// 0057af2f  8bd8                 mov ebx, eax
// 0057af31  e90dfeffff           jmp 0x57ad43
// 0057af36  8b4630               mov eax, dword ptr [esi + 0x30]
// 0057af39  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0057af3c  89442430             mov dword ptr [esp + 0x30], eax
// 0057af40  894c2434             mov dword ptr [esp + 0x34], ecx
// 0057af44  83fbff               cmp ebx, -1
// 0057af47  7539                 jne 0x57af82
// 0057af49  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0057af50  8d542414             lea edx, [esp + 0x14]
// 0057af54  52                   push edx
// 0057af55  8bce                 mov ecx, esi
// 0057af57  ff15b8e48900         call dword ptr [0x89e4b8]
// 0057af5d  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057af61  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057af65  8b542438             mov edx, dword ptr [esp + 0x38]
// 0057af69  89461c               mov dword ptr [esi + 0x1c], eax
// 0057af6c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0057af70  894e20               mov dword ptr [esi + 0x20], ecx
// 0057af73  895624               mov dword ptr [esi + 0x24], edx
// 0057af76  894628               mov dword ptr [esi + 0x28], eax
// 0057af79  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057af7d  e92c080000           jmp 0x57b7ae
// 0057af82  8d43df               lea eax, [ebx - 0x21]
// 0057af85  b902000000           mov ecx, 2
// 0057af8a  83f85d               cmp eax, 0x5d
// 0057af8d  0f8755010000         ja 0x57b0e8
// 0057af93  0fb69004b85700       movzx edx, byte ptr [eax + 0x57b804]
// 0057af9a  ff2495e0b75700       jmp dword ptr [edx*4 + 0x57b7e0]
// 0057afa1  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0057afa5  53                   push ebx
// 0057afa6  8d4c2418             lea ecx, [esp + 0x18]
// 0057afaa  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0057afae  ff1514e58900         call dword ptr [0x89e514]
// 0057afb4  8bce                 mov ecx, esi
// 0057afb6  e885fcffff           call 0x57ac40
// 0057afbb  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0057afc2  8d442414             lea eax, [esp + 0x14]
// 0057afc6  50                   push eax
// 0057afc7  8bce                 mov ecx, esi
// 0057afc9  e8c2f5ffff           call 0x57a590
// 0057afce  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057afd2  e9d7070000           jmp 0x57b7ae
// 0057afd7  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0057afdb  53                   push ebx
// 0057afdc  8d4c2418             lea ecx, [esp + 0x18]
// 0057afe0  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0057afe4  ff1514e58900         call dword ptr [0x89e514]
// 0057afea  8bce                 mov ecx, esi
// 0057afec  e84ffcffff           call 0x57ac40
// 0057aff1  8bd8                 mov ebx, eax
// 0057aff3  83fb2d               cmp ebx, 0x2d
// 0057aff6  745b                 je 0x57b053
// 0057aff8  83fb3c               cmp ebx, 0x3c
// 0057affb  7e05                 jle 0x57b002
// 0057affd  83fb3e               cmp ebx, 0x3e
// 0057b000  7e51                 jle 0x57b053
// 0057b002  807e3d00             cmp byte ptr [esi + 0x3d], 0
// 0057b006  742f                 je 0x57b037
// 0057b008  53                   push ebx
// 0057b009  e842f5ffff           call 0x57a550
// 0057b00e  83c404               add esp, 4
// 0057b011  84c0                 test al, al
// 0057b013  0f85cf000000         jne 0x57b0e8
// 0057b019  83fb2e               cmp ebx, 0x2e
// 0057b01c  7519                 jne 0x57b037
// 0057b01e  55                   push ebp
// 0057b01f  8bce                 mov ecx, esi
// 0057b021  e84afaffff           call 0x57aa70
// 0057b026  50                   push eax
// 0057b027  e824f5ffff           call 0x57a550
// 0057b02c  83c404               add esp, 4
// 0057b02f  84c0                 test al, al
// 0057b031  0f85b1000000         jne 0x57b0e8
// 0057b037  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0057b03e  8d4c2414             lea ecx, [esp + 0x14]
// 0057b042  51                   push ecx
// 0057b043  8bce                 mov ecx, esi
// 0057b045  e846f5ffff           call 0x57a590
// 0057b04a  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057b04e  e95b070000           jmp 0x57b7ae
// 0057b053  53                   push ebx
// 0057b054  8d4c2418             lea ecx, [esp + 0x18]
// 0057b058  ff1558e58900         call dword ptr [0x89e558]
// 0057b05e  8bce                 mov ecx, esi
// 0057b060  e8cbf9ffff           call 0x57aa30
// 0057b065  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0057b06c  8d542414             lea edx, [esp + 0x14]
// 0057b070  52                   push edx
// 0057b071  8bce                 mov ecx, esi
// 0057b073  e818f5ffff           call 0x57a590
// 0057b078  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057b07c  e92d070000           jmp 0x57b7ae
// 0057b081  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0057b085  53                   push ebx
// 0057b086  8d4c2418             lea ecx, [esp + 0x18]
// 0057b08a  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0057b08e  ff1514e58900         call dword ptr [0x89e514]
// 0057b094  8bce                 mov ecx, esi
// 0057b096  e8a5fbffff           call 0x57ac40
// 0057b09b  8bd8                 mov ebx, eax
// 0057b09d  83fb2b               cmp ebx, 0x2b
// 0057b0a0  0f84a1000000         je 0x57b147
// 0057b0a6  83fb3d               cmp ebx, 0x3d
// 0057b0a9  0f8498000000         je 0x57b147
// 0057b0af  807e3d00             cmp byte ptr [esi + 0x3d], 0
// 0057b0b3  0f8402ffffff         je 0x57afbb
// 0057b0b9  53                   push ebx
// 0057b0ba  e891f4ffff           call 0x57a550
// 0057b0bf  83c404               add esp, 4
// 0057b0c2  84c0                 test al, al
// 0057b0c4  7522                 jne 0x57b0e8
// 0057b0c6  83fb2e               cmp ebx, 0x2e
// 0057b0c9  0f85ecfeffff         jne 0x57afbb
// 0057b0cf  55                   push ebp
// 0057b0d0  8bce                 mov ecx, esi
// 0057b0d2  e899f9ffff           call 0x57aa70
// 0057b0d7  50                   push eax
// 0057b0d8  e873f4ffff           call 0x57a550
// 0057b0dd  83c404               add esp, 4
// 0057b0e0  84c0                 test al, al
// 0057b0e2  0f84d3feffff         je 0x57afbb
// 0057b0e8  8b2d44e88900         mov ebp, dword ptr [0x89e844]
// 0057b0ee  0fbefb               movsx edi, bl
// 0057b0f1  57                   push edi
// 0057b0f2  ffd5                 call ebp
// 0057b0f4  83c404               add esp, 4
// 0057b0f7  85c0                 test eax, eax
// 0057b0f9  0f853a030000         jne 0x57b439
// 0057b0ff  83fb2e               cmp ebx, 0x2e
// 0057b102  0f8431030000         je 0x57b439
// 0057b108  53                   push ebx
// 0057b109  e862f4ffff           call 0x57a570
// 0057b10e  83c404               add esp, 4
// 0057b111  84c0                 test al, al
// 0057b113  0f85bd020000         jne 0x57b3d6
// 0057b119  83fb5f               cmp ebx, 0x5f
// 0057b11c  0f84b4020000         je 0x57b3d6
// 0057b122  83fb22               cmp ebx, 0x22
// 0057b125  0f8530020000         jne 0x57b35b
// 0057b12b  8bce                 mov ecx, esi
// 0057b12d  e8fef8ffff           call 0x57aa30
// 0057b132  8d442414             lea eax, [esp + 0x14]
// 0057b136  50                   push eax
// 0057b137  53                   push ebx
// 0057b138  e863f9ffff           call 0x57aaa0
// 0057b13d  8d4c2414             lea ecx, [esp + 0x14]
// 0057b141  51                   push ecx
// 0057b142  e951060000           jmp 0x57b798
// 0057b147  53                   push ebx
// 0057b148  8d4c2418             lea ecx, [esp + 0x18]
// 0057b14c  ff1558e58900         call dword ptr [0x89e558]
// 0057b152  8bce                 mov ecx, esi
// 0057b154  e8d7f8ffff           call 0x57aa30
// 0057b159  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0057b160  8d4c2414             lea ecx, [esp + 0x14]
// 0057b164  51                   push ecx
// 0057b165  8bce                 mov ecx, esi
// 0057b167  e824f4ffff           call 0x57a590
// 0057b16c  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057b170  e939060000           jmp 0x57b7ae
// 0057b175  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0057b179  53                   push ebx
// 0057b17a  8d4c2418             lea ecx, [esp + 0x18]
// 0057b17e  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0057b182  ff1514e58900         call dword ptr [0x89e514]
// 0057b188  8bce                 mov ecx, esi
// 0057b18a  e8b1faffff           call 0x57ac40
// 0057b18f  83f83a               cmp eax, 0x3a
// 0057b192  0f8523feffff         jne 0x57afbb
// 0057b198  50                   push eax
// 0057b199  8d4c2418             lea ecx, [esp + 0x18]
// 0057b19d  ff1558e58900         call dword ptr [0x89e558]
// 0057b1a3  8bce                 mov ecx, esi
// 0057b1a5  e886f8ffff           call 0x57aa30
// 0057b1aa  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0057b1b1  8d542414             lea edx, [esp + 0x14]
// 0057b1b5  52                   push edx
// 0057b1b6  8bce                 mov ecx, esi
// 0057b1b8  e8d3f3ffff           call 0x57a590
// 0057b1bd  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057b1c1  e9e8050000           jmp 0x57b7ae
// 0057b1c6  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0057b1ca  53                   push ebx
// 0057b1cb  8d4c2418             lea ecx, [esp + 0x18]
// 0057b1cf  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0057b1d3  ff1514e58900         call dword ptr [0x89e514]
// 0057b1d9  8bce                 mov ecx, esi
// 0057b1db  e860faffff           call 0x57ac40
// 0057b1e0  83f83d               cmp eax, 0x3d
// 0057b1e3  75c5                 jne 0x57b1aa
// 0057b1e5  50                   push eax
// 0057b1e6  8d4c2418             lea ecx, [esp + 0x18]
// 0057b1ea  ff1558e58900         call dword ptr [0x89e558]
// 0057b1f0  8bce                 mov ecx, esi
// 0057b1f2  e839f8ffff           call 0x57aa30
// 0057b1f7  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0057b1fe  8d4c2414             lea ecx, [esp + 0x14]
// 0057b202  51                   push ecx
// 0057b203  8bce                 mov ecx, esi
// 0057b205  e886f3ffff           call 0x57a590
// 0057b20a  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057b20e  e99b050000           jmp 0x57b7ae
// 0057b213  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0057b217  53                   push ebx
// 0057b218  8d4c2418             lea ecx, [esp + 0x18]
// 0057b21c  8bfb                 mov edi, ebx
// 0057b21e  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0057b222  ff1514e58900         call dword ptr [0x89e514]
// 0057b228  8bce                 mov ecx, esi
// 0057b22a  e811faffff           call 0x57ac40
// 0057b22f  83f83d               cmp eax, 0x3d
// 0057b232  7408                 je 0x57b23c
// 0057b234  3bf8                 cmp edi, eax
// 0057b236  0f857ffdffff         jne 0x57afbb
// 0057b23c  50                   push eax
// 0057b23d  8d4c2418             lea ecx, [esp + 0x18]
// 0057b241  ff1558e58900         call dword ptr [0x89e558]
// 0057b247  8bce                 mov ecx, esi
// 0057b249  e8e2f7ffff           call 0x57aa30
// 0057b24e  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0057b255  8d4c2414             lea ecx, [esp + 0x14]
// 0057b259  51                   push ecx
// 0057b25a  8bce                 mov ecx, esi
// 0057b25c  e82ff3ffff           call 0x57a590
// 0057b261  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057b265  e944050000           jmp 0x57b7ae
// 0057b26a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0057b26e  53                   push ebx
// 0057b26f  8d4c2418             lea ecx, [esp + 0x18]
// 0057b273  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0057b277  ff1514e58900         call dword ptr [0x89e514]
// 0057b27d  8bce                 mov ecx, esi
// 0057b27f  e8bcf9ffff           call 0x57ac40
// 0057b284  8a4e3b               mov cl, byte ptr [esi + 0x3b]
// 0057b287  84c9                 test cl, cl
// 0057b289  7407                 je 0x57b292
// 0057b28b  0fbed1               movsx edx, cl
// 0057b28e  3bc2                 cmp eax, edx
// 0057b290  7416                 je 0x57b2a8
// 0057b292  8a4e3c               mov cl, byte ptr [esi + 0x3c]
// 0057b295  84c9                 test cl, cl
// 0057b297  0f841efdffff         je 0x57afbb
// 0057b29d  0fbec9               movsx ecx, cl
// 0057b2a0  3bc1                 cmp eax, ecx
// 0057b2a2  0f8513fdffff         jne 0x57afbb
// 0057b2a8  50                   push eax
// 0057b2a9  8d4c2418             lea ecx, [esp + 0x18]
// 0057b2ad  ff1514e58900         call dword ptr [0x89e514]
// 0057b2b3  8bce                 mov ecx, esi
// 0057b2b5  e876f7ffff           call 0x57aa30
// 0057b2ba  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0057b2c1  8d542414             lea edx, [esp + 0x14]
// 0057b2c5  52                   push edx
// 0057b2c6  8bce                 mov ecx, esi
// 0057b2c8  e8c3f2ffff           call 0x57a590
// 0057b2cd  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057b2d1  e9d8040000           jmp 0x57b7ae
// 0057b2d6  55                   push ebp
// 0057b2d7  8bce                 mov ecx, esi
// 0057b2d9  e892f7ffff           call 0x57aa70
// 0057b2de  50                   push eax
// 0057b2df  e86cf2ffff           call 0x57a550
// 0057b2e4  83c404               add esp, 4
// 0057b2e7  84c0                 test al, al
// 0057b2e9  0f85f9fdffff         jne 0x57b0e8
// 0057b2ef  53                   push ebx
// 0057b2f0  8d4c2418             lea ecx, [esp + 0x18]
// 0057b2f4  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0057b2f8  c744244002000000     mov dword ptr [esp + 0x40], 2
// 0057b300  ff1514e58900         call dword ptr [0x89e514]
// 0057b306  8bce                 mov ecx, esi
// 0057b308  e833f9ffff           call 0x57ac40
// 0057b30d  83f82e               cmp eax, 0x2e
// 0057b310  0f8594feffff         jne 0x57b1aa
// 0057b316  50                   push eax
// 0057b317  8d4c2418             lea ecx, [esp + 0x18]
// 0057b31b  ff1558e58900         call dword ptr [0x89e558]
// 0057b321  8bce                 mov ecx, esi
// 0057b323  e818f9ffff           call 0x57ac40
// 0057b328  83f82e               cmp eax, 0x2e
// 0057b32b  7512                 jne 0x57b33f
// 0057b32d  50                   push eax
// 0057b32e  8d4c2418             lea ecx, [esp + 0x18]
// 0057b332  ff1558e58900         call dword ptr [0x89e558]
// 0057b338  8bce                 mov ecx, esi
// 0057b33a  e8f1f6ffff           call 0x57aa30
// 0057b33f  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0057b346  8d4c2414             lea ecx, [esp + 0x14]
// 0057b34a  51                   push ecx
// 0057b34b  8bce                 mov ecx, esi
// 0057b34d  e83ef2ffff           call 0x57a590
// 0057b352  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057b356  e953040000           jmp 0x57b7ae
// 0057b35b  83fb27               cmp ebx, 0x27
// 0057b35e  753e                 jne 0x57b39e
// 0057b360  8bce                 mov ecx, esi
// 0057b362  e8c9f6ffff           call 0x57aa30
// 0057b367  807e3e00             cmp byte ptr [esi + 0x3e], 0
// 0057b36b  7410                 je 0x57b37d
// 0057b36d  8d542414             lea edx, [esp + 0x14]
// 0057b371  52                   push edx
// 0057b372  53                   push ebx
// 0057b373  e828f7ffff           call 0x57aaa0
// 0057b378  e916040000           jmp 0x57b793
// 0057b37d  6a27                 push 0x27
// 0057b37f  8d4c2418             lea ecx, [esp + 0x18]
// 0057b383  ff1514e58900         call dword ptr [0x89e514]
// 0057b389  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0057b391  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 0057b399  e9f5030000           jmp 0x57b793
// 0057b39e  83fbff               cmp ebx, -1
// 0057b3a1  7529                 jne 0x57b3cc
// 0057b3a3  6816d28a00           push 0x8ad216
// 0057b3a8  8d4c2418             lea ecx, [esp + 0x18]
// 0057b3ac  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 0057b3b4  c744244005000000     mov dword ptr [esp + 0x40], 5
// 0057b3bc  ff15a8e48900         call dword ptr [0x89e4a8]
// 0057b3c2  8d4c2414             lea ecx, [esp + 0x14]
// 0057b3c6  51                   push ecx
// 0057b3c7  e9cc030000           jmp 0x57b798
// 0057b3cc  8d542414             lea edx, [esp + 0x14]
// 0057b3d0  52                   push edx
// 0057b3d1  e9c2030000           jmp 0x57b798
// 0057b3d6  6816d28a00           push 0x8ad216
// 0057b3db  8d4c2418             lea ecx, [esp + 0x18]
// 0057b3df  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 0057b3e7  c744244002000000     mov dword ptr [esp + 0x40], 2
// 0057b3ef  ff15a8e48900         call dword ptr [0x89e4a8]
// 0057b3f5  8b2dcce88900         mov ebp, dword ptr [0x89e8cc]
// 0057b3fb  eb03                 jmp 0x57b400
// 0057b3fd  8d4900               lea ecx, [ecx]
// 0057b400  53                   push ebx
// 0057b401  8d4c2418             lea ecx, [esp + 0x18]
// 0057b405  ff1558e58900         call dword ptr [0x89e558]
// 0057b40b  8bce                 mov ecx, esi
// 0057b40d  e82ef8ffff           call 0x57ac40
// 0057b412  8bd8                 mov ebx, eax
// 0057b414  0fbefb               movsx edi, bl
// 0057b417  57                   push edi
// 0057b418  ffd5                 call ebp
// 0057b41a  83c404               add esp, 4
// 0057b41d  85c0                 test eax, eax
// 0057b41f  75df                 jne 0x57b400
// 0057b421  57                   push edi
// 0057b422  ff1544e88900         call dword ptr [0x89e844]
// 0057b428  83c404               add esp, 4
// 0057b42b  85c0                 test eax, eax
// 0057b42d  75d1                 jne 0x57b400
// 0057b42f  83fb5f               cmp ebx, 0x5f
// 0057b432  74cc                 je 0x57b400
// 0057b434  e95a030000           jmp 0x57b793
// 0057b439  8d4c2414             lea ecx, [esp + 0x14]
// 0057b43d  6824c08c00           push 0x8cc024
// 0057b442  51                   push ecx
// 0057b443  ff152ce48900         call dword ptr [0x89e42c]
// 0057b449  83c408               add esp, 8
// 0057b44c  84c0                 test al, al
// 0057b44e  740f                 je 0x57b45f
// 0057b450  6816d28a00           push 0x8ad216
// 0057b455  8d4c2418             lea ecx, [esp + 0x18]
// 0057b459  ff15a8e48900         call dword ptr [0x89e4a8]
// 0057b45f  c744243802000000     mov dword ptr [esp + 0x38], 2
// 0057b467  83fb2e               cmp ebx, 0x2e
// 0057b46a  7554                 jne 0x57b4c0
// 0057b46c  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 0057b474  57                   push edi
// 0057b475  ffd5                 call ebp
// 0057b477  83c404               add esp, 4
// 0057b47a  85c0                 test eax, eax
// 0057b47c  0f84db000000         je 0x57b55d
// 0057b482  bf01000000           mov edi, 1
// 0057b487  eb07                 jmp 0x57b490
// 0057b489  8da42400000000       lea esp, [esp]
// 0057b490  53                   push ebx
// 0057b491  8d4c2418             lea ecx, [esp + 0x18]
// 0057b495  ff1558e58900         call dword ptr [0x89e558]
// 0057b49b  8b5624               mov edx, dword ptr [esi + 0x24]
// 0057b49e  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0057b4a1  3bc2                 cmp eax, edx
// 0057b4a3  0f8390000000         jae 0x57b539
// 0057b4a9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0057b4ac  8a0c08               mov cl, byte ptr [eax + ecx]
// 0057b4af  40                   inc eax
// 0057b4b0  89462c               mov dword ptr [esi + 0x2c], eax
// 0057b4b3  80f90a               cmp cl, 0xa
// 0057b4b6  757e                 jne 0x57b536
// 0057b4b8  017e30               add dword ptr [esi + 0x30], edi
// 0057b4bb  897e34               mov dword ptr [esi + 0x34], edi
// 0057b4be  eb79                 jmp 0x57b539
// 0057b4c0  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 0057b4c8  83fb30               cmp ebx, 0x30
// 0057b4cb  75a7                 jne 0x57b474
// 0057b4cd  6a01                 push 1
// 0057b4cf  8bce                 mov ecx, esi
// 0057b4d1  e89af5ffff           call 0x57aa70
// 0057b4d6  83f878               cmp eax, 0x78
// 0057b4d9  7599                 jne 0x57b474
// 0057b4db  6820c08c00           push 0x8cc020
// 0057b4e0  8d4c2418             lea ecx, [esp + 0x18]
// 0057b4e4  ff15a4e48900         call dword ptr [0x89e4a4]
// 0057b4ea  8bce                 mov ecx, esi
// 0057b4ec  e83ff5ffff           call 0x57aa30
// 0057b4f1  e83af5ffff           call 0x57aa30
// 0057b4f6  6a00                 push 0
// 0057b4f8  e873f5ffff           call 0x57aa70
// 0057b4fd  8bd8                 mov ebx, eax
// 0057b4ff  0fbed3               movsx edx, bl
// 0057b502  52                   push edx
// 0057b503  ffd5                 call ebp
// 0057b505  83c404               add esp, 4
// 0057b508  85c0                 test eax, eax
// 0057b50a  7516                 jne 0x57b522
// 0057b50c  83fb41               cmp ebx, 0x41
// 0057b50f  7c05                 jl 0x57b516
// 0057b511  83fb46               cmp ebx, 0x46
// 0057b514  7e0c                 jle 0x57b522
// 0057b516  8d439f               lea eax, [ebx - 0x61]
// 0057b519  83f805               cmp eax, 5
// 0057b51c  0f8771020000         ja 0x57b793
// 0057b522  53                   push ebx
// 0057b523  8d4c2418             lea ecx, [esp + 0x18]
// 0057b527  ff1558e58900         call dword ptr [0x89e558]
// 0057b52d  8bce                 mov ecx, esi
// 0057b52f  e80cf7ffff           call 0x57ac40
// 0057b534  ebc7                 jmp 0x57b4fd
// 0057b536  017e34               add dword ptr [esi + 0x34], edi
// 0057b539  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0057b53c  3bc2                 cmp eax, edx
// 0057b53e  7205                 jb 0x57b545
// 0057b540  83cbff               or ebx, 0xffffffff
// 0057b543  eb07                 jmp 0x57b54c
// 0057b545  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057b548  0fb61c10             movzx ebx, byte ptr [eax + edx]
// 0057b54c  0fbec3               movsx eax, bl
// 0057b54f  50                   push eax
// 0057b550  ffd5                 call ebp
// 0057b552  83c404               add esp, 4
// 0057b555  85c0                 test eax, eax
// 0057b557  0f8533ffffff         jne 0x57b490
// 0057b55d  83fb2e               cmp ebx, 0x2e
// 0057b560  0f85bb010000         jne 0x57b721
// 0057b566  53                   push ebx
// 0057b567  8d4c2418             lea ecx, [esp + 0x18]
// 0057b56b  c744244004000000     mov dword ptr [esp + 0x40], 4
// 0057b573  ff1558e58900         call dword ptr [0x89e558]
// 0057b579  8bce                 mov ecx, esi
// 0057b57b  e8c0f6ffff           call 0x57ac40
// 0057b580  807e6000             cmp byte ptr [esi + 0x60], 0
// 0057b584  8bd8                 mov ebx, eax
// 0057b586  0f8464010000         je 0x57b6f0
// 0057b58c  83fb23               cmp ebx, 0x23
// 0057b58f  0f855b010000         jne 0x57b6f0
// 0057b595  8bce                 mov ecx, esi
// 0057b597  e8a4f6ffff           call 0x57ac40
// 0057b59c  83f849               cmp eax, 0x49
// 0057b59f  743d                 je 0x57b5de
// 0057b5a1  68e8bf8c00           push 0x8cbfe8
// 0057b5a6  8d4c2444             lea ecx, [esp + 0x44]
// 0057b5aa  ff15b4e48900         call dword ptr [0x89e4b4]
// 0057b5b0  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0057b5b3  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057b5b7  51                   push ecx
// 0057b5b8  52                   push edx
// 0057b5b9  8d442448             lea eax, [esp + 0x48]
// 0057b5bd  50                   push eax
// 0057b5be  8d4c2468             lea ecx, [esp + 0x68]
// 0057b5c2  c68424b400000002     mov byte ptr [esp + 0xb4], 2
// 0057b5ca  e841f2ffff           call 0x57a810
// 0057b5cf  68d8609900           push 0x9960d8
// 0057b5d4  8d4c2460             lea ecx, [esp + 0x60]
// 0057b5d8  51                   push ecx
// 0057b5d9  e86ce41900           call 0x719a4a
// 0057b5de  8bce                 mov ecx, esi
// 0057b5e0  e85bf6ffff           call 0x57ac40
// 0057b5e5  83f84e               cmp eax, 0x4e
// 0057b5e8  743d                 je 0x57b627
// 0057b5ea  68e8bf8c00           push 0x8cbfe8
// 0057b5ef  8d4c2444             lea ecx, [esp + 0x44]
// 0057b5f3  ff15b4e48900         call dword ptr [0x89e4b4]
// 0057b5f9  8b5634               mov edx, dword ptr [esi + 0x34]
// 0057b5fc  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057b600  52                   push edx
// 0057b601  50                   push eax
// 0057b602  8d4c2448             lea ecx, [esp + 0x48]
// 0057b606  51                   push ecx
// 0057b607  8d4c2468             lea ecx, [esp + 0x68]
// 0057b60b  c68424b400000003     mov byte ptr [esp + 0xb4], 3
// 0057b613  e8f8f1ffff           call 0x57a810
// 0057b618  68d8609900           push 0x9960d8
// 0057b61d  8d542460             lea edx, [esp + 0x60]
// 0057b621  52                   push edx
// 0057b622  e823e41900           call 0x719a4a
// 0057b627  68e4bf8c00           push 0x8cbfe4
// 0057b62c  8d4c2418             lea ecx, [esp + 0x18]
// 0057b630  ff15a4e48900         call dword ptr [0x89e4a4]
// 0057b636  8bce                 mov ecx, esi
// 0057b638  e803f6ffff           call 0x57ac40
// 0057b63d  83f846               cmp eax, 0x46
// 0057b640  7442                 je 0x57b684
// 0057b642  83f844               cmp eax, 0x44
// 0057b645  743d                 je 0x57b684
// 0057b647  68e8bf8c00           push 0x8cbfe8
// 0057b64c  8d4c2444             lea ecx, [esp + 0x44]
// 0057b650  ff15b4e48900         call dword ptr [0x89e4b4]
// 0057b656  8b4634               mov eax, dword ptr [esi + 0x34]
// 0057b659  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057b65d  50                   push eax
// 0057b65e  51                   push ecx
// 0057b65f  8d542448             lea edx, [esp + 0x48]
// 0057b663  52                   push edx
// 0057b664  8d4c2468             lea ecx, [esp + 0x68]
// 0057b668  c68424b400000004     mov byte ptr [esp + 0xb4], 4
// 0057b670  e89bf1ffff           call 0x57a810
// 0057b675  68d8609900           push 0x9960d8
// 0057b67a  8d442460             lea eax, [esp + 0x60]
// 0057b67e  50                   push eax
// 0057b67f  e8c6e31900           call 0x719a4a
// 0057b684  50                   push eax
// 0057b685  8d4c2418             lea ecx, [esp + 0x18]
// 0057b689  ff1558e58900         call dword ptr [0x89e558]
// 0057b68f  33ff                 xor edi, edi
// 0057b691  8bce                 mov ecx, esi
// 0057b693  e8a8f5ffff           call 0x57ac40
// 0057b698  83f830               cmp eax, 0x30
// 0057b69b  7516                 jne 0x57b6b3
// 0057b69d  50                   push eax
// 0057b69e  8d4c2418             lea ecx, [esp + 0x18]
// 0057b6a2  ff1558e58900         call dword ptr [0x89e558]
// 0057b6a8  47                   inc edi
// 0057b6a9  83ff02               cmp edi, 2
// 0057b6ac  7ce3                 jl 0x57b691
// 0057b6ae  e9e0000000           jmp 0x57b793
// 0057b6b3  68acbf8c00           push 0x8cbfac
// 0057b6b8  8d4c2444             lea ecx, [esp + 0x44]
// 0057b6bc  ff15b4e48900         call dword ptr [0x89e4b4]
// 0057b6c2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0057b6c5  8b542430             mov edx, dword ptr [esp + 0x30]
// 0057b6c9  51                   push ecx
// 0057b6ca  52                   push edx
// 0057b6cb  8d442448             lea eax, [esp + 0x48]
// 0057b6cf  50                   push eax
// 0057b6d0  8d4c2468             lea ecx, [esp + 0x68]
// 0057b6d4  c68424b400000005     mov byte ptr [esp + 0xb4], 5
// 0057b6dc  e82ff1ffff           call 0x57a810
// 0057b6e1  68d8609900           push 0x9960d8
// 0057b6e6  8d4c2460             lea ecx, [esp + 0x60]
// 0057b6ea  51                   push ecx
// 0057b6eb  e85ae31900           call 0x719a4a
// 0057b6f0  0fbed3               movsx edx, bl
// 0057b6f3  52                   push edx
// 0057b6f4  ffd5                 call ebp
// 0057b6f6  83c404               add esp, 4
// 0057b6f9  85c0                 test eax, eax
// 0057b6fb  7424                 je 0x57b721
// 0057b6fd  8d4900               lea ecx, [ecx]
// 0057b700  53                   push ebx
// 0057b701  8d4c2418             lea ecx, [esp + 0x18]
// 0057b705  ff1558e58900         call dword ptr [0x89e558]
// 0057b70b  8bce                 mov ecx, esi
// 0057b70d  e82ef5ffff           call 0x57ac40
// 0057b712  8bd8                 mov ebx, eax
// 0057b714  0fbec3               movsx eax, bl
// 0057b717  50                   push eax
// 0057b718  ffd5                 call ebp
// 0057b71a  83c404               add esp, 4
// 0057b71d  85c0                 test eax, eax
// 0057b71f  75df                 jne 0x57b700
// 0057b721  83fb65               cmp ebx, 0x65
// 0057b724  7405                 je 0x57b72b
// 0057b726  83fb45               cmp ebx, 0x45
// 0057b729  7568                 jne 0x57b793
// 0057b72b  53                   push ebx
// 0057b72c  8d4c2418             lea ecx, [esp + 0x18]
// 0057b730  c744244004000000     mov dword ptr [esp + 0x40], 4
// 0057b738  ff1558e58900         call dword ptr [0x89e558]
// 0057b73e  8bce                 mov ecx, esi
// 0057b740  e8fbf4ffff           call 0x57ac40
// 0057b745  8bd8                 mov ebx, eax
// 0057b747  83fb2d               cmp ebx, 0x2d
// 0057b74a  7405                 je 0x57b751
// 0057b74c  83fb2b               cmp ebx, 0x2b
// 0057b74f  7514                 jne 0x57b765
// 0057b751  53                   push ebx
// 0057b752  8d4c2418             lea ecx, [esp + 0x18]
// 0057b756  ff1558e58900         call dword ptr [0x89e558]
// 0057b75c  8bce                 mov ecx, esi
// 0057b75e  e8ddf4ffff           call 0x57ac40
// 0057b763  8bd8                 mov ebx, eax
// 0057b765  0fbecb               movsx ecx, bl
// 0057b768  51                   push ecx
// 0057b769  ffd5                 call ebp
// 0057b76b  83c404               add esp, 4
// 0057b76e  85c0                 test eax, eax
// 0057b770  7421                 je 0x57b793
// 0057b772  53                   push ebx
// 0057b773  8d4c2418             lea ecx, [esp + 0x18]
// 0057b777  ff1558e58900         call dword ptr [0x89e558]
// 0057b77d  8bce                 mov ecx, esi
// 0057b77f  e8bcf4ffff           call 0x57ac40
// 0057b784  8bd8                 mov ebx, eax
// 0057b786  0fbed3               movsx edx, bl
// 0057b789  52                   push edx
// 0057b78a  ffd5                 call ebp
// 0057b78c  83c404               add esp, 4
// 0057b78f  85c0                 test eax, eax
// 0057b791  75df                 jne 0x57b772
// 0057b793  8d442414             lea eax, [esp + 0x14]
// 0057b797  50                   push eax
// 0057b798  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 0057b79f  8bce                 mov ecx, esi
// 0057b7a1  e8eaedffff           call 0x57a590
// 0057b7a6  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0057b7ae  8d4c2414             lea ecx, [esp + 0x14]
// 0057b7b2  c68424a800000000     mov byte ptr [esp + 0xa8], 0
// 0057b7ba  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057b7c0  5f                   pop edi
// 0057b7c1  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0057b7c8  8bc6                 mov eax, esi
// 0057b7ca  5e                   pop esi
// 0057b7cb  5d                   pop ebp
// 0057b7cc  5b                   pop ebx
// 0057b7cd  64890d00000000       mov dword ptr fs:[0], ecx
// 0057b7d4  81c49c000000         add esp, 0x9c
// 0057b7da  c20400               ret 4
// 0057b7dd  8d4900               lea ecx, [ecx]
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?nextToken@TextInput@G3D@@AAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
