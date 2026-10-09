// roc 2009-12 00571b30  unit: CSHA1  size: 834 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00571b30
//
// 00571b30  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00571b34  83ec24               sub esp, 0x24
// 00571b37  53                   push ebx
// 00571b38  85c9                 test ecx, ecx
// 00571b3a  0f8428030000         je 0x571e68
// 00571b40  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00571b44  85db                 test ebx, ebx
// 00571b46  0f841c030000         je 0x571e68
// 00571b4c  803b01               cmp byte ptr [ebx], 1
// 00571b4f  0f8413030000         je 0x571e68
// 00571b55  8b442438             mov eax, dword ptr [esp + 0x38]
// 00571b59  03c0                 add eax, eax
// 00571b5b  03c0                 add eax, eax
// 00571b5d  03c0                 add eax, eax
// 00571b5f  99                   cdq 
// 00571b60  83e27f               and edx, 0x7f
// 00571b63  55                   push ebp
// 00571b64  03c2                 add eax, edx
// 00571b66  56                   push esi
// 00571b67  8bf0                 mov esi, eax
// 00571b69  0fb601               movzx eax, byte ptr [ecx]
// 00571b6c  c1fe07               sar esi, 7
// 00571b6f  83e801               sub eax, 1
// 00571b72  57                   push edi
// 00571b73  89742410             mov dword ptr [esp + 0x10], esi
// 00571b77  0f84af020000         je 0x571e2c
// 00571b7d  83e801               sub eax, 1
// 00571b80  0f841b020000         je 0x571da1
// 00571b86  83e801               sub eax, 1
// 00571b89  740d                 je 0x571b98
// 00571b8b  5f                   pop edi
// 00571b8c  5e                   pop esi
// 00571b8d  5d                   pop ebp
// 00571b8e  b8fbffffff           mov eax, 0xfffffffb
// 00571b93  5b                   pop ebx
// 00571b94  83c424               add esp, 0x24
// 00571b97  c3                   ret 
// 00571b98  8b4101               mov eax, dword ptr [ecx + 1]
// 00571b9b  8b5105               mov edx, dword ptr [ecx + 5]
// 00571b9e  89442414             mov dword ptr [esp + 0x14], eax
// 00571ba2  8b4109               mov eax, dword ptr [ecx + 9]
// 00571ba5  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 00571ba8  89542418             mov dword ptr [esp + 0x18], edx
// 00571bac  8944241c             mov dword ptr [esp + 0x1c], eax
// 00571bb0  894c2420             mov dword ptr [esp + 0x20], ecx
// 00571bb4  89742438             mov dword ptr [esp + 0x38], esi
// 00571bb8  85f6                 test esi, esi
// 00571bba  0f8e9b020000         jle 0x571e5b
// 00571bc0  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00571bc4  83c330               add ebx, 0x30
// 00571bc7  895c2444             mov dword ptr [esp + 0x44], ebx
// 00571bcb  eb03                 jmp 0x571bd0
// 00571bcd  8d4900               lea ecx, [ecx]
// 00571bd0  33ff                 xor edi, edi
// 00571bd2  8b442418             mov eax, dword ptr [esp + 0x18]
// 00571bd6  8b542414             mov edx, dword ptr [esp + 0x14]
// 00571bda  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00571bde  89542424             mov dword ptr [esp + 0x24], edx
// 00571be2  8b542420             mov edx, dword ptr [esp + 0x20]
// 00571be6  89442428             mov dword ptr [esp + 0x28], eax
// 00571bea  8b442444             mov eax, dword ptr [esp + 0x44]
// 00571bee  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00571bf2  50                   push eax
// 00571bf3  8d4c2428             lea ecx, [esp + 0x28]
// 00571bf7  89542434             mov dword ptr [esp + 0x34], edx
// 00571bfb  51                   push ecx
// 00571bfc  8bd1                 mov edx, ecx
// 00571bfe  52                   push edx
// 00571bff  e84cf6ffff           call 0x571250
// 00571c04  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 00571c09  02db                 add bl, bl
// 00571c0b  8bc7                 mov eax, edi
// 00571c0d  c1e803               shr eax, 3
// 00571c10  8d3428               lea esi, [eax + ebp]
// 00571c13  0fb6442430           movzx eax, byte ptr [esp + 0x30]
// 00571c18  8bd7                 mov edx, edi
// 00571c1a  83e207               and edx, 7
// 00571c1d  2480                 and al, 0x80
// 00571c1f  8aca                 mov cl, dl
// 00571c21  d2e8                 shr al, cl
// 00571c23  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 00571c28  c0e907               shr cl, 7
// 00571c2b  0acb                 or cl, bl
// 00571c2d  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 00571c32  884c2420             mov byte ptr [esp + 0x20], cl
// 00571c36  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 00571c3b  c0e907               shr cl, 7
// 00571c3e  02db                 add bl, bl
// 00571c40  0acb                 or cl, bl
// 00571c42  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 00571c47  884c2421             mov byte ptr [esp + 0x21], cl
// 00571c4b  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 00571c50  c0e907               shr cl, 7
// 00571c53  02db                 add bl, bl
// 00571c55  0acb                 or cl, bl
// 00571c57  0fb65c2423           movzx ebx, byte ptr [esp + 0x23]
// 00571c5c  884c2422             mov byte ptr [esp + 0x22], cl
// 00571c60  0fb64c2424           movzx ecx, byte ptr [esp + 0x24]
// 00571c65  c0e907               shr cl, 7
// 00571c68  02db                 add bl, bl
// 00571c6a  0acb                 or cl, bl
// 00571c6c  0fb65c2424           movzx ebx, byte ptr [esp + 0x24]
// 00571c71  884c2423             mov byte ptr [esp + 0x23], cl
// 00571c75  0fb64c2425           movzx ecx, byte ptr [esp + 0x25]
// 00571c7a  c0e907               shr cl, 7
// 00571c7d  02db                 add bl, bl
// 00571c7f  0acb                 or cl, bl
// 00571c81  0fb65c2425           movzx ebx, byte ptr [esp + 0x25]
// 00571c86  884c2424             mov byte ptr [esp + 0x24], cl
// 00571c8a  0fb64c2426           movzx ecx, byte ptr [esp + 0x26]
// 00571c8f  c0e907               shr cl, 7
// 00571c92  02db                 add bl, bl
// 00571c94  0acb                 or cl, bl
// 00571c96  0fb65c2426           movzx ebx, byte ptr [esp + 0x26]
// 00571c9b  3006                 xor byte ptr [esi], al
// 00571c9d  884c2425             mov byte ptr [esp + 0x25], cl
// 00571ca1  0fb64c2427           movzx ecx, byte ptr [esp + 0x27]
// 00571ca6  8a06                 mov al, byte ptr [esi]
// 00571ca8  c0e907               shr cl, 7
// 00571cab  02db                 add bl, bl
// 00571cad  0acb                 or cl, bl
// 00571caf  0fb65c2427           movzx ebx, byte ptr [esp + 0x27]
// 00571cb4  884c2426             mov byte ptr [esp + 0x26], cl
// 00571cb8  0fb64c2428           movzx ecx, byte ptr [esp + 0x28]
// 00571cbd  c0e907               shr cl, 7
// 00571cc0  02db                 add bl, bl
// 00571cc2  0acb                 or cl, bl
// 00571cc4  0fb65c2428           movzx ebx, byte ptr [esp + 0x28]
// 00571cc9  884c2427             mov byte ptr [esp + 0x27], cl
// 00571ccd  0fb64c2429           movzx ecx, byte ptr [esp + 0x29]
// 00571cd2  c0e907               shr cl, 7
// 00571cd5  02db                 add bl, bl
// 00571cd7  83c40c               add esp, 0xc
// 00571cda  0acb                 or cl, bl
// 00571cdc  884c241c             mov byte ptr [esp + 0x1c], cl
// 00571ce0  0fb64c241e           movzx ecx, byte ptr [esp + 0x1e]
// 00571ce5  0fb65c241d           movzx ebx, byte ptr [esp + 0x1d]
// 00571cea  c0e907               shr cl, 7
// 00571ced  02db                 add bl, bl
// 00571cef  0acb                 or cl, bl
// 00571cf1  0fb65c241e           movzx ebx, byte ptr [esp + 0x1e]
// 00571cf6  884c241d             mov byte ptr [esp + 0x1d], cl
// 00571cfa  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 00571cff  c0e907               shr cl, 7
// 00571d02  02db                 add bl, bl
// 00571d04  0acb                 or cl, bl
// 00571d06  0fb65c241f           movzx ebx, byte ptr [esp + 0x1f]
// 00571d0b  884c241e             mov byte ptr [esp + 0x1e], cl
// 00571d0f  0fb64c2420           movzx ecx, byte ptr [esp + 0x20]
// 00571d14  c0e907               shr cl, 7
// 00571d17  02db                 add bl, bl
// 00571d19  0acb                 or cl, bl
// 00571d1b  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 00571d20  884c241f             mov byte ptr [esp + 0x1f], cl
// 00571d24  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 00571d29  c0e907               shr cl, 7
// 00571d2c  02db                 add bl, bl
// 00571d2e  0acb                 or cl, bl
// 00571d30  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 00571d35  884c2420             mov byte ptr [esp + 0x20], cl
// 00571d39  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 00571d3e  c0e907               shr cl, 7
// 00571d41  02db                 add bl, bl
// 00571d43  0acb                 or cl, bl
// 00571d45  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 00571d4a  884c2421             mov byte ptr [esp + 0x21], cl
// 00571d4e  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 00571d53  c0e907               shr cl, 7
// 00571d56  02db                 add bl, bl
// 00571d58  0acb                 or cl, bl
// 00571d5a  884c2422             mov byte ptr [esp + 0x22], cl
// 00571d5e  b107                 mov cl, 7
// 00571d60  2aca                 sub cl, dl
// 00571d62  8a542423             mov dl, byte ptr [esp + 0x23]
// 00571d66  d2e8                 shr al, cl
// 00571d68  02d2                 add dl, dl
// 00571d6a  47                   inc edi
// 00571d6b  2401                 and al, 1
// 00571d6d  0ac2                 or al, dl
// 00571d6f  81ff80000000         cmp edi, 0x80
// 00571d75  88442423             mov byte ptr [esp + 0x23], al
// 00571d79  0f8c53feffff         jl 0x571bd2
// 00571d7f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00571d83  48                   dec eax
// 00571d84  89442438             mov dword ptr [esp + 0x38], eax
// 00571d88  85c0                 test eax, eax
// 00571d8a  0f8f40feffff         jg 0x571bd0
// 00571d90  8b742410             mov esi, dword ptr [esp + 0x10]
// 00571d94  5f                   pop edi
// 00571d95  8bc6                 mov eax, esi
// 00571d97  5e                   pop esi
// 00571d98  5d                   pop ebp
// 00571d99  c1e007               shl eax, 7
// 00571d9c  5b                   pop ebx
// 00571d9d  83c424               add esp, 0x24
// 00571da0  c3                   ret 
// 00571da1  8b7901               mov edi, dword ptr [ecx + 1]
// 00571da4  8b5905               mov ebx, dword ptr [ecx + 5]
// 00571da7  8b6909               mov ebp, dword ptr [ecx + 9]
// 00571daa  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 00571dad  89742438             mov dword ptr [esp + 0x38], esi
// 00571db1  85f6                 test esi, esi
// 00571db3  0f8ea2000000         jle 0x571e5b
// 00571db9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00571dbd  8b742440             mov esi, dword ptr [esp + 0x40]
// 00571dc1  83c030               add eax, 0x30
// 00571dc4  89442444             mov dword ptr [esp + 0x44], eax
// 00571dc8  eb0a                 jmp 0x571dd4
// 00571dca  8d9b00000000         lea ebx, [ebx]
// 00571dd0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00571dd4  334e0c               xor ecx, dword ptr [esi + 0xc]
// 00571dd7  8b542448             mov edx, dword ptr [esp + 0x48]
// 00571ddb  333e                 xor edi, dword ptr [esi]
// 00571ddd  335e04               xor ebx, dword ptr [esi + 4]
// 00571de0  336e08               xor ebp, dword ptr [esi + 8]
// 00571de3  894c2430             mov dword ptr [esp + 0x30], ecx
// 00571de7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00571deb  51                   push ecx
// 00571dec  52                   push edx
// 00571ded  8d44242c             lea eax, [esp + 0x2c]
// 00571df1  50                   push eax
// 00571df2  897c2430             mov dword ptr [esp + 0x30], edi
// 00571df6  895c2434             mov dword ptr [esp + 0x34], ebx
// 00571dfa  896c2438             mov dword ptr [esp + 0x38], ebp
// 00571dfe  e84df4ffff           call 0x571250
// 00571e03  8b442444             mov eax, dword ptr [esp + 0x44]
// 00571e07  8344245410           add dword ptr [esp + 0x54], 0x10
// 00571e0c  48                   dec eax
// 00571e0d  83c40c               add esp, 0xc
// 00571e10  83c610               add esi, 0x10
// 00571e13  89442438             mov dword ptr [esp + 0x38], eax
// 00571e17  85c0                 test eax, eax
// 00571e19  7fb5                 jg 0x571dd0
// 00571e1b  8b742410             mov esi, dword ptr [esp + 0x10]
// 00571e1f  5f                   pop edi
// 00571e20  8bc6                 mov eax, esi
// 00571e22  5e                   pop esi
// 00571e23  5d                   pop ebp
// 00571e24  c1e007               shl eax, 7
// 00571e27  5b                   pop ebx
// 00571e28  83c424               add esp, 0x24
// 00571e2b  c3                   ret 
// 00571e2c  8bfe                 mov edi, esi
// 00571e2e  85f6                 test esi, esi
// 00571e30  7e29                 jle 0x571e5b
// 00571e32  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00571e36  83c330               add ebx, 0x30
// 00571e39  895c2444             mov dword ptr [esp + 0x44], ebx
// 00571e3d  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00571e41  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00571e45  51                   push ecx
// 00571e46  55                   push ebp
// 00571e47  53                   push ebx
// 00571e48  e803f4ffff           call 0x571250
// 00571e4d  4f                   dec edi
// 00571e4e  83c40c               add esp, 0xc
// 00571e51  83c310               add ebx, 0x10
// 00571e54  83c510               add ebp, 0x10
// 00571e57  85ff                 test edi, edi
// 00571e59  7fe6                 jg 0x571e41
// 00571e5b  5f                   pop edi
// 00571e5c  8bc6                 mov eax, esi
// 00571e5e  5e                   pop esi
// 00571e5f  5d                   pop ebp
// 00571e60  c1e007               shl eax, 7
// 00571e63  5b                   pop ebx
// 00571e64  83c424               add esp, 0x24
// 00571e67  c3                   ret 
// 00571e68  b8fbffffff           mov eax, 0xfffffffb
// 00571e6d  5b                   pop ebx
// 00571e6e  83c424               add esp, 0x24
// 00571e71  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?blockEncrypt@@YAHPAUcipherInstance@@PAUkeyInstance@@PAEH2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
