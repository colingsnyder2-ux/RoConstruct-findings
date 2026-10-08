// roc 2008-06 004d6bc0  unit: CSHA1  size: 818 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d6bc0
//
// 004d6bc0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d6bc4  83ec24               sub esp, 0x24
// 004d6bc7  03c0                 add eax, eax
// 004d6bc9  55                   push ebp
// 004d6bca  03c0                 add eax, eax
// 004d6bcc  57                   push edi
// 004d6bcd  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 004d6bd1  03c0                 add eax, eax
// 004d6bd3  85ff                 test edi, edi
// 004d6bd5  0f840c030000         je 0x4d6ee7
// 004d6bdb  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 004d6bdf  85ed                 test ebp, ebp
// 004d6be1  0f8400030000         je 0x4d6ee7
// 004d6be7  8a0f                 mov cl, byte ptr [edi]
// 004d6be9  80f903               cmp cl, 3
// 004d6bec  740a                 je 0x4d6bf8
// 004d6bee  807d0000             cmp byte ptr [ebp], 0
// 004d6bf2  0f84ef020000         je 0x4d6ee7
// 004d6bf8  99                   cdq 
// 004d6bf9  83e27f               and edx, 0x7f
// 004d6bfc  03c2                 add eax, edx
// 004d6bfe  53                   push ebx
// 004d6bff  8bd8                 mov ebx, eax
// 004d6c01  0fb6c1               movzx eax, cl
// 004d6c04  c1fb07               sar ebx, 7
// 004d6c07  83e801               sub eax, 1
// 004d6c0a  56                   push esi
// 004d6c0b  895c2438             mov dword ptr [esp + 0x38], ebx
// 004d6c0f  0f8492020000         je 0x4d6ea7
// 004d6c15  83e801               sub eax, 1
// 004d6c18  0f84ee010000         je 0x4d6e0c
// 004d6c1e  83e801               sub eax, 1
// 004d6c21  740d                 je 0x4d6c30
// 004d6c23  5e                   pop esi
// 004d6c24  5b                   pop ebx
// 004d6c25  5f                   pop edi
// 004d6c26  b8fbffffff           mov eax, 0xfffffffb
// 004d6c2b  5d                   pop ebp
// 004d6c2c  83c424               add esp, 0x24
// 004d6c2f  c3                   ret 
// 004d6c30  8b4701               mov eax, dword ptr [edi + 1]
// 004d6c33  8b4f05               mov ecx, dword ptr [edi + 5]
// 004d6c36  8b5709               mov edx, dword ptr [edi + 9]
// 004d6c39  89442414             mov dword ptr [esp + 0x14], eax
// 004d6c3d  8b470d               mov eax, dword ptr [edi + 0xd]
// 004d6c40  894c2418             mov dword ptr [esp + 0x18], ecx
// 004d6c44  8954241c             mov dword ptr [esp + 0x1c], edx
// 004d6c48  89442420             mov dword ptr [esp + 0x20], eax
// 004d6c4c  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d6c50  85db                 test ebx, ebx
// 004d6c52  0f8ea7010000         jle 0x4d6dff
// 004d6c58  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 004d6c5c  83c530               add ebp, 0x30
// 004d6c5f  896c2444             mov dword ptr [esp + 0x44], ebp
// 004d6c63  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 004d6c67  eb07                 jmp 0x4d6c70
// 004d6c69  8da42400000000       lea esp, [esp]
// 004d6c70  33f6                 xor esi, esi
// 004d6c72  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d6c76  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d6c7a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d6c7e  8a5c2415             mov bl, byte ptr [esp + 0x15]
// 004d6c82  894c2424             mov dword ptr [esp + 0x24], ecx
// 004d6c86  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004d6c8a  89542428             mov dword ptr [esp + 0x28], edx
// 004d6c8e  8b542444             mov edx, dword ptr [esp + 0x44]
// 004d6c92  8944242c             mov dword ptr [esp + 0x2c], eax
// 004d6c96  52                   push edx
// 004d6c97  8d442428             lea eax, [esp + 0x28]
// 004d6c9b  894c2434             mov dword ptr [esp + 0x34], ecx
// 004d6c9f  50                   push eax
// 004d6ca0  8bc8                 mov ecx, eax
// 004d6ca2  51                   push ecx
// 004d6ca3  e8c8f2ffff           call 0x4d5f70
// 004d6ca8  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 004d6cad  02c0                 add al, al
// 004d6caf  8ad3                 mov dl, bl
// 004d6cb1  c0ea07               shr dl, 7
// 004d6cb4  0ad0                 or dl, al
// 004d6cb6  8a442422             mov al, byte ptr [esp + 0x22]
// 004d6cba  88542420             mov byte ptr [esp + 0x20], dl
// 004d6cbe  8ac8                 mov cl, al
// 004d6cc0  c0e907               shr cl, 7
// 004d6cc3  02db                 add bl, bl
// 004d6cc5  0acb                 or cl, bl
// 004d6cc7  884c2421             mov byte ptr [esp + 0x21], cl
// 004d6ccb  8a4c2423             mov cl, byte ptr [esp + 0x23]
// 004d6ccf  8ad1                 mov dl, cl
// 004d6cd1  c0ea07               shr dl, 7
// 004d6cd4  02c0                 add al, al
// 004d6cd6  0ad0                 or dl, al
// 004d6cd8  8a442424             mov al, byte ptr [esp + 0x24]
// 004d6cdc  88542422             mov byte ptr [esp + 0x22], dl
// 004d6ce0  8ad0                 mov dl, al
// 004d6ce2  c0ea07               shr dl, 7
// 004d6ce5  02c9                 add cl, cl
// 004d6ce7  0ad1                 or dl, cl
// 004d6ce9  8a4c2425             mov cl, byte ptr [esp + 0x25]
// 004d6ced  88542423             mov byte ptr [esp + 0x23], dl
// 004d6cf1  8ad1                 mov dl, cl
// 004d6cf3  c0ea07               shr dl, 7
// 004d6cf6  02c0                 add al, al
// 004d6cf8  0ad0                 or dl, al
// 004d6cfa  8a442426             mov al, byte ptr [esp + 0x26]
// 004d6cfe  88542424             mov byte ptr [esp + 0x24], dl
// 004d6d02  8ad0                 mov dl, al
// 004d6d04  c0ea07               shr dl, 7
// 004d6d07  02c9                 add cl, cl
// 004d6d09  0ad1                 or dl, cl
// 004d6d0b  8a4c2427             mov cl, byte ptr [esp + 0x27]
// 004d6d0f  88542425             mov byte ptr [esp + 0x25], dl
// 004d6d13  8ad1                 mov dl, cl
// 004d6d15  c0ea07               shr dl, 7
// 004d6d18  02c0                 add al, al
// 004d6d1a  0ad0                 or dl, al
// 004d6d1c  8a442428             mov al, byte ptr [esp + 0x28]
// 004d6d20  88542426             mov byte ptr [esp + 0x26], dl
// 004d6d24  8ad0                 mov dl, al
// 004d6d26  c0ea07               shr dl, 7
// 004d6d29  02c9                 add cl, cl
// 004d6d2b  0ad1                 or dl, cl
// 004d6d2d  8a4c2429             mov cl, byte ptr [esp + 0x29]
// 004d6d31  88542427             mov byte ptr [esp + 0x27], dl
// 004d6d35  8ad1                 mov dl, cl
// 004d6d37  c0ea07               shr dl, 7
// 004d6d3a  02c0                 add al, al
// 004d6d3c  0ad0                 or dl, al
// 004d6d3e  8a44242a             mov al, byte ptr [esp + 0x2a]
// 004d6d42  88542428             mov byte ptr [esp + 0x28], dl
// 004d6d46  8ad0                 mov dl, al
// 004d6d48  c0ea07               shr dl, 7
// 004d6d4b  02c9                 add cl, cl
// 004d6d4d  0ad1                 or dl, cl
// 004d6d4f  8a4c242b             mov cl, byte ptr [esp + 0x2b]
// 004d6d53  88542429             mov byte ptr [esp + 0x29], dl
// 004d6d57  8ad1                 mov dl, cl
// 004d6d59  83c40c               add esp, 0xc
// 004d6d5c  c0ea07               shr dl, 7
// 004d6d5f  02c0                 add al, al
// 004d6d61  0ad0                 or dl, al
// 004d6d63  8a442420             mov al, byte ptr [esp + 0x20]
// 004d6d67  8854241e             mov byte ptr [esp + 0x1e], dl
// 004d6d6b  02c9                 add cl, cl
// 004d6d6d  8ad0                 mov dl, al
// 004d6d6f  c0ea07               shr dl, 7
// 004d6d72  0ad1                 or dl, cl
// 004d6d74  8a4c2421             mov cl, byte ptr [esp + 0x21]
// 004d6d78  8854241f             mov byte ptr [esp + 0x1f], dl
// 004d6d7c  8ad1                 mov dl, cl
// 004d6d7e  c0ea07               shr dl, 7
// 004d6d81  02c0                 add al, al
// 004d6d83  0ad0                 or dl, al
// 004d6d85  8a442422             mov al, byte ptr [esp + 0x22]
// 004d6d89  02c9                 add cl, cl
// 004d6d8b  88542420             mov byte ptr [esp + 0x20], dl
// 004d6d8f  8ad0                 mov dl, al
// 004d6d91  c0ea07               shr dl, 7
// 004d6d94  0ad1                 or dl, cl
// 004d6d96  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 004d6d9b  c0e907               shr cl, 7
// 004d6d9e  02c0                 add al, al
// 004d6da0  0ac8                 or cl, al
// 004d6da2  884c2422             mov byte ptr [esp + 0x22], cl
// 004d6da6  8bc6                 mov eax, esi
// 004d6da8  88542421             mov byte ptr [esp + 0x21], dl
// 004d6dac  c1e803               shr eax, 3
// 004d6daf  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 004d6db3  8bd6                 mov edx, esi
// 004d6db5  83e207               and edx, 7
// 004d6db8  b107                 mov cl, 7
// 004d6dba  2aca                 sub cl, dl
// 004d6dbc  d2eb                 shr bl, cl
// 004d6dbe  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 004d6dc3  80e301               and bl, 1
// 004d6dc6  02c9                 add cl, cl
// 004d6dc8  0ad9                 or bl, cl
// 004d6dca  885c2423             mov byte ptr [esp + 0x23], bl
// 004d6dce  0fb65c2424           movzx ebx, byte ptr [esp + 0x24]
// 004d6dd3  80e380               and bl, 0x80
// 004d6dd6  8aca                 mov cl, dl
// 004d6dd8  d2eb                 shr bl, cl
// 004d6dda  46                   inc esi
// 004d6ddb  301c38               xor byte ptr [eax + edi], bl
// 004d6dde  81fe80000000         cmp esi, 0x80
// 004d6de4  0f8c88feffff         jl 0x4d6c72
// 004d6dea  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d6dee  48                   dec eax
// 004d6def  89442410             mov dword ptr [esp + 0x10], eax
// 004d6df3  85c0                 test eax, eax
// 004d6df5  0f8f75feffff         jg 0x4d6c70
// 004d6dfb  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 004d6dff  5e                   pop esi
// 004d6e00  8bc3                 mov eax, ebx
// 004d6e02  5b                   pop ebx
// 004d6e03  5f                   pop edi
// 004d6e04  c1e007               shl eax, 7
// 004d6e07  5d                   pop ebp
// 004d6e08  83c424               add esp, 0x24
// 004d6e0b  c3                   ret 
// 004d6e0c  8b742440             mov esi, dword ptr [esp + 0x40]
// 004d6e10  83c530               add ebp, 0x30
// 004d6e13  55                   push ebp
// 004d6e14  8d542428             lea edx, [esp + 0x28]
// 004d6e18  52                   push edx
// 004d6e19  56                   push esi
// 004d6e1a  e831f5ffff           call 0x4d6350
// 004d6e1f  8b4f01               mov ecx, dword ptr [edi + 1]
// 004d6e22  334c2430             xor ecx, dword ptr [esp + 0x30]
// 004d6e26  8b442454             mov eax, dword ptr [esp + 0x54]
// 004d6e2a  8908                 mov dword ptr [eax], ecx
// 004d6e2c  8b5705               mov edx, dword ptr [edi + 5]
// 004d6e2f  33542434             xor edx, dword ptr [esp + 0x34]
// 004d6e33  4b                   dec ebx
// 004d6e34  895004               mov dword ptr [eax + 4], edx
// 004d6e37  8b4f09               mov ecx, dword ptr [edi + 9]
// 004d6e3a  334c2438             xor ecx, dword ptr [esp + 0x38]
// 004d6e3e  83c40c               add esp, 0xc
// 004d6e41  894808               mov dword ptr [eax + 8], ecx
// 004d6e44  8b570d               mov edx, dword ptr [edi + 0xd]
// 004d6e47  33542430             xor edx, dword ptr [esp + 0x30]
// 004d6e4b  89500c               mov dword ptr [eax + 0xc], edx
// 004d6e4e  85db                 test ebx, ebx
// 004d6e50  7ea9                 jle 0x4d6dfb
// 004d6e52  8d7814               lea edi, [eax + 0x14]
// 004d6e55  55                   push ebp
// 004d6e56  8d442428             lea eax, [esp + 0x28]
// 004d6e5a  50                   push eax
// 004d6e5b  56                   push esi
// 004d6e5c  e8eff4ffff           call 0x4d6350
// 004d6e61  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 004d6e64  334c2430             xor ecx, dword ptr [esp + 0x30]
// 004d6e68  4b                   dec ebx
// 004d6e69  894ffc               mov dword ptr [edi - 4], ecx
// 004d6e6c  8b56f4               mov edx, dword ptr [esi - 0xc]
// 004d6e6f  33542434             xor edx, dword ptr [esp + 0x34]
// 004d6e73  83c40c               add esp, 0xc
// 004d6e76  8917                 mov dword ptr [edi], edx
// 004d6e78  8b46f8               mov eax, dword ptr [esi - 8]
// 004d6e7b  3344242c             xor eax, dword ptr [esp + 0x2c]
// 004d6e7f  83c610               add esi, 0x10
// 004d6e82  894704               mov dword ptr [edi + 4], eax
// 004d6e85  8b4eec               mov ecx, dword ptr [esi - 0x14]
// 004d6e88  334c2430             xor ecx, dword ptr [esp + 0x30]
// 004d6e8c  83c710               add edi, 0x10
// 004d6e8f  894ff8               mov dword ptr [edi - 8], ecx
// 004d6e92  85db                 test ebx, ebx
// 004d6e94  7fbf                 jg 0x4d6e55
// 004d6e96  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 004d6e9a  5e                   pop esi
// 004d6e9b  8bc3                 mov eax, ebx
// 004d6e9d  5b                   pop ebx
// 004d6e9e  5f                   pop edi
// 004d6e9f  c1e007               shl eax, 7
// 004d6ea2  5d                   pop ebp
// 004d6ea3  83c424               add esp, 0x24
// 004d6ea6  c3                   ret 
// 004d6ea7  8bf3                 mov esi, ebx
// 004d6ea9  85db                 test ebx, ebx
// 004d6eab  0f8e4effffff         jle 0x4d6dff
// 004d6eb1  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 004d6eb5  83c530               add ebp, 0x30
// 004d6eb8  896c2444             mov dword ptr [esp + 0x44], ebp
// 004d6ebc  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 004d6ec0  8b542444             mov edx, dword ptr [esp + 0x44]
// 004d6ec4  52                   push edx
// 004d6ec5  55                   push ebp
// 004d6ec6  57                   push edi
// 004d6ec7  e884f4ffff           call 0x4d6350
// 004d6ecc  4e                   dec esi
// 004d6ecd  83c40c               add esp, 0xc
// 004d6ed0  83c710               add edi, 0x10
// 004d6ed3  83c510               add ebp, 0x10
// 004d6ed6  85f6                 test esi, esi
// 004d6ed8  7fe6                 jg 0x4d6ec0
// 004d6eda  5e                   pop esi
// 004d6edb  8bc3                 mov eax, ebx
// 004d6edd  5b                   pop ebx
// 004d6ede  5f                   pop edi
// 004d6edf  c1e007               shl eax, 7
// 004d6ee2  5d                   pop ebp
// 004d6ee3  83c424               add esp, 0x24
// 004d6ee6  c3                   ret 
// 004d6ee7  5f                   pop edi
// 004d6ee8  b8fbffffff           mov eax, 0xfffffffb
// 004d6eed  5d                   pop ebp
// 004d6eee  83c424               add esp, 0x24
// 004d6ef1  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?blockDecrypt@@YAHPAUcipherInstance@@PAUkeyInstance@@PAEH2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
