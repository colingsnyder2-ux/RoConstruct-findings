// roc 2010-06 00736d30  unit: seg_00730000  size: 744 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00736d30
//
// 00736d30  81ec38040000         sub esp, 0x438
// 00736d36  53                   push ebx
// 00736d37  55                   push ebp
// 00736d38  56                   push esi
// 00736d39  57                   push edi
// 00736d3a  8bbc244c040000       mov edi, dword ptr [esp + 0x44c]
// 00736d41  8d442434             lea eax, [esp + 0x34]
// 00736d45  50                   push eax
// 00736d46  bd01000000           mov ebp, 1
// 00736d4b  55                   push ebp
// 00736d4c  57                   push edi
// 00736d4d  e8cec1feff           call 0x722f20
// 00736d52  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00736d56  8d542448             lea edx, [esp + 0x48]
// 00736d5a  8bd8                 mov ebx, eax
// 00736d5c  52                   push edx
// 00736d5d  8d3419               lea esi, [ecx + ebx]
// 00736d60  57                   push edi
// 00736d61  8974244c             mov dword ptr [esp + 0x4c], esi
// 00736d65  e876bbfeff           call 0x7228e0
// 00736d6a  83c414               add esp, 0x14
// 00736d6d  3bde                 cmp ebx, esi
// 00736d6f  0f8318020000         jae 0x736f8d
// 00736d75  803b25               cmp byte ptr [ebx], 0x25
// 00736d78  742c                 je 0x736da6
// 00736d7a  8d842448020000       lea eax, [esp + 0x248]
// 00736d81  3944243c             cmp dword ptr [esp + 0x3c], eax
// 00736d85  720d                 jb 0x736d94
// 00736d87  8d4c243c             lea ecx, [esp + 0x3c]
// 00736d8b  51                   push ecx
// 00736d8c  e8efb9feff           call 0x722780
// 00736d91  83c404               add esp, 4
// 00736d94  8a13                 mov dl, byte ptr [ebx]
// 00736d96  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00736d9a  8810                 mov byte ptr [eax], dl
// 00736d9c  ff44243c             inc dword ptr [esp + 0x3c]
// 00736da0  43                   inc ebx
// 00736da1  e9dd010000           jmp 0x736f83
// 00736da6  43                   inc ebx
// 00736da7  803b25               cmp byte ptr [ebx], 0x25
// 00736daa  752c                 jne 0x736dd8
// 00736dac  8d8c2448020000       lea ecx, [esp + 0x248]
// 00736db3  394c243c             cmp dword ptr [esp + 0x3c], ecx
// 00736db7  720d                 jb 0x736dc6
// 00736db9  8d54243c             lea edx, [esp + 0x3c]
// 00736dbd  52                   push edx
// 00736dbe  e8bdb9feff           call 0x722780
// 00736dc3  83c404               add esp, 4
// 00736dc6  8a03                 mov al, byte ptr [ebx]
// 00736dc8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00736dcc  8801                 mov byte ptr [ecx], al
// 00736dce  ff44243c             inc dword ptr [esp + 0x3c]
// 00736dd2  43                   inc ebx
// 00736dd3  e9ab010000           jmp 0x736f83
// 00736dd8  8d542414             lea edx, [esp + 0x14]
// 00736ddc  52                   push edx
// 00736ddd  57                   push edi
// 00736dde  45                   inc ebp
// 00736ddf  e87cfeffff           call 0x736c60
// 00736de4  8bd8                 mov ebx, eax
// 00736de6  0fbe03               movsx eax, byte ptr [ebx]
// 00736de9  83e845               sub eax, 0x45
// 00736dec  83c408               add esp, 8
// 00736def  43                   inc ebx
// 00736df0  83f833               cmp eax, 0x33
// 00736df3  0f87b1010000         ja 0x736faa
// 00736df9  0fb680e46f7300       movzx eax, byte ptr [eax + 0x736fe4]
// 00736e00  ff2485c86f7300       jmp dword ptr [eax*4 + 0x736fc8]
// 00736e07  55                   push ebp
// 00736e08  57                   push edi
// 00736e09  e8d2c1feff           call 0x722fe0
// 00736e0e  e81d200700           call 0x7a8e30
// 00736e13  50                   push eax
// 00736e14  8d4c2420             lea ecx, [esp + 0x20]
// 00736e18  51                   push ecx
// 00736e19  8d942458020000       lea edx, [esp + 0x258]
// 00736e20  52                   push edx
// 00736e21  ff1564a89e00         call dword ptr [0x9ea864]
// 00736e27  83c414               add esp, 0x14
// 00736e2a  e92b010000           jmp 0x736f5a
// 00736e2f  8d442414             lea eax, [esp + 0x14]
// 00736e33  8d5001               lea edx, [eax + 1]
// 00736e36  8a08                 mov cl, byte ptr [eax]
// 00736e38  40                   inc eax
// 00736e39  84c9                 test cl, cl
// 00736e3b  75f9                 jne 0x736e36
// 00736e3d  2bc2                 sub eax, edx
// 00736e3f  8a4c0413             mov cl, byte ptr [esp + eax + 0x13]
// 00736e43  ba6c000000           mov edx, 0x6c
// 00736e48  6689540413           mov word ptr [esp + eax + 0x13], dx
// 00736e4d  55                   push ebp
// 00736e4e  57                   push edi
// 00736e4f  884c041c             mov byte ptr [esp + eax + 0x1c], cl
// 00736e53  c644041d00           mov byte ptr [esp + eax + 0x1d], 0
// 00736e58  e883c1feff           call 0x722fe0
// 00736e5d  e8ce1f0700           call 0x7a8e30
// 00736e62  50                   push eax
// 00736e63  8d442420             lea eax, [esp + 0x20]
// 00736e67  50                   push eax
// 00736e68  8d8c2458020000       lea ecx, [esp + 0x258]
// 00736e6f  51                   push ecx
// 00736e70  ff1564a89e00         call dword ptr [0x9ea864]
// 00736e76  83c414               add esp, 0x14
// 00736e79  e9dc000000           jmp 0x736f5a
// 00736e7e  8d442414             lea eax, [esp + 0x14]
// 00736e82  8d5001               lea edx, [eax + 1]
// 00736e85  8a08                 mov cl, byte ptr [eax]
// 00736e87  40                   inc eax
// 00736e88  84c9                 test cl, cl
// 00736e8a  75f9                 jne 0x736e85
// 00736e8c  2bc2                 sub eax, edx
// 00736e8e  8a4c0413             mov cl, byte ptr [esp + eax + 0x13]
// 00736e92  ba6c000000           mov edx, 0x6c
// 00736e97  6689540413           mov word ptr [esp + eax + 0x13], dx
// 00736e9c  55                   push ebp
// 00736e9d  57                   push edi
// 00736e9e  884c041c             mov byte ptr [esp + eax + 0x1c], cl
// 00736ea2  c644041d00           mov byte ptr [esp + eax + 0x1d], 0
// 00736ea7  e834c1feff           call 0x722fe0
// 00736eac  d97c241a             fnstcw word ptr [esp + 0x1a]
// 00736eb0  0fb744241a           movzx eax, word ptr [esp + 0x1a]
// 00736eb5  0d000c0000           or eax, 0xc00
// 00736eba  89442434             mov dword ptr [esp + 0x34], eax
// 00736ebe  d96c2434             fldcw word ptr [esp + 0x34]
// 00736ec2  df7c2434             fistp qword ptr [esp + 0x34]
// 00736ec6  8b442434             mov eax, dword ptr [esp + 0x34]
// 00736eca  d96c241a             fldcw word ptr [esp + 0x1a]
// 00736ece  e940ffffff           jmp 0x736e13
// 00736ed3  55                   push ebp
// 00736ed4  57                   push edi
// 00736ed5  e806c1feff           call 0x722fe0
// 00736eda  dd1c24               fstp qword ptr [esp]
// 00736edd  8d44241c             lea eax, [esp + 0x1c]
// 00736ee1  50                   push eax
// 00736ee2  8d8c2454020000       lea ecx, [esp + 0x254]
// 00736ee9  51                   push ecx
// 00736eea  ff1564a89e00         call dword ptr [0x9ea864]
// 00736ef0  83c410               add esp, 0x10
// 00736ef3  eb65                 jmp 0x736f5a
// 00736ef5  8bcd                 mov ecx, ebp
// 00736ef7  8d74243c             lea esi, [esp + 0x3c]
// 00736efb  8bd7                 mov edx, edi
// 00736efd  e8fefbffff           call 0x736b00
// 00736f02  e97c000000           jmp 0x736f83
// 00736f07  8d542428             lea edx, [esp + 0x28]
// 00736f0b  52                   push edx
// 00736f0c  55                   push ebp
// 00736f0d  57                   push edi
// 00736f0e  e80dc0feff           call 0x722f20
// 00736f13  8bf0                 mov esi, eax
// 00736f15  8d442420             lea eax, [esp + 0x20]
// 00736f19  6a2e                 push 0x2e
// 00736f1b  50                   push eax
// 00736f1c  ff153ca89e00         call dword ptr [0x9ea83c]
// 00736f22  83c414               add esp, 0x14
// 00736f25  85c0                 test eax, eax
// 00736f27  751a                 jne 0x736f43
// 00736f29  837c242864           cmp dword ptr [esp + 0x28], 0x64
// 00736f2e  7213                 jb 0x736f43
// 00736f30  55                   push ebp
// 00736f31  57                   push edi
// 00736f32  e8d9a1feff           call 0x721110
// 00736f37  8d4c2444             lea ecx, [esp + 0x44]
// 00736f3b  51                   push ecx
// 00736f3c  e81fb9feff           call 0x722860
// 00736f41  eb3d                 jmp 0x736f80
// 00736f43  56                   push esi
// 00736f44  8d542418             lea edx, [esp + 0x18]
// 00736f48  52                   push edx
// 00736f49  8d842450020000       lea eax, [esp + 0x250]
// 00736f50  50                   push eax
// 00736f51  ff1564a89e00         call dword ptr [0x9ea864]
// 00736f57  83c40c               add esp, 0xc
// 00736f5a  8d842448020000       lea eax, [esp + 0x248]
// 00736f61  8d5001               lea edx, [eax + 1]
// 00736f64  8a08                 mov cl, byte ptr [eax]
// 00736f66  40                   inc eax
// 00736f67  84c9                 test cl, cl
// 00736f69  75f9                 jne 0x736f64
// 00736f6b  2bc2                 sub eax, edx
// 00736f6d  50                   push eax
// 00736f6e  8d8c244c020000       lea ecx, [esp + 0x24c]
// 00736f75  51                   push ecx
// 00736f76  8d542444             lea edx, [esp + 0x44]
// 00736f7a  52                   push edx
// 00736f7b  e840b8feff           call 0x7227c0
// 00736f80  83c40c               add esp, 0xc
// 00736f83  3b5c2438             cmp ebx, dword ptr [esp + 0x38]
// 00736f87  0f82e8fdffff         jb 0x736d75
// 00736f8d  8d4c243c             lea ecx, [esp + 0x3c]
// 00736f91  51                   push ecx
// 00736f92  e889b8feff           call 0x722820
// 00736f97  83c404               add esp, 4
// 00736f9a  5f                   pop edi
// 00736f9b  5e                   pop esi
// 00736f9c  5d                   pop ebp
// 00736f9d  b801000000           mov eax, 1
// 00736fa2  5b                   pop ebx
// 00736fa3  81c438040000         add esp, 0x438
// 00736fa9  c3                   ret 
// 00736faa  0fbe43ff             movsx eax, byte ptr [ebx - 1]
// 00736fae  50                   push eax
// 00736faf  68bce4a400           push 0xa4e4bc
// 00736fb4  57                   push edi
// 00736fb5  e8e6b4feff           call 0x7224a0
// 00736fba  83c40c               add esp, 0xc
// 00736fbd  5f                   pop edi
// 00736fbe  5e                   pop esi
// 00736fbf  5d                   pop ebp
// 00736fc0  5b                   pop ebx
// 00736fc1  81c438040000         add esp, 0x438
// 00736fc7  c3                   ret 
// 00736fc8  d36e73               shr dword ptr [esi + 0x73], cl
// 00736fcb  007e6e               add byte ptr [esi + 0x6e], bh
// 00736fce  7300                 jae 0x736fd0
// 00736fd0  07                   pop es
// 00736fd1  6e                   outsb dx, byte ptr [esi]
// 00736fd2  7300                 jae 0x736fd4
// 00736fd4  2f                   das 
// 00736fd5  6e                   outsb dx, byte ptr [esi]
// 00736fd6  7300                 jae 0x736fd8
// 00736fd8  f5                   cmc 
// 00736fd9  6e                   outsb dx, byte ptr [esi]
// 00736fda  7300                 jae 0x736fdc
// 00736fdc  07                   pop es
// 00736fdd  6f                   outsd dx, dword ptr [esi]
// 00736fde  7300                 jae 0x736fe0
// 00736fe0  aa                   stosb byte ptr es:[edi], al
// 00736fe1  6f                   outsd dx, dword ptr [esi]
// 00736fe2  7300                 jae 0x736fe4
// 00736fe4  0006                 add byte ptr [esi], al
// 00736fe6  0006                 add byte ptr [esi], al
// 00736fe8  06                   push es
// 00736fe9  06                   push es
// 00736fea  06                   push es
// 00736feb  06                   push es
// 00736fec  06                   push es
// 00736fed  06                   push es
// 00736fee  06                   push es
// 00736fef  06                   push es
// 00736ff0  06                   push es
// 00736ff1  06                   push es
// 00736ff2  06                   push es
// 00736ff3  06                   push es
// 00736ff4  06                   push es
// 00736ff5  06                   push es
// 00736ff6  06                   push es
// 00736ff7  0106                 add dword ptr [esi], eax
// 00736ff9  06                   push es
// 00736ffa  06                   push es
// 00736ffb  06                   push es
// 00736ffc  06                   push es
// 00736ffd  06                   push es
// 00736ffe  06                   push es
// 00736fff  06                   push es
// 00737000  06                   push es
// 00737001  06                   push es
// 00737002  0203                 add al, byte ptr [ebx]
// 00737004  0000                 add byte ptr [eax], al
// 00737006  0006                 add byte ptr [esi], al
// 00737008  0306                 add eax, dword ptr [esi]
// 0073700a  06                   push es
// 0073700b  06                   push es
// 0073700c  06                   push es
// 0073700d  06                   push es
// 0073700e  0106                 add dword ptr [esi], eax
// 00737010  0406                 add al, 6
// 00737012  0506010606           add eax, 0x6060106
// copied from an identical function in another client (function _str_format)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c