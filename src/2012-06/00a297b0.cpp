// roc 2012-06 00a297b0  unit: CXTPReportPaintManager  size: 2184 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a297b0
//
// 00a297b0  83ec50               sub esp, 0x50
// 00a297b3  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a297b8  33c4                 xor eax, esp
// 00a297ba  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a297be  53                   push ebx
// 00a297bf  55                   push ebp
// 00a297c0  56                   push esi
// 00a297c1  57                   push edi
// 00a297c2  8bf1                 mov esi, ecx
// 00a297c4  e8675cf9ff           call 0x9bf430
// 00a297c9  e89240f9ff           call 0x9bd860
// 00a297ce  6a0f                 push 0xf
// 00a297d0  8bc8                 mov ecx, eax
// 00a297d2  e80938f9ff           call 0x9bcfe0
// 00a297d7  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00a297dd  e87e40f9ff           call 0x9bd860
// 00a297e2  6a12                 push 0x12
// 00a297e4  8bc8                 mov ecx, eax
// 00a297e6  e8f537f9ff           call 0x9bcfe0
// 00a297eb  898628010000         mov dword ptr [esi + 0x128], eax
// 00a297f1  e86a40f9ff           call 0x9bd860
// 00a297f6  6a10                 push 0x10
// 00a297f8  8bc8                 mov ecx, eax
// 00a297fa  e8e137f9ff           call 0x9bcfe0
// 00a297ff  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 00a29805  e85640f9ff           call 0x9bd860
// 00a2980a  6a0d                 push 0xd
// 00a2980c  8bc8                 mov ecx, eax
// 00a2980e  e8cd37f9ff           call 0x9bcfe0
// 00a29813  894644               mov dword ptr [esi + 0x44], eax
// 00a29816  e84540f9ff           call 0x9bd860
// 00a2981b  6a0e                 push 0xe
// 00a2981d  8bc8                 mov ecx, eax
// 00a2981f  e8bc37f9ff           call 0x9bcfe0
// 00a29824  894668               mov dword ptr [esi + 0x68], eax
// 00a29827  e83440f9ff           call 0x9bd860
// 00a2982c  6a08                 push 8
// 00a2982e  8bc8                 mov ecx, eax
// 00a29830  e8ab37f9ff           call 0x9bcfe0
// 00a29835  89465c               mov dword ptr [esi + 0x5c], eax
// 00a29838  e82340f9ff           call 0x9bd860
// 00a2983d  6a14                 push 0x14
// 00a2983f  8bc8                 mov ecx, eax
// 00a29841  e89a37f9ff           call 0x9bcfe0
// 00a29846  8986e0000000         mov dword ptr [esi + 0xe0], eax
// 00a2984c  e80f40f9ff           call 0x9bd860
// 00a29851  6a05                 push 5
// 00a29853  8bc8                 mov ecx, eax
// 00a29855  e88637f9ff           call 0x9bcfe0
// 00a2985a  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00a29860  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 00a29866  83f8ff               cmp eax, -1
// 00a29869  7506                 jne 0xa29871
// 00a2986b  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 00a29871  898604010000         mov dword ptr [esi + 0x104], eax
// 00a29877  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 00a2987d  83f8ff               cmp eax, -1
// 00a29880  7506                 jne 0xa29888
// 00a29882  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 00a29888  898680000000         mov dword ptr [esi + 0x80], eax
// 00a2988e  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00a29894  83f8ff               cmp eax, -1
// 00a29897  7506                 jne 0xa2989f
// 00a29899  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 00a2989f  894650               mov dword ptr [esi + 0x50], eax
// 00a298a2  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 00a298a8  83f8ff               cmp eax, -1
// 00a298ab  7506                 jne 0xa298b3
// 00a298ad  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 00a298b3  894674               mov dword ptr [esi + 0x74], eax
// 00a298b6  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00a298bc  83f8ff               cmp eax, -1
// 00a298bf  7506                 jne 0xa298c7
// 00a298c1  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 00a298c7  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 00a298cd  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 00a298d3  83f8ff               cmp eax, -1
// 00a298d6  7506                 jne 0xa298de
// 00a298d8  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 00a298de  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00a298e4  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 00a298ea  83f8ff               cmp eax, -1
// 00a298ed  7506                 jne 0xa298f5
// 00a298ef  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 00a298f5  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 00a298fb  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00a29901  83f8ff               cmp eax, -1
// 00a29904  7506                 jne 0xa2990c
// 00a29906  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 00a2990c  898698000000         mov dword ptr [esi + 0x98], eax
// 00a29912  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00a29918  83f8ff               cmp eax, -1
// 00a2991b  7506                 jne 0xa29923
// 00a2991d  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 00a29923  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 00a29929  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 00a2992f  83f8ff               cmp eax, -1
// 00a29932  7506                 jne 0xa2993a
// 00a29934  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 00a2993a  898640010000         mov dword ptr [esi + 0x140], eax
// 00a29940  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 00a29946  83f8ff               cmp eax, -1
// 00a29949  7506                 jne 0xa29951
// 00a2994b  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 00a29951  89864c010000         mov dword ptr [esi + 0x14c], eax
// 00a29957  c786f80000000000ff00 mov dword ptr [esi + 0xf8], 0xff0000
// 00a29961  c78610010000f5f5f500 mov dword ptr [esi + 0x110], 0xf5f5f5
// 00a2996b  c786ec000000ff000000 mov dword ptr [esi + 0xec], 0xff
// 00a29975  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00a2997b  83f8ff               cmp eax, -1
// 00a2997e  7506                 jne 0xa29986
// 00a29980  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 00a29986  8986d0010000         mov dword ptr [esi + 0x1d0], eax
// 00a2998c  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00a29992  83f8ff               cmp eax, -1
// 00a29995  7506                 jne 0xa2999d
// 00a29997  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 00a2999d  6848f7c100           push 0xc1f748
// 00a299a2  6a00                 push 0
// 00a299a4  8d8ec0020000         lea ecx, [esi + 0x2c0]
// 00a299aa  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 00a299b0  e8fbbffcff           call 0x9f59b0
// 00a299b5  68ccd0c000           push 0xc0d0cc
// 00a299ba  6a00                 push 0
// 00a299bc  8d8ecc020000         lea ecx, [esi + 0x2cc]
// 00a299c2  e8e9bffcff           call 0x9f59b0
// 00a299c7  681ccfc100           push 0xc1cf1c
// 00a299cc  6a00                 push 0
// 00a299ce  8d8ed8020000         lea ecx, [esi + 0x2d8]
// 00a299d4  e8d7bffcff           call 0x9f59b0
// 00a299d9  e8823ef9ff           call 0x9bd860
// 00a299de  8bc8                 mov ecx, eax
// 00a299e0  e8db38f9ff           call 0x9bd2c0
// 00a299e5  bbafba9100           mov ebx, 0x91baaf
// 00a299ea  bfe5e5eb00           mov edi, 0xebe5e5
// 00a299ef  bdbedafb00           mov ebp, 0xfbdabe
// 00a299f4  85c0                 test eax, eax
// 00a299f6  0f8586000000         jne 0xa29a82
// 00a299fc  e85f3ef9ff           call 0x9bd860
// 00a29a01  8bc8                 mov ecx, eax
// 00a29a03  e8083cf9ff           call 0x9bd610
// 00a29a08  48                   dec eax
// 00a29a09  83f804               cmp eax, 4
// 00a29a0c  7774                 ja 0xa29a82
// 00a29a0e  ff248510a0a200       jmp dword ptr [eax*4 + 0xa2a010]
// 00a29a15  c786bc0000007ba4e000 mov dword ptr [esi + 0xbc], 0xe0a47b
// 00a29a1f  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 00a29a25  c786980000003768b900 mov dword ptr [esi + 0x98], 0xb96837
// 00a29a2f  c74650eae9e100       mov dword ptr [esi + 0x50], 0xe1e9ea
// 00a29a36  eb40                 jmp 0xa29a78
// 00a29a38  c786bc000000b5c48f00 mov dword ptr [esi + 0xbc], 0x8fc4b5
// 00a29a42  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 00a29a48  c7869800000073895400 mov dword ptr [esi + 0x98], 0x548973
// 00a29a52  c74650eae9e100       mov dword ptr [esi + 0x50], 0xe1e9ea
// 00a29a59  eb1d                 jmp 0xa29a78
// 00a29a5b  c786bc000000a5a4bd00 mov dword ptr [esi + 0xbc], 0xbda4a5
// 00a29a65  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 00a29a6b  c78698000000706f9100 mov dword ptr [esi + 0x98], 0x916f70
// 00a29a75  897e50               mov dword ptr [esi + 0x50], edi
// 00a29a78  c78604010000fdeec900 mov dword ptr [esi + 0x104], 0xc9eefd
// 00a29a82  8b86bc020000         mov eax, dword ptr [esi + 0x2bc]
// 00a29a88  83f804               cmp eax, 4
// 00a29a8b  0f8565030000         jne 0xa29df6
// 00a29a91  83befc010000ff       cmp dword ptr [esi + 0x1fc], -1
// 00a29a98  0f84d8010000         je 0xa29c76
// 00a29a9e  e8edd6faff           call 0x9d7190
// 00a29aa3  8b86fc010000         mov eax, dword ptr [esi + 0x1fc]
// 00a29aa9  50                   push eax
// 00a29aaa  e871a8faff           call 0x9d4320
// 00a29aaf  8bd8                 mov ebx, eax
// 00a29ab1  89442418             mov dword ptr [esp + 0x18], eax
// 00a29ab5  c1eb08               shr ebx, 8
// 00a29ab8  e8d3d6faff           call 0x9d7190
// 00a29abd  e8ced6faff           call 0x9d7190
// 00a29ac2  d9057027b600         fld dword ptr [0xb62770]
// 00a29ac8  0fb6fb               movzx edi, bl
// 00a29acb  d91c24               fstp dword ptr [esp]
// 00a29ace  0fb65c2418           movzx ebx, byte ptr [esp + 0x18]
// 00a29ad3  8bef                 mov ebp, edi
// 00a29ad5  81cd00ef0000         or ebp, 0xef00
// 00a29adb  8bc7                 mov eax, edi
// 00a29add  0d00d40000           or eax, 0xd400
// 00a29ae2  c1e508               shl ebp, 8
// 00a29ae5  c1e008               shl eax, 8
// 00a29ae8  0beb                 or ebp, ebx
// 00a29aea  0bc3                 or eax, ebx
// 00a29aec  55                   push ebp
// 00a29aed  897c2418             mov dword ptr [esp + 0x18], edi
// 00a29af1  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a29af5  e866aafaff           call 0x9d4560
// 00a29afa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a29afe  83c404               add esp, 4
// 00a29b01  50                   push eax
// 00a29b02  51                   push ecx
// 00a29b03  e858aafaff           call 0x9d4560
// 00a29b08  83c404               add esp, 4
// 00a29b0b  50                   push eax
// 00a29b0c  8d8e94010000         lea ecx, [esi + 0x194]
// 00a29b12  e82932f9ff           call 0x9bcd40
// 00a29b17  e874d6faff           call 0x9d7190
// 00a29b1c  e86fd6faff           call 0x9d7190
// 00a29b21  d9057027b600         fld dword ptr [0xb62770]
// 00a29b27  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a29b2b  51                   push ecx
// 00a29b2c  d91c24               fstp dword ptr [esp]
// 00a29b2f  52                   push edx
// 00a29b30  e82baafaff           call 0x9d4560
// 00a29b35  83c404               add esp, 4
// 00a29b38  50                   push eax
// 00a29b39  55                   push ebp
// 00a29b3a  e821aafaff           call 0x9d4560
// 00a29b3f  83c404               add esp, 4
// 00a29b42  50                   push eax
// 00a29b43  8d8e54010000         lea ecx, [esi + 0x154]
// 00a29b49  e8f231f9ff           call 0x9bcd40
// 00a29b4e  e83dd6faff           call 0x9d7190
// 00a29b53  db442410             fild dword ptr [esp + 0x10]
// 00a29b57  d97c2414             fnstcw word ptr [esp + 0x14]
// 00a29b5b  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 00a29b60  dd542418             fst qword ptr [esp + 0x18]
// 00a29b64  dc0d40f7c100         fmul qword ptr [0xc1f740]
// 00a29b6a  0d000c0000           or eax, 0xc00
// 00a29b6f  89442410             mov dword ptr [esp + 0x10], eax
// 00a29b73  d96c2410             fldcw word ptr [esp + 0x10]
// 00a29b77  db5c2410             fistp dword ptr [esp + 0x10]
// 00a29b7b  0fb6442410           movzx eax, byte ptr [esp + 0x10]
// 00a29b80  0fb6c8               movzx ecx, al
// 00a29b83  d96c2414             fldcw word ptr [esp + 0x14]
// 00a29b87  81c900910000         or ecx, 0x9100
// 00a29b8d  c1e108               shl ecx, 8
// 00a29b90  0bcb                 or ecx, ebx
// 00a29b92  51                   push ecx
// 00a29b93  e8c8a9faff           call 0x9d4560
// 00a29b98  8986b8010000         mov dword ptr [esi + 0x1b8], eax
// 00a29b9e  e8edd5faff           call 0x9d7190
// 00a29ba3  8bd7                 mov edx, edi
// 00a29ba5  81ca00c00000         or edx, 0xc000
// 00a29bab  c1e208               shl edx, 8
// 00a29bae  0bd3                 or edx, ebx
// 00a29bb0  52                   push edx
// 00a29bb1  e8aaa9faff           call 0x9d4560
// 00a29bb6  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 00a29bbc  e8cfd5faff           call 0x9d7190
// 00a29bc1  81cf00e30000         or edi, 0xe300
// 00a29bc7  c1e708               shl edi, 8
// 00a29bca  0bfb                 or edi, ebx
// 00a29bcc  57                   push edi
// 00a29bcd  e88ea9faff           call 0x9d4560
// 00a29bd2  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 00a29bd8  e8b3d5faff           call 0x9d7190
// 00a29bdd  dd442424             fld qword ptr [esp + 0x24]
// 00a29be1  dc0d6825bc00         fmul qword ptr [0xbc2568]
// 00a29be7  d97c2420             fnstcw word ptr [esp + 0x20]
// 00a29beb  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 00a29bf0  0d000c0000           or eax, 0xc00
// 00a29bf5  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a29bf9  d96c241c             fldcw word ptr [esp + 0x1c]
// 00a29bfd  db5c241c             fistp dword ptr [esp + 0x1c]
// 00a29c01  0fb644241c           movzx eax, byte ptr [esp + 0x1c]
// 00a29c06  0fb6c8               movzx ecx, al
// 00a29c09  d96c2420             fldcw word ptr [esp + 0x20]
// 00a29c0d  81c9004f0000         or ecx, 0x4f00
// 00a29c13  c1e108               shl ecx, 8
// 00a29c16  0bcb                 or ecx, ebx
// 00a29c18  51                   push ecx
// 00a29c19  e842a9faff           call 0x9d4560
// 00a29c1e  8986d0010000         mov dword ptr [esi + 0x1d0], eax
// 00a29c24  e867d5faff           call 0x9d7190
// 00a29c29  dd442428             fld qword ptr [esp + 0x28]
// 00a29c2d  dc0d38f7c100         fmul qword ptr [0xc1f738]
// 00a29c33  d97c2424             fnstcw word ptr [esp + 0x24]
// 00a29c37  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 00a29c3c  0d000c0000           or eax, 0xc00
// 00a29c41  89442420             mov dword ptr [esp + 0x20], eax
// 00a29c45  d96c2420             fldcw word ptr [esp + 0x20]
// 00a29c49  db5c2420             fistp dword ptr [esp + 0x20]
// 00a29c4d  8a542420             mov dl, byte ptr [esp + 0x20]
// 00a29c51  0fb6c2               movzx eax, dl
// 00a29c54  0d00d00000           or eax, 0xd000
// 00a29c59  d96c2424             fldcw word ptr [esp + 0x24]
// 00a29c5d  c1e008               shl eax, 8
// 00a29c60  0bc3                 or eax, ebx
// 00a29c62  50                   push eax
// 00a29c63  e8f8a8faff           call 0x9d4560
// 00a29c68  83c414               add esp, 0x14
// 00a29c6b  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00a29c71  e93b010000           jmp 0xa29db1
// 00a29c76  e8e53bf9ff           call 0x9bd860
// 00a29c7b  8bc8                 mov ecx, eax
// 00a29c7d  e88e39f9ff           call 0x9bd610
// 00a29c82  d9057027b600         fld dword ptr [0xb62770]
// 00a29c88  83e802               sub eax, 2
// 00a29c8b  51                   push ecx
// 00a29c8c  d91c24               fstp dword ptr [esp]
// 00a29c8f  8d8e94010000         lea ecx, [esi + 0x194]
// 00a29c95  0f84ba000000         je 0xa29d55
// 00a29c9b  83e801               sub eax, 1
// 00a29c9e  7461                 je 0xa29d01
// 00a29ca0  68fcfdff00           push 0xfffdfc
// 00a29ca5  68c4ddff00           push 0xffddc4
// 00a29caa  e89130f9ff           call 0x9bcd40
// 00a29caf  d9057027b600         fld dword ptr [0xb62770]
// 00a29cb5  8d8e54010000         lea ecx, [esi + 0x154]
// 00a29cbb  51                   push ecx
// 00a29cbc  d91c24               fstp dword ptr [esp]
// 00a29cbf  68c4ddff00           push 0xffddc4
// 00a29cc4  68fcfdff00           push 0xfffdfc
// 00a29cc9  e87230f9ff           call 0x9bcd40
// 00a29cce  c786b80100006593cf00 mov dword ptr [esi + 0x1b8], 0xcf9365
// 00a29cd8  c786c40100009ac6ff00 mov dword ptr [esi + 0x1c4], 0xffc69a
// 00a29ce2  c786c8000000e3efff00 mov dword ptr [esi + 0xc8], 0xffefe3
// 00a29cec  c786d0010000324b2c00 mov dword ptr [esi + 0x1d0], 0x2c4b32
// 00a29cf6  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 00a29cfc  e9b0000000           jmp 0xa29db1
// 00a29d01  68fdfdfd00           push 0xfdfdfd
// 00a29d06  68dddddd00           push 0xdddddd
// 00a29d0b  e83030f9ff           call 0x9bcd40
// 00a29d10  d9057027b600         fld dword ptr [0xb62770]
// 00a29d16  8d8e54010000         lea ecx, [esi + 0x154]
// 00a29d1c  51                   push ecx
// 00a29d1d  d91c24               fstp dword ptr [esp]
// 00a29d20  68dddddd00           push 0xdddddd
// 00a29d25  68fdfdfd00           push 0xfdfdfd
// 00a29d2a  e81130f9ff           call 0x9bcd40
// 00a29d2f  c786b801000093939300 mov dword ptr [esi + 0x1b8], 0x939393
// 00a29d39  c786c4010000c6c6c600 mov dword ptr [esi + 0x1c4], 0xc6c6c6
// 00a29d43  c786c8000000efefef00 mov dword ptr [esi + 0xc8], 0xefefef
// 00a29d4d  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 00a29d53  eb52                 jmp 0xa29da7
// 00a29d55  68fdfdfd00           push 0xfdfdfd
// 00a29d5a  68a5b87200           push 0x72b8a5
// 00a29d5f  e8dc2ff9ff           call 0x9bcd40
// 00a29d64  d9057027b600         fld dword ptr [0xb62770]
// 00a29d6a  8d8e54010000         lea ecx, [esi + 0x154]
// 00a29d70  51                   push ecx
// 00a29d71  d91c24               fstp dword ptr [esp]
// 00a29d74  68a5b87200           push 0x72b8a5
// 00a29d79  68fdfdfd00           push 0xfdfdfd
// 00a29d7e  e8bd2ff9ff           call 0x9bcd40
// 00a29d83  c786b801000060805800 mov dword ptr [esi + 0x1b8], 0x588060
// 00a29d8d  c786c401000078b76800 mov dword ptr [esi + 0x1c4], 0x68b778
// 00a29d97  c786c8000000d8e1bb00 mov dword ptr [esi + 0xc8], 0xbbe1d8
// 00a29da1  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 00a29da7  c786d00100004a4a4a00 mov dword ptr [esi + 0x1d0], 0x4a4a4a
// 00a29db1  8d8654010000         lea eax, [esi + 0x154]
// 00a29db7  50                   push eax
// 00a29db8  8d8e74010000         lea ecx, [esi + 0x174]
// 00a29dbe  e89d2ff9ff           call 0x9bcd60
// 00a29dc3  8b86d4010000         mov eax, dword ptr [esi + 0x1d4]
// 00a29dc9  83f8ff               cmp eax, -1
// 00a29dcc  7506                 jne 0xa29dd4
// 00a29dce  8b86d0010000         mov eax, dword ptr [esi + 0x1d0]
// 00a29dd4  898698000000         mov dword ptr [esi + 0x98], eax
// 00a29dda  8b86c8010000         mov eax, dword ptr [esi + 0x1c8]
// 00a29de0  83f8ff               cmp eax, -1
// 00a29de3  7506                 jne 0xa29deb
// 00a29de5  8b86c4010000         mov eax, dword ptr [esi + 0x1c4]
// 00a29deb  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 00a29df1  e9ac010000           jmp 0xa29fa2
// 00a29df6  83f803               cmp eax, 3
// 00a29df9  0f85a3010000         jne 0xa29fa2
// 00a29dff  e85c3af9ff           call 0x9bd860
// 00a29e04  6a0f                 push 0xf
// 00a29e06  8bc8                 mov ecx, eax
// 00a29e08  e8d331f9ff           call 0x9bcfe0
// 00a29e0d  8bd8                 mov ebx, eax
// 00a29e0f  e84c3af9ff           call 0x9bd860
// 00a29e14  6a05                 push 5
// 00a29e16  8bc8                 mov ecx, eax
// 00a29e18  e8c331f9ff           call 0x9bcfe0
// 00a29e1d  8be8                 mov ebp, eax
// 00a29e1f  e83c3af9ff           call 0x9bd860
// 00a29e24  6a0f                 push 0xf
// 00a29e26  8bc8                 mov ecx, eax
// 00a29e28  e8b331f9ff           call 0x9bcfe0
// 00a29e2d  89442410             mov dword ptr [esp + 0x10], eax
// 00a29e31  e82a3af9ff           call 0x9bd860
// 00a29e36  d9057027b600         fld dword ptr [0xb62770]
// 00a29e3c  51                   push ecx
// 00a29e3d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a29e41  d91c24               fstp dword ptr [esp]
// 00a29e44  53                   push ebx
// 00a29e45  68cd000000           push 0xcd
// 00a29e4a  55                   push ebp
// 00a29e4b  51                   push ecx
// 00a29e4c  8bc8                 mov ecx, eax
// 00a29e4e  8dbe54010000         lea edi, [esi + 0x154]
// 00a29e54  e8d730f9ff           call 0x9bcf30
// 00a29e59  50                   push eax
// 00a29e5a  8bcf                 mov ecx, edi
// 00a29e5c  e8df2ef9ff           call 0x9bcd40
// 00a29e61  e8fa39f9ff           call 0x9bd860
// 00a29e66  6a1f                 push 0x1f
// 00a29e68  8bc8                 mov ecx, eax
// 00a29e6a  8d9e74010000         lea ebx, [esi + 0x174]
// 00a29e70  e86b31f9ff           call 0x9bcfe0
// 00a29e75  50                   push eax
// 00a29e76  8bcb                 mov ecx, ebx
// 00a29e78  e83339f9ff           call 0x9bd7b0
// 00a29e7d  e8de39f9ff           call 0x9bd860
// 00a29e82  6a21                 push 0x21
// 00a29e84  8bc8                 mov ecx, eax
// 00a29e86  8dae94010000         lea ebp, [esi + 0x194]
// 00a29e8c  e84f31f9ff           call 0x9bcfe0
// 00a29e91  50                   push eax
// 00a29e92  8bcd                 mov ecx, ebp
// 00a29e94  e81739f9ff           call 0x9bd7b0
// 00a29e99  e8c239f9ff           call 0x9bd860
// 00a29e9e  6a1e                 push 0x1e
// 00a29ea0  8bc8                 mov ecx, eax
// 00a29ea2  e83931f9ff           call 0x9bcfe0
// 00a29ea7  8986b8010000         mov dword ptr [esi + 0x1b8], eax
// 00a29ead  e8ae39f9ff           call 0x9bd860
// 00a29eb2  6a27                 push 0x27
// 00a29eb4  8bc8                 mov ecx, eax
// 00a29eb6  e82531f9ff           call 0x9bcfe0
// 00a29ebb  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 00a29ec1  e89a39f9ff           call 0x9bd860
// 00a29ec6  8bc8                 mov ecx, eax
// 00a29ec8  e84337f9ff           call 0x9bd610
// 00a29ecd  48                   dec eax
// 00a29ece  83f804               cmp eax, 4
// 00a29ed1  0f87cb000000         ja 0xa29fa2
// 00a29ed7  ff248524a0a200       jmp dword ptr [eax*4 + 0xa2a024]
// 00a29ede  d9057027b600         fld dword ptr [0xb62770]
// 00a29ee4  51                   push ecx
// 00a29ee5  d91c24               fstp dword ptr [esp]
// 00a29ee8  6881a9e200           push 0xe2a981
// 00a29eed  68ddecfe00           push 0xfeecdd
// 00a29ef2  8bcf                 mov ecx, edi
// 00a29ef4  e8472ef9ff           call 0x9bcd40
// 00a29ef9  c786b80100003b619c00 mov dword ptr [esi + 0x1b8], 0x9c613b
// 00a29f03  c786c40100006a8ccb00 mov dword ptr [esi + 0x1c4], 0xcb8c6a
// 00a29f0d  eb5d                 jmp 0xa29f6c
// 00a29f0f  d9057027b600         fld dword ptr [0xb62770]
// 00a29f15  51                   push ecx
// 00a29f16  d91c24               fstp dword ptr [esp]
// 00a29f19  68b7c69100           push 0x91c6b7
// 00a29f1e  68f4f7de00           push 0xdef7f4
// 00a29f23  8bcf                 mov ecx, edi
// 00a29f25  e8162ef9ff           call 0x9bcd40
// 00a29f2a  b860805800           mov eax, 0x588060
// 00a29f2f  8986b8010000         mov dword ptr [esi + 0x1b8], eax
// 00a29f35  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 00a29f3b  eb2f                 jmp 0xa29f6c
// 00a29f3d  d9057027b600         fld dword ptr [0xb62770]
// 00a29f43  51                   push ecx
// 00a29f44  d91c24               fstp dword ptr [esp]
// 00a29f47  689997b500           push 0xb59799
// 00a29f4c  68f3f4fa00           push 0xfaf4f3
// 00a29f51  8bcf                 mov ecx, edi
// 00a29f53  e8e82df9ff           call 0x9bcd40
// 00a29f58  c786b80100007c7c9400 mov dword ptr [esi + 0x1b8], 0x947c7c
// 00a29f62  c786c40100006e6d8f00 mov dword ptr [esi + 0x1c4], 0x8f6d6e
// 00a29f6c  d9057027b600         fld dword ptr [0xb62770]
// 00a29f72  51                   push ecx
// 00a29f73  d91c24               fstp dword ptr [esp]
// 00a29f76  68ffcf8b00           push 0x8bcfff
// 00a29f7b  68fe8e4b00           push 0x4b8efe
// 00a29f80  8bcd                 mov ecx, ebp
// 00a29f82  e8b92df9ff           call 0x9bcd40
// 00a29f87  d9057027b600         fld dword ptr [0xb62770]
// 00a29f8d  51                   push ecx
// 00a29f8e  d91c24               fstp dword ptr [esp]
// 00a29f91  68ffd49700           push 0x97d4ff
// 00a29f96  68fff2c800           push 0xc8f2ff
// 00a29f9b  8bcb                 mov ecx, ebx
// 00a29f9d  e89e2df9ff           call 0x9bcd40
// 00a29fa2  8d8e8c020000         lea ecx, [esi + 0x28c]
// 00a29fa8  e81f87f5ff           call 0x9826cc
// 00a29fad  8d8e94020000         lea ecx, [esi + 0x294]
// 00a29fb3  e81487f5ff           call 0x9826cc
// 00a29fb8  8d8e9c020000         lea ecx, [esi + 0x29c]
// 00a29fbe  e80987f5ff           call 0x9826cc
// 00a29fc3  b80f000000           mov eax, 0xf
// 00a29fc8  8d542420             lea edx, [esp + 0x20]
// 00a29fcc  52                   push edx
// 00a29fcd  8986e8010000         mov dword ptr [esi + 0x1e8], eax
// 00a29fd3  8986f4010000         mov dword ptr [esi + 0x1f4], eax
// 00a29fd9  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a29fdc  6a3c                 push 0x3c
// 00a29fde  50                   push eax
// 00a29fdf  c786dc0100000000de00 mov dword ptr [esi + 0x1dc], 0xde0000
// 00a29fe9  ff155021b200         call dword ptr [0xb22150]
// 00a29fef  8d4c2420             lea ecx, [esp + 0x20]
// 00a29ff3  51                   push ecx
// 00a29ff4  8bce                 mov ecx, esi
// 00a29ff6  e895d2ffff           call 0xa27290
// 00a29ffb  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a29fff  5f                   pop edi
// 00a2a000  5e                   pop esi
// 00a2a001  5d                   pop ebp
// 00a2a002  5b                   pop ebx
// 00a2a003  33cc                 xor ecx, esp
// 00a2a005  e82d9af5ff           call 0x983a37
// 00a2a00a  83c450               add esp, 0x50
// 00a2a00d  c3                   ret 
// 00a2a00e  8bff                 mov edi, edi
// 00a2a010  159aa20038           adc eax, 0x3800a29a
// 00a2a015  9aa2005b9aa200       lcall 0xa2, 0x9a5b00a2
// 00a2a01c  159aa20015           adc eax, 0x1500a29a
// 00a2a021  9aa200de9ea200       lcall 0xa2, 0x9ede00a2
// 00a2a028  0f9fa2003d9fa2       setg byte ptr [edx - 0x5d60c300]
// 00a2a02f  00de                 add dh, bl
// 00a2a031  9e                   sahf 
// 00a2a032  a200de9ea2           mov byte ptr [0xa29ede00], al
// copied from an identical function in another client (function ?RefreshMetrics@CXTPReportPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp