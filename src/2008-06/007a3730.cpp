// from server: 100% by auto
// roc 2008-06 007a3730  unit: CXTIconHandle  size: 1262 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a3730
//
// 007a3730  81ec8c000000         sub esp, 0x8c
// 007a3736  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 007a373b  33c4                 xor eax, esp
// 007a373d  89842488000000       mov dword ptr [esp + 0x88], eax
// 007a3744  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 007a374b  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 007a3752  8944240c             mov dword ptr [esp + 0xc], eax
// 007a3756  33c0                 xor eax, eax
// 007a3758  0fb7c8               movzx ecx, ax
// 007a375b  53                   push ebx
// 007a375c  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 007a3763  8bc1                 mov eax, ecx
// 007a3765  c1e110               shl ecx, 0x10
// 007a3768  0bc1                 or eax, ecx
// 007a376a  55                   push ebp
// 007a376b  8bac24a0000000       mov ebp, dword ptr [esp + 0xa0]
// 007a3772  56                   push esi
// 007a3773  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 007a377a  89442454             mov dword ptr [esp + 0x54], eax
// 007a377e  89442458             mov dword ptr [esp + 0x58], eax
// 007a3782  8944245c             mov dword ptr [esp + 0x5c], eax
// 007a3786  89442460             mov dword ptr [esp + 0x60], eax
// 007a378a  89442464             mov dword ptr [esp + 0x64], eax
// 007a378e  89442468             mov dword ptr [esp + 0x68], eax
// 007a3792  8944246c             mov dword ptr [esp + 0x6c], eax
// 007a3796  89442470             mov dword ptr [esp + 0x70], eax
// 007a379a  33c0                 xor eax, eax
// 007a379c  895c2444             mov dword ptr [esp + 0x44], ebx
// 007a37a0  89742424             mov dword ptr [esp + 0x24], esi
// 007a37a4  89542448             mov dword ptr [esp + 0x48], edx
// 007a37a8  85ed                 test ebp, ebp
// 007a37aa  7616                 jbe 0x7a37c2
// 007a37ac  8d642400             lea esp, [esp]
// 007a37b0  0fb70c43             movzx ecx, word ptr [ebx + eax*2]
// 007a37b4  66ff444c54           inc word ptr [esp + ecx*2 + 0x54]
// 007a37b9  8d4c4c54             lea ecx, [esp + ecx*2 + 0x54]
// 007a37bd  40                   inc eax
// 007a37be  3bc5                 cmp eax, ebp
// 007a37c0  72ee                 jb 0x7a37b0
// 007a37c2  8b02                 mov eax, dword ptr [edx]
// 007a37c4  89442410             mov dword ptr [esp + 0x10], eax
// 007a37c8  b90f000000           mov ecx, 0xf
// 007a37cd  8d4900               lea ecx, [ecx]
// 007a37d0  66837c4c5400         cmp word ptr [esp + ecx*2 + 0x54], 0
// 007a37d6  7506                 jne 0x7a37de
// 007a37d8  49                   dec ecx
// 007a37d9  83f901               cmp ecx, 1
// 007a37dc  73f2                 jae 0x7a37d0
// 007a37de  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007a37e2  3bc1                 cmp eax, ecx
// 007a37e4  7606                 jbe 0x7a37ec
// 007a37e6  894c2410             mov dword ptr [esp + 0x10], ecx
// 007a37ea  8bc1                 mov eax, ecx
// 007a37ec  85c9                 test ecx, ecx
// 007a37ee  7543                 jne 0x7a3833
// 007a37f0  8b0e                 mov ecx, dword ptr [esi]
// 007a37f2  33c0                 xor eax, eax
// 007a37f4  668944240e           mov word ptr [esp + 0xe], ax
// 007a37f9  c644240c40           mov byte ptr [esp + 0xc], 0x40
// 007a37fe  c644240d01           mov byte ptr [esp + 0xd], 1
// 007a3803  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007a3807  8901                 mov dword ptr [ecx], eax
// 007a3809  830604               add dword ptr [esi], 4
// 007a380c  8b0e                 mov ecx, dword ptr [esi]
// 007a380e  8901                 mov dword ptr [ecx], eax
// 007a3810  830604               add dword ptr [esi], 4
// 007a3813  5e                   pop esi
// 007a3814  5d                   pop ebp
// 007a3815  c70201000000         mov dword ptr [edx], 1
// 007a381b  33c0                 xor eax, eax
// 007a381d  5b                   pop ebx
// 007a381e  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007a3825  33cc                 xor ecx, esp
// 007a3827  e8a6e5efff           call 0x6a1dd2
// 007a382c  81c48c000000         add esp, 0x8c
// 007a3832  c3                   ret 
// 007a3833  be01000000           mov esi, 1
// 007a3838  66837c745400         cmp word ptr [esp + esi*2 + 0x54], 0
// 007a383e  753a                 jne 0x7a387a
// 007a3840  66837c745600         cmp word ptr [esp + esi*2 + 0x56], 0
// 007a3846  7522                 jne 0x7a386a
// 007a3848  66837c745800         cmp word ptr [esp + esi*2 + 0x58], 0
// 007a384e  751d                 jne 0x7a386d
// 007a3850  66837c745a00         cmp word ptr [esp + esi*2 + 0x5a], 0
// 007a3856  751a                 jne 0x7a3872
// 007a3858  66837c745c00         cmp word ptr [esp + esi*2 + 0x5c], 0
// 007a385e  7517                 jne 0x7a3877
// 007a3860  83c605               add esi, 5
// 007a3863  83fe0f               cmp esi, 0xf
// 007a3866  76d0                 jbe 0x7a3838
// 007a3868  eb10                 jmp 0x7a387a
// 007a386a  46                   inc esi
// 007a386b  eb0d                 jmp 0x7a387a
// 007a386d  83c602               add esi, 2
// 007a3870  eb08                 jmp 0x7a387a
// 007a3872  83c603               add esi, 3
// 007a3875  eb03                 jmp 0x7a387a
// 007a3877  83c604               add esi, 4
// 007a387a  3bc6                 cmp eax, esi
// 007a387c  7304                 jae 0x7a3882
// 007a387e  89742410             mov dword ptr [esp + 0x10], esi
// 007a3882  ba01000000           mov edx, 1
// 007a3887  8bc2                 mov eax, edx
// 007a3889  57                   push edi
// 007a388a  8d9b00000000         lea ebx, [ebx]
// 007a3890  0fb77c4458           movzx edi, word ptr [esp + eax*2 + 0x58]
// 007a3895  03d2                 add edx, edx
// 007a3897  2bd7                 sub edx, edi
// 007a3899  781a                 js 0x7a38b5
// 007a389b  40                   inc eax
// 007a389c  83f80f               cmp eax, 0xf
// 007a389f  76ef                 jbe 0x7a3890
// 007a38a1  8bbc24a0000000       mov edi, dword ptr [esp + 0xa0]
// 007a38a8  85d2                 test edx, edx
// 007a38aa  7e11                 jle 0x7a38bd
// 007a38ac  85ff                 test edi, edi
// 007a38ae  7405                 je 0x7a38b5
// 007a38b0  83f901               cmp ecx, 1
// 007a38b3  7408                 je 0x7a38bd
// 007a38b5  83c8ff               or eax, 0xffffffff
// 007a38b8  e948030000           jmp 0x7a3c05
// 007a38bd  33c0                 xor eax, eax
// 007a38bf  668944247a           mov word ptr [esp + 0x7a], ax
// 007a38c4  b802000000           mov eax, 2
// 007a38c9  8da42400000000       lea esp, [esp]
// 007a38d0  668b4c0478           mov cx, word ptr [esp + eax + 0x78]
// 007a38d5  66034c0458           add cx, word ptr [esp + eax + 0x58]
// 007a38da  83c002               add eax, 2
// 007a38dd  66894c0478           mov word ptr [esp + eax + 0x78], cx
// 007a38e2  83f81e               cmp eax, 0x1e
// 007a38e5  72e9                 jb 0x7a38d0
// 007a38e7  33c0                 xor eax, eax
// 007a38e9  85ed                 test ebp, ebp
// 007a38eb  762a                 jbe 0x7a3917
// 007a38ed  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a38f1  66833c4300           cmp word ptr [ebx + eax*2], 0
// 007a38f6  741a                 je 0x7a3912
// 007a38f8  0fb71443             movzx edx, word ptr [ebx + eax*2]
// 007a38fc  0fb7545478           movzx edx, word ptr [esp + edx*2 + 0x78]
// 007a3901  66890451             mov word ptr [ecx + edx*2], ax
// 007a3905  0fb71443             movzx edx, word ptr [ebx + eax*2]
// 007a3909  66ff445478           inc word ptr [esp + edx*2 + 0x78]
// 007a390e  8d545478             lea edx, [esp + edx*2 + 0x78]
// 007a3912  40                   inc eax
// 007a3913  3bc5                 cmp eax, ebp
// 007a3915  72da                 jb 0x7a38f1
// 007a3917  8bc7                 mov eax, edi
// 007a3919  83e800               sub eax, 0
// 007a391c  b9ffffffff           mov ecx, 0xffffffff
// 007a3921  743d                 je 0x7a3960
// 007a3923  83e801               sub eax, 1
// 007a3926  7416                 je 0x7a393e
// 007a3928  c744243c80f48600     mov dword ptr [esp + 0x3c], 0x86f480
// 007a3930  c7442430c0f48600     mov dword ptr [esp + 0x30], 0x86f4c0
// 007a3938  894c2438             mov dword ptr [esp + 0x38], ecx
// 007a393c  eb36                 jmp 0x7a3974
// 007a393e  b800f48600           mov eax, 0x86f400
// 007a3943  2d02020000           sub eax, 0x202
// 007a3948  8944243c             mov dword ptr [esp + 0x3c], eax
// 007a394c  b840f48600           mov eax, 0x86f440
// 007a3951  2d02020000           sub eax, 0x202
// 007a3956  c744243800010000     mov dword ptr [esp + 0x38], 0x100
// 007a395e  eb10                 jmp 0x7a3970
// 007a3960  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007a3964  8944243c             mov dword ptr [esp + 0x3c], eax
// 007a3968  c744243813000000     mov dword ptr [esp + 0x38], 0x13
// 007a3970  89442430             mov dword ptr [esp + 0x30], eax
// 007a3974  8b442428             mov eax, dword ptr [esp + 0x28]
// 007a3978  8b10                 mov edx, dword ptr [eax]
// 007a397a  894c2434             mov dword ptr [esp + 0x34], ecx
// 007a397e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a3982  b801000000           mov eax, 1
// 007a3987  d3e0                 shl eax, cl
// 007a3989  33ed                 xor ebp, ebp
// 007a398b  33db                 xor ebx, ebx
// 007a398d  89742418             mov dword ptr [esp + 0x18], esi
// 007a3991  8d48ff               lea ecx, [eax - 1]
// 007a3994  89542424             mov dword ptr [esp + 0x24], edx
// 007a3998  89442440             mov dword ptr [esp + 0x40], eax
// 007a399c  8944242c             mov dword ptr [esp + 0x2c], eax
// 007a39a0  894c2444             mov dword ptr [esp + 0x44], ecx
// 007a39a4  83ff01               cmp edi, 1
// 007a39a7  750b                 jne 0x7a39b4
// 007a39a9  3db0050000           cmp eax, 0x5b0
// 007a39ae  0f834c020000         jae 0x7a3c00
// 007a39b4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007a39b8  8954241c             mov dword ptr [esp + 0x1c], edx
// 007a39bc  8d642400             lea esp, [esp]
// 007a39c0  8a442418             mov al, byte ptr [esp + 0x18]
// 007a39c4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007a39c8  8b542438             mov edx, dword ptr [esp + 0x38]
// 007a39cc  2ac3                 sub al, bl
// 007a39ce  88442411             mov byte ptr [esp + 0x11], al
// 007a39d2  0fb706               movzx eax, word ptr [esi]
// 007a39d5  0fb7c8               movzx ecx, ax
// 007a39d8  3bca                 cmp ecx, edx
// 007a39da  7d07                 jge 0x7a39e3
// 007a39dc  c644241000           mov byte ptr [esp + 0x10], 0
// 007a39e1  eb28                 jmp 0x7a3a0b
// 007a39e3  7e1f                 jle 0x7a3a04
// 007a39e5  0fb706               movzx eax, word ptr [esi]
// 007a39e8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007a39ec  03c0                 add eax, eax
// 007a39ee  8a1408               mov dl, byte ptr [eax + ecx]
// 007a39f1  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a39f5  88542410             mov byte ptr [esp + 0x10], dl
// 007a39f9  668b1408             mov dx, word ptr [eax + ecx]
// 007a39fd  6689542412           mov word ptr [esp + 0x12], dx
// 007a3a02  eb0c                 jmp 0x7a3a10
// 007a3a04  c644241060           mov byte ptr [esp + 0x10], 0x60
// 007a3a09  33c0                 xor eax, eax
// 007a3a0b  6689442412           mov word ptr [esp + 0x12], ax
// 007a3a10  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a3a14  8b442440             mov eax, dword ptr [esp + 0x40]
// 007a3a18  2bcb                 sub ecx, ebx
// 007a3a1a  ba01000000           mov edx, 1
// 007a3a1f  d3e2                 shl edx, cl
// 007a3a21  8bcb                 mov ecx, ebx
// 007a3a23  8bfd                 mov edi, ebp
// 007a3a25  d3ef                 shr edi, cl
// 007a3a27  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007a3a2b  89442450             mov dword ptr [esp + 0x50], eax
// 007a3a2f  8d349500000000       lea esi, [edx*4]
// 007a3a36  03f8                 add edi, eax
// 007a3a38  8d0cb9               lea ecx, [ecx + edi*4]
// 007a3a3b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007a3a3f  90                   nop 
// 007a3a40  2bc2                 sub eax, edx
// 007a3a42  2bce                 sub ecx, esi
// 007a3a44  8939                 mov dword ptr [ecx], edi
// 007a3a46  85c0                 test eax, eax
// 007a3a48  75f6                 jne 0x7a3a40
// 007a3a4a  8b542418             mov edx, dword ptr [esp + 0x18]
// 007a3a4e  8d4aff               lea ecx, [edx - 1]
// 007a3a51  b801000000           mov eax, 1
// 007a3a56  d3e0                 shl eax, cl
// 007a3a58  85c5                 test ebp, eax
// 007a3a5a  740a                 je 0x7a3a66
// 007a3a5c  8d642400             lea esp, [esp]
// 007a3a60  d1e8                 shr eax, 1
// 007a3a62  85c5                 test ebp, eax
// 007a3a64  75fa                 jne 0x7a3a60
// 007a3a66  85c0                 test eax, eax
// 007a3a68  740b                 je 0x7a3a75
// 007a3a6a  8d48ff               lea ecx, [eax - 1]
// 007a3a6d  23cd                 and ecx, ebp
// 007a3a6f  03c8                 add ecx, eax
// 007a3a71  8be9                 mov ebp, ecx
// 007a3a73  eb02                 jmp 0x7a3a77
// 007a3a75  33ed                 xor ebp, ebp
// 007a3a77  8344241c02           add dword ptr [esp + 0x1c], 2
// 007a3a7c  b8ffff0000           mov eax, 0xffff
// 007a3a81  6601445458           add word ptr [esp + edx*2 + 0x58], ax
// 007a3a86  0fb7445458           movzx eax, word ptr [esp + edx*2 + 0x58]
// 007a3a8b  6685c0               test ax, ax
// 007a3a8e  751f                 jne 0x7a3aaf
// 007a3a90  3b542420             cmp edx, dword ptr [esp + 0x20]
// 007a3a94  0f84d5000000         je 0x7a3b6f
// 007a3a9a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a3a9e  0fb711               movzx edx, word ptr [ecx]
// 007a3aa1  8b442448             mov eax, dword ptr [esp + 0x48]
// 007a3aa5  0fb70c50             movzx ecx, word ptr [eax + edx*2]
// 007a3aa9  894c2418             mov dword ptr [esp + 0x18], ecx
// 007a3aad  8bd1                 mov edx, ecx
// 007a3aaf  3b542414             cmp edx, dword ptr [esp + 0x14]
// 007a3ab3  0f8607ffffff         jbe 0x7a39c0
// 007a3ab9  8b742444             mov esi, dword ptr [esp + 0x44]
// 007a3abd  23f5                 and esi, ebp
// 007a3abf  89742454             mov dword ptr [esp + 0x54], esi
// 007a3ac3  3b742434             cmp esi, dword ptr [esp + 0x34]
// 007a3ac7  0f84f3feffff         je 0x7a39c0
// 007a3acd  85db                 test ebx, ebx
// 007a3acf  7504                 jne 0x7a3ad5
// 007a3ad1  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007a3ad5  8b542424             mov edx, dword ptr [esp + 0x24]
// 007a3ad9  8b442450             mov eax, dword ptr [esp + 0x50]
// 007a3add  8d0c82               lea ecx, [edx + eax*4]
// 007a3ae0  894c2424             mov dword ptr [esp + 0x24], ecx
// 007a3ae4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a3ae8  2bcb                 sub ecx, ebx
// 007a3aea  b801000000           mov eax, 1
// 007a3aef  8d140b               lea edx, [ebx + ecx]
// 007a3af2  d3e0                 shl eax, cl
// 007a3af4  3b542420             cmp edx, dword ptr [esp + 0x20]
// 007a3af8  7320                 jae 0x7a3b1a
// 007a3afa  8d745458             lea esi, [esp + edx*2 + 0x58]
// 007a3afe  8bff                 mov edi, edi
// 007a3b00  0fb73e               movzx edi, word ptr [esi]
// 007a3b03  2bc7                 sub eax, edi
// 007a3b05  85c0                 test eax, eax
// 007a3b07  7e0d                 jle 0x7a3b16
// 007a3b09  42                   inc edx
// 007a3b0a  41                   inc ecx
// 007a3b0b  83c602               add esi, 2
// 007a3b0e  03c0                 add eax, eax
// 007a3b10  3b542420             cmp edx, dword ptr [esp + 0x20]
// 007a3b14  72ea                 jb 0x7a3b00
// 007a3b16  8b742454             mov esi, dword ptr [esp + 0x54]
// 007a3b1a  b801000000           mov eax, 1
// 007a3b1f  d3e0                 shl eax, cl
// 007a3b21  0144242c             add dword ptr [esp + 0x2c], eax
// 007a3b25  83bc24a000000001     cmp dword ptr [esp + 0xa0], 1
// 007a3b2d  89442440             mov dword ptr [esp + 0x40], eax
// 007a3b31  750e                 jne 0x7a3b41
// 007a3b33  817c242cb0050000     cmp dword ptr [esp + 0x2c], 0x5b0
// 007a3b3b  0f83bf000000         jae 0x7a3c00
// 007a3b41  8bd6                 mov edx, esi
// 007a3b43  8b742428             mov esi, dword ptr [esp + 0x28]
// 007a3b47  8b06                 mov eax, dword ptr [esi]
// 007a3b49  880c90               mov byte ptr [eax + edx*4], cl
// 007a3b4c  8b0e                 mov ecx, dword ptr [esi]
// 007a3b4e  8a442414             mov al, byte ptr [esp + 0x14]
// 007a3b52  88449101             mov byte ptr [ecx + edx*4 + 1], al
// 007a3b56  8b06                 mov eax, dword ptr [esi]
// 007a3b58  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007a3b5c  2bc8                 sub ecx, eax
// 007a3b5e  c1f902               sar ecx, 2
// 007a3b61  89542434             mov dword ptr [esp + 0x34], edx
// 007a3b65  66894c9002           mov word ptr [eax + edx*4 + 2], cx
// 007a3b6a  e951feffff           jmp 0x7a39c0
// 007a3b6f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007a3b73  8ac2                 mov al, dl
// 007a3b75  2ac3                 sub al, bl
// 007a3b77  33c9                 xor ecx, ecx
// 007a3b79  c644241040           mov byte ptr [esp + 0x10], 0x40
// 007a3b7e  88442411             mov byte ptr [esp + 0x11], al
// 007a3b82  66894c2412           mov word ptr [esp + 0x12], cx
// 007a3b87  85ed                 test ebp, ebp
// 007a3b89  745a                 je 0x7a3be5
// 007a3b8b  8b742424             mov esi, dword ptr [esp + 0x24]
// 007a3b8f  90                   nop 
// 007a3b90  85db                 test ebx, ebx
// 007a3b92  741e                 je 0x7a3bb2
// 007a3b94  8b442444             mov eax, dword ptr [esp + 0x44]
// 007a3b98  23c5                 and eax, ebp
// 007a3b9a  3b442434             cmp eax, dword ptr [esp + 0x34]
// 007a3b9e  7412                 je 0x7a3bb2
// 007a3ba0  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a3ba4  8b37                 mov esi, dword ptr [edi]
// 007a3ba6  33db                 xor ebx, ebx
// 007a3ba8  89442418             mov dword ptr [esp + 0x18], eax
// 007a3bac  88442411             mov byte ptr [esp + 0x11], al
// 007a3bb0  8bd0                 mov edx, eax
// 007a3bb2  8bcb                 mov ecx, ebx
// 007a3bb4  8bc5                 mov eax, ebp
// 007a3bb6  d3e8                 shr eax, cl
// 007a3bb8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007a3bbc  890c86               mov dword ptr [esi + eax*4], ecx
// 007a3bbf  8d4aff               lea ecx, [edx - 1]
// 007a3bc2  b801000000           mov eax, 1
// 007a3bc7  d3e0                 shl eax, cl
// 007a3bc9  85c5                 test ebp, eax
// 007a3bcb  7409                 je 0x7a3bd6
// 007a3bcd  8d4900               lea ecx, [ecx]
// 007a3bd0  d1e8                 shr eax, 1
// 007a3bd2  85c5                 test ebp, eax
// 007a3bd4  75fa                 jne 0x7a3bd0
// 007a3bd6  85c0                 test eax, eax
// 007a3bd8  740b                 je 0x7a3be5
// 007a3bda  8d48ff               lea ecx, [eax - 1]
// 007a3bdd  23cd                 and ecx, ebp
// 007a3bdf  03c8                 add ecx, eax
// 007a3be1  8be9                 mov ebp, ecx
// 007a3be3  75ab                 jne 0x7a3b90
// 007a3be5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007a3be9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007a3bed  8d049500000000       lea eax, [edx*4]
// 007a3bf4  0107                 add dword ptr [edi], eax
// 007a3bf6  8b542414             mov edx, dword ptr [esp + 0x14]
// 007a3bfa  8911                 mov dword ptr [ecx], edx
// 007a3bfc  33c0                 xor eax, eax
// 007a3bfe  eb05                 jmp 0x7a3c05
// 007a3c00  b801000000           mov eax, 1
// 007a3c05  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007a3c0c  5f                   pop edi
// 007a3c0d  5e                   pop esi
// 007a3c0e  5d                   pop ebp
// 007a3c0f  5b                   pop ebx
// 007a3c10  33cc                 xor ecx, esp
// 007a3c12  e8bbe1efff           call 0x6a1dd2
// 007a3c17  81c48c000000         add esp, 0x8c
// 007a3c1d  c3                   ret 
// library zlib-1.2.3/inftrees.c (function _inflate_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS /MD
// roc-lib: zlib-1.2.3 inftrees.c
