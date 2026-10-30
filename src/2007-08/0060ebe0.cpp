// roc 2007-08 0060ebe0  unit: RBX::Ball  size: 687 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060ebe0
//
// 0060ebe0  83ec28               sub esp, 0x28
// 0060ebe3  53                   push ebx
// 0060ebe4  56                   push esi
// 0060ebe5  8b742434             mov esi, dword ptr [esp + 0x34]
// 0060ebe9  57                   push edi
// 0060ebea  8b7e08               mov edi, dword ptr [esi + 8]
// 0060ebed  6a00                 push 0
// 0060ebef  6854597800           push 0x785954
// 0060ebf4  bb01000000           mov ebx, 1
// 0060ebf9  56                   push esi
// 0060ebfa  895c2424             mov dword ptr [esp + 0x24], ebx
// 0060ebfe  e86d410000           call 0x612d70
// 0060ec03  8907                 mov dword ptr [edi], eax
// 0060ec05  c7470804000000       mov dword ptr [edi + 8], 4
// 0060ec0c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0060ec0f  2b4608               sub eax, dword ptr [esi + 8]
// 0060ec12  83c40c               add esp, 0xc
// 0060ec15  83f810               cmp eax, 0x10
// 0060ec18  7f0a                 jg 0x60ec24
// 0060ec1a  53                   push ebx
// 0060ec1b  56                   push esi
// 0060ec1c  e8ef6efbff           call 0x5c5b10
// 0060ec21  83c408               add esp, 8
// 0060ec24  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0060ec28  83460810             add dword ptr [esi + 8], 0x10
// 0060ec2c  6a25                 push 0x25
// 0060ec2e  57                   push edi
// 0060ec2f  ff1548e87700         call dword ptr [0x77e848]
// 0060ec35  83c408               add esp, 8
// 0060ec38  85c0                 test eax, eax
// 0060ec3a  89442414             mov dword ptr [esp + 0x14], eax
// 0060ec3e  0f84a6010000         je 0x60edea
// 0060ec44  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0060ec48  55                   push ebp
// 0060ec49  8d69fc               lea ebp, [ecx - 4]
// 0060ec4c  83c1f8               add ecx, -8
// 0060ec4f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0060ec53  eb04                 jmp 0x60ec59
// 0060ec55  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060ec59  8b5e08               mov ebx, dword ptr [esi + 8]
// 0060ec5c  2bc7                 sub eax, edi
// 0060ec5e  50                   push eax
// 0060ec5f  57                   push edi
// 0060ec60  56                   push esi
// 0060ec61  e80a410000           call 0x612d70
// 0060ec66  8903                 mov dword ptr [ebx], eax
// 0060ec68  c7430804000000       mov dword ptr [ebx + 8], 4
// 0060ec6f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0060ec72  2b4e08               sub ecx, dword ptr [esi + 8]
// 0060ec75  bb10000000           mov ebx, 0x10
// 0060ec7a  83c40c               add esp, 0xc
// 0060ec7d  3bcb                 cmp ecx, ebx
// 0060ec7f  7f0b                 jg 0x60ec8c
// 0060ec81  6a01                 push 1
// 0060ec83  56                   push esi
// 0060ec84  e8876efbff           call 0x5c5b10
// 0060ec89  83c408               add esp, 8
// 0060ec8c  015e08               add dword ptr [esi + 8], ebx
// 0060ec8f  8b542418             mov edx, dword ptr [esp + 0x18]
// 0060ec93  8a4201               mov al, byte ptr [edx + 1]
// 0060ec96  8b7e08               mov edi, dword ptr [esi + 8]
// 0060ec99  0fbec8               movsx ecx, al
// 0060ec9c  83c1db               add ecx, -0x25
// 0060ec9f  83f94e               cmp ecx, 0x4e
// 0060eca2  0f87c9000000         ja 0x60ed71
// 0060eca8  0fb68940ee6000       movzx ecx, byte ptr [ecx + 0x60ee40]
// 0060ecaf  ff248d24ee6000       jmp dword ptr [ecx*4 + 0x60ee24]
// 0060ecb6  8b5504               mov edx, dword ptr [ebp + 4]
// 0060ecb9  8344241404           add dword ptr [esp + 0x14], 4
// 0060ecbe  83c504               add ebp, 4
// 0060ecc1  85d2                 test edx, edx
// 0060ecc3  7505                 jne 0x60ecca
// 0060ecc5  ba00317c00           mov edx, 0x7c3100
// 0060ecca  e8c1feffff           call 0x60eb90
// 0060eccf  e9ed000000           jmp 0x60edc1
// 0060ecd4  8a5504               mov dl, byte ptr [ebp + 4]
// 0060ecd7  8344241404           add dword ptr [esp + 0x14], 4
// 0060ecdc  83c504               add ebp, 4
// 0060ecdf  8854243c             mov byte ptr [esp + 0x3c], dl
// 0060ece3  8d54243c             lea edx, [esp + 0x3c]
// 0060ece7  c644243d00           mov byte ptr [esp + 0x3d], 0
// 0060ecec  e89ffeffff           call 0x60eb90
// 0060ecf1  e9cb000000           jmp 0x60edc1
// 0060ecf6  db4504               fild dword ptr [ebp + 4]
// 0060ecf9  8344241404           add dword ptr [esp + 0x14], 4
// 0060ecfe  83c504               add ebp, 4
// 0060ed01  c7470803000000       mov dword ptr [edi + 8], 3
// 0060ed08  dd1f                 fstp qword ptr [edi]
// 0060ed0a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0060ed0d  2b4608               sub eax, dword ptr [esi + 8]
// 0060ed10  3bc3                 cmp eax, ebx
// 0060ed12  e99a000000           jmp 0x60edb1
// 0060ed17  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060ed1b  dd4008               fld qword ptr [eax + 8]
// 0060ed1e  83c008               add eax, 8
// 0060ed21  dd1f                 fstp qword ptr [edi]
// 0060ed23  c7470803000000       mov dword ptr [edi + 8], 3
// 0060ed2a  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0060ed2d  2b4e08               sub ecx, dword ptr [esi + 8]
// 0060ed30  83c508               add ebp, 8
// 0060ed33  89442414             mov dword ptr [esp + 0x14], eax
// 0060ed37  3bcb                 cmp ecx, ebx
// 0060ed39  eb76                 jmp 0x60edb1
// 0060ed3b  8b5504               mov edx, dword ptr [ebp + 4]
// 0060ed3e  8344241404           add dword ptr [esp + 0x14], 4
// 0060ed43  83c504               add ebp, 4
// 0060ed46  52                   push edx
// 0060ed47  8d442424             lea eax, [esp + 0x24]
// 0060ed4b  68fc307c00           push 0x7c30fc
// 0060ed50  50                   push eax
// 0060ed51  ff1568e97700         call dword ptr [0x77e968]
// 0060ed57  83c40c               add esp, 0xc
// 0060ed5a  8d542420             lea edx, [esp + 0x20]
// 0060ed5e  e82dfeffff           call 0x60eb90
// 0060ed63  eb5c                 jmp 0x60edc1
// 0060ed65  baf8307c00           mov edx, 0x7c30f8
// 0060ed6a  e821feffff           call 0x60eb90
// 0060ed6f  eb50                 jmp 0x60edc1
// 0060ed71  88442411             mov byte ptr [esp + 0x11], al
// 0060ed75  8d442410             lea eax, [esp + 0x10]
// 0060ed79  c644241025           mov byte ptr [esp + 0x10], 0x25
// 0060ed7e  c644241200           mov byte ptr [esp + 0x12], 0
// 0060ed83  8d5001               lea edx, [eax + 1]
// 0060ed86  8a08                 mov cl, byte ptr [eax]
// 0060ed88  83c001               add eax, 1
// 0060ed8b  84c9                 test cl, cl
// 0060ed8d  75f7                 jne 0x60ed86
// 0060ed8f  2bc2                 sub eax, edx
// 0060ed91  50                   push eax
// 0060ed92  8d4c2414             lea ecx, [esp + 0x14]
// 0060ed96  51                   push ecx
// 0060ed97  56                   push esi
// 0060ed98  e8d33f0000           call 0x612d70
// 0060ed9d  8907                 mov dword ptr [edi], eax
// 0060ed9f  c7470804000000       mov dword ptr [edi + 8], 4
// 0060eda6  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0060eda9  2b5608               sub edx, dword ptr [esi + 8]
// 0060edac  83c40c               add esp, 0xc
// 0060edaf  3bd3                 cmp edx, ebx
// 0060edb1  7f0b                 jg 0x60edbe
// 0060edb3  6a01                 push 1
// 0060edb5  56                   push esi
// 0060edb6  e8556dfbff           call 0x5c5b10
// 0060edbb  83c408               add esp, 8
// 0060edbe  015e08               add dword ptr [esi + 8], ebx
// 0060edc1  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0060edc5  8344241c02           add dword ptr [esp + 0x1c], 2
// 0060edca  83c702               add edi, 2
// 0060edcd  6a25                 push 0x25
// 0060edcf  57                   push edi
// 0060edd0  ff1548e87700         call dword ptr [0x77e848]
// 0060edd6  83c408               add esp, 8
// 0060edd9  85c0                 test eax, eax
// 0060eddb  89442418             mov dword ptr [esp + 0x18], eax
// 0060eddf  0f8570feffff         jne 0x60ec55
// 0060ede5  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0060ede9  5d                   pop ebp
// 0060edea  8bd7                 mov edx, edi
// 0060edec  e89ffdffff           call 0x60eb90
// 0060edf1  8b4608               mov eax, dword ptr [esi + 8]
// 0060edf4  2b460c               sub eax, dword ptr [esi + 0xc]
// 0060edf7  8d4b01               lea ecx, [ebx + 1]
// 0060edfa  c1f804               sar eax, 4
// 0060edfd  83e801               sub eax, 1
// 0060ee00  50                   push eax
// 0060ee01  51                   push ecx
// 0060ee02  56                   push esi
// 0060ee03  e8e81a0000           call 0x6108f0
// 0060ee08  f7db                 neg ebx
// 0060ee0a  c1e304               shl ebx, 4
// 0060ee0d  015e08               add dword ptr [esi + 8], ebx
// 0060ee10  8b7608               mov esi, dword ptr [esi + 8]
// 0060ee13  8b46f0               mov eax, dword ptr [esi - 0x10]
// 0060ee16  83c40c               add esp, 0xc
// 0060ee19  5f                   pop edi
// 0060ee1a  5e                   pop esi
// 0060ee1b  83c010               add eax, 0x10
// 0060ee1e  5b                   pop ebx
// 0060ee1f  83c428               add esp, 0x28
// 0060ee22  c3                   ret 
// 0060ee23  90                   nop 
// 0060ee24  65ed                 in eax, dx
// 0060ee26  60                   pushal 
// 0060ee27  00d4                 add ah, dl
// 0060ee29  ec                   in al, dx
// 0060ee2a  60                   pushal 
// 0060ee2b  00f6                 add dh, dh
// 0060ee2d  ec                   in al, dx
// 0060ee2e  60                   pushal 
// 0060ee2f  0017                 add byte ptr [edi], dl
// 0060ee31  ed                   in eax, dx
// 0060ee32  60                   pushal 
// 0060ee33  003b                 add byte ptr [ebx], bh
// 0060ee35  ed                   in eax, dx
// 0060ee36  60                   pushal 
// 0060ee37  00b6ec600071         add byte ptr [esi + 0x710060ec], dh
// 0060ee3d  ed                   in eax, dx
// 0060ee3e  60                   pushal 
// 0060ee3f  0000                 add byte ptr [eax], al
// 0060ee41  06                   push es
// 0060ee42  06                   push es
// 0060ee43  06                   push es
// 0060ee44  06                   push es
// 0060ee45  06                   push es
// 0060ee46  06                   push es
// 0060ee47  06                   push es
// 0060ee48  06                   push es
// 0060ee49  06                   push es
// 0060ee4a  06                   push es
// 0060ee4b  06                   push es
// 0060ee4c  06                   push es
// 0060ee4d  06                   push es
// 0060ee4e  06                   push es
// 0060ee4f  06                   push es
// 0060ee50  06                   push es
// 0060ee51  06                   push es
// 0060ee52  06                   push es
// 0060ee53  06                   push es
// 0060ee54  06                   push es
// 0060ee55  06                   push es
// 0060ee56  06                   push es
// 0060ee57  06                   push es
// 0060ee58  06                   push es
// 0060ee59  06                   push es
// 0060ee5a  06                   push es
// 0060ee5b  06                   push es
// 0060ee5c  06                   push es
// 0060ee5d  06                   push es
// 0060ee5e  06                   push es
// 0060ee5f  06                   push es
// 0060ee60  06                   push es
// 0060ee61  06                   push es
// 0060ee62  06                   push es
// 0060ee63  06                   push es
// 0060ee64  06                   push es
// 0060ee65  06                   push es
// 0060ee66  06                   push es
// 0060ee67  06                   push es
// 0060ee68  06                   push es
// 0060ee69  06                   push es
// 0060ee6a  06                   push es
// 0060ee6b  06                   push es
// 0060ee6c  06                   push es
// 0060ee6d  06                   push es
// 0060ee6e  06                   push es
// 0060ee6f  06                   push es
// 0060ee70  06                   push es
// 0060ee71  06                   push es
// 0060ee72  06                   push es
// 0060ee73  06                   push es
// 0060ee74  06                   push es
// 0060ee75  06                   push es
// 0060ee76  06                   push es
// 0060ee77  06                   push es
// 0060ee78  06                   push es
// 0060ee79  06                   push es
// 0060ee7a  06                   push es
// 0060ee7b  06                   push es
// 0060ee7c  06                   push es
// 0060ee7d  06                   push es
// 0060ee7e  0102                 add dword ptr [edx], eax
// 0060ee80  06                   push es
// 0060ee81  0306                 add eax, dword ptr [esi]
// 0060ee83  06                   push es
// 0060ee84  06                   push es
// 0060ee85  06                   push es
// 0060ee86  06                   push es
// 0060ee87  06                   push es
// 0060ee88  06                   push es
// 0060ee89  06                   push es
// 0060ee8a  06                   push es
// 0060ee8b  0406                 add al, 6
// 0060ee8d  06                   push es
// copied from an identical function in another client (function _luaO_pushvfstring)

// roc-cl: 50727
// roc-lang: c
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lobject.c