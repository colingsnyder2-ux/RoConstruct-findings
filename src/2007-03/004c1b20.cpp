// roc 2007-03 004c1b20  unit: seg_004c0000  size: 836 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c1b20
//
// 004c1b20  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c1b24  83ec24               sub esp, 0x24
// 004c1b27  03c0                 add eax, eax
// 004c1b29  55                   push ebp
// 004c1b2a  03c0                 add eax, eax
// 004c1b2c  57                   push edi
// 004c1b2d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 004c1b31  03c0                 add eax, eax
// 004c1b33  85ff                 test edi, edi
// 004c1b35  0f841e030000         je 0x4c1e59
// 004c1b3b  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 004c1b3f  85ed                 test ebp, ebp
// 004c1b41  0f8412030000         je 0x4c1e59
// 004c1b47  8a0f                 mov cl, byte ptr [edi]
// 004c1b49  80f903               cmp cl, 3
// 004c1b4c  740a                 je 0x4c1b58
// 004c1b4e  807d0000             cmp byte ptr [ebp], 0
// 004c1b52  0f8401030000         je 0x4c1e59
// 004c1b58  99                   cdq 
// 004c1b59  83e27f               and edx, 0x7f
// 004c1b5c  03c2                 add eax, edx
// 004c1b5e  53                   push ebx
// 004c1b5f  8bd8                 mov ebx, eax
// 004c1b61  0fb6c1               movzx eax, cl
// 004c1b64  c1fb07               sar ebx, 7
// 004c1b67  83e801               sub eax, 1
// 004c1b6a  56                   push esi
// 004c1b6b  895c2438             mov dword ptr [esp + 0x38], ebx
// 004c1b6f  0f849f020000         je 0x4c1e14
// 004c1b75  83e801               sub eax, 1
// 004c1b78  0f84f2010000         je 0x4c1d70
// 004c1b7e  83e801               sub eax, 1
// 004c1b81  740d                 je 0x4c1b90
// 004c1b83  5e                   pop esi
// 004c1b84  5b                   pop ebx
// 004c1b85  5f                   pop edi
// 004c1b86  b8fbffffff           mov eax, 0xfffffffb
// 004c1b8b  5d                   pop ebp
// 004c1b8c  83c424               add esp, 0x24
// 004c1b8f  c3                   ret 
// 004c1b90  85db                 test ebx, ebx
// 004c1b92  8b4701               mov eax, dword ptr [edi + 1]
// 004c1b95  8b4f05               mov ecx, dword ptr [edi + 5]
// 004c1b98  8b5709               mov edx, dword ptr [edi + 9]
// 004c1b9b  89442414             mov dword ptr [esp + 0x14], eax
// 004c1b9f  8b470d               mov eax, dword ptr [edi + 0xd]
// 004c1ba2  894c2418             mov dword ptr [esp + 0x18], ecx
// 004c1ba6  8954241c             mov dword ptr [esp + 0x1c], edx
// 004c1baa  89442420             mov dword ptr [esp + 0x20], eax
// 004c1bae  895c2410             mov dword ptr [esp + 0x10], ebx
// 004c1bb2  0f8eab010000         jle 0x4c1d63
// 004c1bb8  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 004c1bbc  83c530               add ebp, 0x30
// 004c1bbf  896c2444             mov dword ptr [esp + 0x44], ebp
// 004c1bc3  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 004c1bc7  eb07                 jmp 0x4c1bd0
// 004c1bc9  8da42400000000       lea esp, [esp]
// 004c1bd0  33f6                 xor esi, esi
// 004c1bd2  8b542418             mov edx, dword ptr [esp + 0x18]
// 004c1bd6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c1bda  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004c1bde  8a5c2415             mov bl, byte ptr [esp + 0x15]
// 004c1be2  894c2424             mov dword ptr [esp + 0x24], ecx
// 004c1be6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004c1bea  89542428             mov dword ptr [esp + 0x28], edx
// 004c1bee  8b542444             mov edx, dword ptr [esp + 0x44]
// 004c1bf2  8944242c             mov dword ptr [esp + 0x2c], eax
// 004c1bf6  52                   push edx
// 004c1bf7  8d442428             lea eax, [esp + 0x28]
// 004c1bfb  894c2434             mov dword ptr [esp + 0x34], ecx
// 004c1bff  50                   push eax
// 004c1c00  8bc8                 mov ecx, eax
// 004c1c02  51                   push ecx
// 004c1c03  e8b8f2ffff           call 0x4c0ec0
// 004c1c08  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 004c1c0d  02c0                 add al, al
// 004c1c0f  8ad3                 mov dl, bl
// 004c1c11  c0ea07               shr dl, 7
// 004c1c14  0ad0                 or dl, al
// 004c1c16  8a442422             mov al, byte ptr [esp + 0x22]
// 004c1c1a  88542420             mov byte ptr [esp + 0x20], dl
// 004c1c1e  8ac8                 mov cl, al
// 004c1c20  c0e907               shr cl, 7
// 004c1c23  02db                 add bl, bl
// 004c1c25  0acb                 or cl, bl
// 004c1c27  884c2421             mov byte ptr [esp + 0x21], cl
// 004c1c2b  8a4c2423             mov cl, byte ptr [esp + 0x23]
// 004c1c2f  8ad1                 mov dl, cl
// 004c1c31  c0ea07               shr dl, 7
// 004c1c34  02c0                 add al, al
// 004c1c36  0ad0                 or dl, al
// 004c1c38  8a442424             mov al, byte ptr [esp + 0x24]
// 004c1c3c  88542422             mov byte ptr [esp + 0x22], dl
// 004c1c40  8ad0                 mov dl, al
// 004c1c42  c0ea07               shr dl, 7
// 004c1c45  02c9                 add cl, cl
// 004c1c47  0ad1                 or dl, cl
// 004c1c49  8a4c2425             mov cl, byte ptr [esp + 0x25]
// 004c1c4d  88542423             mov byte ptr [esp + 0x23], dl
// 004c1c51  8ad1                 mov dl, cl
// 004c1c53  c0ea07               shr dl, 7
// 004c1c56  02c0                 add al, al
// 004c1c58  0ad0                 or dl, al
// 004c1c5a  8a442426             mov al, byte ptr [esp + 0x26]
// 004c1c5e  88542424             mov byte ptr [esp + 0x24], dl
// 004c1c62  8ad0                 mov dl, al
// 004c1c64  c0ea07               shr dl, 7
// 004c1c67  02c9                 add cl, cl
// 004c1c69  0ad1                 or dl, cl
// 004c1c6b  8a4c2427             mov cl, byte ptr [esp + 0x27]
// 004c1c6f  88542425             mov byte ptr [esp + 0x25], dl
// 004c1c73  8ad1                 mov dl, cl
// 004c1c75  c0ea07               shr dl, 7
// 004c1c78  02c0                 add al, al
// 004c1c7a  0ad0                 or dl, al
// 004c1c7c  8a442428             mov al, byte ptr [esp + 0x28]
// 004c1c80  88542426             mov byte ptr [esp + 0x26], dl
// 004c1c84  8ad0                 mov dl, al
// 004c1c86  c0ea07               shr dl, 7
// 004c1c89  02c9                 add cl, cl
// 004c1c8b  0ad1                 or dl, cl
// 004c1c8d  8a4c2429             mov cl, byte ptr [esp + 0x29]
// 004c1c91  88542427             mov byte ptr [esp + 0x27], dl
// 004c1c95  8ad1                 mov dl, cl
// 004c1c97  c0ea07               shr dl, 7
// 004c1c9a  02c0                 add al, al
// 004c1c9c  0ad0                 or dl, al
// 004c1c9e  8a44242a             mov al, byte ptr [esp + 0x2a]
// 004c1ca2  88542428             mov byte ptr [esp + 0x28], dl
// 004c1ca6  8ad0                 mov dl, al
// 004c1ca8  c0ea07               shr dl, 7
// 004c1cab  02c9                 add cl, cl
// 004c1cad  0ad1                 or dl, cl
// 004c1caf  8a4c242b             mov cl, byte ptr [esp + 0x2b]
// 004c1cb3  88542429             mov byte ptr [esp + 0x29], dl
// 004c1cb7  8ad1                 mov dl, cl
// 004c1cb9  83c40c               add esp, 0xc
// 004c1cbc  c0ea07               shr dl, 7
// 004c1cbf  02c0                 add al, al
// 004c1cc1  0ad0                 or dl, al
// 004c1cc3  8a442420             mov al, byte ptr [esp + 0x20]
// 004c1cc7  8854241e             mov byte ptr [esp + 0x1e], dl
// 004c1ccb  02c9                 add cl, cl
// 004c1ccd  8ad0                 mov dl, al
// 004c1ccf  c0ea07               shr dl, 7
// 004c1cd2  0ad1                 or dl, cl
// 004c1cd4  8a4c2421             mov cl, byte ptr [esp + 0x21]
// 004c1cd8  8854241f             mov byte ptr [esp + 0x1f], dl
// 004c1cdc  8ad1                 mov dl, cl
// 004c1cde  c0ea07               shr dl, 7
// 004c1ce1  02c0                 add al, al
// 004c1ce3  0ad0                 or dl, al
// 004c1ce5  8a442422             mov al, byte ptr [esp + 0x22]
// 004c1ce9  02c9                 add cl, cl
// 004c1ceb  88542420             mov byte ptr [esp + 0x20], dl
// 004c1cef  8ad0                 mov dl, al
// 004c1cf1  c0ea07               shr dl, 7
// 004c1cf4  0ad1                 or dl, cl
// 004c1cf6  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 004c1cfb  c0e907               shr cl, 7
// 004c1cfe  02c0                 add al, al
// 004c1d00  0ac8                 or cl, al
// 004c1d02  884c2422             mov byte ptr [esp + 0x22], cl
// 004c1d06  8bc6                 mov eax, esi
// 004c1d08  88542421             mov byte ptr [esp + 0x21], dl
// 004c1d0c  c1e803               shr eax, 3
// 004c1d0f  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 004c1d13  8bd6                 mov edx, esi
// 004c1d15  83e207               and edx, 7
// 004c1d18  b107                 mov cl, 7
// 004c1d1a  2aca                 sub cl, dl
// 004c1d1c  d2eb                 shr bl, cl
// 004c1d1e  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 004c1d23  80e301               and bl, 1
// 004c1d26  02c9                 add cl, cl
// 004c1d28  0ad9                 or bl, cl
// 004c1d2a  885c2423             mov byte ptr [esp + 0x23], bl
// 004c1d2e  0fb65c2424           movzx ebx, byte ptr [esp + 0x24]
// 004c1d33  80e380               and bl, 0x80
// 004c1d36  8aca                 mov cl, dl
// 004c1d38  d2eb                 shr bl, cl
// 004c1d3a  83c601               add esi, 1
// 004c1d3d  301c38               xor byte ptr [eax + edi], bl
// 004c1d40  81fe80000000         cmp esi, 0x80
// 004c1d46  0f8c86feffff         jl 0x4c1bd2
// 004c1d4c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c1d50  83e801               sub eax, 1
// 004c1d53  85c0                 test eax, eax
// 004c1d55  89442410             mov dword ptr [esp + 0x10], eax
// 004c1d59  0f8f71feffff         jg 0x4c1bd0
// 004c1d5f  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 004c1d63  5e                   pop esi
// 004c1d64  8bc3                 mov eax, ebx
// 004c1d66  5b                   pop ebx
// 004c1d67  5f                   pop edi
// 004c1d68  c1e007               shl eax, 7
// 004c1d6b  5d                   pop ebp
// 004c1d6c  83c424               add esp, 0x24
// 004c1d6f  c3                   ret 
// 004c1d70  8b742440             mov esi, dword ptr [esp + 0x40]
// 004c1d74  83c530               add ebp, 0x30
// 004c1d77  55                   push ebp
// 004c1d78  8d542428             lea edx, [esp + 0x28]
// 004c1d7c  52                   push edx
// 004c1d7d  56                   push esi
// 004c1d7e  e81df5ffff           call 0x4c12a0
// 004c1d83  8b4f01               mov ecx, dword ptr [edi + 1]
// 004c1d86  334c2430             xor ecx, dword ptr [esp + 0x30]
// 004c1d8a  8b442454             mov eax, dword ptr [esp + 0x54]
// 004c1d8e  8908                 mov dword ptr [eax], ecx
// 004c1d90  8b5705               mov edx, dword ptr [edi + 5]
// 004c1d93  33542434             xor edx, dword ptr [esp + 0x34]
// 004c1d97  83c3ff               add ebx, -1
// 004c1d9a  895004               mov dword ptr [eax + 4], edx
// 004c1d9d  8b4f09               mov ecx, dword ptr [edi + 9]
// 004c1da0  334c2438             xor ecx, dword ptr [esp + 0x38]
// 004c1da4  83c40c               add esp, 0xc
// 004c1da7  894808               mov dword ptr [eax + 8], ecx
// 004c1daa  8b570d               mov edx, dword ptr [edi + 0xd]
// 004c1dad  33542430             xor edx, dword ptr [esp + 0x30]
// 004c1db1  85db                 test ebx, ebx
// 004c1db3  89500c               mov dword ptr [eax + 0xc], edx
// 004c1db6  7ea7                 jle 0x4c1d5f
// 004c1db8  8d7814               lea edi, [eax + 0x14]
// 004c1dbb  eb03                 jmp 0x4c1dc0
// 004c1dbd  8d4900               lea ecx, [ecx]
// 004c1dc0  55                   push ebp
// 004c1dc1  8d442428             lea eax, [esp + 0x28]
// 004c1dc5  50                   push eax
// 004c1dc6  56                   push esi
// 004c1dc7  e8d4f4ffff           call 0x4c12a0
// 004c1dcc  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 004c1dcf  334c2430             xor ecx, dword ptr [esp + 0x30]
// 004c1dd3  83eb01               sub ebx, 1
// 004c1dd6  894ffc               mov dword ptr [edi - 4], ecx
// 004c1dd9  8b56f4               mov edx, dword ptr [esi - 0xc]
// 004c1ddc  33542434             xor edx, dword ptr [esp + 0x34]
// 004c1de0  83c40c               add esp, 0xc
// 004c1de3  8917                 mov dword ptr [edi], edx
// 004c1de5  8b46f8               mov eax, dword ptr [esi - 8]
// 004c1de8  3344242c             xor eax, dword ptr [esp + 0x2c]
// 004c1dec  83c610               add esi, 0x10
// 004c1def  894704               mov dword ptr [edi + 4], eax
// 004c1df2  8b4eec               mov ecx, dword ptr [esi - 0x14]
// 004c1df5  334c2430             xor ecx, dword ptr [esp + 0x30]
// 004c1df9  83c710               add edi, 0x10
// 004c1dfc  85db                 test ebx, ebx
// 004c1dfe  894ff8               mov dword ptr [edi - 8], ecx
// 004c1e01  7fbd                 jg 0x4c1dc0
// 004c1e03  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 004c1e07  5e                   pop esi
// 004c1e08  8bc3                 mov eax, ebx
// 004c1e0a  5b                   pop ebx
// 004c1e0b  5f                   pop edi
// 004c1e0c  c1e007               shl eax, 7
// 004c1e0f  5d                   pop ebp
// 004c1e10  83c424               add esp, 0x24
// 004c1e13  c3                   ret 
// 004c1e14  85db                 test ebx, ebx
// 004c1e16  8bf3                 mov esi, ebx
// 004c1e18  0f8e45ffffff         jle 0x4c1d63
// 004c1e1e  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 004c1e22  83c530               add ebp, 0x30
// 004c1e25  896c2444             mov dword ptr [esp + 0x44], ebp
// 004c1e29  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 004c1e2d  8d4900               lea ecx, [ecx]
// 004c1e30  8b542444             mov edx, dword ptr [esp + 0x44]
// 004c1e34  52                   push edx
// 004c1e35  55                   push ebp
// 004c1e36  57                   push edi
// 004c1e37  e864f4ffff           call 0x4c12a0
// 004c1e3c  83ee01               sub esi, 1
// 004c1e3f  83c40c               add esp, 0xc
// 004c1e42  83c710               add edi, 0x10
// 004c1e45  83c510               add ebp, 0x10
// 004c1e48  85f6                 test esi, esi
// 004c1e4a  7fe4                 jg 0x4c1e30
// 004c1e4c  5e                   pop esi
// 004c1e4d  8bc3                 mov eax, ebx
// 004c1e4f  5b                   pop ebx
// 004c1e50  5f                   pop edi
// 004c1e51  c1e007               shl eax, 7
// 004c1e54  5d                   pop ebp
// 004c1e55  83c424               add esp, 0x24
// 004c1e58  c3                   ret 
// 004c1e59  5f                   pop edi
// 004c1e5a  b8fbffffff           mov eax, 0xfffffffb
// 004c1e5f  5d                   pop ebp
// 004c1e60  83c424               add esp, 0x24
// 004c1e63  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?blockDecrypt@@YAHPAUcipherInstance@@PAUkeyInstance@@PAEH2@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
