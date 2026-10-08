// roc 2008-06 004d6870  unit: CSHA1  size: 834 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d6870
//
// 004d6870  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004d6874  83ec24               sub esp, 0x24
// 004d6877  53                   push ebx
// 004d6878  85c9                 test ecx, ecx
// 004d687a  0f8428030000         je 0x4d6ba8
// 004d6880  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004d6884  85db                 test ebx, ebx
// 004d6886  0f841c030000         je 0x4d6ba8
// 004d688c  803b01               cmp byte ptr [ebx], 1
// 004d688f  0f8413030000         je 0x4d6ba8
// 004d6895  8b442438             mov eax, dword ptr [esp + 0x38]
// 004d6899  03c0                 add eax, eax
// 004d689b  03c0                 add eax, eax
// 004d689d  03c0                 add eax, eax
// 004d689f  99                   cdq 
// 004d68a0  83e27f               and edx, 0x7f
// 004d68a3  55                   push ebp
// 004d68a4  03c2                 add eax, edx
// 004d68a6  56                   push esi
// 004d68a7  8bf0                 mov esi, eax
// 004d68a9  0fb601               movzx eax, byte ptr [ecx]
// 004d68ac  c1fe07               sar esi, 7
// 004d68af  83e801               sub eax, 1
// 004d68b2  57                   push edi
// 004d68b3  89742410             mov dword ptr [esp + 0x10], esi
// 004d68b7  0f84af020000         je 0x4d6b6c
// 004d68bd  83e801               sub eax, 1
// 004d68c0  0f841b020000         je 0x4d6ae1
// 004d68c6  83e801               sub eax, 1
// 004d68c9  740d                 je 0x4d68d8
// 004d68cb  5f                   pop edi
// 004d68cc  5e                   pop esi
// 004d68cd  5d                   pop ebp
// 004d68ce  b8fbffffff           mov eax, 0xfffffffb
// 004d68d3  5b                   pop ebx
// 004d68d4  83c424               add esp, 0x24
// 004d68d7  c3                   ret 
// 004d68d8  8b4101               mov eax, dword ptr [ecx + 1]
// 004d68db  8b5105               mov edx, dword ptr [ecx + 5]
// 004d68de  89442414             mov dword ptr [esp + 0x14], eax
// 004d68e2  8b4109               mov eax, dword ptr [ecx + 9]
// 004d68e5  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 004d68e8  89542418             mov dword ptr [esp + 0x18], edx
// 004d68ec  8944241c             mov dword ptr [esp + 0x1c], eax
// 004d68f0  894c2420             mov dword ptr [esp + 0x20], ecx
// 004d68f4  89742438             mov dword ptr [esp + 0x38], esi
// 004d68f8  85f6                 test esi, esi
// 004d68fa  0f8e9b020000         jle 0x4d6b9b
// 004d6900  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 004d6904  83c330               add ebx, 0x30
// 004d6907  895c2444             mov dword ptr [esp + 0x44], ebx
// 004d690b  eb03                 jmp 0x4d6910
// 004d690d  8d4900               lea ecx, [ecx]
// 004d6910  33ff                 xor edi, edi
// 004d6912  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d6916  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d691a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d691e  89542424             mov dword ptr [esp + 0x24], edx
// 004d6922  8b542420             mov edx, dword ptr [esp + 0x20]
// 004d6926  89442428             mov dword ptr [esp + 0x28], eax
// 004d692a  8b442444             mov eax, dword ptr [esp + 0x44]
// 004d692e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 004d6932  50                   push eax
// 004d6933  8d4c2428             lea ecx, [esp + 0x28]
// 004d6937  89542434             mov dword ptr [esp + 0x34], edx
// 004d693b  51                   push ecx
// 004d693c  8bd1                 mov edx, ecx
// 004d693e  52                   push edx
// 004d693f  e82cf6ffff           call 0x4d5f70
// 004d6944  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 004d6949  02db                 add bl, bl
// 004d694b  8bc7                 mov eax, edi
// 004d694d  c1e803               shr eax, 3
// 004d6950  8d3428               lea esi, [eax + ebp]
// 004d6953  0fb6442430           movzx eax, byte ptr [esp + 0x30]
// 004d6958  8bd7                 mov edx, edi
// 004d695a  83e207               and edx, 7
// 004d695d  2480                 and al, 0x80
// 004d695f  8aca                 mov cl, dl
// 004d6961  d2e8                 shr al, cl
// 004d6963  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 004d6968  c0e907               shr cl, 7
// 004d696b  0acb                 or cl, bl
// 004d696d  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 004d6972  884c2420             mov byte ptr [esp + 0x20], cl
// 004d6976  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 004d697b  c0e907               shr cl, 7
// 004d697e  02db                 add bl, bl
// 004d6980  0acb                 or cl, bl
// 004d6982  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 004d6987  884c2421             mov byte ptr [esp + 0x21], cl
// 004d698b  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 004d6990  c0e907               shr cl, 7
// 004d6993  02db                 add bl, bl
// 004d6995  0acb                 or cl, bl
// 004d6997  0fb65c2423           movzx ebx, byte ptr [esp + 0x23]
// 004d699c  884c2422             mov byte ptr [esp + 0x22], cl
// 004d69a0  0fb64c2424           movzx ecx, byte ptr [esp + 0x24]
// 004d69a5  c0e907               shr cl, 7
// 004d69a8  02db                 add bl, bl
// 004d69aa  0acb                 or cl, bl
// 004d69ac  0fb65c2424           movzx ebx, byte ptr [esp + 0x24]
// 004d69b1  884c2423             mov byte ptr [esp + 0x23], cl
// 004d69b5  0fb64c2425           movzx ecx, byte ptr [esp + 0x25]
// 004d69ba  c0e907               shr cl, 7
// 004d69bd  02db                 add bl, bl
// 004d69bf  0acb                 or cl, bl
// 004d69c1  0fb65c2425           movzx ebx, byte ptr [esp + 0x25]
// 004d69c6  884c2424             mov byte ptr [esp + 0x24], cl
// 004d69ca  0fb64c2426           movzx ecx, byte ptr [esp + 0x26]
// 004d69cf  c0e907               shr cl, 7
// 004d69d2  02db                 add bl, bl
// 004d69d4  0acb                 or cl, bl
// 004d69d6  0fb65c2426           movzx ebx, byte ptr [esp + 0x26]
// 004d69db  3006                 xor byte ptr [esi], al
// 004d69dd  884c2425             mov byte ptr [esp + 0x25], cl
// 004d69e1  0fb64c2427           movzx ecx, byte ptr [esp + 0x27]
// 004d69e6  8a06                 mov al, byte ptr [esi]
// 004d69e8  c0e907               shr cl, 7
// 004d69eb  02db                 add bl, bl
// 004d69ed  0acb                 or cl, bl
// 004d69ef  0fb65c2427           movzx ebx, byte ptr [esp + 0x27]
// 004d69f4  884c2426             mov byte ptr [esp + 0x26], cl
// 004d69f8  0fb64c2428           movzx ecx, byte ptr [esp + 0x28]
// 004d69fd  c0e907               shr cl, 7
// 004d6a00  02db                 add bl, bl
// 004d6a02  0acb                 or cl, bl
// 004d6a04  0fb65c2428           movzx ebx, byte ptr [esp + 0x28]
// 004d6a09  884c2427             mov byte ptr [esp + 0x27], cl
// 004d6a0d  0fb64c2429           movzx ecx, byte ptr [esp + 0x29]
// 004d6a12  c0e907               shr cl, 7
// 004d6a15  02db                 add bl, bl
// 004d6a17  83c40c               add esp, 0xc
// 004d6a1a  0acb                 or cl, bl
// 004d6a1c  884c241c             mov byte ptr [esp + 0x1c], cl
// 004d6a20  0fb64c241e           movzx ecx, byte ptr [esp + 0x1e]
// 004d6a25  0fb65c241d           movzx ebx, byte ptr [esp + 0x1d]
// 004d6a2a  c0e907               shr cl, 7
// 004d6a2d  02db                 add bl, bl
// 004d6a2f  0acb                 or cl, bl
// 004d6a31  0fb65c241e           movzx ebx, byte ptr [esp + 0x1e]
// 004d6a36  884c241d             mov byte ptr [esp + 0x1d], cl
// 004d6a3a  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 004d6a3f  c0e907               shr cl, 7
// 004d6a42  02db                 add bl, bl
// 004d6a44  0acb                 or cl, bl
// 004d6a46  0fb65c241f           movzx ebx, byte ptr [esp + 0x1f]
// 004d6a4b  884c241e             mov byte ptr [esp + 0x1e], cl
// 004d6a4f  0fb64c2420           movzx ecx, byte ptr [esp + 0x20]
// 004d6a54  c0e907               shr cl, 7
// 004d6a57  02db                 add bl, bl
// 004d6a59  0acb                 or cl, bl
// 004d6a5b  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 004d6a60  884c241f             mov byte ptr [esp + 0x1f], cl
// 004d6a64  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 004d6a69  c0e907               shr cl, 7
// 004d6a6c  02db                 add bl, bl
// 004d6a6e  0acb                 or cl, bl
// 004d6a70  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 004d6a75  884c2420             mov byte ptr [esp + 0x20], cl
// 004d6a79  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 004d6a7e  c0e907               shr cl, 7
// 004d6a81  02db                 add bl, bl
// 004d6a83  0acb                 or cl, bl
// 004d6a85  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 004d6a8a  884c2421             mov byte ptr [esp + 0x21], cl
// 004d6a8e  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 004d6a93  c0e907               shr cl, 7
// 004d6a96  02db                 add bl, bl
// 004d6a98  0acb                 or cl, bl
// 004d6a9a  884c2422             mov byte ptr [esp + 0x22], cl
// 004d6a9e  b107                 mov cl, 7
// 004d6aa0  2aca                 sub cl, dl
// 004d6aa2  8a542423             mov dl, byte ptr [esp + 0x23]
// 004d6aa6  d2e8                 shr al, cl
// 004d6aa8  02d2                 add dl, dl
// 004d6aaa  47                   inc edi
// 004d6aab  2401                 and al, 1
// 004d6aad  0ac2                 or al, dl
// 004d6aaf  81ff80000000         cmp edi, 0x80
// 004d6ab5  88442423             mov byte ptr [esp + 0x23], al
// 004d6ab9  0f8c53feffff         jl 0x4d6912
// 004d6abf  8b442438             mov eax, dword ptr [esp + 0x38]
// 004d6ac3  48                   dec eax
// 004d6ac4  89442438             mov dword ptr [esp + 0x38], eax
// 004d6ac8  85c0                 test eax, eax
// 004d6aca  0f8f40feffff         jg 0x4d6910
// 004d6ad0  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d6ad4  5f                   pop edi
// 004d6ad5  8bc6                 mov eax, esi
// 004d6ad7  5e                   pop esi
// 004d6ad8  5d                   pop ebp
// 004d6ad9  c1e007               shl eax, 7
// 004d6adc  5b                   pop ebx
// 004d6add  83c424               add esp, 0x24
// 004d6ae0  c3                   ret 
// 004d6ae1  8b7901               mov edi, dword ptr [ecx + 1]
// 004d6ae4  8b5905               mov ebx, dword ptr [ecx + 5]
// 004d6ae7  8b6909               mov ebp, dword ptr [ecx + 9]
// 004d6aea  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 004d6aed  89742438             mov dword ptr [esp + 0x38], esi
// 004d6af1  85f6                 test esi, esi
// 004d6af3  0f8ea2000000         jle 0x4d6b9b
// 004d6af9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004d6afd  8b742440             mov esi, dword ptr [esp + 0x40]
// 004d6b01  83c030               add eax, 0x30
// 004d6b04  89442444             mov dword ptr [esp + 0x44], eax
// 004d6b08  eb0a                 jmp 0x4d6b14
// 004d6b0a  8d9b00000000         lea ebx, [ebx]
// 004d6b10  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004d6b14  334e0c               xor ecx, dword ptr [esi + 0xc]
// 004d6b17  8b542448             mov edx, dword ptr [esp + 0x48]
// 004d6b1b  333e                 xor edi, dword ptr [esi]
// 004d6b1d  335e04               xor ebx, dword ptr [esi + 4]
// 004d6b20  336e08               xor ebp, dword ptr [esi + 8]
// 004d6b23  894c2430             mov dword ptr [esp + 0x30], ecx
// 004d6b27  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004d6b2b  51                   push ecx
// 004d6b2c  52                   push edx
// 004d6b2d  8d44242c             lea eax, [esp + 0x2c]
// 004d6b31  50                   push eax
// 004d6b32  897c2430             mov dword ptr [esp + 0x30], edi
// 004d6b36  895c2434             mov dword ptr [esp + 0x34], ebx
// 004d6b3a  896c2438             mov dword ptr [esp + 0x38], ebp
// 004d6b3e  e82df4ffff           call 0x4d5f70
// 004d6b43  8b442444             mov eax, dword ptr [esp + 0x44]
// 004d6b47  8344245410           add dword ptr [esp + 0x54], 0x10
// 004d6b4c  48                   dec eax
// 004d6b4d  83c40c               add esp, 0xc
// 004d6b50  83c610               add esi, 0x10
// 004d6b53  89442438             mov dword ptr [esp + 0x38], eax
// 004d6b57  85c0                 test eax, eax
// 004d6b59  7fb5                 jg 0x4d6b10
// 004d6b5b  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d6b5f  5f                   pop edi
// 004d6b60  8bc6                 mov eax, esi
// 004d6b62  5e                   pop esi
// 004d6b63  5d                   pop ebp
// 004d6b64  c1e007               shl eax, 7
// 004d6b67  5b                   pop ebx
// 004d6b68  83c424               add esp, 0x24
// 004d6b6b  c3                   ret 
// 004d6b6c  8bfe                 mov edi, esi
// 004d6b6e  85f6                 test esi, esi
// 004d6b70  7e29                 jle 0x4d6b9b
// 004d6b72  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 004d6b76  83c330               add ebx, 0x30
// 004d6b79  895c2444             mov dword ptr [esp + 0x44], ebx
// 004d6b7d  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 004d6b81  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004d6b85  51                   push ecx
// 004d6b86  55                   push ebp
// 004d6b87  53                   push ebx
// 004d6b88  e8e3f3ffff           call 0x4d5f70
// 004d6b8d  4f                   dec edi
// 004d6b8e  83c40c               add esp, 0xc
// 004d6b91  83c310               add ebx, 0x10
// 004d6b94  83c510               add ebp, 0x10
// 004d6b97  85ff                 test edi, edi
// 004d6b99  7fe6                 jg 0x4d6b81
// 004d6b9b  5f                   pop edi
// 004d6b9c  8bc6                 mov eax, esi
// 004d6b9e  5e                   pop esi
// 004d6b9f  5d                   pop ebp
// 004d6ba0  c1e007               shl eax, 7
// 004d6ba3  5b                   pop ebx
// 004d6ba4  83c424               add esp, 0x24
// 004d6ba7  c3                   ret 
// 004d6ba8  b8fbffffff           mov eax, 0xfffffffb
// 004d6bad  5b                   pop ebx
// 004d6bae  83c424               add esp, 0x24
// 004d6bb1  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?blockEncrypt@@YAHPAUcipherInstance@@PAUkeyInstance@@PAEH2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
