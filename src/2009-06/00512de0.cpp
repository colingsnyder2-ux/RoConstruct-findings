// roc 2009-06 00512de0  unit: CSHA1  size: 834 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00512de0
//
// 00512de0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00512de4  83ec24               sub esp, 0x24
// 00512de7  53                   push ebx
// 00512de8  85c9                 test ecx, ecx
// 00512dea  0f8428030000         je 0x513118
// 00512df0  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00512df4  85db                 test ebx, ebx
// 00512df6  0f841c030000         je 0x513118
// 00512dfc  803b01               cmp byte ptr [ebx], 1
// 00512dff  0f8413030000         je 0x513118
// 00512e05  8b442438             mov eax, dword ptr [esp + 0x38]
// 00512e09  03c0                 add eax, eax
// 00512e0b  03c0                 add eax, eax
// 00512e0d  03c0                 add eax, eax
// 00512e0f  99                   cdq 
// 00512e10  83e27f               and edx, 0x7f
// 00512e13  55                   push ebp
// 00512e14  03c2                 add eax, edx
// 00512e16  56                   push esi
// 00512e17  8bf0                 mov esi, eax
// 00512e19  0fb601               movzx eax, byte ptr [ecx]
// 00512e1c  c1fe07               sar esi, 7
// 00512e1f  83e801               sub eax, 1
// 00512e22  57                   push edi
// 00512e23  89742410             mov dword ptr [esp + 0x10], esi
// 00512e27  0f84af020000         je 0x5130dc
// 00512e2d  83e801               sub eax, 1
// 00512e30  0f841b020000         je 0x513051
// 00512e36  83e801               sub eax, 1
// 00512e39  740d                 je 0x512e48
// 00512e3b  5f                   pop edi
// 00512e3c  5e                   pop esi
// 00512e3d  5d                   pop ebp
// 00512e3e  b8fbffffff           mov eax, 0xfffffffb
// 00512e43  5b                   pop ebx
// 00512e44  83c424               add esp, 0x24
// 00512e47  c3                   ret 
// 00512e48  8b4101               mov eax, dword ptr [ecx + 1]
// 00512e4b  8b5105               mov edx, dword ptr [ecx + 5]
// 00512e4e  89442414             mov dword ptr [esp + 0x14], eax
// 00512e52  8b4109               mov eax, dword ptr [ecx + 9]
// 00512e55  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 00512e58  89542418             mov dword ptr [esp + 0x18], edx
// 00512e5c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00512e60  894c2420             mov dword ptr [esp + 0x20], ecx
// 00512e64  89742438             mov dword ptr [esp + 0x38], esi
// 00512e68  85f6                 test esi, esi
// 00512e6a  0f8e9b020000         jle 0x51310b
// 00512e70  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00512e74  83c330               add ebx, 0x30
// 00512e77  895c2444             mov dword ptr [esp + 0x44], ebx
// 00512e7b  eb03                 jmp 0x512e80
// 00512e7d  8d4900               lea ecx, [ecx]
// 00512e80  33ff                 xor edi, edi
// 00512e82  8b442418             mov eax, dword ptr [esp + 0x18]
// 00512e86  8b542414             mov edx, dword ptr [esp + 0x14]
// 00512e8a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00512e8e  89542424             mov dword ptr [esp + 0x24], edx
// 00512e92  8b542420             mov edx, dword ptr [esp + 0x20]
// 00512e96  89442428             mov dword ptr [esp + 0x28], eax
// 00512e9a  8b442444             mov eax, dword ptr [esp + 0x44]
// 00512e9e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00512ea2  50                   push eax
// 00512ea3  8d4c2428             lea ecx, [esp + 0x28]
// 00512ea7  89542434             mov dword ptr [esp + 0x34], edx
// 00512eab  51                   push ecx
// 00512eac  8bd1                 mov edx, ecx
// 00512eae  52                   push edx
// 00512eaf  e84cf6ffff           call 0x512500
// 00512eb4  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 00512eb9  02db                 add bl, bl
// 00512ebb  8bc7                 mov eax, edi
// 00512ebd  c1e803               shr eax, 3
// 00512ec0  8d3428               lea esi, [eax + ebp]
// 00512ec3  0fb6442430           movzx eax, byte ptr [esp + 0x30]
// 00512ec8  8bd7                 mov edx, edi
// 00512eca  83e207               and edx, 7
// 00512ecd  2480                 and al, 0x80
// 00512ecf  8aca                 mov cl, dl
// 00512ed1  d2e8                 shr al, cl
// 00512ed3  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 00512ed8  c0e907               shr cl, 7
// 00512edb  0acb                 or cl, bl
// 00512edd  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 00512ee2  884c2420             mov byte ptr [esp + 0x20], cl
// 00512ee6  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 00512eeb  c0e907               shr cl, 7
// 00512eee  02db                 add bl, bl
// 00512ef0  0acb                 or cl, bl
// 00512ef2  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 00512ef7  884c2421             mov byte ptr [esp + 0x21], cl
// 00512efb  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 00512f00  c0e907               shr cl, 7
// 00512f03  02db                 add bl, bl
// 00512f05  0acb                 or cl, bl
// 00512f07  0fb65c2423           movzx ebx, byte ptr [esp + 0x23]
// 00512f0c  884c2422             mov byte ptr [esp + 0x22], cl
// 00512f10  0fb64c2424           movzx ecx, byte ptr [esp + 0x24]
// 00512f15  c0e907               shr cl, 7
// 00512f18  02db                 add bl, bl
// 00512f1a  0acb                 or cl, bl
// 00512f1c  0fb65c2424           movzx ebx, byte ptr [esp + 0x24]
// 00512f21  884c2423             mov byte ptr [esp + 0x23], cl
// 00512f25  0fb64c2425           movzx ecx, byte ptr [esp + 0x25]
// 00512f2a  c0e907               shr cl, 7
// 00512f2d  02db                 add bl, bl
// 00512f2f  0acb                 or cl, bl
// 00512f31  0fb65c2425           movzx ebx, byte ptr [esp + 0x25]
// 00512f36  884c2424             mov byte ptr [esp + 0x24], cl
// 00512f3a  0fb64c2426           movzx ecx, byte ptr [esp + 0x26]
// 00512f3f  c0e907               shr cl, 7
// 00512f42  02db                 add bl, bl
// 00512f44  0acb                 or cl, bl
// 00512f46  0fb65c2426           movzx ebx, byte ptr [esp + 0x26]
// 00512f4b  3006                 xor byte ptr [esi], al
// 00512f4d  884c2425             mov byte ptr [esp + 0x25], cl
// 00512f51  0fb64c2427           movzx ecx, byte ptr [esp + 0x27]
// 00512f56  8a06                 mov al, byte ptr [esi]
// 00512f58  c0e907               shr cl, 7
// 00512f5b  02db                 add bl, bl
// 00512f5d  0acb                 or cl, bl
// 00512f5f  0fb65c2427           movzx ebx, byte ptr [esp + 0x27]
// 00512f64  884c2426             mov byte ptr [esp + 0x26], cl
// 00512f68  0fb64c2428           movzx ecx, byte ptr [esp + 0x28]
// 00512f6d  c0e907               shr cl, 7
// 00512f70  02db                 add bl, bl
// 00512f72  0acb                 or cl, bl
// 00512f74  0fb65c2428           movzx ebx, byte ptr [esp + 0x28]
// 00512f79  884c2427             mov byte ptr [esp + 0x27], cl
// 00512f7d  0fb64c2429           movzx ecx, byte ptr [esp + 0x29]
// 00512f82  c0e907               shr cl, 7
// 00512f85  02db                 add bl, bl
// 00512f87  83c40c               add esp, 0xc
// 00512f8a  0acb                 or cl, bl
// 00512f8c  884c241c             mov byte ptr [esp + 0x1c], cl
// 00512f90  0fb64c241e           movzx ecx, byte ptr [esp + 0x1e]
// 00512f95  0fb65c241d           movzx ebx, byte ptr [esp + 0x1d]
// 00512f9a  c0e907               shr cl, 7
// 00512f9d  02db                 add bl, bl
// 00512f9f  0acb                 or cl, bl
// 00512fa1  0fb65c241e           movzx ebx, byte ptr [esp + 0x1e]
// 00512fa6  884c241d             mov byte ptr [esp + 0x1d], cl
// 00512faa  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 00512faf  c0e907               shr cl, 7
// 00512fb2  02db                 add bl, bl
// 00512fb4  0acb                 or cl, bl
// 00512fb6  0fb65c241f           movzx ebx, byte ptr [esp + 0x1f]
// 00512fbb  884c241e             mov byte ptr [esp + 0x1e], cl
// 00512fbf  0fb64c2420           movzx ecx, byte ptr [esp + 0x20]
// 00512fc4  c0e907               shr cl, 7
// 00512fc7  02db                 add bl, bl
// 00512fc9  0acb                 or cl, bl
// 00512fcb  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 00512fd0  884c241f             mov byte ptr [esp + 0x1f], cl
// 00512fd4  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 00512fd9  c0e907               shr cl, 7
// 00512fdc  02db                 add bl, bl
// 00512fde  0acb                 or cl, bl
// 00512fe0  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 00512fe5  884c2420             mov byte ptr [esp + 0x20], cl
// 00512fe9  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 00512fee  c0e907               shr cl, 7
// 00512ff1  02db                 add bl, bl
// 00512ff3  0acb                 or cl, bl
// 00512ff5  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 00512ffa  884c2421             mov byte ptr [esp + 0x21], cl
// 00512ffe  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 00513003  c0e907               shr cl, 7
// 00513006  02db                 add bl, bl
// 00513008  0acb                 or cl, bl
// 0051300a  884c2422             mov byte ptr [esp + 0x22], cl
// 0051300e  b107                 mov cl, 7
// 00513010  2aca                 sub cl, dl
// 00513012  8a542423             mov dl, byte ptr [esp + 0x23]
// 00513016  d2e8                 shr al, cl
// 00513018  02d2                 add dl, dl
// 0051301a  47                   inc edi
// 0051301b  2401                 and al, 1
// 0051301d  0ac2                 or al, dl
// 0051301f  81ff80000000         cmp edi, 0x80
// 00513025  88442423             mov byte ptr [esp + 0x23], al
// 00513029  0f8c53feffff         jl 0x512e82
// 0051302f  8b442438             mov eax, dword ptr [esp + 0x38]
// 00513033  48                   dec eax
// 00513034  89442438             mov dword ptr [esp + 0x38], eax
// 00513038  85c0                 test eax, eax
// 0051303a  0f8f40feffff         jg 0x512e80
// 00513040  8b742410             mov esi, dword ptr [esp + 0x10]
// 00513044  5f                   pop edi
// 00513045  8bc6                 mov eax, esi
// 00513047  5e                   pop esi
// 00513048  5d                   pop ebp
// 00513049  c1e007               shl eax, 7
// 0051304c  5b                   pop ebx
// 0051304d  83c424               add esp, 0x24
// 00513050  c3                   ret 
// 00513051  8b7901               mov edi, dword ptr [ecx + 1]
// 00513054  8b5905               mov ebx, dword ptr [ecx + 5]
// 00513057  8b6909               mov ebp, dword ptr [ecx + 9]
// 0051305a  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 0051305d  89742438             mov dword ptr [esp + 0x38], esi
// 00513061  85f6                 test esi, esi
// 00513063  0f8ea2000000         jle 0x51310b
// 00513069  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0051306d  8b742440             mov esi, dword ptr [esp + 0x40]
// 00513071  83c030               add eax, 0x30
// 00513074  89442444             mov dword ptr [esp + 0x44], eax
// 00513078  eb0a                 jmp 0x513084
// 0051307a  8d9b00000000         lea ebx, [ebx]
// 00513080  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00513084  334e0c               xor ecx, dword ptr [esi + 0xc]
// 00513087  8b542448             mov edx, dword ptr [esp + 0x48]
// 0051308b  333e                 xor edi, dword ptr [esi]
// 0051308d  335e04               xor ebx, dword ptr [esi + 4]
// 00513090  336e08               xor ebp, dword ptr [esi + 8]
// 00513093  894c2430             mov dword ptr [esp + 0x30], ecx
// 00513097  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0051309b  51                   push ecx
// 0051309c  52                   push edx
// 0051309d  8d44242c             lea eax, [esp + 0x2c]
// 005130a1  50                   push eax
// 005130a2  897c2430             mov dword ptr [esp + 0x30], edi
// 005130a6  895c2434             mov dword ptr [esp + 0x34], ebx
// 005130aa  896c2438             mov dword ptr [esp + 0x38], ebp
// 005130ae  e84df4ffff           call 0x512500
// 005130b3  8b442444             mov eax, dword ptr [esp + 0x44]
// 005130b7  8344245410           add dword ptr [esp + 0x54], 0x10
// 005130bc  48                   dec eax
// 005130bd  83c40c               add esp, 0xc
// 005130c0  83c610               add esi, 0x10
// 005130c3  89442438             mov dword ptr [esp + 0x38], eax
// 005130c7  85c0                 test eax, eax
// 005130c9  7fb5                 jg 0x513080
// 005130cb  8b742410             mov esi, dword ptr [esp + 0x10]
// 005130cf  5f                   pop edi
// 005130d0  8bc6                 mov eax, esi
// 005130d2  5e                   pop esi
// 005130d3  5d                   pop ebp
// 005130d4  c1e007               shl eax, 7
// 005130d7  5b                   pop ebx
// 005130d8  83c424               add esp, 0x24
// 005130db  c3                   ret 
// 005130dc  8bfe                 mov edi, esi
// 005130de  85f6                 test esi, esi
// 005130e0  7e29                 jle 0x51310b
// 005130e2  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 005130e6  83c330               add ebx, 0x30
// 005130e9  895c2444             mov dword ptr [esp + 0x44], ebx
// 005130ed  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005130f1  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005130f5  51                   push ecx
// 005130f6  55                   push ebp
// 005130f7  53                   push ebx
// 005130f8  e803f4ffff           call 0x512500
// 005130fd  4f                   dec edi
// 005130fe  83c40c               add esp, 0xc
// 00513101  83c310               add ebx, 0x10
// 00513104  83c510               add ebp, 0x10
// 00513107  85ff                 test edi, edi
// 00513109  7fe6                 jg 0x5130f1
// 0051310b  5f                   pop edi
// 0051310c  8bc6                 mov eax, esi
// 0051310e  5e                   pop esi
// 0051310f  5d                   pop ebp
// 00513110  c1e007               shl eax, 7
// 00513113  5b                   pop ebx
// 00513114  83c424               add esp, 0x24
// 00513117  c3                   ret 
// 00513118  b8fbffffff           mov eax, 0xfffffffb
// 0051311d  5b                   pop ebx
// 0051311e  83c424               add esp, 0x24
// 00513121  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?blockEncrypt@@YAHPAUcipherInstance@@PAUkeyInstance@@PAEH2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
