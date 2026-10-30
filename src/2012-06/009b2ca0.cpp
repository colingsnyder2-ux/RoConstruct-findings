// roc 2012-06 009b2ca0  unit: CXTPReportControl  size: 1045 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b2ca0
//
// 009b2ca0  83ec14               sub esp, 0x14
// 009b2ca3  53                   push ebx
// 009b2ca4  55                   push ebp
// 009b2ca5  56                   push esi
// 009b2ca6  57                   push edi
// 009b2ca7  8bf1                 mov esi, ecx
// 009b2ca9  e830fafcff           call 0x9826de
// 009b2cae  8b3d843ab200         mov edi, dword ptr [0xb23a84]
// 009b2cb4  6a10                 push 0x10
// 009b2cb6  ffd7                 call edi
// 009b2cb8  33db                 xor ebx, ebx
// 009b2cba  6685c0               test ax, ax
// 009b2cbd  6a11                 push 0x11
// 009b2cbf  0f9cc3               setl bl
// 009b2cc2  ffd7                 call edi
// 009b2cc4  33c9                 xor ecx, ecx
// 009b2cc6  6685c0               test ax, ax
// 009b2cc9  0f9cc1               setl cl
// 009b2ccc  8be9                 mov ebp, ecx
// 009b2cce  8bce                 mov ecx, esi
// 009b2cd0  e80b80ffff           call 0x9aace0
// 009b2cd5  8d542428             lea edx, [esp + 0x28]
// 009b2cd9  52                   push edx
// 009b2cda  56                   push esi
// 009b2cdb  8bf8                 mov edi, eax
// 009b2cdd  e84e330200           call 0x9d6030
// 009b2ce2  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 009b2ce8  83c408               add esp, 8
// 009b2ceb  e8807f0000           call 0x9bac70
// 009b2cf0  85c0                 test eax, eax
// 009b2cf2  0f84f2020000         je 0x9b2fea
// 009b2cf8  8b442428             mov eax, dword ptr [esp + 0x28]
// 009b2cfc  83c0f3               add eax, -0xd
// 009b2cff  83f864               cmp eax, 0x64
// 009b2d02  0f87e2020000         ja 0x9b2fea
// 009b2d08  0fb68050309b00       movzx eax, byte ptr [eax + 0x9b3050]
// 009b2d0f  ff248514309b00       jmp dword ptr [eax*4 + 0x9b3014]
// 009b2d16  85ed                 test ebp, ebp
// 009b2d18  740c                 je 0x9b2d26
// 009b2d1a  8bce                 mov ecx, esi
// 009b2d1c  e8bfceffff           call 0x9afbe0
// 009b2d21  e9c4020000           jmp 0x9b2fea
// 009b2d26  85ff                 test edi, edi
// 009b2d28  0f84bc020000         je 0x9b2fea
// 009b2d2e  8b17                 mov edx, dword ptr [edi]
// 009b2d30  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 009b2d36  8bcf                 mov ecx, edi
// 009b2d38  ffd0                 call eax
// 009b2d3a  85c0                 test eax, eax
// 009b2d3c  0f84a8020000         je 0x9b2fea
// 009b2d42  8b17                 mov edx, dword ptr [edi]
// 009b2d44  8b4278               mov eax, dword ptr [edx + 0x78]
// 009b2d47  8bcf                 mov ecx, edi
// 009b2d49  ffd0                 call eax
// 009b2d4b  85c0                 test eax, eax
// 009b2d4d  0f8597020000         jne 0x9b2fea
// 009b2d53  8b17                 mov edx, dword ptr [edi]
// 009b2d55  8b427c               mov eax, dword ptr [edx + 0x7c]
// 009b2d58  6a01                 push 1
// 009b2d5a  8bcf                 mov ecx, edi
// 009b2d5c  ffd0                 call eax
// 009b2d5e  e987020000           jmp 0x9b2fea
// 009b2d63  85ed                 test ebp, ebp
// 009b2d65  740c                 je 0x9b2d73
// 009b2d67  8bce                 mov ecx, esi
// 009b2d69  e812ceffff           call 0x9afb80
// 009b2d6e  e977020000           jmp 0x9b2fea
// 009b2d73  85ff                 test edi, edi
// 009b2d75  0f846f020000         je 0x9b2fea
// 009b2d7b  8b17                 mov edx, dword ptr [edi]
// 009b2d7d  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 009b2d83  8bcf                 mov ecx, edi
// 009b2d85  ffd0                 call eax
// 009b2d87  85c0                 test eax, eax
// 009b2d89  0f845b020000         je 0x9b2fea
// 009b2d8f  8b17                 mov edx, dword ptr [edi]
// 009b2d91  8b4278               mov eax, dword ptr [edx + 0x78]
// 009b2d94  8bcf                 mov ecx, edi
// 009b2d96  ffd0                 call eax
// 009b2d98  85c0                 test eax, eax
// 009b2d9a  0f844a020000         je 0x9b2fea
// 009b2da0  8b17                 mov edx, dword ptr [edi]
// 009b2da2  8b427c               mov eax, dword ptr [edx + 0x7c]
// 009b2da5  6a00                 push 0
// 009b2da7  8bcf                 mov ecx, edi
// 009b2da9  ffd0                 call eax
// 009b2dab  e93a020000           jmp 0x9b2fea
// 009b2db0  85ff                 test edi, edi
// 009b2db2  746b                 je 0x9b2e1f
// 009b2db4  8b17                 mov edx, dword ptr [edi]
// 009b2db6  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 009b2dbc  8bcf                 mov ecx, edi
// 009b2dbe  ffd0                 call eax
// 009b2dc0  85c0                 test eax, eax
// 009b2dc2  740d                 je 0x9b2dd1
// 009b2dc4  8b17                 mov edx, dword ptr [edi]
// 009b2dc6  8b4278               mov eax, dword ptr [edx + 0x78]
// 009b2dc9  8bcf                 mov ecx, edi
// 009b2dcb  ffd0                 call eax
// 009b2dcd  85c0                 test eax, eax
// 009b2dcf  7482                 je 0x9b2d53
// 009b2dd1  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 009b2dd8  7445                 je 0x9b2e1f
// 009b2dda  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 009b2de0  85c9                 test ecx, ecx
// 009b2de2  743b                 je 0x9b2e1f
// 009b2de4  8b1e                 mov ebx, dword ptr [esi]
// 009b2de6  6a01                 push 1
// 009b2de8  e8d355ffff           call 0x9a83c0
// 009b2ded  8b9360020000         mov edx, dword ptr [ebx + 0x260]
// 009b2df3  50                   push eax
// 009b2df4  57                   push edi
// 009b2df5  8bce                 mov ecx, esi
// 009b2df7  ffd2                 call edx
// 009b2df9  85c0                 test eax, eax
// 009b2dfb  0f84e9010000         je 0x9b2fea
// 009b2e01  50                   push eax
// 009b2e02  8bce                 mov ecx, esi
// 009b2e04  e80794ffff           call 0x9ac210
// 009b2e09  6a00                 push 0
// 009b2e0b  8bce                 mov ecx, esi
// 009b2e0d  e8ce7effff           call 0x9aace0
// 009b2e12  50                   push eax
// 009b2e13  8bce                 mov ecx, esi
// 009b2e15  e896f3ffff           call 0x9b21b0
// 009b2e1a  e9cb010000           jmp 0x9b2fea
// 009b2e1f  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 009b2e25  55                   push ebp
// 009b2e26  53                   push ebx
// 009b2e27  e844c80700           call 0xa2f670
// 009b2e2c  e9b9010000           jmp 0x9b2fea
// 009b2e31  85ff                 test edi, edi
// 009b2e33  0f84c3000000         je 0x9b2efc
// 009b2e39  8b07                 mov eax, dword ptr [edi]
// 009b2e3b  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 009b2e41  8bcf                 mov ecx, edi
// 009b2e43  ffd2                 call edx
// 009b2e45  85c0                 test eax, eax
// 009b2e47  741d                 je 0x9b2e66
// 009b2e49  8b07                 mov eax, dword ptr [edi]
// 009b2e4b  8b5078               mov edx, dword ptr [eax + 0x78]
// 009b2e4e  8bcf                 mov ecx, edi
// 009b2e50  ffd2                 call edx
// 009b2e52  85c0                 test eax, eax
// 009b2e54  7410                 je 0x9b2e66
// 009b2e56  8b07                 mov eax, dword ptr [edi]
// 009b2e58  8b507c               mov edx, dword ptr [eax + 0x7c]
// 009b2e5b  6a00                 push 0
// 009b2e5d  8bcf                 mov ecx, edi
// 009b2e5f  ffd2                 call edx
// 009b2e61  e984010000           jmp 0x9b2fea
// 009b2e66  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 009b2e6d  7445                 je 0x9b2eb4
// 009b2e6f  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 009b2e75  85c9                 test ecx, ecx
// 009b2e77  743b                 je 0x9b2eb4
// 009b2e79  8b1e                 mov ebx, dword ptr [esi]
// 009b2e7b  6aff                 push -1
// 009b2e7d  e83e55ffff           call 0x9a83c0
// 009b2e82  50                   push eax
// 009b2e83  8b8360020000         mov eax, dword ptr [ebx + 0x260]
// 009b2e89  57                   push edi
// 009b2e8a  8bce                 mov ecx, esi
// 009b2e8c  ffd0                 call eax
// 009b2e8e  85c0                 test eax, eax
// 009b2e90  0f8454010000         je 0x9b2fea
// 009b2e96  50                   push eax
// 009b2e97  8bce                 mov ecx, esi
// 009b2e99  e87293ffff           call 0x9ac210
// 009b2e9e  6a00                 push 0
// 009b2ea0  8bce                 mov ecx, esi
// 009b2ea2  e8397effff           call 0x9aace0
// 009b2ea7  50                   push eax
// 009b2ea8  8bce                 mov ecx, esi
// 009b2eaa  e801f3ffff           call 0x9b21b0
// 009b2eaf  e936010000           jmp 0x9b2fea
// 009b2eb4  8b17                 mov edx, dword ptr [edi]
// 009b2eb6  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 009b2ebc  8bcf                 mov ecx, edi
// 009b2ebe  ffd0                 call eax
// 009b2ec0  85c0                 test eax, eax
// 009b2ec2  7538                 jne 0x9b2efc
// 009b2ec4  8b17                 mov edx, dword ptr [edi]
// 009b2ec6  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 009b2ecc  8bcf                 mov ecx, edi
// 009b2ece  ffd0                 call eax
// 009b2ed0  85c0                 test eax, eax
// 009b2ed2  7428                 je 0x9b2efc
// 009b2ed4  85db                 test ebx, ebx
// 009b2ed6  7524                 jne 0x9b2efc
// 009b2ed8  8b17                 mov edx, dword ptr [edi]
// 009b2eda  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 009b2ee0  53                   push ebx
// 009b2ee1  8bcf                 mov ecx, edi
// 009b2ee3  ffd0                 call eax
// 009b2ee5  50                   push eax
// 009b2ee6  8bce                 mov ecx, esi
// 009b2ee8  e8c3f2ffff           call 0x9b21b0
// 009b2eed  8b17                 mov edx, dword ptr [edi]
// 009b2eef  8b427c               mov eax, dword ptr [edx + 0x7c]
// 009b2ef2  53                   push ebx
// 009b2ef3  8bcf                 mov ecx, edi
// 009b2ef5  ffd0                 call eax
// 009b2ef7  e9ee000000           jmp 0x9b2fea
// 009b2efc  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 009b2f02  55                   push ebp
// 009b2f03  53                   push ebx
// 009b2f04  e867c80700           call 0xa2f770
// 009b2f09  e9dc000000           jmp 0x9b2fea
// 009b2f0e  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 009b2f14  6a00                 push 0
// 009b2f16  53                   push ebx
// 009b2f17  e854c40700           call 0xa2f370
// 009b2f1c  e9c9000000           jmp 0x9b2fea
// 009b2f21  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 009b2f27  6a00                 push 0
// 009b2f29  53                   push ebx
// 009b2f2a  e881c40700           call 0xa2f3b0
// 009b2f2f  e9b6000000           jmp 0x9b2fea
// 009b2f34  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 009b2f3a  6a00                 push 0
// 009b2f3c  53                   push ebx
// 009b2f3d  e83ec30700           call 0xa2f280
// 009b2f42  e9a3000000           jmp 0x9b2fea
// 009b2f47  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 009b2f4d  6a00                 push 0
// 009b2f4f  53                   push ebx
// 009b2f50  e8abc30700           call 0xa2f300
// 009b2f55  e990000000           jmp 0x9b2fea
// 009b2f5a  85ff                 test edi, edi
// 009b2f5c  0f8488000000         je 0x9b2fea
// 009b2f62  8b17                 mov edx, dword ptr [edi]
// 009b2f64  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 009b2f6a  8bcf                 mov ecx, edi
// 009b2f6c  ffd0                 call eax
// 009b2f6e  85c0                 test eax, eax
// 009b2f70  7478                 je 0x9b2fea
// 009b2f72  8b1f                 mov ebx, dword ptr [edi]
// 009b2f74  8b5378               mov edx, dword ptr [ebx + 0x78]
// 009b2f77  8bcf                 mov ecx, edi
// 009b2f79  ffd2                 call edx
// 009b2f7b  f7d8                 neg eax
// 009b2f7d  1bc0                 sbb eax, eax
// 009b2f7f  40                   inc eax
// 009b2f80  50                   push eax
// 009b2f81  8b437c               mov eax, dword ptr [ebx + 0x7c]
// 009b2f84  8bcf                 mov ecx, edi
// 009b2f86  ffd0                 call eax
// 009b2f88  eb60                 jmp 0x9b2fea
// 009b2f8a  83bec001000000       cmp dword ptr [esi + 0x1c0], 0
// 009b2f91  7457                 je 0x9b2fea
// 009b2f93  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 009b2f99  e8c22c0000           call 0x9b5c60
// 009b2f9e  eb4a                 jmp 0x9b2fea
// 009b2fa0  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 009b2fa6  e8c5c80700           call 0xa2f870
// 009b2fab  eb3d                 jmp 0x9b2fea
// 009b2fad  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 009b2fb4  7434                 je 0x9b2fea
// 009b2fb6  85ed                 test ebp, ebp
// 009b2fb8  7430                 je 0x9b2fea
// 009b2fba  85ff                 test edi, edi
// 009b2fbc  742c                 je 0x9b2fea
// 009b2fbe  8b17                 mov edx, dword ptr [edi]
// 009b2fc0  8b4274               mov eax, dword ptr [edx + 0x74]
// 009b2fc3  8bcf                 mov ecx, edi
// 009b2fc5  ffd0                 call eax
// 009b2fc7  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 009b2fcd  57                   push edi
// 009b2fce  85c0                 test eax, eax
// 009b2fd0  7407                 je 0x9b2fd9
// 009b2fd2  e849970000           call 0x9bc720
// 009b2fd7  eb05                 jmp 0x9b2fde
// 009b2fd9  e812970000           call 0x9bc6f0
// 009b2fde  8b16                 mov edx, dword ptr [esi]
// 009b2fe0  8b82dc010000         mov eax, dword ptr [edx + 0x1dc]
// 009b2fe6  8bce                 mov ecx, esi
// 009b2fe8  ffd0                 call eax
// 009b2fea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009b2fee  8b542430             mov edx, dword ptr [esp + 0x30]
// 009b2ff2  8d442410             lea eax, [esp + 0x10]
// 009b2ff6  50                   push eax
// 009b2ff7  894c2420             mov dword ptr [esp + 0x20], ecx
// 009b2ffb  6af1                 push -0xf
// 009b2ffd  8bce                 mov ecx, esi
// 009b2fff  89542428             mov dword ptr [esp + 0x28], edx
// 009b3003  e868caffff           call 0x9afa70
// 009b3008  5f                   pop edi
// 009b3009  5e                   pop esi
// 009b300a  5d                   pop ebp
// 009b300b  5b                   pop ebx
// 009b300c  83c414               add esp, 0x14
// 009b300f  c20c00               ret 0xc
// 009b3012  8bff                 mov edi, edi
// 009b3014  5a                   pop edx
// 009b3015  2f                   das 
// 009b3016  9b                   wait 
// 009b3017  008a2f9b00ad         add byte ptr [edx - 0x52ff64d1], cl
// 009b301d  2f                   das 
// 009b301e  9b                   wait 
// 009b301f  00472f               add byte ptr [edi + 0x2f], al
// 009b3022  9b                   wait 
// 009b3023  00342f               add byte ptr [edi + ebp], dh
// 009b3026  9b                   wait 
// 009b3027  0021                 add byte ptr [ecx], ah
// 009b3029  2f                   das 
// 009b302a  9b                   wait 
// 009b302b  000e                 add byte ptr [esi], cl
// 009b302d  2f                   das 
// 009b302e  9b                   wait 
// 009b302f  0031                 add byte ptr [ecx], dh
// 009b3031  2e9b                 wait 
// 009b3033  00fc                 add ah, bh
// 009b3035  2e9b                 wait 
// 009b3037  00b02d9b001f         add byte ptr [eax + 0x1f009b2d], dh
// 009b303d  2e9b                 wait 
// 009b303f  0016                 add byte ptr [esi], dl
// 009b3041  2d9b00632d           sub eax, 0x2d63009b
// 009b3046  9b                   wait 
// 009b3047  00a02f9b00ea         add byte ptr [eax - 0x15ff64d1], ah
// 009b304d  2f                   das 
// 009b304e  9b                   wait 
// 009b304f  0000                 add byte ptr [eax], al
// 009b3051  0e                   push cs
// 009b3052  0e                   push cs
// 009b3053  0e                   push cs
// 009b3054  0e                   push cs
// 009b3055  0e                   push cs
// 009b3056  0e                   push cs
// 009b3057  0e                   push cs
// 009b3058  0e                   push cs
// 009b3059  0e                   push cs
// 009b305a  0e                   push cs
// 009b305b  0e                   push cs
// 009b305c  0e                   push cs
// 009b305d  0e                   push cs
// 009b305e  010e                 add dword ptr [esi], ecx
// 009b3060  0e                   push cs
// 009b3061  0e                   push cs
// 009b3062  0e                   push cs
// 009b3063  0203                 add al, byte ptr [ebx]
// 009b3065  0405                 add al, 5
// 009b3067  06                   push es
// 009b3068  07                   pop es
// 009b3069  0809                 or byte ptr [ecx], cl
// 009b306b  0a0e                 or cl, byte ptr [esi]
// 009b306d  0e                   push cs
// 009b306e  0e                   push cs
// 009b306f  0e                   push cs
// 009b3070  0e                   push cs
// 009b3071  0e                   push cs
// 009b3072  0e                   push cs
// 009b3073  0e                   push cs
// 009b3074  0e                   push cs
// 009b3075  0e                   push cs
// 009b3076  0e                   push cs
// 009b3077  0e                   push cs
// 009b3078  0e                   push cs
// 009b3079  0e                   push cs
// 009b307a  0e                   push cs
// 009b307b  0e                   push cs
// 009b307c  0e                   push cs
// 009b307d  0e                   push cs
// 009b307e  0e                   push cs
// 009b307f  0e                   push cs
// 009b3080  0e                   push cs
// 009b3081  0e                   push cs
// 009b3082  0e                   push cs
// 009b3083  0e                   push cs
// 009b3084  0e                   push cs
// 009b3085  0e                   push cs
// 009b3086  0e                   push cs
// 009b3087  0e                   push cs
// 009b3088  0e                   push cs
// 009b3089  0e                   push cs
// 009b308a  0e                   push cs
// 009b308b  0e                   push cs
// 009b308c  0e                   push cs
// 009b308d  0e                   push cs
// 009b308e  0e                   push cs
// 009b308f  0e                   push cs
// 009b3090  0e                   push cs
// 009b3091  0e                   push cs
// 009b3092  0e                   push cs
// 009b3093  0e                   push cs
// 009b3094  0e                   push cs
// 009b3095  0e                   push cs
// 009b3096  0e                   push cs
// 009b3097  0e                   push cs
// 009b3098  0e                   push cs
// 009b3099  0e                   push cs
// 009b309a  0e                   push cs
// 009b309b  0e                   push cs
// 009b309c  0e                   push cs
// 009b309d  0e                   push cs
// 009b309e  0e                   push cs
// 009b309f  0e                   push cs
// 009b30a0  0e                   push cs
// 009b30a1  0e                   push cs
// 009b30a2  0e                   push cs
// 009b30a3  0e                   push cs
// 009b30a4  0e                   push cs
// 009b30a5  0e                   push cs
// 009b30a6  0e                   push cs
// 009b30a7  0e                   push cs
// 009b30a8  0e                   push cs
// 009b30a9  0e                   push cs
// 009b30aa  0e                   push cs
// 009b30ab  0e                   push cs
// 009b30ac  0e                   push cs
// 009b30ad  0e                   push cs
// 009b30ae  0b0e                 or ecx, dword ptr [esi]
// 009b30b0  0c0e                 or al, 0xe
// 009b30b2  0e                   push cs
// 009b30b3  0e                   push cs
// copied from an identical function in another client (function ?OnKeyDown@CXTPReportControl@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp