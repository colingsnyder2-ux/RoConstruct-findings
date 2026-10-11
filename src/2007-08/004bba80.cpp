// from server: 100% by auto
// roc 2007-08 004bba80  unit: RakPeer  size: 699 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bba80
//
// 004bba80  55                   push ebp
// 004bba81  8bec                 mov ebp, esp
// 004bba83  83ec18               sub esp, 0x18
// 004bba86  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004bba89  8b08                 mov ecx, dword ptr [eax]
// 004bba8b  53                   push ebx
// 004bba8c  8b580c               mov ebx, dword ptr [eax + 0xc]
// 004bba8f  56                   push esi
// 004bba90  8b7008               mov esi, dword ptr [eax + 8]
// 004bba93  57                   push edi
// 004bba94  8b7804               mov edi, dword ptr [eax + 4]
// 004bba97  8b4508               mov eax, dword ptr [ebp + 8]
// 004bba9a  8b10                 mov edx, dword ptr [eax]
// 004bba9c  894de8               mov dword ptr [ebp - 0x18], ecx
// 004bba9f  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004bbaa2  8911                 mov dword ptr [ecx], edx
// 004bbaa4  8b5004               mov edx, dword ptr [eax + 4]
// 004bbaa7  895104               mov dword ptr [ecx + 4], edx
// 004bbaaa  8b5008               mov edx, dword ptr [eax + 8]
// 004bbaad  895108               mov dword ptr [ecx + 8], edx
// 004bbab0  8b400c               mov eax, dword ptr [eax + 0xc]
// 004bbab3  8b5510               mov edx, dword ptr [ebp + 0x10]
// 004bbab6  89410c               mov dword ptr [ecx + 0xc], eax
// 004bbab9  33c0                 xor eax, eax
// 004bbabb  85db                 test ebx, ebx
// 004bbabd  8902                 mov dword ptr [edx], eax
// 004bbabf  894204               mov dword ptr [edx + 4], eax
// 004bbac2  894208               mov dword ptr [edx + 8], eax
// 004bbac5  897dec               mov dword ptr [ebp - 0x14], edi
// 004bbac8  8975f0               mov dword ptr [ebp - 0x10], esi
// 004bbacb  895df4               mov dword ptr [ebp - 0xc], ebx
// 004bbace  89420c               mov dword ptr [edx + 0xc], eax
// 004bbad1  c7450c01000000       mov dword ptr [ebp + 0xc], 1
// 004bbad8  0f8817010000         js 0x4bbbf5
// 004bbade  8d55e8               lea edx, [ebp - 0x18]
// 004bbae1  52                   push edx
// 004bbae2  51                   push ecx
// 004bbae3  e808ddffff           call 0x4b97f0
// 004bbae8  83c408               add esp, 8
// 004bbaeb  84c0                 test al, al
// 004bbaed  0f84ff000000         je 0x4bbbf2
// 004bbaf3  b803000000           mov eax, 3
// 004bbaf8  eb06                 jmp 0x4bbb00
// 004bbafa  8d9b00000000         lea ebx, [ebx]
// 004bbb00  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004bbb03  833c8100             cmp dword ptr [ecx + eax*4], 0
// 004bbb07  7505                 jne 0x4bbb0e
// 004bbb09  83e801               sub eax, 1
// 004bbb0c  79f2                 jns 0x4bbb00
// 004bbb0e  85c0                 test eax, eax
// 004bbb10  8bc8                 mov ecx, eax
// 004bbb12  7c33                 jl 0x4bbb47
// 004bbb14  837c8de800           cmp dword ptr [ebp + ecx*4 - 0x18], 0
// 004bbb19  7505                 jne 0x4bbb20
// 004bbb1b  83e901               sub ecx, 1
// 004bbb1e  79f4                 jns 0x4bbb14
// 004bbb20  3bc1                 cmp eax, ecx
// 004bbb22  7423                 je 0x4bbb47
// 004bbb24  2bc1                 sub eax, ecx
// 004bbb26  c1e005               shl eax, 5
// 004bbb29  8bf0                 mov esi, eax
// 004bbb2b  8d55e8               lea edx, [ebp - 0x18]
// 004bbb2e  56                   push esi
// 004bbb2f  52                   push edx
// 004bbb30  e87be2ffff           call 0x4b9db0
// 004bbb35  8b5df4               mov ebx, dword ptr [ebp - 0xc]
// 004bbb38  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 004bbb3b  83c408               add esp, 8
// 004bbb3e  83c601               add esi, 1
// 004bbb41  89750c               mov dword ptr [ebp + 0xc], esi
// 004bbb44  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 004bbb47  85db                 test ebx, ebx
// 004bbb49  7855                 js 0x4bbba0
// 004bbb4b  eb03                 jmp 0x4bbb50
// 004bbb4d  8d4900               lea ecx, [ecx]
// 004bbb50  b803000000           mov eax, 3
// 004bbb55  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004bbb58  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 004bbb5b  8b5485e8             mov edx, dword ptr [ebp + eax*4 - 0x18]
// 004bbb5f  3bca                 cmp ecx, edx
// 004bbb61  7709                 ja 0x4bbb6c
// 004bbb63  723b                 jb 0x4bbba0
// 004bbb65  83e801               sub eax, 1
// 004bbb68  79eb                 jns 0x4bbb55
// 004bbb6a  eb34                 jmp 0x4bbba0
// 004bbb6c  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004bbb6f  83450c01             add dword ptr [ebp + 0xc], 1
// 004bbb73  8bc1                 mov eax, ecx
// 004bbb75  03c9                 add ecx, ecx
// 004bbb77  894de8               mov dword ptr [ebp - 0x18], ecx
// 004bbb7a  c1e81f               shr eax, 0x1f
// 004bbb7d  8bcf                 mov ecx, edi
// 004bbb7f  03ff                 add edi, edi
// 004bbb81  0bf8                 or edi, eax
// 004bbb83  8bc6                 mov eax, esi
// 004bbb85  c1e81f               shr eax, 0x1f
// 004bbb88  03db                 add ebx, ebx
// 004bbb8a  c1e91f               shr ecx, 0x1f
// 004bbb8d  03f6                 add esi, esi
// 004bbb8f  0bd8                 or ebx, eax
// 004bbb91  0bf1                 or esi, ecx
// 004bbb93  85db                 test ebx, ebx
// 004bbb95  897dec               mov dword ptr [ebp - 0x14], edi
// 004bbb98  8975f0               mov dword ptr [ebp - 0x10], esi
// 004bbb9b  895df4               mov dword ptr [ebp - 0xc], ebx
// 004bbb9e  79b0                 jns 0x4bbb50
// 004bbba0  b803000000           mov eax, 3
// 004bbba5  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004bbba8  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004bbbab  8b5485e8             mov edx, dword ptr [ebp + eax*4 - 0x18]
// 004bbbaf  3bd1                 cmp edx, ecx
// 004bbbb1  770d                 ja 0x4bbbc0
// 004bbbb3  0f8280000000         jb 0x4bbc39
// 004bbbb9  83e801               sub eax, 1
// 004bbbbc  79e7                 jns 0x4bbba5
// 004bbbbe  eb79                 jmp 0x4bbc39
// 004bbbc0  8bc3                 mov eax, ebx
// 004bbbc2  c1e01f               shl eax, 0x1f
// 004bbbc5  8bce                 mov ecx, esi
// 004bbbc7  d1ee                 shr esi, 1
// 004bbbc9  0bf0                 or esi, eax
// 004bbbcb  c1e11f               shl ecx, 0x1f
// 004bbbce  8bc7                 mov eax, edi
// 004bbbd0  d1ef                 shr edi, 1
// 004bbbd2  0bf9                 or edi, ecx
// 004bbbd4  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004bbbd7  c1e01f               shl eax, 0x1f
// 004bbbda  d1e9                 shr ecx, 1
// 004bbbdc  d1eb                 shr ebx, 1
// 004bbbde  0bc8                 or ecx, eax
// 004bbbe0  836d0c01             sub dword ptr [ebp + 0xc], 1
// 004bbbe4  895df4               mov dword ptr [ebp - 0xc], ebx
// 004bbbe7  8975f0               mov dword ptr [ebp - 0x10], esi
// 004bbbea  897dec               mov dword ptr [ebp - 0x14], edi
// 004bbbed  894de8               mov dword ptr [ebp - 0x18], ecx
// 004bbbf0  ebae                 jmp 0x4bbba0
// 004bbbf2  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004bbbf5  51                   push ecx
// 004bbbf6  8d55e8               lea edx, [ebp - 0x18]
// 004bbbf9  52                   push edx
// 004bbbfa  e8f1dbffff           call 0x4b97f0
// 004bbbff  83c408               add esp, 8
// 004bbc02  84c0                 test al, al
// 004bbc04  7433                 je 0x4bbc39
// 004bbc06  8bc3                 mov eax, ebx
// 004bbc08  c1e01f               shl eax, 0x1f
// 004bbc0b  8bce                 mov ecx, esi
// 004bbc0d  d1ee                 shr esi, 1
// 004bbc0f  0bf0                 or esi, eax
// 004bbc11  c1e11f               shl ecx, 0x1f
// 004bbc14  8bc7                 mov eax, edi
// 004bbc16  d1ef                 shr edi, 1
// 004bbc18  0bf9                 or edi, ecx
// 004bbc1a  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004bbc1d  d1eb                 shr ebx, 1
// 004bbc1f  c1e01f               shl eax, 0x1f
// 004bbc22  d1e9                 shr ecx, 1
// 004bbc24  0bc8                 or ecx, eax
// 004bbc26  895df4               mov dword ptr [ebp - 0xc], ebx
// 004bbc29  8975f0               mov dword ptr [ebp - 0x10], esi
// 004bbc2c  897dec               mov dword ptr [ebp - 0x14], edi
// 004bbc2f  894de8               mov dword ptr [ebp - 0x18], ecx
// 004bbc32  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 004bbc39  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 004bbc3d  c7450800000000       mov dword ptr [ebp + 8], 0
// 004bbc44  0f84da000000         je 0x4bbd24
// 004bbc4a  8d9b00000000         lea ebx, [ebx]
// 004bbc50  b801000000           mov eax, 1
// 004bbc55  29450c               sub dword ptr [ebp + 0xc], eax
// 004bbc58  014508               add dword ptr [ebp + 8], eax
// 004bbc5b  b803000000           mov eax, 3
// 004bbc60  8b5514               mov edx, dword ptr [ebp + 0x14]
// 004bbc63  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004bbc66  8b5485e8             mov edx, dword ptr [ebp + eax*4 - 0x18]
// 004bbc6a  3bd1                 cmp edx, ecx
// 004bbc6c  0f877c000000         ja 0x4bbcee
// 004bbc72  7205                 jb 0x4bbc79
// 004bbc74  83e801               sub eax, 1
// 004bbc77  79e7                 jns 0x4bbc60
// 004bbc79  8d45e8               lea eax, [ebp - 0x18]
// 004bbc7c  8945f8               mov dword ptr [ebp - 8], eax
// 004bbc7f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004bbc86  8b75f8               mov esi, dword ptr [ebp - 8]
// 004bbc89  8b7d14               mov edi, dword ptr [ebp + 0x14]
// 004bbc8c  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004bbc8f  8b06                 mov eax, dword ptr [esi]
// 004bbc91  33d2                 xor edx, edx
// 004bbc93  2907                 sub dword ptr [edi], eax
// 004bbc95  8b4604               mov eax, dword ptr [esi + 4]
// 004bbc98  194704               sbb dword ptr [edi + 4], eax
// 004bbc9b  8b4608               mov eax, dword ptr [esi + 8]
// 004bbc9e  194708               sbb dword ptr [edi + 8], eax
// 004bbca1  8b460c               mov eax, dword ptr [esi + 0xc]
// 004bbca4  19470c               sbb dword ptr [edi + 0xc], eax
// 004bbca7  e322                 jecxz 0x4bbccb
// 004bbca9  42                   inc edx
// 004bbcaa  42                   inc edx
// 004bbcab  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004bbcae  1904d7               sbb dword ptr [edi + edx*8], eax
// 004bbcb1  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004bbcb5  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004bbcb9  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004bbcbd  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004bbcc1  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004bbcc5  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004bbcc9  e2de                 loop 0x4bbca9
// 004bbccb  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004bbcce  8b7510               mov esi, dword ptr [ebp + 0x10]
// 004bbcd1  51                   push ecx
// 004bbcd2  56                   push esi
// 004bbcd3  e8d8e0ffff           call 0x4b9db0
// 004bbcd8  8b5df4               mov ebx, dword ptr [ebp - 0xc]
// 004bbcdb  8b7dec               mov edi, dword ptr [ebp - 0x14]
// 004bbcde  83c408               add esp, 8
// 004bbce1  830e01               or dword ptr [esi], 1
// 004bbce4  8b75f0               mov esi, dword ptr [ebp - 0x10]
// 004bbce7  c7450800000000       mov dword ptr [ebp + 8], 0
// 004bbcee  8b55e8               mov edx, dword ptr [ebp - 0x18]
// 004bbcf1  8bc3                 mov eax, ebx
// 004bbcf3  c1e01f               shl eax, 0x1f
// 004bbcf6  8bce                 mov ecx, esi
// 004bbcf8  d1ee                 shr esi, 1
// 004bbcfa  0bf0                 or esi, eax
// 004bbcfc  8bc7                 mov eax, edi
// 004bbcfe  c1e11f               shl ecx, 0x1f
// 004bbd01  d1ef                 shr edi, 1
// 004bbd03  c1e01f               shl eax, 0x1f
// 004bbd06  d1ea                 shr edx, 1
// 004bbd08  d1eb                 shr ebx, 1
// 004bbd0a  0bf9                 or edi, ecx
// 004bbd0c  0bd0                 or edx, eax
// 004bbd0e  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 004bbd12  895df4               mov dword ptr [ebp - 0xc], ebx
// 004bbd15  8975f0               mov dword ptr [ebp - 0x10], esi
// 004bbd18  897dec               mov dword ptr [ebp - 0x14], edi
// 004bbd1b  8955e8               mov dword ptr [ebp - 0x18], edx
// 004bbd1e  0f852cffffff         jne 0x4bbc50
// 004bbd24  8b4508               mov eax, dword ptr [ebp + 8]
// 004bbd27  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004bbd2a  50                   push eax
// 004bbd2b  51                   push ecx
// 004bbd2c  e87fe0ffff           call 0x4b9db0
// 004bbd31  83c408               add esp, 8
// 004bbd34  5f                   pop edi
// 004bbd35  5e                   pop esi
// 004bbd36  5b                   pop ebx
// 004bbd37  8be5                 mov esp, ebp
// 004bbd39  5d                   pop ebp
// 004bbd3a  c3                   ret 

// from server: 19% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp