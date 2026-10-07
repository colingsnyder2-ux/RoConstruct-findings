// roc 2008-06 00485ef0  unit: G3D::Shader  size: 1110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00485ef0
//
// 00485ef0  6aff                 push -1
// 00485ef2  6851567c00           push 0x7c5651
// 00485ef7  64a100000000         mov eax, dword ptr fs:[0]
// 00485efd  50                   push eax
// 00485efe  64892500000000       mov dword ptr fs:[0], esp
// 00485f05  81ecf0000000         sub esp, 0xf0
// 00485f0b  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 00485f11  53                   push ebx
// 00485f12  55                   push ebp
// 00485f13  8bac2408010000       mov ebp, dword ptr [esp + 0x108]
// 00485f1a  33d2                 xor edx, edx
// 00485f1c  3bc2                 cmp eax, edx
// 00485f1e  56                   push esi
// 00485f1f  57                   push edi
// 00485f20  894c2414             mov dword ptr [esp + 0x14], ecx
// 00485f24  89542410             mov dword ptr [esp + 0x10], edx
// 00485f28  89542418             mov dword ptr [esp + 0x18], edx
// 00485f2c  0f8e20010000         jle 0x486052
// 00485f32  8954241c             mov dword ptr [esp + 0x1c], edx
// 00485f36  eb08                 jmp 0x485f40
// 00485f38  8da42400000000       lea esp, [esp]
// 00485f3f  90                   nop 
// 00485f40  8bb190010000         mov esi, dword ptr [ecx + 0x190]
// 00485f46  0374241c             add esi, dword ptr [esp + 0x1c]
// 00485f4a  803e00               cmp byte ptr [esi], 0
// 00485f4d  7504                 jne 0x485f53
// 00485f4f  ff442410             inc dword ptr [esp + 0x10]
// 00485f53  684c0f8200           push 0x820f4c
// 00485f58  8d4c2440             lea ecx, [esp + 0x40]
// 00485f5c  ff1558248000         call dword ptr [0x802458]
// 00485f62  8d44243c             lea eax, [esp + 0x3c]
// 00485f66  50                   push eax
// 00485f67  8d7e08               lea edi, [esi + 8]
// 00485f6a  57                   push edi
// 00485f6b  c784241001000000000000 mov dword ptr [esp + 0x110], 0
// 00485f76  e835c10800           call 0x5120b0
// 00485f7b  83c408               add esp, 8
// 00485f7e  8d4c243c             lea ecx, [esp + 0x3c]
// 00485f82  8ad8                 mov bl, al
// 00485f84  c7842408010000ffffffff mov dword ptr [esp + 0x108], 0xffffffff
// 00485f8f  ff1568248000         call dword ptr [0x802468]
// 00485f95  84db                 test bl, bl
// 00485f97  7450                 je 0x485fe9
// 00485f99  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00485f9c  83c0f7               add eax, -9
// 00485f9f  50                   push eax
// 00485fa0  6a09                 push 9
// 00485fa2  8d4c2428             lea ecx, [esp + 0x28]
// 00485fa6  51                   push ecx
// 00485fa7  8bcf                 mov ecx, edi
// 00485fa9  ff15e0238000         call dword ptr [0x8023e0]
// 00485faf  8d542420             lea edx, [esp + 0x20]
// 00485fb3  52                   push edx
// 00485fb4  8bcd                 mov ecx, ebp
// 00485fb6  c784240c01000001000000 mov dword ptr [esp + 0x10c], 1
// 00485fc1  e85af9ffff           call 0x485920
// 00485fc6  84c0                 test al, al
// 00485fc8  7508                 jne 0x485fd2
// 00485fca  3806                 cmp byte ptr [esi], al
// 00485fcc  0f8474010000         je 0x486146
// 00485fd2  8d4c2420             lea ecx, [esp + 0x20]
// 00485fd6  c7842408010000ffffffff mov dword ptr [esp + 0x108], 0xffffffff
// 00485fe1  ff1568248000         call dword ptr [0x802468]
// 00485fe7  eb4b                 jmp 0x486034
// 00485fe9  57                   push edi
// 00485fea  8bcd                 mov ecx, ebp
// 00485fec  e82ff9ffff           call 0x485920
// 00485ff1  84c0                 test al, al
// 00485ff3  7516                 jne 0x48600b
// 00485ff5  3806                 cmp byte ptr [esi], al
// 00485ff7  753b                 jne 0x486034
// 00485ff9  837e2010             cmp dword ptr [esi + 0x20], 0x10
// 00485ffd  0f8287010000         jb 0x48618a
// 00486003  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00486006  e982010000           jmp 0x48618d
// 0048600b  57                   push edi
// 0048600c  8bcd                 mov ecx, ebp
// 0048600e  e89df8ffff           call 0x4858b0
// 00486013  8bf8                 mov edi, eax
// 00486015  8b4744               mov eax, dword ptr [edi + 0x44]
// 00486018  50                   push eax
// 00486019  e802f8ffff           call 0x485820
// 0048601e  8bd0                 mov edx, eax
// 00486020  8b4624               mov eax, dword ptr [esi + 0x24]
// 00486023  50                   push eax
// 00486024  e8f7f7ffff           call 0x485820
// 00486029  83c408               add esp, 8
// 0048602c  3bd0                 cmp edx, eax
// 0048602e  0f859b010000         jne 0x4861cf
// 00486034  8b442418             mov eax, dword ptr [esp + 0x18]
// 00486038  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0048603c  8344241c30           add dword ptr [esp + 0x1c], 0x30
// 00486041  40                   inc eax
// 00486042  3b8194010000         cmp eax, dword ptr [ecx + 0x194]
// 00486048  89442418             mov dword ptr [esp + 0x18], eax
// 0048604c  0f8ceefeffff         jl 0x485f40
// 00486052  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00486056  3b4d04               cmp ecx, dword ptr [ebp + 4]
// 00486059  0f8dcc020000         jge 0x48632b
// 0048605f  8b4508               mov eax, dword ptr [ebp + 8]
// 00486062  8b6d0c               mov ebp, dword ptr [ebp + 0xc]
// 00486065  89442410             mov dword ptr [esp + 0x10], eax
// 00486069  896c2418             mov dword ptr [esp + 0x18], ebp
// 0048606d  85ed                 test ebp, ebp
// 0048606f  0f8566020000         jne 0x4862db
// 00486075  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00486079  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0048607d  c644243401           mov byte ptr [esp + 0x34], 1
// 00486082  807c243401           cmp byte ptr [esp + 0x34], 1
// 00486087  0f849e020000         je 0x48632b
// 0048608d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00486091  33ed                 xor ebp, ebp
// 00486093  39aa94010000         cmp dword ptr [edx + 0x194], ebp
// 00486099  7e3a                 jle 0x4860d5
// 0048609b  33f6                 xor esi, esi
// 0048609d  8d4900               lea ecx, [ecx]
// 004860a0  8b442414             mov eax, dword ptr [esp + 0x14]
// 004860a4  8b8090010000         mov eax, dword ptr [eax + 0x190]
// 004860aa  03c6                 add eax, esi
// 004860ac  8d4f04               lea ecx, [edi + 4]
// 004860af  51                   push ecx
// 004860b0  83c008               add eax, 8
// 004860b3  50                   push eax
// 004860b4  ff1544248000         call dword ptr [0x802444]
// 004860ba  83c408               add esp, 8
// 004860bd  84c0                 test al, al
// 004860bf  0f8540020000         jne 0x486305
// 004860c5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004860c9  45                   inc ebp
// 004860ca  83c630               add esi, 0x30
// 004860cd  3ba994010000         cmp ebp, dword ptr [ecx + 0x194]
// 004860d3  7ccb                 jl 0x4860a0
// 004860d5  68080f8200           push 0x820f08
// 004860da  8d8c2494000000       lea ecx, [esp + 0x94]
// 004860e1  ff1558248000         call dword ptr [0x802458]
// 004860e7  8d4f04               lea ecx, [edi + 4]
// 004860ea  51                   push ecx
// 004860eb  50                   push eax
// 004860ec  8d8424b4000000       lea eax, [esp + 0xb4]
// 004860f3  50                   push eax
// 004860f4  c784241401000009000000 mov dword ptr [esp + 0x114], 9
// 004860ff  ff15a8248000         call dword ptr [0x8024a8]
// 00486105  688cca8100           push 0x81ca8c
// 0048610a  50                   push eax
// 0048610b  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 00486112  51                   push ecx
// 00486113  c68424200100000a     mov byte ptr [esp + 0x120], 0xa
// 0048611b  ff15e4238000         call dword ptr [0x8023e4]
// 00486121  83c418               add esp, 0x18
// 00486124  50                   push eax
// 00486125  8d4c2478             lea ecx, [esp + 0x78]
// 00486129  c684240c0100000b     mov byte ptr [esp + 0x10c], 0xb
// 00486131  ff155c248000         call dword ptr [0x80245c]
// 00486137  680cd68d00           push 0x8dd60c
// 0048613c  8d542478             lea edx, [esp + 0x78]
// 00486140  52                   push edx
// 00486141  e846b42100           call 0x6a158c
// 00486146  837c243810           cmp dword ptr [esp + 0x38], 0x10
// 0048614b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0048614f  7304                 jae 0x486155
// 00486151  8d442424             lea eax, [esp + 0x24]
// 00486155  50                   push eax
// 00486156  8d542478             lea edx, [esp + 0x78]
// 0048615a  68c80e8200           push 0x820ec8
// 0048615f  52                   push edx
// 00486160  e8ab390800           call 0x509b10
// 00486165  83c40c               add esp, 0xc
// 00486168  50                   push eax
// 00486169  8d4c2440             lea ecx, [esp + 0x40]
// 0048616d  c684240c01000002     mov byte ptr [esp + 0x10c], 2
// 00486175  ff155c248000         call dword ptr [0x80245c]
// 0048617b  680cd68d00           push 0x8dd60c
// 00486180  8d442440             lea eax, [esp + 0x40]
// 00486184  50                   push eax
// 00486185  e802b42100           call 0x6a158c
// 0048618a  8d7e0c               lea edi, [esi + 0xc]
// 0048618d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00486190  51                   push ecx
// 00486191  e86ad8ffff           call 0x483a00
// 00486196  50                   push eax
// 00486197  57                   push edi
// 00486198  8d542464             lea edx, [esp + 0x64]
// 0048619c  68780e8200           push 0x820e78
// 004861a1  52                   push edx
// 004861a2  e869390800           call 0x509b10
// 004861a7  83c414               add esp, 0x14
// 004861aa  50                   push eax
// 004861ab  8d4c2440             lea ecx, [esp + 0x40]
// 004861af  c784240c01000003000000 mov dword ptr [esp + 0x10c], 3
// 004861ba  ff155c248000         call dword ptr [0x80245c]
// 004861c0  680cd68d00           push 0x8dd60c
// 004861c5  8d442440             lea eax, [esp + 0x40]
// 004861c9  50                   push eax
// 004861ca  e8bdb32100           call 0x6a158c
// 004861cf  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 004861d2  51                   push ecx
// 004861d3  e828d8ffff           call 0x483a00
// 004861d8  83c404               add esp, 4
// 004861db  50                   push eax
// 004861dc  8d4c2440             lea ecx, [esp + 0x40]
// 004861e0  ff1558248000         call dword ptr [0x802458]
// 004861e6  8b5744               mov edx, dword ptr [edi + 0x44]
// 004861e9  52                   push edx
// 004861ea  c784240c01000004000000 mov dword ptr [esp + 0x10c], 4
// 004861f5  e806d8ffff           call 0x483a00
// 004861fa  83c404               add esp, 4
// 004861fd  50                   push eax
// 004861fe  8d4c2424             lea ecx, [esp + 0x24]
// 00486202  ff1558248000         call dword ptr [0x802458]
// 00486208  8b4624               mov eax, dword ptr [esi + 0x24]
// 0048620b  50                   push eax
// 0048620c  c684240c01000005     mov byte ptr [esp + 0x10c], 5
// 00486214  e807f6ffff           call 0x485820
// 00486219  50                   push eax
// 0048621a  e8e1d7ffff           call 0x483a00
// 0048621f  83c408               add esp, 8
// 00486222  50                   push eax
// 00486223  8d4c245c             lea ecx, [esp + 0x5c]
// 00486227  ff1558248000         call dword ptr [0x802458]
// 0048622d  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00486230  51                   push ecx
// 00486231  c684240c01000006     mov byte ptr [esp + 0x10c], 6
// 00486239  e8e2f5ffff           call 0x485820
// 0048623e  50                   push eax
// 0048623f  e8bcd7ffff           call 0x483a00
// 00486244  83c408               add esp, 8
// 00486247  50                   push eax
// 00486248  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 0048624f  ff1558248000         call dword ptr [0x802458]
// 00486255  8b442438             mov eax, dword ptr [esp + 0x38]
// 00486259  8b542424             mov edx, dword ptr [esp + 0x24]
// 0048625d  bb10000000           mov ebx, 0x10
// 00486262  c684240801000007     mov byte ptr [esp + 0x108], 7
// 0048626a  8bfa                 mov edi, edx
// 0048626c  3bc3                 cmp eax, ebx
// 0048626e  7306                 jae 0x486276
// 00486270  8d7c2424             lea edi, [esp + 0x24]
// 00486274  8bd7                 mov edx, edi
// 00486276  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0048627a  395c2470             cmp dword ptr [esp + 0x70], ebx
// 0048627e  7304                 jae 0x486284
// 00486280  8d4c245c             lea ecx, [esp + 0x5c]
// 00486284  8b442440             mov eax, dword ptr [esp + 0x40]
// 00486288  395c2454             cmp dword ptr [esp + 0x54], ebx
// 0048628c  7304                 jae 0x486292
// 0048628e  8d442440             lea eax, [esp + 0x40]
// 00486292  395e20               cmp dword ptr [esi + 0x20], ebx
// 00486295  7205                 jb 0x48629c
// 00486297  8b760c               mov esi, dword ptr [esi + 0xc]
// 0048629a  eb03                 jmp 0x48629f
// 0048629c  83c60c               add esi, 0xc
// 0048629f  57                   push edi
// 004862a0  52                   push edx
// 004862a1  51                   push ecx
// 004862a2  50                   push eax
// 004862a3  56                   push esi
// 004862a4  8d9424a4000000       lea edx, [esp + 0xa4]
// 004862ab  68180e8200           push 0x820e18
// 004862b0  52                   push edx
// 004862b1  e85a380800           call 0x509b10
// 004862b6  83c41c               add esp, 0x1c
// 004862b9  50                   push eax
// 004862ba  8d4c2478             lea ecx, [esp + 0x78]
// 004862be  c684240c01000008     mov byte ptr [esp + 0x10c], 8
// 004862c6  ff155c248000         call dword ptr [0x80245c]
// 004862cc  680cd68d00           push 0x8dd60c
// 004862d1  8d442478             lea eax, [esp + 0x78]
// 004862d5  50                   push eax
// 004862d6  e8b1b22100           call 0x6a158c
// 004862db  8b38                 mov edi, dword ptr [eax]
// 004862dd  33db                 xor ebx, ebx
// 004862df  885c2434             mov byte ptr [esp + 0x34], bl
// 004862e3  85ff                 test edi, edi
// 004862e5  0f8597fdffff         jne 0x486082
// 004862eb  eb03                 jmp 0x4862f0
// 004862ed  8d4900               lea ecx, [ecx]
// 004862f0  43                   inc ebx
// 004862f1  3bdd                 cmp ebx, ebp
// 004862f3  0f8d84fdffff         jge 0x48607d
// 004862f9  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 004862fc  85ff                 test edi, edi
// 004862fe  74f0                 je 0x4862f0
// 00486300  e97dfdffff           jmp 0x486082
// 00486305  8b7f68               mov edi, dword ptr [edi + 0x68]
// 00486308  85ff                 test edi, edi
// 0048630a  0f8572fdffff         jne 0x486082
// 00486310  43                   inc ebx
// 00486311  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 00486315  0f8d62fdffff         jge 0x48607d
// 0048631b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0048631f  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 00486322  85ff                 test edi, edi
// 00486324  74ea                 je 0x486310
// 00486326  e957fdffff           jmp 0x486082
// 0048632b  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 00486332  5f                   pop edi
// 00486333  5e                   pop esi
// 00486334  5d                   pop ebp
// 00486335  5b                   pop ebx
// 00486336  64890d00000000       mov dword ptr fs:[0], ecx
// 0048633d  81c4fc000000         add esp, 0xfc
// 00486343  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?validateArgList@VertexAndPixelShader@G3D@@QBEXABVArgList@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
