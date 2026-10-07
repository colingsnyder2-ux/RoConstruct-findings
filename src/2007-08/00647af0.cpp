// roc 2007-08 00647af0  unit: CXTPCommandBar  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00647af0
//
// 00647af0  83ec18               sub esp, 0x18
// 00647af3  53                   push ebx
// 00647af4  57                   push edi
// 00647af5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00647af9  33db                 xor ebx, ebx
// 00647afb  3bfb                 cmp edi, ebx
// 00647afd  895c2414             mov dword ptr [esp + 0x14], ebx
// 00647b01  0f8470020000         je 0x647d77
// 00647b07  395c2438             cmp dword ptr [esp + 0x38], ebx
// 00647b0b  0f8466020000         je 0x647d77
// 00647b11  55                   push ebp
// 00647b12  56                   push esi
// 00647b13  68ffffff00           push 0xffffff
// 00647b18  57                   push edi
// 00647b19  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00647b1d  895c2418             mov dword ptr [esp + 0x18], ebx
// 00647b21  895c2420             mov dword ptr [esp + 0x20], ebx
// 00647b25  ff150cd17700         call dword ptr [0x77d10c]
// 00647b2b  53                   push ebx
// 00647b2c  57                   push edi
// 00647b2d  89442428             mov dword ptr [esp + 0x28], eax
// 00647b31  ff1510d17700         call dword ptr [0x77d110]
// 00647b37  8b3548d17700         mov esi, dword ptr [0x77d148]
// 00647b3d  57                   push edi
// 00647b3e  89442428             mov dword ptr [esp + 0x28], eax
// 00647b42  ffd6                 call esi
// 00647b44  8be8                 mov ebp, eax
// 00647b46  3beb                 cmp ebp, ebx
// 00647b48  0f8403020000         je 0x647d51
// 00647b4e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00647b52  50                   push eax
// 00647b53  ffd6                 call esi
// 00647b55  8bf0                 mov esi, eax
// 00647b57  3bf3                 cmp esi, ebx
// 00647b59  0f84b4010000         je 0x647d13
// 00647b5f  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00647b63  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00647b67  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00647b6b  53                   push ebx
// 00647b6c  57                   push edi
// 00647b6d  51                   push ecx
// 00647b6e  ff1514d17700         call dword ptr [0x77d114]
// 00647b74  85c0                 test eax, eax
// 00647b76  89442410             mov dword ptr [esp + 0x10], eax
// 00647b7a  0f848f010000         je 0x647d0f
// 00647b80  8bd0                 mov edx, eax
// 00647b82  52                   push edx
// 00647b83  56                   push esi
// 00647b84  ff1528d17700         call dword ptr [0x77d128]
// 00647b8a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00647b8e  8b542440             mov edx, dword ptr [esp + 0x40]
// 00647b92  682000cc00           push 0xcc0020
// 00647b97  8944241c             mov dword ptr [esp + 0x1c], eax
// 00647b9b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00647b9f  50                   push eax
// 00647ba0  51                   push ecx
// 00647ba1  52                   push edx
// 00647ba2  53                   push ebx
// 00647ba3  57                   push edi
// 00647ba4  6a00                 push 0
// 00647ba6  6a00                 push 0
// 00647ba8  56                   push esi
// 00647ba9  ff153cd17700         call dword ptr [0x77d13c]
// 00647baf  85c0                 test eax, eax
// 00647bb1  0f8458010000         je 0x647d0f
// 00647bb7  6a00                 push 0
// 00647bb9  6a01                 push 1
// 00647bbb  6a01                 push 1
// 00647bbd  53                   push ebx
// 00647bbe  57                   push edi
// 00647bbf  ff15acd07700         call dword ptr [0x77d0ac]
// 00647bc5  85c0                 test eax, eax
// 00647bc7  89442414             mov dword ptr [esp + 0x14], eax
// 00647bcb  0f843e010000         je 0x647d0f
// 00647bd1  50                   push eax
// 00647bd2  55                   push ebp
// 00647bd3  ff1528d17700         call dword ptr [0x77d128]
// 00647bd9  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00647bdd  51                   push ecx
// 00647bde  56                   push esi
// 00647bdf  89442448             mov dword ptr [esp + 0x48], eax
// 00647be3  ff150cd17700         call dword ptr [0x77d10c]
// 00647be9  682000cc00           push 0xcc0020
// 00647bee  6a00                 push 0
// 00647bf0  6a00                 push 0
// 00647bf2  56                   push esi
// 00647bf3  53                   push ebx
// 00647bf4  57                   push edi
// 00647bf5  6a00                 push 0
// 00647bf7  6a00                 push 0
// 00647bf9  55                   push ebp
// 00647bfa  ff153cd17700         call dword ptr [0x77d13c]
// 00647c00  85c0                 test eax, eax
// 00647c02  0f84f7000000         je 0x647cff
// 00647c08  837c245400           cmp dword ptr [esp + 0x54], 0
// 00647c0d  7434                 je 0x647c43
// 00647c0f  6a00                 push 0
// 00647c11  56                   push esi
// 00647c12  ff150cd17700         call dword ptr [0x77d10c]
// 00647c18  68ffffff00           push 0xffffff
// 00647c1d  56                   push esi
// 00647c1e  ff1510d17700         call dword ptr [0x77d110]
// 00647c24  68c6008800           push 0x8800c6
// 00647c29  6a00                 push 0
// 00647c2b  6a00                 push 0
// 00647c2d  55                   push ebp
// 00647c2e  53                   push ebx
// 00647c2f  57                   push edi
// 00647c30  6a00                 push 0
// 00647c32  6a00                 push 0
// 00647c34  56                   push esi
// 00647c35  ff153cd17700         call dword ptr [0x77d13c]
// 00647c3b  85c0                 test eax, eax
// 00647c3d  0f84bc000000         je 0x647cff
// 00647c43  8b442438             mov eax, dword ptr [esp + 0x38]
// 00647c47  3bc7                 cmp eax, edi
// 00647c49  7552                 jne 0x647c9d
// 00647c4b  395c243c             cmp dword ptr [esp + 0x3c], ebx
// 00647c4f  754c                 jne 0x647c9d
// 00647c51  8b542434             mov edx, dword ptr [esp + 0x34]
// 00647c55  8b442430             mov eax, dword ptr [esp + 0x30]
// 00647c59  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00647c5d  68c6008800           push 0x8800c6
// 00647c62  6a00                 push 0
// 00647c64  6a00                 push 0
// 00647c66  55                   push ebp
// 00647c67  53                   push ebx
// 00647c68  57                   push edi
// 00647c69  52                   push edx
// 00647c6a  50                   push eax
// 00647c6b  51                   push ecx
// 00647c6c  ff153cd17700         call dword ptr [0x77d13c]
// 00647c72  85c0                 test eax, eax
// 00647c74  0f8485000000         je 0x647cff
// 00647c7a  8b542434             mov edx, dword ptr [esp + 0x34]
// 00647c7e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00647c82  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00647c86  688600ee00           push 0xee0086
// 00647c8b  6a00                 push 0
// 00647c8d  6a00                 push 0
// 00647c8f  56                   push esi
// 00647c90  53                   push ebx
// 00647c91  57                   push edi
// 00647c92  52                   push edx
// 00647c93  50                   push eax
// 00647c94  51                   push ecx
// 00647c95  ff153cd17700         call dword ptr [0x77d13c]
// 00647c9b  eb56                 jmp 0x647cf3
// 00647c9d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00647ca1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00647ca5  68c6008800           push 0x8800c6
// 00647caa  53                   push ebx
// 00647cab  57                   push edi
// 00647cac  6a00                 push 0
// 00647cae  6a00                 push 0
// 00647cb0  55                   push ebp
// 00647cb1  52                   push edx
// 00647cb2  8b542448             mov edx, dword ptr [esp + 0x48]
// 00647cb6  50                   push eax
// 00647cb7  8b442454             mov eax, dword ptr [esp + 0x54]
// 00647cbb  50                   push eax
// 00647cbc  51                   push ecx
// 00647cbd  52                   push edx
// 00647cbe  ff1538d17700         call dword ptr [0x77d138]
// 00647cc4  85c0                 test eax, eax
// 00647cc6  7437                 je 0x647cff
// 00647cc8  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00647ccc  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00647cd0  8b542434             mov edx, dword ptr [esp + 0x34]
// 00647cd4  688600ee00           push 0xee0086
// 00647cd9  53                   push ebx
// 00647cda  57                   push edi
// 00647cdb  6a00                 push 0
// 00647cdd  6a00                 push 0
// 00647cdf  56                   push esi
// 00647ce0  50                   push eax
// 00647ce1  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00647ce5  51                   push ecx
// 00647ce6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00647cea  52                   push edx
// 00647ceb  50                   push eax
// 00647cec  51                   push ecx
// 00647ced  ff1538d17700         call dword ptr [0x77d138]
// 00647cf3  85c0                 test eax, eax
// 00647cf5  7408                 je 0x647cff
// 00647cf7  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00647cff  8b442440             mov eax, dword ptr [esp + 0x40]
// 00647d03  85c0                 test eax, eax
// 00647d05  7408                 je 0x647d0f
// 00647d07  50                   push eax
// 00647d08  55                   push ebp
// 00647d09  ff1528d17700         call dword ptr [0x77d128]
// 00647d0f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00647d13  8b1d18d17700         mov ebx, dword ptr [0x77d118]
// 00647d19  55                   push ebp
// 00647d1a  ffd3                 call ebx
// 00647d1c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00647d20  85ed                 test ebp, ebp
// 00647d22  7417                 je 0x647d3b
// 00647d24  8b442418             mov eax, dword ptr [esp + 0x18]
// 00647d28  85c0                 test eax, eax
// 00647d2a  7408                 je 0x647d34
// 00647d2c  50                   push eax
// 00647d2d  56                   push esi
// 00647d2e  ff1528d17700         call dword ptr [0x77d128]
// 00647d34  55                   push ebp
// 00647d35  ff15c8d07700         call dword ptr [0x77d0c8]
// 00647d3b  85f6                 test esi, esi
// 00647d3d  7403                 je 0x647d42
// 00647d3f  56                   push esi
// 00647d40  ffd3                 call ebx
// 00647d42  8b442414             mov eax, dword ptr [esp + 0x14]
// 00647d46  85c0                 test eax, eax
// 00647d48  7407                 je 0x647d51
// 00647d4a  50                   push eax
// 00647d4b  ff15c8d07700         call dword ptr [0x77d0c8]
// 00647d51  8b542420             mov edx, dword ptr [esp + 0x20]
// 00647d55  52                   push edx
// 00647d56  57                   push edi
// 00647d57  ff150cd17700         call dword ptr [0x77d10c]
// 00647d5d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00647d61  50                   push eax
// 00647d62  57                   push edi
// 00647d63  ff1510d17700         call dword ptr [0x77d110]
// 00647d69  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00647d6d  5e                   pop esi
// 00647d6e  5d                   pop ebp
// 00647d6f  5f                   pop edi
// 00647d70  5b                   pop ebx
// 00647d71  83c418               add esp, 0x18
// 00647d74  c22c00               ret 0x2c
// 00647d77  5f                   pop edi
// 00647d78  33c0                 xor eax, eax
// 00647d7a  5b                   pop ebx
// 00647d7b  83c418               add esp, 0x18
// 00647d7e  c22c00               ret 0x2c
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?McTransparentBlt@CXTPImageManager@@ABEHPAUHDC__@@HHHH0HHHHI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
