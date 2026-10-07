// roc 2007-08 00481b60  unit: G3D::Win32Window  size: 660 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00481b60
//
// 00481b60  55                   push ebp
// 00481b61  8d6c248c             lea ebp, [esp - 0x74]
// 00481b65  83ec74               sub esp, 0x74
// 00481b68  6aff                 push -1
// 00481b6a  68f15d7400           push 0x745df1
// 00481b6f  64a100000000         mov eax, dword ptr fs:[0]
// 00481b75  50                   push eax
// 00481b76  81ecf8000000         sub esp, 0xf8
// 00481b7c  a188518b00           mov eax, dword ptr [0x8b5188]
// 00481b81  33c5                 xor eax, ebp
// 00481b83  894570               mov dword ptr [ebp + 0x70], eax
// 00481b86  53                   push ebx
// 00481b87  56                   push esi
// 00481b88  57                   push edi
// 00481b89  50                   push eax
// 00481b8a  8d45f4               lea eax, [ebp - 0xc]
// 00481b8d  64a300000000         mov dword ptr fs:[0], eax
// 00481b93  8965f0               mov dword ptr [ebp - 0x10], esp
// 00481b96  8b7d7c               mov edi, dword ptr [ebp + 0x7c]
// 00481b99  8bf1                 mov esi, ecx
// 00481b9b  33db                 xor ebx, ebx
// 00481b9d  53                   push ebx
// 00481b9e  891e                 mov dword ptr [esi], ebx
// 00481ba0  a124db8b00           mov eax, dword ptr [0x8bdb24]
// 00481ba5  6a01                 push 1
// 00481ba7  57                   push edi
// 00481ba8  8d4d24               lea ecx, [ebp + 0x24]
// 00481bab  897504               mov dword ptr [ebp + 4], esi
// 00481bae  897d00               mov dword ptr [ebp], edi
// 00481bb1  894604               mov dword ptr [esi + 4], eax
// 00481bb4  895e08               mov dword ptr [esi + 8], ebx
// 00481bb7  895e0c               mov dword ptr [esi + 0xc], ebx
// 00481bba  895e10               mov dword ptr [esi + 0x10], ebx
// 00481bbd  895dfc               mov dword ptr [ebp - 4], ebx
// 00481bc0  e8cba50800           call 0x50c190
// 00481bc5  6a04                 push 4
// 00481bc7  8d4d08               lea ecx, [ebp + 8]
// 00481bca  51                   push ecx
// 00481bcb  8d4d24               lea ecx, [ebp + 0x24]
// 00481bce  c645fc01             mov byte ptr [ebp - 4], 1
// 00481bd2  e849a40800           call 0x50c020
// 00481bd7  8d5508               lea edx, [ebp + 8]
// 00481bda  68aca57900           push 0x79a5ac
// 00481bdf  52                   push edx
// 00481be0  c645fc02             mov byte ptr [ebp - 4], 2
// 00481be4  ff151ce67700         call dword ptr [0x77e61c]
// 00481bea  83c408               add esp, 8
// 00481bed  3ac3                 cmp al, bl
// 00481bef  7434                 je 0x481c25
// 00481bf1  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00481bf5  7205                 jb 0x481bfc
// 00481bf7  8b7f04               mov edi, dword ptr [edi + 4]
// 00481bfa  eb03                 jmp 0x481bff
// 00481bfc  83c704               add edi, 4
// 00481bff  57                   push edi
// 00481c00  8d8550ffffff         lea eax, [ebp - 0xb0]
// 00481c06  6884a57900           push 0x79a584
// 00481c0b  50                   push eax
// 00481c0c  e8affb0700           call 0x5017c0
// 00481c11  83c40c               add esp, 0xc
// 00481c14  6840c58400           push 0x84c540
// 00481c19  8d8d50ffffff         lea ecx, [ebp - 0xb0]
// 00481c1f  51                   push ecx
// 00481c20  e879ef1a00           call 0x630b9e
// 00481c25  8d956cffffff         lea edx, [ebp - 0x94]
// 00481c2b  52                   push edx
// 00481c2c  6a7c                 push 0x7c
// 00481c2e  8d4d24               lea ecx, [ebp + 0x24]
// 00481c31  e8aaa30800           call 0x50bfe0
// 00481c36  8b45d8               mov eax, dword ptr [ebp - 0x28]
// 00481c39  2500020000           and eax, 0x200
// 00481c3e  f7d8                 neg eax
// 00481c40  1bc0                 sbb eax, eax
// 00481c42  83e005               and eax, 5
// 00481c45  83c001               add eax, 1
// 00481c48  894614               mov dword ptr [esi + 0x14], eax
// 00481c4b  8a45b8               mov al, byte ptr [ebp - 0x48]
// 00481c4e  a804                 test al, 4
// 00481c50  7469                 je 0x481cbb
// 00481c52  8b45bc               mov eax, dword ptr [ebp - 0x44]
// 00481c55  3d44585431           cmp eax, 0x31545844
// 00481c5a  7454                 je 0x481cb0
// 00481c5c  3d44585433           cmp eax, 0x33545844
// 00481c61  7442                 je 0x481ca5
// 00481c63  3d44585435           cmp eax, 0x35545844
// 00481c68  7434                 je 0x481c9e
// 00481c6a  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00481c6e  7205                 jb 0x481c75
// 00481c70  8b7f04               mov edi, dword ptr [edi + 4]
// 00481c73  eb03                 jmp 0x481c78
// 00481c75  83c704               add edi, 4
// 00481c78  57                   push edi
// 00481c79  8d8d34ffffff         lea ecx, [ebp - 0xcc]
// 00481c7f  684ca57900           push 0x79a54c
// 00481c84  51                   push ecx
// 00481c85  e836fb0700           call 0x5017c0
// 00481c8a  83c40c               add esp, 0xc
// 00481c8d  6840c58400           push 0x84c540
// 00481c92  8d9534ffffff         lea edx, [ebp - 0xcc]
// 00481c98  52                   push edx
// 00481c99  e800ef1a00           call 0x630b9e
// 00481c9e  a1a8db8b00           mov eax, dword ptr [0x8bdba8]
// 00481ca3  eb4c                 jmp 0x481cf1
// 00481ca5  8b0d4cdb8b00         mov ecx, dword ptr [0x8bdb4c]
// 00481cab  894e04               mov dword ptr [esi + 4], ecx
// 00481cae  eb44                 jmp 0x481cf4
// 00481cb0  8b1564db8b00         mov edx, dword ptr [0x8bdb64]
// 00481cb6  895604               mov dword ptr [esi + 4], edx
// 00481cb9  eb39                 jmp 0x481cf4
// 00481cbb  a840                 test al, 0x40
// 00481cbd  0f84fd000000         je 0x481dc0
// 00481cc3  b808000000           mov eax, 8
// 00481cc8  3945c4               cmp dword ptr [ebp - 0x3c], eax
// 00481ccb  0f85bb000000         jne 0x481d8c
// 00481cd1  3945c8               cmp dword ptr [ebp - 0x38], eax
// 00481cd4  0f85b2000000         jne 0x481d8c
// 00481cda  3945cc               cmp dword ptr [ebp - 0x34], eax
// 00481cdd  0f85a9000000         jne 0x481d8c
// 00481ce3  395dd0               cmp dword ptr [ebp - 0x30], ebx
// 00481ce6  0f85a0000000         jne 0x481d8c
// 00481cec  a19cdb8b00           mov eax, dword ptr [0x8bdb9c]
// 00481cf1  894604               mov dword ptr [esi + 4], eax
// 00481cf4  8b4558               mov eax, dword ptr [ebp + 0x58]
// 00481cf7  3bc3                 cmp eax, ebx
// 00481cf9  7615                 jbe 0x481d10
// 00481cfb  6808c58400           push 0x84c508
// 00481d00  8d4dec               lea ecx, [ebp - 0x14]
// 00481d03  51                   push ecx
// 00481d04  c745ecc8a47900       mov dword ptr [ebp - 0x14], 0x79a4c8
// 00481d0b  e88eee1a00           call 0x630b9e
// 00481d10  8b5568               mov edx, dword ptr [ebp + 0x68]
// 00481d13  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 00481d16  8b7d64               mov edi, dword ptr [ebp + 0x64]
// 00481d19  03c2                 add eax, edx
// 00481d1b  2bc8                 sub ecx, eax
// 00481d1d  51                   push ecx
// 00481d1e  81c780000000         add edi, 0x80
// 00481d24  e809e21a00           call 0x62ff32
// 00481d29  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 00481d2c  2b5568               sub edx, dword ptr [ebp + 0x68]
// 00481d2f  83c404               add esp, 4
// 00481d32  2b5558               sub edx, dword ptr [ebp + 0x58]
// 00481d35  8906                 mov dword ptr [esi], eax
// 00481d37  52                   push edx
// 00481d38  57                   push edi
// 00481d39  50                   push eax
// 00481d3a  e80df01a00           call 0x630d4c
// 00481d3f  83c40c               add esp, 0xc
// 00481d42  f78570ffffff00000200 test dword ptr [ebp - 0x90], 0x20000
// 00481d4c  7408                 je 0x481d56
// 00481d4e  8b4584               mov eax, dword ptr [ebp - 0x7c]
// 00481d51  894610               mov dword ptr [esi + 0x10], eax
// 00481d54  eb07                 jmp 0x481d5d
// 00481d56  c7461001000000       mov dword ptr [esi + 0x10], 1
// 00481d5d  8b8d78ffffff         mov ecx, dword ptr [ebp - 0x88]
// 00481d63  8b9574ffffff         mov edx, dword ptr [ebp - 0x8c]
// 00481d69  894e08               mov dword ptr [esi + 8], ecx
// 00481d6c  8d4d08               lea ecx, [ebp + 8]
// 00481d6f  89560c               mov dword ptr [esi + 0xc], edx
// 00481d72  c645fc01             mov byte ptr [ebp - 4], 1
// 00481d76  ff15ace67700         call dword ptr [0x77e6ac]
// 00481d7c  8d4d24               lea ecx, [ebp + 0x24]
// 00481d7f  885dfc               mov byte ptr [ebp - 4], bl
// 00481d82  e859a10800           call 0x50bee0
// 00481d87  e9ab000000           jmp 0x481e37
// 00481d8c  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00481d90  7205                 jb 0x481d97
// 00481d92  8b7f04               mov edi, dword ptr [edi + 4]
// 00481d95  eb03                 jmp 0x481d9a
// 00481d97  83c704               add edi, 4
// 00481d9a  57                   push edi
// 00481d9b  8d85fcfeffff         lea eax, [ebp - 0x104]
// 00481da1  6818a57900           push 0x79a518
// 00481da6  50                   push eax
// 00481da7  e814fa0700           call 0x5017c0
// 00481dac  83c40c               add esp, 0xc
// 00481daf  6840c58400           push 0x84c540
// 00481db4  8d8dfcfeffff         lea ecx, [ebp - 0x104]
// 00481dba  51                   push ecx
// 00481dbb  e8deed1a00           call 0x630b9e
// 00481dc0  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 00481dc4  7205                 jb 0x481dcb
// 00481dc6  8b7f04               mov edi, dword ptr [edi + 4]
// 00481dc9  eb03                 jmp 0x481dce
// 00481dcb  83c704               add edi, 4
// 00481dce  57                   push edi
// 00481dcf  8d9518ffffff         lea edx, [ebp - 0xe8]
// 00481dd5  68eca47900           push 0x79a4ec
// 00481dda  52                   push edx
// 00481ddb  e8e0f90700           call 0x5017c0
// 00481de0  83c40c               add esp, 0xc
// 00481de3  6840c58400           push 0x84c540
// 00481de8  8d8518ffffff         lea eax, [ebp - 0xe8]
// 00481dee  50                   push eax
// 00481def  e8aaed1a00           call 0x630b9e
// library g3d-6.09/GLG3Dcpp\DDSTexture.cpp (function ??0DDSTexture@Texture@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/DDSTexture.cpp
