// roc 2007-03 004c17d0  unit: seg_004c0000  size: 838 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c17d0
//
// 004c17d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004c17d4  83ec24               sub esp, 0x24
// 004c17d7  85c9                 test ecx, ecx
// 004c17d9  53                   push ebx
// 004c17da  0f842c030000         je 0x4c1b0c
// 004c17e0  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004c17e4  85db                 test ebx, ebx
// 004c17e6  0f8420030000         je 0x4c1b0c
// 004c17ec  803b01               cmp byte ptr [ebx], 1
// 004c17ef  0f8417030000         je 0x4c1b0c
// 004c17f5  8b442438             mov eax, dword ptr [esp + 0x38]
// 004c17f9  03c0                 add eax, eax
// 004c17fb  03c0                 add eax, eax
// 004c17fd  03c0                 add eax, eax
// 004c17ff  99                   cdq 
// 004c1800  83e27f               and edx, 0x7f
// 004c1803  55                   push ebp
// 004c1804  03c2                 add eax, edx
// 004c1806  56                   push esi
// 004c1807  8bf0                 mov esi, eax
// 004c1809  0fb601               movzx eax, byte ptr [ecx]
// 004c180c  c1fe07               sar esi, 7
// 004c180f  83e801               sub eax, 1
// 004c1812  57                   push edi
// 004c1813  89742410             mov dword ptr [esp + 0x10], esi
// 004c1817  0f84b1020000         je 0x4c1ace
// 004c181d  83e801               sub eax, 1
// 004c1820  0f841f020000         je 0x4c1a45
// 004c1826  83e801               sub eax, 1
// 004c1829  740d                 je 0x4c1838
// 004c182b  5f                   pop edi
// 004c182c  5e                   pop esi
// 004c182d  5d                   pop ebp
// 004c182e  b8fbffffff           mov eax, 0xfffffffb
// 004c1833  5b                   pop ebx
// 004c1834  83c424               add esp, 0x24
// 004c1837  c3                   ret 
// 004c1838  85f6                 test esi, esi
// 004c183a  8b4101               mov eax, dword ptr [ecx + 1]
// 004c183d  8b5105               mov edx, dword ptr [ecx + 5]
// 004c1840  89442414             mov dword ptr [esp + 0x14], eax
// 004c1844  8b4109               mov eax, dword ptr [ecx + 9]
// 004c1847  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 004c184a  89542418             mov dword ptr [esp + 0x18], edx
// 004c184e  8944241c             mov dword ptr [esp + 0x1c], eax
// 004c1852  894c2420             mov dword ptr [esp + 0x20], ecx
// 004c1856  89742438             mov dword ptr [esp + 0x38], esi
// 004c185a  0f8e9f020000         jle 0x4c1aff
// 004c1860  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 004c1864  83c330               add ebx, 0x30
// 004c1867  895c2444             mov dword ptr [esp + 0x44], ebx
// 004c186b  eb03                 jmp 0x4c1870
// 004c186d  8d4900               lea ecx, [ecx]
// 004c1870  33ff                 xor edi, edi
// 004c1872  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c1876  8b542414             mov edx, dword ptr [esp + 0x14]
// 004c187a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004c187e  89542424             mov dword ptr [esp + 0x24], edx
// 004c1882  8b542420             mov edx, dword ptr [esp + 0x20]
// 004c1886  89442428             mov dword ptr [esp + 0x28], eax
// 004c188a  8b442444             mov eax, dword ptr [esp + 0x44]
// 004c188e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 004c1892  50                   push eax
// 004c1893  8d4c2428             lea ecx, [esp + 0x28]
// 004c1897  89542434             mov dword ptr [esp + 0x34], edx
// 004c189b  51                   push ecx
// 004c189c  8bd1                 mov edx, ecx
// 004c189e  52                   push edx
// 004c189f  e81cf6ffff           call 0x4c0ec0
// 004c18a4  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 004c18a9  02db                 add bl, bl
// 004c18ab  8bc7                 mov eax, edi
// 004c18ad  c1e803               shr eax, 3
// 004c18b0  8d3428               lea esi, [eax + ebp]
// 004c18b3  0fb6442430           movzx eax, byte ptr [esp + 0x30]
// 004c18b8  8bd7                 mov edx, edi
// 004c18ba  83e207               and edx, 7
// 004c18bd  2480                 and al, 0x80
// 004c18bf  8aca                 mov cl, dl
// 004c18c1  d2e8                 shr al, cl
// 004c18c3  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 004c18c8  c0e907               shr cl, 7
// 004c18cb  0acb                 or cl, bl
// 004c18cd  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 004c18d2  884c2420             mov byte ptr [esp + 0x20], cl
// 004c18d6  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 004c18db  c0e907               shr cl, 7
// 004c18de  02db                 add bl, bl
// 004c18e0  0acb                 or cl, bl
// 004c18e2  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 004c18e7  884c2421             mov byte ptr [esp + 0x21], cl
// 004c18eb  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 004c18f0  c0e907               shr cl, 7
// 004c18f3  02db                 add bl, bl
// 004c18f5  0acb                 or cl, bl
// 004c18f7  0fb65c2423           movzx ebx, byte ptr [esp + 0x23]
// 004c18fc  884c2422             mov byte ptr [esp + 0x22], cl
// 004c1900  0fb64c2424           movzx ecx, byte ptr [esp + 0x24]
// 004c1905  c0e907               shr cl, 7
// 004c1908  02db                 add bl, bl
// 004c190a  0acb                 or cl, bl
// 004c190c  0fb65c2424           movzx ebx, byte ptr [esp + 0x24]
// 004c1911  884c2423             mov byte ptr [esp + 0x23], cl
// 004c1915  0fb64c2425           movzx ecx, byte ptr [esp + 0x25]
// 004c191a  c0e907               shr cl, 7
// 004c191d  02db                 add bl, bl
// 004c191f  0acb                 or cl, bl
// 004c1921  0fb65c2425           movzx ebx, byte ptr [esp + 0x25]
// 004c1926  884c2424             mov byte ptr [esp + 0x24], cl
// 004c192a  0fb64c2426           movzx ecx, byte ptr [esp + 0x26]
// 004c192f  c0e907               shr cl, 7
// 004c1932  02db                 add bl, bl
// 004c1934  0acb                 or cl, bl
// 004c1936  0fb65c2426           movzx ebx, byte ptr [esp + 0x26]
// 004c193b  3006                 xor byte ptr [esi], al
// 004c193d  884c2425             mov byte ptr [esp + 0x25], cl
// 004c1941  0fb64c2427           movzx ecx, byte ptr [esp + 0x27]
// 004c1946  8a06                 mov al, byte ptr [esi]
// 004c1948  c0e907               shr cl, 7
// 004c194b  02db                 add bl, bl
// 004c194d  0acb                 or cl, bl
// 004c194f  0fb65c2427           movzx ebx, byte ptr [esp + 0x27]
// 004c1954  884c2426             mov byte ptr [esp + 0x26], cl
// 004c1958  0fb64c2428           movzx ecx, byte ptr [esp + 0x28]
// 004c195d  c0e907               shr cl, 7
// 004c1960  02db                 add bl, bl
// 004c1962  0acb                 or cl, bl
// 004c1964  0fb65c2428           movzx ebx, byte ptr [esp + 0x28]
// 004c1969  884c2427             mov byte ptr [esp + 0x27], cl
// 004c196d  0fb64c2429           movzx ecx, byte ptr [esp + 0x29]
// 004c1972  c0e907               shr cl, 7
// 004c1975  02db                 add bl, bl
// 004c1977  83c40c               add esp, 0xc
// 004c197a  0acb                 or cl, bl
// 004c197c  884c241c             mov byte ptr [esp + 0x1c], cl
// 004c1980  0fb64c241e           movzx ecx, byte ptr [esp + 0x1e]
// 004c1985  0fb65c241d           movzx ebx, byte ptr [esp + 0x1d]
// 004c198a  c0e907               shr cl, 7
// 004c198d  02db                 add bl, bl
// 004c198f  0acb                 or cl, bl
// 004c1991  0fb65c241e           movzx ebx, byte ptr [esp + 0x1e]
// 004c1996  884c241d             mov byte ptr [esp + 0x1d], cl
// 004c199a  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 004c199f  c0e907               shr cl, 7
// 004c19a2  02db                 add bl, bl
// 004c19a4  0acb                 or cl, bl
// 004c19a6  0fb65c241f           movzx ebx, byte ptr [esp + 0x1f]
// 004c19ab  884c241e             mov byte ptr [esp + 0x1e], cl
// 004c19af  0fb64c2420           movzx ecx, byte ptr [esp + 0x20]
// 004c19b4  c0e907               shr cl, 7
// 004c19b7  02db                 add bl, bl
// 004c19b9  0acb                 or cl, bl
// 004c19bb  0fb65c2420           movzx ebx, byte ptr [esp + 0x20]
// 004c19c0  884c241f             mov byte ptr [esp + 0x1f], cl
// 004c19c4  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 004c19c9  c0e907               shr cl, 7
// 004c19cc  02db                 add bl, bl
// 004c19ce  0acb                 or cl, bl
// 004c19d0  0fb65c2421           movzx ebx, byte ptr [esp + 0x21]
// 004c19d5  884c2420             mov byte ptr [esp + 0x20], cl
// 004c19d9  0fb64c2422           movzx ecx, byte ptr [esp + 0x22]
// 004c19de  c0e907               shr cl, 7
// 004c19e1  02db                 add bl, bl
// 004c19e3  0acb                 or cl, bl
// 004c19e5  0fb65c2422           movzx ebx, byte ptr [esp + 0x22]
// 004c19ea  884c2421             mov byte ptr [esp + 0x21], cl
// 004c19ee  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 004c19f3  c0e907               shr cl, 7
// 004c19f6  02db                 add bl, bl
// 004c19f8  0acb                 or cl, bl
// 004c19fa  884c2422             mov byte ptr [esp + 0x22], cl
// 004c19fe  b107                 mov cl, 7
// 004c1a00  2aca                 sub cl, dl
// 004c1a02  8a542423             mov dl, byte ptr [esp + 0x23]
// 004c1a06  d2e8                 shr al, cl
// 004c1a08  02d2                 add dl, dl
// 004c1a0a  83c701               add edi, 1
// 004c1a0d  2401                 and al, 1
// 004c1a0f  0ac2                 or al, dl
// 004c1a11  81ff80000000         cmp edi, 0x80
// 004c1a17  88442423             mov byte ptr [esp + 0x23], al
// 004c1a1b  0f8c51feffff         jl 0x4c1872
// 004c1a21  8b442438             mov eax, dword ptr [esp + 0x38]
// 004c1a25  83e801               sub eax, 1
// 004c1a28  85c0                 test eax, eax
// 004c1a2a  89442438             mov dword ptr [esp + 0x38], eax
// 004c1a2e  0f8f3cfeffff         jg 0x4c1870
// 004c1a34  8b742410             mov esi, dword ptr [esp + 0x10]
// 004c1a38  5f                   pop edi
// 004c1a39  8bc6                 mov eax, esi
// 004c1a3b  5e                   pop esi
// 004c1a3c  5d                   pop ebp
// 004c1a3d  c1e007               shl eax, 7
// 004c1a40  5b                   pop ebx
// 004c1a41  83c424               add esp, 0x24
// 004c1a44  c3                   ret 
// 004c1a45  85f6                 test esi, esi
// 004c1a47  8b7901               mov edi, dword ptr [ecx + 1]
// 004c1a4a  8b5905               mov ebx, dword ptr [ecx + 5]
// 004c1a4d  8b6909               mov ebp, dword ptr [ecx + 9]
// 004c1a50  8b490d               mov ecx, dword ptr [ecx + 0xd]
// 004c1a53  89742438             mov dword ptr [esp + 0x38], esi
// 004c1a57  0f8ea2000000         jle 0x4c1aff
// 004c1a5d  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004c1a61  8b742440             mov esi, dword ptr [esp + 0x40]
// 004c1a65  83c030               add eax, 0x30
// 004c1a68  89442444             mov dword ptr [esp + 0x44], eax
// 004c1a6c  eb06                 jmp 0x4c1a74
// 004c1a6e  8bff                 mov edi, edi
// 004c1a70  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004c1a74  334e0c               xor ecx, dword ptr [esi + 0xc]
// 004c1a77  8b542448             mov edx, dword ptr [esp + 0x48]
// 004c1a7b  333e                 xor edi, dword ptr [esi]
// 004c1a7d  335e04               xor ebx, dword ptr [esi + 4]
// 004c1a80  336e08               xor ebp, dword ptr [esi + 8]
// 004c1a83  894c2430             mov dword ptr [esp + 0x30], ecx
// 004c1a87  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004c1a8b  51                   push ecx
// 004c1a8c  52                   push edx
// 004c1a8d  8d44242c             lea eax, [esp + 0x2c]
// 004c1a91  50                   push eax
// 004c1a92  897c2430             mov dword ptr [esp + 0x30], edi
// 004c1a96  895c2434             mov dword ptr [esp + 0x34], ebx
// 004c1a9a  896c2438             mov dword ptr [esp + 0x38], ebp
// 004c1a9e  e81df4ffff           call 0x4c0ec0
// 004c1aa3  8b442444             mov eax, dword ptr [esp + 0x44]
// 004c1aa7  8344245410           add dword ptr [esp + 0x54], 0x10
// 004c1aac  83e801               sub eax, 1
// 004c1aaf  83c40c               add esp, 0xc
// 004c1ab2  83c610               add esi, 0x10
// 004c1ab5  85c0                 test eax, eax
// 004c1ab7  89442438             mov dword ptr [esp + 0x38], eax
// 004c1abb  7fb3                 jg 0x4c1a70
// 004c1abd  8b742410             mov esi, dword ptr [esp + 0x10]
// 004c1ac1  5f                   pop edi
// 004c1ac2  8bc6                 mov eax, esi
// 004c1ac4  5e                   pop esi
// 004c1ac5  5d                   pop ebp
// 004c1ac6  c1e007               shl eax, 7
// 004c1ac9  5b                   pop ebx
// 004c1aca  83c424               add esp, 0x24
// 004c1acd  c3                   ret 
// 004c1ace  85f6                 test esi, esi
// 004c1ad0  8bfe                 mov edi, esi
// 004c1ad2  7e2b                 jle 0x4c1aff
// 004c1ad4  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 004c1ad8  83c330               add ebx, 0x30
// 004c1adb  895c2444             mov dword ptr [esp + 0x44], ebx
// 004c1adf  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 004c1ae3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004c1ae7  51                   push ecx
// 004c1ae8  55                   push ebp
// 004c1ae9  53                   push ebx
// 004c1aea  e8d1f3ffff           call 0x4c0ec0
// 004c1aef  83ef01               sub edi, 1
// 004c1af2  83c40c               add esp, 0xc
// 004c1af5  83c310               add ebx, 0x10
// 004c1af8  83c510               add ebp, 0x10
// 004c1afb  85ff                 test edi, edi
// 004c1afd  7fe4                 jg 0x4c1ae3
// 004c1aff  5f                   pop edi
// 004c1b00  8bc6                 mov eax, esi
// 004c1b02  5e                   pop esi
// 004c1b03  5d                   pop ebp
// 004c1b04  c1e007               shl eax, 7
// 004c1b07  5b                   pop ebx
// 004c1b08  83c424               add esp, 0x24
// 004c1b0b  c3                   ret 
// 004c1b0c  b8fbffffff           mov eax, 0xfffffffb
// 004c1b11  5b                   pop ebx
// 004c1b12  83c424               add esp, 0x24
// 004c1b15  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?blockEncrypt@@YAHPAUcipherInstance@@PAUkeyInstance@@PAEH2@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
