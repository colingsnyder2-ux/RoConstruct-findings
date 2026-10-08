// roc 2012-06 005c9c50  unit: RBX::AdornRbxGfx  size: 834 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005c9c50
//
// 005c9c50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c9c54  83ec24               sub esp, 0x24
// 005c9c57  53                   push ebx
// 005c9c58  85c9                 test ecx, ecx
// 005c9c5a  0f8428030000         je 0x5c9f88
// 005c9c60  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005c9c64  85db                 test ebx, ebx
// 005c9c66  0f841c030000         je 0x5c9f88
// 005c9c6c  803b01               cmp byte ptr [ebx], 1
// 005c9c6f  0f8413030000         je 0x5c9f88
// 005c9c75  8b442438             mov eax, dword ptr [esp + 0x38]
// 005c9c79  03c0                 add eax, eax
// 005c9c7b  03c0                 add eax, eax
// 005c9c7d  03c0                 add eax, eax
// 005c9c7f  99                   cdq 
// 005c9c80  83e27f               and edx, 0x7f
// 005c9c83  55                   push ebp
// 005c9c84  03c2                 add eax, edx
// 005c9c86  56                   push esi
// 005c9c87  8bf0                 mov esi, eax
// 005c9c89  0fb601               movzx eax, byte ptr [ecx]
// 005c9c8c  c1fe07               sar esi, 7
// 005c9c8f  83e801               sub eax, 1
// 005c9c92  57                   push edi
// 005c9c93  89742410             mov dword ptr [esp + 0x10], esi
// 005c9c97  0f84af020000         je 0x5c9f4c
// 005c9c9d  83e801               sub eax, 1
// 005c9ca0  0f841b020000         je 0x5c9ec1
// 005c9ca6  83e801               sub eax, 1
// 005c9ca9  740d                 je 0x5c9cb8
// 005c9cab  5f                   pop edi
// 005c9cac  5e                   pop esi
// 005c9cad  5d                   pop ebp
// 005c9cae  b8fbffffff           mov eax, 0xfffffffb
// 005c9cb3  5b                   pop ebx
// 005c9cb4  83c424               add esp, 0x24
// 005c9cb7  c3                   ret 
// 005c9cb8  8b4101               mov eax, dword ptr [ecx + 1]
// 005c9cbb  8b5105               mov edx, dword ptr [ecx + 5]
// 005c9cbe  89442414             mov dword ptr [esp + 0x14], eax
// 005c9cc2  8b4109               mov eax, dword ptr [ecx + 9]
// 005c9cc5  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 005c9cc8  89542418             mov dword ptr [esp + 0x18], edx
// 005c9ccc  8944241c             mov dword ptr [esp + 0x1c], eax
// 005c9cd0  894c2420             mov dword ptr [esp + 0x20], ecx
// 005c9cd4  89742438             mov dword ptr [esp + 0x38], esi
// 005c9cd8  85f6                 test esi, esi
// 005c9cda  0f8e9b020000         jle 0x5c9f7b
// 005c9ce0  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 005c9ce4  83c330               add ebx, 0x30
// 005c9ce7  895c2444             mov dword ptr [esp + 0x44], ebx
// 005c9ceb  eb03                 jmp 0x5c9cf0
// 005c9ced  8d4900               lea ecx, [ecx]
// 005c9cf0  33ff                 xor edi, edi
// 005c9cf2  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c9cf6  8b542414             mov edx, dword ptr [esp + 0x14]
// 005c9cfa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c9cfe  89542424             mov dword ptr [esp + 0x24], edx
// 005c9d02  8b542420             mov edx, dword ptr [esp + 0x20]
// 005c9d06  89442428             mov dword ptr [esp + 0x28], eax
// 005c9d0a  8b442444             mov eax, dword ptr [esp + 0x44]
// 005c9d0e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 005c9d12  50                   push eax
// 005c9d13  8d4c2428             lea ecx, [esp + 0x28]
// 005c9d17  89542434             mov dword ptr [esp + 0x34], edx
// 005c9d1b  51                   push ecx
// 005c9d1c  8bd1                 mov edx, ecx
// 005c9d1e  52                   push edx
// 005c9d1f  e8ecf9ffff           call 0x5c9710
// 005c9d24  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 005c9d29  02db                 add bl, bl
// 005c9d2b  8bc7                 mov eax, edi
// 005c9d2d  c1e803               shr eax, 3
// 005c9d30  8d3428               lea esi, [eax + ebp]
// 005c9d33  0fb6442430           movzx eax, byte ptr [esp + 0x30]
// 005c9d38  8bd7                 mov edx, edi
// 005c9d3a  83e207               and edx, 7
// 005c9d3d  2480                 and al, 0x80
// 005c9d3f  8aca                 mov cl, dl
// 005c9d41  d2e8                 shr al, cl
// 005c9d43  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 005c9d48  c0e907               shr cl, 7
// 005c9d4b  0acb                 or cl, bl
// 005c9d4d  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 005c9d52  884c2420             mov byte ptr [esp + 0x20], cl
// 005c9d56  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 005c9d5b  c0e907               shr cl, 7
// 005c9d5e  02db                 add bl, bl
// 005c9d60  0acb                 or cl, bl
// 005c9d62  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 005c9d67  884c2421             mov byte ptr [esp + 0x21], cl
// 005c9d6b  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 005c9d70  c0e907               shr cl, 7
// 005c9d73  02db                 add bl, bl
// 005c9d75  0acb                 or cl, bl
// 005c9d77  0fb65c2423           movzx ebx, byte ptr [esp + 0x23]
// 005c9d7c  884c2422             mov byte ptr [esp + 0x22], cl
// 005c9d80  0fb64c2424           movzx ecx, byte ptr [esp + 0x24]
// 005c9d85  c0e907               shr cl, 7
// 005c9d88  02db                 add bl, bl
// 005c9d8a  0acb                 or cl, bl
// 005c9d8c  0fb65c2424           movzx ebx, byte ptr [esp + 0x24]
// 005c9d91  884c2423             mov byte ptr [esp + 0x23], cl
// 005c9d95  0fb64c2425           movzx ecx, byte ptr [esp + 0x25]
// 005c9d9a  c0e907               shr cl, 7
// 005c9d9d  02db                 add bl, bl
// 005c9d9f  0acb                 or cl, bl
// 005c9da1  0fb65c2425           movzx ebx, byte ptr [esp + 0x25]
// 005c9da6  884c2424             mov byte ptr [esp + 0x24], cl
// 005c9daa  0fb64c2426           movzx ecx, byte ptr [esp + 0x26]
// 005c9daf  c0e907               shr cl, 7
// 005c9db2  02db                 add bl, bl
// 005c9db4  0acb                 or cl, bl
// 005c9db6  0fb65c2426           movzx ebx, byte ptr [esp + 0x26]
// 005c9dbb  3006                 xor byte ptr [esi], al
// 005c9dbd  884c2425             mov byte ptr [esp + 0x25], cl
// 005c9dc1  0fb64c2427           movzx ecx, byte ptr [esp + 0x27]
// 005c9dc6  8a06                 mov al, byte ptr [esi]
// 005c9dc8  c0e907               shr cl, 7
// 005c9dcb  02db                 add bl, bl
// 005c9dcd  0acb                 or cl, bl
// 005c9dcf  0fb65c2427           movzx ebx, byte ptr [esp + 0x27]
// 005c9dd4  884c2426             mov byte ptr [esp + 0x26], cl
// 005c9dd8  0fb64c2428           movzx ecx, byte ptr [esp + 0x28]
// 005c9ddd  c0e907               shr cl, 7
// 005c9de0  02db                 add bl, bl
// 005c9de2  0acb                 or cl, bl
// 005c9de4  0fb65c2428           movzx ebx, byte ptr [esp + 0x28]
// 005c9de9  884c2427             mov byte ptr [esp + 0x27], cl
// 005c9ded  0fb64c2429           movzx ecx, byte ptr [esp + 0x29]
// 005c9df2  c0e907               shr cl, 7
// 005c9df5  02db                 add bl, bl
// 005c9df7  83c40c               add esp, 0xc
// 005c9dfa  0acb                 or cl, bl
// 005c9dfc  884c241c             mov byte ptr [esp + 0x1c], cl
// 005c9e00  0fb64c241e           movzx ecx, byte ptr [esp + 0x1e]
// 005c9e05  0fb65c241d           movzx ebx, byte ptr [esp + 0x1d]
// 005c9e0a  c0e907               shr cl, 7
// 005c9e0d  02db                 add bl, bl
// 005c9e0f  0acb                 or cl, bl
// 005c9e11  0fb65c241e           movzx ebx, byte ptr [esp + 0x1e]
// 005c9e16  884c241d             mov byte ptr [esp + 0x1d], cl
// 005c9e1a  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 005c9e1f  c0e907               shr cl, 7
// 005c9e22  02db                 add bl, bl
// 005c9e24  0acb                 or cl, bl
// 005c9e26  0fb65c241f           movzx ebx, byte ptr [esp + 0x1f]
// 005c9e2b  884c241e             mov byte ptr [esp + 0x1e], cl
// 005c9e2f  0fb64c2420           movzx ecx, byte ptr [esp + 0x20]
// 005c9e34  c0e907               shr cl, 7
// 005c9e37  02db                 add bl, bl
// 005c9e39  0acb                 or cl, bl
// 005c9e3b  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 005c9e40  884c241f             mov byte ptr [esp + 0x1f], cl
// 005c9e44  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 005c9e49  c0e907               shr cl, 7
// 005c9e4c  02db                 add bl, bl
// 005c9e4e  0acb                 or cl, bl
// 005c9e50  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 005c9e55  884c2420             mov byte ptr [esp + 0x20], cl
// 005c9e59  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 005c9e5e  c0e907               shr cl, 7
// 005c9e61  02db                 add bl, bl
// 005c9e63  0acb                 or cl, bl
// 005c9e65  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 005c9e6a  884c2421             mov byte ptr [esp + 0x21], cl
// 005c9e6e  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 005c9e73  c0e907               shr cl, 7
// 005c9e76  02db                 add bl, bl
// 005c9e78  0acb                 or cl, bl
// 005c9e7a  884c2422             mov byte ptr [esp + 0x22], cl
// 005c9e7e  b107                 mov cl, 7
// 005c9e80  2aca                 sub cl, dl
// 005c9e82  8a542423             mov dl, byte ptr [esp + 0x23]
// 005c9e86  d2e8                 shr al, cl
// 005c9e88  02d2                 add dl, dl
// 005c9e8a  47                   inc edi
// 005c9e8b  2401                 and al, 1
// 005c9e8d  0ac2                 or al, dl
// 005c9e8f  81ff80000000         cmp edi, 0x80
// 005c9e95  88442423             mov byte ptr [esp + 0x23], al
// 005c9e99  0f8c53feffff         jl 0x5c9cf2
// 005c9e9f  8b442438             mov eax, dword ptr [esp + 0x38]
// 005c9ea3  48                   dec eax
// 005c9ea4  89442438             mov dword ptr [esp + 0x38], eax
// 005c9ea8  85c0                 test eax, eax
// 005c9eaa  0f8f40feffff         jg 0x5c9cf0
// 005c9eb0  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c9eb4  5f                   pop edi
// 005c9eb5  8bc6                 mov eax, esi
// 005c9eb7  5e                   pop esi
// 005c9eb8  5d                   pop ebp
// 005c9eb9  c1e007               shl eax, 7
// 005c9ebc  5b                   pop ebx
// 005c9ebd  83c424               add esp, 0x24
// 005c9ec0  c3                   ret 
// 005c9ec1  8b7901               mov edi, dword ptr [ecx + 1]
// 005c9ec4  8b5905               mov ebx, dword ptr [ecx + 5]
// 005c9ec7  8b6909               mov ebp, dword ptr [ecx + 9]
// 005c9eca  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 005c9ecd  89742438             mov dword ptr [esp + 0x38], esi
// 005c9ed1  85f6                 test esi, esi
// 005c9ed3  0f8ea2000000         jle 0x5c9f7b
// 005c9ed9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005c9edd  8b742440             mov esi, dword ptr [esp + 0x40]
// 005c9ee1  83c030               add eax, 0x30
// 005c9ee4  89442444             mov dword ptr [esp + 0x44], eax
// 005c9ee8  eb0a                 jmp 0x5c9ef4
// 005c9eea  8d9b00000000         lea ebx, [ebx]
// 005c9ef0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005c9ef4  334e0c               xor ecx, dword ptr [esi + 0xc]
// 005c9ef7  8b542448             mov edx, dword ptr [esp + 0x48]
// 005c9efb  333e                 xor edi, dword ptr [esi]
// 005c9efd  335e04               xor ebx, dword ptr [esi + 4]
// 005c9f00  336e08               xor ebp, dword ptr [esi + 8]
// 005c9f03  894c2430             mov dword ptr [esp + 0x30], ecx
// 005c9f07  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005c9f0b  51                   push ecx
// 005c9f0c  52                   push edx
// 005c9f0d  8d44242c             lea eax, [esp + 0x2c]
// 005c9f11  50                   push eax
// 005c9f12  897c2430             mov dword ptr [esp + 0x30], edi
// 005c9f16  895c2434             mov dword ptr [esp + 0x34], ebx
// 005c9f1a  896c2438             mov dword ptr [esp + 0x38], ebp
// 005c9f1e  e8edf7ffff           call 0x5c9710
// 005c9f23  8b442444             mov eax, dword ptr [esp + 0x44]
// 005c9f27  8344245410           add dword ptr [esp + 0x54], 0x10
// 005c9f2c  48                   dec eax
// 005c9f2d  83c40c               add esp, 0xc
// 005c9f30  83c610               add esi, 0x10
// 005c9f33  89442438             mov dword ptr [esp + 0x38], eax
// 005c9f37  85c0                 test eax, eax
// 005c9f39  7fb5                 jg 0x5c9ef0
// 005c9f3b  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c9f3f  5f                   pop edi
// 005c9f40  8bc6                 mov eax, esi
// 005c9f42  5e                   pop esi
// 005c9f43  5d                   pop ebp
// 005c9f44  c1e007               shl eax, 7
// 005c9f47  5b                   pop ebx
// 005c9f48  83c424               add esp, 0x24
// 005c9f4b  c3                   ret 
// 005c9f4c  8bfe                 mov edi, esi
// 005c9f4e  85f6                 test esi, esi
// 005c9f50  7e29                 jle 0x5c9f7b
// 005c9f52  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 005c9f56  83c330               add ebx, 0x30
// 005c9f59  895c2444             mov dword ptr [esp + 0x44], ebx
// 005c9f5d  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005c9f61  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005c9f65  51                   push ecx
// 005c9f66  55                   push ebp
// 005c9f67  53                   push ebx
// 005c9f68  e8a3f7ffff           call 0x5c9710
// 005c9f6d  4f                   dec edi
// 005c9f6e  83c40c               add esp, 0xc
// 005c9f71  83c310               add ebx, 0x10
// 005c9f74  83c510               add ebp, 0x10
// 005c9f77  85ff                 test edi, edi
// 005c9f79  7fe6                 jg 0x5c9f61
// 005c9f7b  5f                   pop edi
// 005c9f7c  8bc6                 mov eax, esi
// 005c9f7e  5e                   pop esi
// 005c9f7f  5d                   pop ebp
// 005c9f80  c1e007               shl eax, 7
// 005c9f83  5b                   pop ebx
// 005c9f84  83c424               add esp, 0x24
// 005c9f87  c3                   ret 
// 005c9f88  b8fbffffff           mov eax, 0xfffffffb
// 005c9f8d  5b                   pop ebx
// 005c9f8e  83c424               add esp, 0x24
// 005c9f91  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?blockEncrypt@@YAHPAUcipherInstance@@PAUkeyInstance@@PAEH2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
