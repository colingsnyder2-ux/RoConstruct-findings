// roc 2008-06 00786ae0  unit: CXTColorHex  size: 2261 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00786ae0
//
// 00786ae0  83ec40               sub esp, 0x40
// 00786ae3  53                   push ebx
// 00786ae4  8b5968               mov ebx, dword ptr [ecx + 0x68]
// 00786ae7  55                   push ebp
// 00786ae8  8b696c               mov ebp, dword ptr [ecx + 0x6c]
// 00786aeb  56                   push esi
// 00786aec  8b35b8208000         mov esi, dword ptr [0x8020b8]
// 00786af2  57                   push edi
// 00786af3  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00786af7  83eb02               sub ebx, 2
// 00786afa  4d                   dec ebp
// 00786afb  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00786b03  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786b07  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786b0a  6a00                 push 0
// 00786b0c  03c5                 add eax, ebp
// 00786b0e  50                   push eax
// 00786b0f  53                   push ebx
// 00786b10  51                   push ecx
// 00786b11  ffd6                 call esi
// 00786b13  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786b17  40                   inc eax
// 00786b18  83f80b               cmp eax, 0xb
// 00786b1b  89442410             mov dword ptr [esp + 0x10], eax
// 00786b1f  7ce2                 jl 0x786b03
// 00786b21  8b5704               mov edx, dword ptr [edi + 4]
// 00786b24  6a00                 push 0
// 00786b26  8d450b               lea eax, [ebp + 0xb]
// 00786b29  8d4b01               lea ecx, [ebx + 1]
// 00786b2c  50                   push eax
// 00786b2d  51                   push ecx
// 00786b2e  52                   push edx
// 00786b2f  894c2434             mov dword ptr [esp + 0x34], ecx
// 00786b33  ffd6                 call esi
// 00786b35  6a00                 push 0
// 00786b37  8d450b               lea eax, [ebp + 0xb]
// 00786b3a  50                   push eax
// 00786b3b  8b4704               mov eax, dword ptr [edi + 4]
// 00786b3e  8d4b02               lea ecx, [ebx + 2]
// 00786b41  51                   push ecx
// 00786b42  50                   push eax
// 00786b43  ffd6                 call esi
// 00786b45  6a00                 push 0
// 00786b47  8d450c               lea eax, [ebp + 0xc]
// 00786b4a  50                   push eax
// 00786b4b  8d4b03               lea ecx, [ebx + 3]
// 00786b4e  51                   push ecx
// 00786b4f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786b52  51                   push ecx
// 00786b53  ffd6                 call esi
// 00786b55  8b5704               mov edx, dword ptr [edi + 4]
// 00786b58  6a00                 push 0
// 00786b5a  8d450c               lea eax, [ebp + 0xc]
// 00786b5d  8d4b04               lea ecx, [ebx + 4]
// 00786b60  50                   push eax
// 00786b61  51                   push ecx
// 00786b62  52                   push edx
// 00786b63  894c2430             mov dword ptr [esp + 0x30], ecx
// 00786b67  ffd6                 call esi
// 00786b69  6a00                 push 0
// 00786b6b  8d450d               lea eax, [ebp + 0xd]
// 00786b6e  50                   push eax
// 00786b6f  8b4704               mov eax, dword ptr [edi + 4]
// 00786b72  8d4b05               lea ecx, [ebx + 5]
// 00786b75  51                   push ecx
// 00786b76  50                   push eax
// 00786b77  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00786b7b  ffd6                 call esi
// 00786b7d  6a00                 push 0
// 00786b7f  8d450d               lea eax, [ebp + 0xd]
// 00786b82  8d4b06               lea ecx, [ebx + 6]
// 00786b85  50                   push eax
// 00786b86  51                   push ecx
// 00786b87  894c2424             mov dword ptr [esp + 0x24], ecx
// 00786b8b  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786b8e  51                   push ecx
// 00786b8f  ffd6                 call esi
// 00786b91  8d5307               lea edx, [ebx + 7]
// 00786b94  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00786b9c  89542414             mov dword ptr [esp + 0x14], edx
// 00786ba0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00786ba4  8b5704               mov edx, dword ptr [edi + 4]
// 00786ba7  6a00                 push 0
// 00786ba9  8d450e               lea eax, [ebp + 0xe]
// 00786bac  50                   push eax
// 00786bad  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00786bb1  03c1                 add eax, ecx
// 00786bb3  50                   push eax
// 00786bb4  52                   push edx
// 00786bb5  ffd6                 call esi
// 00786bb7  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786bbb  40                   inc eax
// 00786bbc  83f805               cmp eax, 5
// 00786bbf  89442410             mov dword ptr [esp + 0x10], eax
// 00786bc3  7cdb                 jl 0x786ba0
// 00786bc5  6a00                 push 0
// 00786bc7  8d4d0d               lea ecx, [ebp + 0xd]
// 00786bca  51                   push ecx
// 00786bcb  8d430c               lea eax, [ebx + 0xc]
// 00786bce  50                   push eax
// 00786bcf  8b4704               mov eax, dword ptr [edi + 4]
// 00786bd2  50                   push eax
// 00786bd3  ffd6                 call esi
// 00786bd5  6a00                 push 0
// 00786bd7  8d4d0d               lea ecx, [ebp + 0xd]
// 00786bda  51                   push ecx
// 00786bdb  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786bde  8d430d               lea eax, [ebx + 0xd]
// 00786be1  50                   push eax
// 00786be2  51                   push ecx
// 00786be3  ffd6                 call esi
// 00786be5  8b5704               mov edx, dword ptr [edi + 4]
// 00786be8  6a00                 push 0
// 00786bea  8d4d0c               lea ecx, [ebp + 0xc]
// 00786bed  51                   push ecx
// 00786bee  8d430e               lea eax, [ebx + 0xe]
// 00786bf1  50                   push eax
// 00786bf2  52                   push edx
// 00786bf3  ffd6                 call esi
// 00786bf5  6a00                 push 0
// 00786bf7  8d4d0c               lea ecx, [ebp + 0xc]
// 00786bfa  51                   push ecx
// 00786bfb  8d430f               lea eax, [ebx + 0xf]
// 00786bfe  50                   push eax
// 00786bff  8b4704               mov eax, dword ptr [edi + 4]
// 00786c02  50                   push eax
// 00786c03  ffd6                 call esi
// 00786c05  6a00                 push 0
// 00786c07  8d4d0b               lea ecx, [ebp + 0xb]
// 00786c0a  51                   push ecx
// 00786c0b  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786c0e  8d4310               lea eax, [ebx + 0x10]
// 00786c11  50                   push eax
// 00786c12  51                   push ecx
// 00786c13  ffd6                 call esi
// 00786c15  8b5704               mov edx, dword ptr [edi + 4]
// 00786c18  6a00                 push 0
// 00786c1a  8d4d0b               lea ecx, [ebp + 0xb]
// 00786c1d  51                   push ecx
// 00786c1e  8d4311               lea eax, [ebx + 0x11]
// 00786c21  50                   push eax
// 00786c22  52                   push edx
// 00786c23  ffd6                 call esi
// 00786c25  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00786c2d  8d4900               lea ecx, [ecx]
// 00786c30  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786c34  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786c37  6a00                 push 0
// 00786c39  03c5                 add eax, ebp
// 00786c3b  50                   push eax
// 00786c3c  8d4312               lea eax, [ebx + 0x12]
// 00786c3f  50                   push eax
// 00786c40  51                   push ecx
// 00786c41  ffd6                 call esi
// 00786c43  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786c47  40                   inc eax
// 00786c48  83f80b               cmp eax, 0xb
// 00786c4b  89442410             mov dword ptr [esp + 0x10], eax
// 00786c4f  7cdf                 jl 0x786c30
// 00786c51  8b5704               mov edx, dword ptr [edi + 4]
// 00786c54  6a00                 push 0
// 00786c56  8d45ff               lea eax, [ebp - 1]
// 00786c59  50                   push eax
// 00786c5a  8944245c             mov dword ptr [esp + 0x5c], eax
// 00786c5e  8d4310               lea eax, [ebx + 0x10]
// 00786c61  50                   push eax
// 00786c62  52                   push edx
// 00786c63  ffd6                 call esi
// 00786c65  8b442454             mov eax, dword ptr [esp + 0x54]
// 00786c69  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786c6c  6a00                 push 0
// 00786c6e  50                   push eax
// 00786c6f  8d4311               lea eax, [ebx + 0x11]
// 00786c72  50                   push eax
// 00786c73  51                   push ecx
// 00786c74  ffd6                 call esi
// 00786c76  8b5704               mov edx, dword ptr [edi + 4]
// 00786c79  6a00                 push 0
// 00786c7b  8d45fe               lea eax, [ebp - 2]
// 00786c7e  50                   push eax
// 00786c7f  8d430e               lea eax, [ebx + 0xe]
// 00786c82  50                   push eax
// 00786c83  52                   push edx
// 00786c84  ffd6                 call esi
// 00786c86  6a00                 push 0
// 00786c88  8d45fe               lea eax, [ebp - 2]
// 00786c8b  50                   push eax
// 00786c8c  8d430f               lea eax, [ebx + 0xf]
// 00786c8f  50                   push eax
// 00786c90  8b4704               mov eax, dword ptr [edi + 4]
// 00786c93  50                   push eax
// 00786c94  ffd6                 call esi
// 00786c96  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786c99  6a00                 push 0
// 00786c9b  8d45fd               lea eax, [ebp - 3]
// 00786c9e  50                   push eax
// 00786c9f  8d430c               lea eax, [ebx + 0xc]
// 00786ca2  50                   push eax
// 00786ca3  51                   push ecx
// 00786ca4  ffd6                 call esi
// 00786ca6  8b5704               mov edx, dword ptr [edi + 4]
// 00786ca9  6a00                 push 0
// 00786cab  8d45fd               lea eax, [ebp - 3]
// 00786cae  50                   push eax
// 00786caf  8d430d               lea eax, [ebx + 0xd]
// 00786cb2  50                   push eax
// 00786cb3  52                   push edx
// 00786cb4  ffd6                 call esi
// 00786cb6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00786cbe  8bff                 mov edi, edi
// 00786cc0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00786cc4  8b5704               mov edx, dword ptr [edi + 4]
// 00786cc7  6a00                 push 0
// 00786cc9  8d45fc               lea eax, [ebp - 4]
// 00786ccc  50                   push eax
// 00786ccd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00786cd1  03c1                 add eax, ecx
// 00786cd3  50                   push eax
// 00786cd4  52                   push edx
// 00786cd5  ffd6                 call esi
// 00786cd7  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786cdb  40                   inc eax
// 00786cdc  83f805               cmp eax, 5
// 00786cdf  89442410             mov dword ptr [esp + 0x10], eax
// 00786ce3  7cdb                 jl 0x786cc0
// 00786ce5  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786ce8  6a00                 push 0
// 00786cea  8d45fd               lea eax, [ebp - 3]
// 00786ced  50                   push eax
// 00786cee  8b442424             mov eax, dword ptr [esp + 0x24]
// 00786cf2  50                   push eax
// 00786cf3  51                   push ecx
// 00786cf4  ffd6                 call esi
// 00786cf6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00786cfa  6a00                 push 0
// 00786cfc  8d45fd               lea eax, [ebp - 3]
// 00786cff  50                   push eax
// 00786d00  8b4704               mov eax, dword ptr [edi + 4]
// 00786d03  52                   push edx
// 00786d04  50                   push eax
// 00786d05  ffd6                 call esi
// 00786d07  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786d0a  6a00                 push 0
// 00786d0c  8d45fe               lea eax, [ebp - 2]
// 00786d0f  50                   push eax
// 00786d10  8d4303               lea eax, [ebx + 3]
// 00786d13  50                   push eax
// 00786d14  51                   push ecx
// 00786d15  ffd6                 call esi
// 00786d17  8b542420             mov edx, dword ptr [esp + 0x20]
// 00786d1b  6a00                 push 0
// 00786d1d  8d45fe               lea eax, [ebp - 2]
// 00786d20  50                   push eax
// 00786d21  8b4704               mov eax, dword ptr [edi + 4]
// 00786d24  52                   push edx
// 00786d25  50                   push eax
// 00786d26  ffd6                 call esi
// 00786d28  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00786d2c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00786d30  8b4704               mov eax, dword ptr [edi + 4]
// 00786d33  6a00                 push 0
// 00786d35  51                   push ecx
// 00786d36  52                   push edx
// 00786d37  50                   push eax
// 00786d38  ffd6                 call esi
// 00786d3a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00786d3e  8b5704               mov edx, dword ptr [edi + 4]
// 00786d41  6a00                 push 0
// 00786d43  51                   push ecx
// 00786d44  8d4302               lea eax, [ebx + 2]
// 00786d47  50                   push eax
// 00786d48  52                   push edx
// 00786d49  ffd6                 call esi
// 00786d4b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00786d53  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786d57  8b5704               mov edx, dword ptr [edi + 4]
// 00786d5a  6a00                 push 0
// 00786d5c  8d4c2802             lea ecx, [eax + ebp + 2]
// 00786d60  51                   push ecx
// 00786d61  8d4303               lea eax, [ebx + 3]
// 00786d64  50                   push eax
// 00786d65  52                   push edx
// 00786d66  ffd6                 call esi
// 00786d68  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786d6c  40                   inc eax
// 00786d6d  83f807               cmp eax, 7
// 00786d70  89442410             mov dword ptr [esp + 0x10], eax
// 00786d74  7cdd                 jl 0x786d53
// 00786d76  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786d79  6a00                 push 0
// 00786d7b  8d4509               lea eax, [ebp + 9]
// 00786d7e  50                   push eax
// 00786d7f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00786d83  50                   push eax
// 00786d84  51                   push ecx
// 00786d85  ffd6                 call esi
// 00786d87  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00786d8b  6a00                 push 0
// 00786d8d  8d4509               lea eax, [ebp + 9]
// 00786d90  50                   push eax
// 00786d91  8b4704               mov eax, dword ptr [edi + 4]
// 00786d94  52                   push edx
// 00786d95  50                   push eax
// 00786d96  ffd6                 call esi
// 00786d98  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00786d9c  8b5704               mov edx, dword ptr [edi + 4]
// 00786d9f  6a00                 push 0
// 00786da1  8d450a               lea eax, [ebp + 0xa]
// 00786da4  50                   push eax
// 00786da5  51                   push ecx
// 00786da6  52                   push edx
// 00786da7  ffd6                 call esi
// 00786da9  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786dac  6a00                 push 0
// 00786dae  8d450a               lea eax, [ebp + 0xa]
// 00786db1  50                   push eax
// 00786db2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00786db6  50                   push eax
// 00786db7  51                   push ecx
// 00786db8  ffd6                 call esi
// 00786dba  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00786dc2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00786dc6  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786dc9  6a00                 push 0
// 00786dcb  8d450b               lea eax, [ebp + 0xb]
// 00786dce  50                   push eax
// 00786dcf  8d441308             lea eax, [ebx + edx + 8]
// 00786dd3  50                   push eax
// 00786dd4  51                   push ecx
// 00786dd5  ffd6                 call esi
// 00786dd7  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786ddb  40                   inc eax
// 00786ddc  83f803               cmp eax, 3
// 00786ddf  89442410             mov dword ptr [esp + 0x10], eax
// 00786de3  7cdd                 jl 0x786dc2
// 00786de5  8b5704               mov edx, dword ptr [edi + 4]
// 00786de8  6a00                 push 0
// 00786dea  8d4d0a               lea ecx, [ebp + 0xa]
// 00786ded  51                   push ecx
// 00786dee  8d430b               lea eax, [ebx + 0xb]
// 00786df1  50                   push eax
// 00786df2  52                   push edx
// 00786df3  ffd6                 call esi
// 00786df5  6a00                 push 0
// 00786df7  8d450a               lea eax, [ebp + 0xa]
// 00786dfa  50                   push eax
// 00786dfb  8d430c               lea eax, [ebx + 0xc]
// 00786dfe  50                   push eax
// 00786dff  8b4704               mov eax, dword ptr [edi + 4]
// 00786e02  50                   push eax
// 00786e03  ffd6                 call esi
// 00786e05  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786e08  6a00                 push 0
// 00786e0a  8d4509               lea eax, [ebp + 9]
// 00786e0d  50                   push eax
// 00786e0e  8d430d               lea eax, [ebx + 0xd]
// 00786e11  50                   push eax
// 00786e12  51                   push ecx
// 00786e13  ffd6                 call esi
// 00786e15  8b5704               mov edx, dword ptr [edi + 4]
// 00786e18  6a00                 push 0
// 00786e1a  8d4509               lea eax, [ebp + 9]
// 00786e1d  50                   push eax
// 00786e1e  8d430e               lea eax, [ebx + 0xe]
// 00786e21  50                   push eax
// 00786e22  52                   push edx
// 00786e23  ffd6                 call esi
// 00786e25  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00786e2d  8d4900               lea ecx, [ecx]
// 00786e30  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786e34  8b5704               mov edx, dword ptr [edi + 4]
// 00786e37  6a00                 push 0
// 00786e39  8d4c2802             lea ecx, [eax + ebp + 2]
// 00786e3d  51                   push ecx
// 00786e3e  8d430f               lea eax, [ebx + 0xf]
// 00786e41  50                   push eax
// 00786e42  52                   push edx
// 00786e43  ffd6                 call esi
// 00786e45  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786e49  40                   inc eax
// 00786e4a  83f807               cmp eax, 7
// 00786e4d  89442410             mov dword ptr [esp + 0x10], eax
// 00786e51  7cdd                 jl 0x786e30
// 00786e53  6a00                 push 0
// 00786e55  8d4501               lea eax, [ebp + 1]
// 00786e58  50                   push eax
// 00786e59  8d430d               lea eax, [ebx + 0xd]
// 00786e5c  50                   push eax
// 00786e5d  8b4704               mov eax, dword ptr [edi + 4]
// 00786e60  50                   push eax
// 00786e61  ffd6                 call esi
// 00786e63  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786e66  6a00                 push 0
// 00786e68  8d4501               lea eax, [ebp + 1]
// 00786e6b  50                   push eax
// 00786e6c  8d430e               lea eax, [ebx + 0xe]
// 00786e6f  50                   push eax
// 00786e70  51                   push ecx
// 00786e71  ffd6                 call esi
// 00786e73  8b5704               mov edx, dword ptr [edi + 4]
// 00786e76  6a00                 push 0
// 00786e78  55                   push ebp
// 00786e79  8d430b               lea eax, [ebx + 0xb]
// 00786e7c  50                   push eax
// 00786e7d  52                   push edx
// 00786e7e  ffd6                 call esi
// 00786e80  6a00                 push 0
// 00786e82  55                   push ebp
// 00786e83  8d430c               lea eax, [ebx + 0xc]
// 00786e86  50                   push eax
// 00786e87  8b4704               mov eax, dword ptr [edi + 4]
// 00786e8a  50                   push eax
// 00786e8b  ffd6                 call esi
// 00786e8d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00786e95  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00786e99  8b542410             mov edx, dword ptr [esp + 0x10]
// 00786e9d  6a00                 push 0
// 00786e9f  51                   push ecx
// 00786ea0  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786ea3  8d441308             lea eax, [ebx + edx + 8]
// 00786ea7  50                   push eax
// 00786ea8  51                   push ecx
// 00786ea9  ffd6                 call esi
// 00786eab  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786eaf  40                   inc eax
// 00786eb0  83f803               cmp eax, 3
// 00786eb3  89442410             mov dword ptr [esp + 0x10], eax
// 00786eb7  7cdc                 jl 0x786e95
// 00786eb9  8b542418             mov edx, dword ptr [esp + 0x18]
// 00786ebd  8b4704               mov eax, dword ptr [edi + 4]
// 00786ec0  6a00                 push 0
// 00786ec2  55                   push ebp
// 00786ec3  52                   push edx
// 00786ec4  50                   push eax
// 00786ec5  ffd6                 call esi
// 00786ec7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00786ecb  8b5704               mov edx, dword ptr [edi + 4]
// 00786ece  6a00                 push 0
// 00786ed0  55                   push ebp
// 00786ed1  51                   push ecx
// 00786ed2  52                   push edx
// 00786ed3  ffd6                 call esi
// 00786ed5  8b442420             mov eax, dword ptr [esp + 0x20]
// 00786ed9  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786edc  6a00                 push 0
// 00786ede  8d5d01               lea ebx, [ebp + 1]
// 00786ee1  53                   push ebx
// 00786ee2  50                   push eax
// 00786ee3  51                   push ecx
// 00786ee4  ffd6                 call esi
// 00786ee6  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00786eea  8b4704               mov eax, dword ptr [edi + 4]
// 00786eed  6a00                 push 0
// 00786eef  53                   push ebx
// 00786ef0  52                   push edx
// 00786ef1  50                   push eax
// 00786ef2  ffd6                 call esi
// 00786ef4  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00786ef8  896c2420             mov dword ptr [esp + 0x20], ebp
// 00786efc  c74424240b000000     mov dword ptr [esp + 0x24], 0xb
// 00786f04  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00786f08  8b5704               mov edx, dword ptr [edi + 4]
// 00786f0b  68ffffff00           push 0xffffff
// 00786f10  51                   push ecx
// 00786f11  53                   push ebx
// 00786f12  52                   push edx
// 00786f13  ffd6                 call esi
// 00786f15  8b442420             mov eax, dword ptr [esp + 0x20]
// 00786f19  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786f1c  68ffffff00           push 0xffffff
// 00786f21  50                   push eax
// 00786f22  8d4301               lea eax, [ebx + 1]
// 00786f25  50                   push eax
// 00786f26  51                   push ecx
// 00786f27  ffd6                 call esi
// 00786f29  b801000000           mov eax, 1
// 00786f2e  01442420             add dword ptr [esp + 0x20], eax
// 00786f32  29442424             sub dword ptr [esp + 0x24], eax
// 00786f36  75cc                 jne 0x786f04
// 00786f38  8d5302               lea edx, [ebx + 2]
// 00786f3b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00786f43  89542444             mov dword ptr [esp + 0x44], edx
// 00786f47  eb07                 jmp 0x786f50
// 00786f49  8da42400000000       lea esp, [esp]
// 00786f50  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786f54  8b542444             mov edx, dword ptr [esp + 0x44]
// 00786f58  68ffffff00           push 0xffffff
// 00786f5d  8d4c2809             lea ecx, [eax + ebp + 9]
// 00786f61  8b4704               mov eax, dword ptr [edi + 4]
// 00786f64  51                   push ecx
// 00786f65  52                   push edx
// 00786f66  50                   push eax
// 00786f67  ffd6                 call esi
// 00786f69  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786f6d  40                   inc eax
// 00786f6e  83f803               cmp eax, 3
// 00786f71  89442410             mov dword ptr [esp + 0x10], eax
// 00786f75  7cd9                 jl 0x786f50
// 00786f77  68ffffff00           push 0xffffff
// 00786f7c  8d4d0a               lea ecx, [ebp + 0xa]
// 00786f7f  51                   push ecx
// 00786f80  8b4f04               mov ecx, dword ptr [edi + 4]
// 00786f83  8d4303               lea eax, [ebx + 3]
// 00786f86  50                   push eax
// 00786f87  51                   push ecx
// 00786f88  89442450             mov dword ptr [esp + 0x50], eax
// 00786f8c  ffd6                 call esi
// 00786f8e  8b542440             mov edx, dword ptr [esp + 0x40]
// 00786f92  68ffffff00           push 0xffffff
// 00786f97  8d450b               lea eax, [ebp + 0xb]
// 00786f9a  50                   push eax
// 00786f9b  8b4704               mov eax, dword ptr [edi + 4]
// 00786f9e  52                   push edx
// 00786f9f  50                   push eax
// 00786fa0  ffd6                 call esi
// 00786fa2  8d4b04               lea ecx, [ebx + 4]
// 00786fa5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00786fad  894c2420             mov dword ptr [esp + 0x20], ecx
// 00786fb1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00786fb5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00786fb9  68ffffff00           push 0xffffff
// 00786fbe  8d442a0a             lea eax, [edx + ebp + 0xa]
// 00786fc2  8b5704               mov edx, dword ptr [edi + 4]
// 00786fc5  50                   push eax
// 00786fc6  51                   push ecx
// 00786fc7  52                   push edx
// 00786fc8  ffd6                 call esi
// 00786fca  8b442410             mov eax, dword ptr [esp + 0x10]
// 00786fce  40                   inc eax
// 00786fcf  83f803               cmp eax, 3
// 00786fd2  89442410             mov dword ptr [esp + 0x10], eax
// 00786fd6  7cd9                 jl 0x786fb1
// 00786fd8  68ffffff00           push 0xffffff
// 00786fdd  8d4d0b               lea ecx, [ebp + 0xb]
// 00786fe0  8d4305               lea eax, [ebx + 5]
// 00786fe3  51                   push ecx
// 00786fe4  50                   push eax
// 00786fe5  89442428             mov dword ptr [esp + 0x28], eax
// 00786fe9  8b4704               mov eax, dword ptr [edi + 4]
// 00786fec  50                   push eax
// 00786fed  ffd6                 call esi
// 00786fef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00786ff3  8b5704               mov edx, dword ptr [edi + 4]
// 00786ff6  68ffffff00           push 0xffffff
// 00786ffb  8d450c               lea eax, [ebp + 0xc]
// 00786ffe  50                   push eax
// 00786fff  51                   push ecx
// 00787000  52                   push edx
// 00787001  ffd6                 call esi
// 00787003  8d4306               lea eax, [ebx + 6]
// 00787006  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0078700e  89442418             mov dword ptr [esp + 0x18], eax
// 00787012  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00787016  8b442418             mov eax, dword ptr [esp + 0x18]
// 0078701a  68ffffff00           push 0xffffff
// 0078701f  8d54290b             lea edx, [ecx + ebp + 0xb]
// 00787023  8b4f04               mov ecx, dword ptr [edi + 4]
// 00787026  52                   push edx
// 00787027  50                   push eax
// 00787028  51                   push ecx
// 00787029  ffd6                 call esi
// 0078702b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0078702f  40                   inc eax
// 00787030  83f803               cmp eax, 3
// 00787033  89442410             mov dword ptr [esp + 0x10], eax
// 00787037  7cd9                 jl 0x787012
// 00787039  8b5704               mov edx, dword ptr [edi + 4]
// 0078703c  68ffffff00           push 0xffffff
// 00787041  8d4d0c               lea ecx, [ebp + 0xc]
// 00787044  8d4307               lea eax, [ebx + 7]
// 00787047  51                   push ecx
// 00787048  50                   push eax
// 00787049  52                   push edx
// 0078704a  89442424             mov dword ptr [esp + 0x24], eax
// 0078704e  ffd6                 call esi
// 00787050  8b4f04               mov ecx, dword ptr [edi + 4]
// 00787053  68ffffff00           push 0xffffff
// 00787058  8d450d               lea eax, [ebp + 0xd]
// 0078705b  50                   push eax
// 0078705c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00787060  50                   push eax
// 00787061  51                   push ecx
// 00787062  ffd6                 call esi
// 00787064  8b5704               mov edx, dword ptr [edi + 4]
// 00787067  68ffffff00           push 0xffffff
// 0078706c  8d4d0c               lea ecx, [ebp + 0xc]
// 0078706f  8d4308               lea eax, [ebx + 8]
// 00787072  51                   push ecx
// 00787073  50                   push eax
// 00787074  52                   push edx
// 00787075  89442434             mov dword ptr [esp + 0x34], eax
// 00787079  ffd6                 call esi
// 0078707b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0078707e  68ffffff00           push 0xffffff
// 00787083  8d450d               lea eax, [ebp + 0xd]
// 00787086  50                   push eax
// 00787087  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0078708b  50                   push eax
// 0078708c  51                   push ecx
// 0078708d  ffd6                 call esi
// 0078708f  8b5704               mov edx, dword ptr [edi + 4]
// 00787092  68ffffff00           push 0xffffff
// 00787097  8d4d0c               lea ecx, [ebp + 0xc]
// 0078709a  8d4309               lea eax, [ebx + 9]
// 0078709d  51                   push ecx
// 0078709e  50                   push eax
// 0078709f  52                   push edx
// 007870a0  8944244c             mov dword ptr [esp + 0x4c], eax
// 007870a4  ffd6                 call esi
// 007870a6  8b4f04               mov ecx, dword ptr [edi + 4]
// 007870a9  68ffffff00           push 0xffffff
// 007870ae  8d450d               lea eax, [ebp + 0xd]
// 007870b1  50                   push eax
// 007870b2  8b442444             mov eax, dword ptr [esp + 0x44]
// 007870b6  50                   push eax
// 007870b7  51                   push ecx
// 007870b8  ffd6                 call esi
// 007870ba  8d530a               lea edx, [ebx + 0xa]
// 007870bd  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007870c5  89542438             mov dword ptr [esp + 0x38], edx
// 007870c9  8da42400000000       lea esp, [esp]
// 007870d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 007870d4  8b542438             mov edx, dword ptr [esp + 0x38]
// 007870d8  68ffffff00           push 0xffffff
// 007870dd  8d4c280b             lea ecx, [eax + ebp + 0xb]
// 007870e1  8b4704               mov eax, dword ptr [edi + 4]
// 007870e4  51                   push ecx
// 007870e5  52                   push edx
// 007870e6  50                   push eax
// 007870e7  ffd6                 call esi
// 007870e9  8b442410             mov eax, dword ptr [esp + 0x10]
// 007870ed  40                   inc eax
// 007870ee  83f803               cmp eax, 3
// 007870f1  89442410             mov dword ptr [esp + 0x10], eax
// 007870f5  7cd9                 jl 0x7870d0
// 007870f7  68ffffff00           push 0xffffff
// 007870fc  8d4d0b               lea ecx, [ebp + 0xb]
// 007870ff  51                   push ecx
// 00787100  8b4f04               mov ecx, dword ptr [edi + 4]
// 00787103  8d430b               lea eax, [ebx + 0xb]
// 00787106  50                   push eax
// 00787107  51                   push ecx
// 00787108  89442444             mov dword ptr [esp + 0x44], eax
// 0078710c  ffd6                 call esi
// 0078710e  8b542434             mov edx, dword ptr [esp + 0x34]
// 00787112  68ffffff00           push 0xffffff
// 00787117  8d450c               lea eax, [ebp + 0xc]
// 0078711a  50                   push eax
// 0078711b  8b4704               mov eax, dword ptr [edi + 4]
// 0078711e  52                   push edx
// 0078711f  50                   push eax
// 00787120  ffd6                 call esi
// 00787122  8d4b0c               lea ecx, [ebx + 0xc]
// 00787125  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0078712d  894c2430             mov dword ptr [esp + 0x30], ecx
// 00787131  8b542410             mov edx, dword ptr [esp + 0x10]
// 00787135  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00787139  68ffffff00           push 0xffffff
// 0078713e  8d442a0a             lea eax, [edx + ebp + 0xa]
// 00787142  8b5704               mov edx, dword ptr [edi + 4]
// 00787145  50                   push eax
// 00787146  51                   push ecx
// 00787147  52                   push edx
// 00787148  ffd6                 call esi
// 0078714a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0078714e  40                   inc eax
// 0078714f  83f803               cmp eax, 3
// 00787152  89442410             mov dword ptr [esp + 0x10], eax
// 00787156  7cd9                 jl 0x787131
// 00787158  68ffffff00           push 0xffffff
// 0078715d  8d4d0a               lea ecx, [ebp + 0xa]
// 00787160  8d430d               lea eax, [ebx + 0xd]
// 00787163  51                   push ecx
// 00787164  50                   push eax
// 00787165  89442438             mov dword ptr [esp + 0x38], eax
// 00787169  8b4704               mov eax, dword ptr [edi + 4]
// 0078716c  50                   push eax
// 0078716d  ffd6                 call esi
// 0078716f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00787173  8b5704               mov edx, dword ptr [edi + 4]
// 00787176  68ffffff00           push 0xffffff
// 0078717b  8d450b               lea eax, [ebp + 0xb]
// 0078717e  50                   push eax
// 0078717f  51                   push ecx
// 00787180  52                   push edx
// 00787181  ffd6                 call esi
// 00787183  8d430e               lea eax, [ebx + 0xe]
// 00787186  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0078718e  89442428             mov dword ptr [esp + 0x28], eax
// 00787192  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00787196  8b442428             mov eax, dword ptr [esp + 0x28]
// 0078719a  68ffffff00           push 0xffffff
// 0078719f  8d542909             lea edx, [ecx + ebp + 9]
// 007871a3  8b4f04               mov ecx, dword ptr [edi + 4]
// 007871a6  52                   push edx
// 007871a7  50                   push eax
// 007871a8  51                   push ecx
// 007871a9  ffd6                 call esi
// 007871ab  8b442410             mov eax, dword ptr [esp + 0x10]
// 007871af  40                   inc eax
// 007871b0  83f803               cmp eax, 3
// 007871b3  89442410             mov dword ptr [esp + 0x10], eax
// 007871b7  7cd9                 jl 0x787192
// 007871b9  8d530f               lea edx, [ebx + 0xf]
// 007871bc  83c310               add ebx, 0x10
// 007871bf  895c244c             mov dword ptr [esp + 0x4c], ebx
// 007871c3  89542448             mov dword ptr [esp + 0x48], edx
// 007871c7  8bdd                 mov ebx, ebp
// 007871c9  c74424100b000000     mov dword ptr [esp + 0x10], 0xb
// 007871d1  8b442448             mov eax, dword ptr [esp + 0x48]
// 007871d5  8b4f04               mov ecx, dword ptr [edi + 4]
// 007871d8  68ffffff00           push 0xffffff
// 007871dd  53                   push ebx
// 007871de  50                   push eax
// 007871df  51                   push ecx
// 007871e0  ffd6                 call esi
// 007871e2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007871e6  8b4704               mov eax, dword ptr [edi + 4]
// 007871e9  68ffffff00           push 0xffffff
// 007871ee  53                   push ebx
// 007871ef  52                   push edx
// 007871f0  50                   push eax
// 007871f1  ffd6                 call esi
// 007871f3  43                   inc ebx
// 007871f4  836c241001           sub dword ptr [esp + 0x10], 1
// 007871f9  75d6                 jne 0x7871d1
// 007871fb  33db                 xor ebx, ebx
// 007871fd  8d4900               lea ecx, [ecx]
// 00787200  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00787204  8b542428             mov edx, dword ptr [esp + 0x28]
// 00787208  8b4704               mov eax, dword ptr [edi + 4]
// 0078720b  68ffffff00           push 0xffffff
// 00787210  03cb                 add ecx, ebx
// 00787212  51                   push ecx
// 00787213  52                   push edx
// 00787214  50                   push eax
// 00787215  ffd6                 call esi
// 00787217  43                   inc ebx
// 00787218  83fb03               cmp ebx, 3
// 0078721b  7ce3                 jl 0x787200
// 0078721d  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00787221  8b4f04               mov ecx, dword ptr [edi + 4]
// 00787224  68ffffff00           push 0xffffff
// 00787229  55                   push ebp
// 0078722a  53                   push ebx
// 0078722b  51                   push ecx
// 0078722c  ffd6                 call esi
// 0078722e  8b542454             mov edx, dword ptr [esp + 0x54]
// 00787232  8b4704               mov eax, dword ptr [edi + 4]
// 00787235  68ffffff00           push 0xffffff
// 0078723a  52                   push edx
// 0078723b  53                   push ebx
// 0078723c  50                   push eax
// 0078723d  ffd6                 call esi
// 0078723f  33db                 xor ebx, ebx
// 00787241  8b542430             mov edx, dword ptr [esp + 0x30]
// 00787245  8b4704               mov eax, dword ptr [edi + 4]
// 00787248  68ffffff00           push 0xffffff
// 0078724d  8d4c2bfe             lea ecx, [ebx + ebp - 2]
// 00787251  51                   push ecx
// 00787252  52                   push edx
// 00787253  50                   push eax
// 00787254  ffd6                 call esi
// 00787256  43                   inc ebx
// 00787257  83fb03               cmp ebx, 3
// 0078725a  7ce5                 jl 0x787241
// 0078725c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00787260  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00787264  8b5704               mov edx, dword ptr [edi + 4]
// 00787267  68ffffff00           push 0xffffff
// 0078726c  51                   push ecx
// 0078726d  53                   push ebx
// 0078726e  52                   push edx
// 0078726f  ffd6                 call esi
// 00787271  68ffffff00           push 0xffffff
// 00787276  8d45fe               lea eax, [ebp - 2]
// 00787279  50                   push eax
// 0078727a  8b4704               mov eax, dword ptr [edi + 4]
// 0078727d  53                   push ebx
// 0078727e  50                   push eax
// 0078727f  ffd6                 call esi
// 00787281  33db                 xor ebx, ebx
// 00787283  8b542438             mov edx, dword ptr [esp + 0x38]
// 00787287  8b4704               mov eax, dword ptr [edi + 4]
// 0078728a  68ffffff00           push 0xffffff
// 0078728f  8d4c2bfd             lea ecx, [ebx + ebp - 3]
// 00787293  51                   push ecx
// 00787294  52                   push edx
// 00787295  50                   push eax
// 00787296  ffd6                 call esi
// 00787298  43                   inc ebx
// 00787299  83fb03               cmp ebx, 3
// 0078729c  7ce5                 jl 0x787283
// 0078729e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007872a2  8b5704               mov edx, dword ptr [edi + 4]
// 007872a5  68ffffff00           push 0xffffff
// 007872aa  8d5dfe               lea ebx, [ebp - 2]
// 007872ad  53                   push ebx
// 007872ae  51                   push ecx
// 007872af  52                   push edx
// 007872b0  ffd6                 call esi
// 007872b2  8b4f04               mov ecx, dword ptr [edi + 4]
// 007872b5  68ffffff00           push 0xffffff
// 007872ba  8d45fd               lea eax, [ebp - 3]
// 007872bd  50                   push eax
// 007872be  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007872c2  50                   push eax
// 007872c3  51                   push ecx
// 007872c4  ffd6                 call esi
// 007872c6  8b542424             mov edx, dword ptr [esp + 0x24]
// 007872ca  8b4704               mov eax, dword ptr [edi + 4]
// 007872cd  68ffffff00           push 0xffffff
// 007872d2  53                   push ebx
// 007872d3  52                   push edx
// 007872d4  50                   push eax
// 007872d5  ffd6                 call esi
// 007872d7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007872db  8b5704               mov edx, dword ptr [edi + 4]
// 007872de  68ffffff00           push 0xffffff
// 007872e3  8d45fd               lea eax, [ebp - 3]
// 007872e6  50                   push eax
// 007872e7  51                   push ecx
// 007872e8  52                   push edx
// 007872e9  ffd6                 call esi
// 007872eb  8b4704               mov eax, dword ptr [edi + 4]
// 007872ee  68ffffff00           push 0xffffff
// 007872f3  53                   push ebx
// 007872f4  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 007872f8  53                   push ebx
// 007872f9  50                   push eax
// 007872fa  ffd6                 call esi
// 007872fc  8b4f04               mov ecx, dword ptr [edi + 4]
// 007872ff  68ffffff00           push 0xffffff
// 00787304  8d45fd               lea eax, [ebp - 3]
// 00787307  50                   push eax
// 00787308  53                   push ebx
// 00787309  51                   push ecx
// 0078730a  ffd6                 call esi
// 0078730c  33db                 xor ebx, ebx
// 0078730e  8bff                 mov edi, edi
// 00787310  8b442418             mov eax, dword ptr [esp + 0x18]
// 00787314  8b4f04               mov ecx, dword ptr [edi + 4]
// 00787317  68ffffff00           push 0xffffff
// 0078731c  8d542bfd             lea edx, [ebx + ebp - 3]
// 00787320  52                   push edx
// 00787321  50                   push eax
// 00787322  51                   push ecx
// 00787323  ffd6                 call esi
// 00787325  43                   inc ebx
// 00787326  83fb03               cmp ebx, 3
// 00787329  7ce5                 jl 0x787310
// 0078732b  8b542454             mov edx, dword ptr [esp + 0x54]
// 0078732f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00787333  8b4704               mov eax, dword ptr [edi + 4]
// 00787336  68ffffff00           push 0xffffff
// 0078733b  52                   push edx
// 0078733c  53                   push ebx
// 0078733d  50                   push eax
// 0078733e  ffd6                 call esi
// 00787340  8b4f04               mov ecx, dword ptr [edi + 4]
// 00787343  68ffffff00           push 0xffffff
// 00787348  8d45fe               lea eax, [ebp - 2]
// 0078734b  50                   push eax
// 0078734c  53                   push ebx
// 0078734d  51                   push ecx
// 0078734e  ffd6                 call esi
// 00787350  33db                 xor ebx, ebx
// 00787352  8b442420             mov eax, dword ptr [esp + 0x20]
// 00787356  8b4f04               mov ecx, dword ptr [edi + 4]
// 00787359  68ffffff00           push 0xffffff
// 0078735e  8d542bfe             lea edx, [ebx + ebp - 2]
// 00787362  52                   push edx
// 00787363  50                   push eax
// 00787364  51                   push ecx
// 00787365  ffd6                 call esi
// 00787367  43                   inc ebx
// 00787368  83fb03               cmp ebx, 3
// 0078736b  7ce5                 jl 0x787352
// 0078736d  8b5704               mov edx, dword ptr [edi + 4]
// 00787370  68ffffff00           push 0xffffff
// 00787375  55                   push ebp
// 00787376  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0078737a  55                   push ebp
// 0078737b  52                   push edx
// 0078737c  ffd6                 call esi
// 0078737e  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00787382  8b4704               mov eax, dword ptr [edi + 4]
// 00787385  68ffffff00           push 0xffffff
// 0078738a  53                   push ebx
// 0078738b  55                   push ebp
// 0078738c  50                   push eax
// 0078738d  ffd6                 call esi
// 0078738f  33ed                 xor ebp, ebp
// 00787391  8b542444             mov edx, dword ptr [esp + 0x44]
// 00787395  8b4704               mov eax, dword ptr [edi + 4]
// 00787398  68ffffff00           push 0xffffff
// 0078739d  8d0c2b               lea ecx, [ebx + ebp]
// 007873a0  51                   push ecx
// 007873a1  52                   push edx
// 007873a2  50                   push eax
// 007873a3  ffd6                 call esi
// 007873a5  45                   inc ebp
// 007873a6  83fd03               cmp ebp, 3
// 007873a9  7ce6                 jl 0x787391
// 007873ab  5f                   pop edi
// 007873ac  5e                   pop esi
// 007873ad  5d                   pop ebp
// 007873ae  5b                   pop ebx
// 007873af  83c440               add esp, 0x40
// 007873b2  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPageStandard.cpp (function ?DrawSelectCell@CXTColorHex@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageStandard.cpp
