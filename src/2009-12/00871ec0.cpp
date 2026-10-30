// roc 2009-12 00871ec0  unit: CXTPRibbonTheme  size: 1238 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00871ec0
//
// 00871ec0  6aff                 push -1
// 00871ec2  6892fe9500           push 0x95fe92
// 00871ec7  64a100000000         mov eax, dword ptr fs:[0]
// 00871ecd  50                   push eax
// 00871ece  83ec5c               sub esp, 0x5c
// 00871ed1  53                   push ebx
// 00871ed2  55                   push ebp
// 00871ed3  56                   push esi
// 00871ed4  57                   push edi
// 00871ed5  a10052b600           mov eax, dword ptr [0xb65200]
// 00871eda  33c4                 xor eax, esp
// 00871edc  50                   push eax
// 00871edd  8d442470             lea eax, [esp + 0x70]
// 00871ee1  64a300000000         mov dword ptr fs:[0], eax
// 00871ee7  8be9                 mov ebp, ecx
// 00871ee9  896c2414             mov dword ptr [esp + 0x14], ebp
// 00871eed  8bb42484000000       mov esi, dword ptr [esp + 0x84]
// 00871ef4  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00871ef7  8b01                 mov eax, dword ptr [ecx]
// 00871ef9  8b5048               mov edx, dword ptr [eax + 0x48]
// 00871efc  ffd2                 call edx
// 00871efe  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00871f01  8b5648               mov edx, dword ptr [esi + 0x48]
// 00871f04  50                   push eax
// 00871f05  894c2424             mov dword ptr [esp + 0x24], ecx
// 00871f09  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00871f0c  89542428             mov dword ptr [esp + 0x28], edx
// 00871f10  8b5650               mov edx, dword ptr [esi + 0x50]
// 00871f13  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00871f17  33c9                 xor ecx, ecx
// 00871f19  83ec10               sub esp, 0x10
// 00871f1c  8bc4                 mov eax, esp
// 00871f1e  8908                 mov dword ptr [eax], ecx
// 00871f20  89542440             mov dword ptr [esp + 0x40], edx
// 00871f24  8d5101               lea edx, [ecx + 1]
// 00871f27  83cfff               or edi, 0xffffffff
// 00871f2a  895004               mov dword ptr [eax + 4], edx
// 00871f2d  897808               mov dword ptr [eax + 8], edi
// 00871f30  0bdf                 or ebx, edi
// 00871f32  89580c               mov dword ptr [eax + 0xc], ebx
// 00871f35  8d442434             lea eax, [esp + 0x34]
// 00871f39  50                   push eax
// 00871f3a  e8711f0600           call 0x8d3eb0
// 00871f3f  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00871f45  8b4660               mov eax, dword ptr [esi + 0x60]
// 00871f48  33ff                 xor edi, edi
// 00871f4a  83c418               add esp, 0x18
// 00871f4d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00871f51  3bcf                 cmp ecx, edi
// 00871f53  0f847e010000         je 0x8720d7
// 00871f59  397004               cmp dword ptr [eax + 4], esi
// 00871f5c  7409                 je 0x871f67
// 00871f5e  397008               cmp dword ptr [eax + 8], esi
// 00871f61  0f8540020000         jne 0x8721a7
// 00871f67  51                   push ecx
// 00871f68  8d4c241c             lea ecx, [esp + 0x1c]
// 00871f6c  51                   push ecx
// 00871f6d  e82ef1ffff           call 0x8710a0
// 00871f72  83c408               add esp, 8
// 00871f75  8bc8                 mov ecx, eax
// 00871f77  897c2478             mov dword ptr [esp + 0x78], edi
// 00871f7b  ff1580de9800         call dword ptr [0x98de80]
// 00871f81  50                   push eax
// 00871f82  8d942488000000       lea edx, [esp + 0x88]
// 00871f89  684c12a000           push 0xa0124c
// 00871f8e  52                   push edx
// 00871f8f  e89cf0ffff           call 0x871030
// 00871f94  83c40c               add esp, 0xc
// 00871f97  8bc8                 mov ecx, eax
// 00871f99  c644247801           mov byte ptr [esp + 0x78], 1
// 00871f9e  ff1580de9800         call dword ptr [0x98de80]
// 00871fa4  50                   push eax
// 00871fa5  8bcd                 mov ecx, ebp
// 00871fa7  e854cd0000           call 0x87ed00
// 00871fac  8d8c2484000000       lea ecx, [esp + 0x84]
// 00871fb3  8bf8                 mov edi, eax
// 00871fb5  ff15c0de9800         call dword ptr [0x98dec0]
// 00871fbb  8d4c2418             lea ecx, [esp + 0x18]
// 00871fbf  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00871fc7  ff15c0de9800         call dword ptr [0x98dec0]
// 00871fcd  8b4660               mov eax, dword ptr [esi + 0x60]
// 00871fd0  33c9                 xor ecx, ecx
// 00871fd2  397004               cmp dword ptr [eax + 4], esi
// 00871fd5  0f8585000000         jne 0x872060
// 00871fdb  8bc8                 mov ecx, eax
// 00871fdd  8b01                 mov eax, dword ptr [ecx]
// 00871fdf  8b5078               mov edx, dword ptr [eax + 0x78]
// 00871fe2  ffd2                 call edx
// 00871fe4  85c0                 test eax, eax
// 00871fe6  0f8580000000         jne 0x87206c
// 00871fec  8b4660               mov eax, dword ptr [esi + 0x60]
// 00871fef  397008               cmp dword ptr [eax + 8], esi
// 00871ff2  7478                 je 0x87206c
// 00871ff4  b903000000           mov ecx, 3
// 00871ff9  85ff                 test edi, edi
// 00871ffb  0f84a6010000         je 0x8721a7
// 00872001  bb05000000           mov ebx, 5
// 00872006  53                   push ebx
// 00872007  51                   push ecx
// 00872008  8d442458             lea eax, [esp + 0x58]
// 0087200c  50                   push eax
// 0087200d  8bcf                 mov ecx, edi
// 0087200f  8beb                 mov ebp, ebx
// 00872011  e8aae80600           call 0x8e08c0
// 00872016  83ec10               sub esp, 0x10
// 00872019  8bcc                 mov ecx, esp
// 0087201b  8919                 mov dword ptr [ecx], ebx
// 0087201d  896904               mov dword ptr [ecx + 4], ebp
// 00872020  8bd3                 mov edx, ebx
// 00872022  895108               mov dword ptr [ecx + 8], edx
// 00872025  89510c               mov dword ptr [ecx + 0xc], edx
// 00872028  8b10                 mov edx, dword ptr [eax]
// 0087202a  83ec10               sub esp, 0x10
// 0087202d  8bcc                 mov ecx, esp
// 0087202f  8911                 mov dword ptr [ecx], edx
// 00872031  8b5004               mov edx, dword ptr [eax + 4]
// 00872034  895104               mov dword ptr [ecx + 4], edx
// 00872037  8b5008               mov edx, dword ptr [eax + 8]
// 0087203a  8b400c               mov eax, dword ptr [eax + 0xc]
// 0087203d  895108               mov dword ptr [ecx + 8], edx
// 00872040  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00872047  89410c               mov dword ptr [ecx + 0xc], eax
// 0087204a  8d4c2440             lea ecx, [esp + 0x40]
// 0087204e  51                   push ecx
// 0087204f  52                   push edx
// 00872050  8bcf                 mov ecx, edi
// 00872052  e839e10600           call 0x8e0190
// 00872057  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0087205b  e947010000           jmp 0x8721a7
// 00872060  397008               cmp dword ptr [eax + 8], esi
// 00872063  7594                 jne 0x871ff9
// 00872065  b901000000           mov ecx, 1
// 0087206a  eb8d                 jmp 0x871ff9
// 0087206c  684012a000           push 0xa01240
// 00872071  8bcd                 mov ecx, ebp
// 00872073  e888cc0000           call 0x87ed00
// 00872078  8bf8                 mov edi, eax
// 0087207a  85ff                 test edi, edi
// 0087207c  0f8425010000         je 0x8721a7
// 00872082  b805000000           mov eax, 5
// 00872087  6a06                 push 6
// 00872089  50                   push eax
// 0087208a  8d4c2458             lea ecx, [esp + 0x58]
// 0087208e  51                   push ecx
// 0087208f  8bcf                 mov ecx, edi
// 00872091  8944243c             mov dword ptr [esp + 0x3c], eax
// 00872095  89442440             mov dword ptr [esp + 0x40], eax
// 00872099  89442444             mov dword ptr [esp + 0x44], eax
// 0087209d  89442448             mov dword ptr [esp + 0x48], eax
// 008720a1  e81ae80600           call 0x8e08c0
// 008720a6  68ff00ff00           push 0xff00ff
// 008720ab  8d542434             lea edx, [esp + 0x34]
// 008720af  52                   push edx
// 008720b0  8b10                 mov edx, dword ptr [eax]
// 008720b2  83ec10               sub esp, 0x10
// 008720b5  8bcc                 mov ecx, esp
// 008720b7  8911                 mov dword ptr [ecx], edx
// 008720b9  8b5004               mov edx, dword ptr [eax + 4]
// 008720bc  895104               mov dword ptr [ecx + 4], edx
// 008720bf  8b5008               mov edx, dword ptr [eax + 8]
// 008720c2  8b400c               mov eax, dword ptr [eax + 0xc]
// 008720c5  895108               mov dword ptr [ecx + 8], edx
// 008720c8  89410c               mov dword ptr [ecx + 0xc], eax
// 008720cb  8d4c2438             lea ecx, [esp + 0x38]
// 008720cf  51                   push ecx
// 008720d0  8bcf                 mov ecx, edi
// 008720d2  e9c3000000           jmp 0x87219a
// 008720d7  397004               cmp dword ptr [eax + 4], esi
// 008720da  7409                 je 0x8720e5
// 008720dc  397008               cmp dword ptr [eax + 8], esi
// 008720df  0f85c2000000         jne 0x8721a7
// 008720e5  684012a000           push 0xa01240
// 008720ea  8bcd                 mov ecx, ebp
// 008720ec  e80fcc0000           call 0x87ed00
// 008720f1  8bd8                 mov ebx, eax
// 008720f3  8b4660               mov eax, dword ptr [esi + 0x60]
// 008720f6  397004               cmp dword ptr [eax + 4], esi
// 008720f9  7514                 jne 0x87210f
// 008720fb  8bc8                 mov ecx, eax
// 008720fd  8b11                 mov edx, dword ptr [ecx]
// 008720ff  8b4278               mov eax, dword ptr [edx + 0x78]
// 00872102  ffd0                 call eax
// 00872104  85c0                 test eax, eax
// 00872106  7407                 je 0x87210f
// 00872108  bf05000000           mov edi, 5
// 0087210d  eb37                 jmp 0x872146
// 0087210f  8b4660               mov eax, dword ptr [esi + 0x60]
// 00872112  8b4804               mov ecx, dword ptr [eax + 4]
// 00872115  3bce                 cmp ecx, esi
// 00872117  7517                 jne 0x872130
// 00872119  397008               cmp dword ptr [eax + 8], esi
// 0087211c  7507                 jne 0x872125
// 0087211e  bf04000000           mov edi, 4
// 00872123  eb21                 jmp 0x872146
// 00872125  3bce                 cmp ecx, esi
// 00872127  7507                 jne 0x872130
// 00872129  bf03000000           mov edi, 3
// 0087212e  eb16                 jmp 0x872146
// 00872130  39700c               cmp dword ptr [eax + 0xc], esi
// 00872133  7507                 jne 0x87213c
// 00872135  bf02000000           mov edi, 2
// 0087213a  eb0a                 jmp 0x872146
// 0087213c  397008               cmp dword ptr [eax + 8], esi
// 0087213f  7505                 jne 0x872146
// 00872141  bf01000000           mov edi, 1
// 00872146  85db                 test ebx, ebx
// 00872148  745d                 je 0x8721a7
// 0087214a  6a06                 push 6
// 0087214c  b805000000           mov eax, 5
// 00872151  57                   push edi
// 00872152  8d4c2458             lea ecx, [esp + 0x58]
// 00872156  51                   push ecx
// 00872157  8bcb                 mov ecx, ebx
// 00872159  8944243c             mov dword ptr [esp + 0x3c], eax
// 0087215d  89442440             mov dword ptr [esp + 0x40], eax
// 00872161  89442444             mov dword ptr [esp + 0x44], eax
// 00872165  89442448             mov dword ptr [esp + 0x48], eax
// 00872169  e852e70600           call 0x8e08c0
// 0087216e  68ff00ff00           push 0xff00ff
// 00872173  8d542434             lea edx, [esp + 0x34]
// 00872177  52                   push edx
// 00872178  8b10                 mov edx, dword ptr [eax]
// 0087217a  83ec10               sub esp, 0x10
// 0087217d  8bcc                 mov ecx, esp
// 0087217f  8911                 mov dword ptr [ecx], edx
// 00872181  8b5004               mov edx, dword ptr [eax + 4]
// 00872184  895104               mov dword ptr [ecx + 4], edx
// 00872187  8b5008               mov edx, dword ptr [eax + 8]
// 0087218a  8b400c               mov eax, dword ptr [eax + 0xc]
// 0087218d  895108               mov dword ptr [ecx + 8], edx
// 00872190  89410c               mov dword ptr [ecx + 0xc], eax
// 00872193  8d4c2438             lea ecx, [esp + 0x38]
// 00872197  51                   push ecx
// 00872198  8bcb                 mov ecx, ebx
// 0087219a  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 008721a1  52                   push edx
// 008721a2  e859ec0600           call 0x8e0e00
// 008721a7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008721aa  3b4624               cmp eax, dword ptr [esi + 0x24]
// 008721ad  0f8d87000000         jge 0x87223a
// 008721b3  8b442428             mov eax, dword ptr [esp + 0x28]
// 008721b7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008721bb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008721bf  89442430             mov dword ptr [esp + 0x30], eax
// 008721c3  894c2434             mov dword ptr [esp + 0x34], ecx
// 008721c7  40                   inc eax
// 008721c8  682c12a000           push 0xa0122c
// 008721cd  8bcd                 mov ecx, ebp
// 008721cf  8944243c             mov dword ptr [esp + 0x3c], eax
// 008721d3  89542440             mov dword ptr [esp + 0x40], edx
// 008721d7  e824cb0000           call 0x87ed00
// 008721dc  8bf8                 mov edi, eax
// 008721de  85ff                 test edi, edi
// 008721e0  7458                 je 0x87223a
// 008721e2  6a01                 push 1
// 008721e4  33ed                 xor ebp, ebp
// 008721e6  55                   push ebp
// 008721e7  8d442458             lea eax, [esp + 0x58]
// 008721eb  50                   push eax
// 008721ec  8bcf                 mov ecx, edi
// 008721ee  33db                 xor ebx, ebx
// 008721f0  e8cbe60600           call 0x8e08c0
// 008721f5  83ec10               sub esp, 0x10
// 008721f8  8bcc                 mov ecx, esp
// 008721fa  8919                 mov dword ptr [ecx], ebx
// 008721fc  896904               mov dword ptr [ecx + 4], ebp
// 008721ff  33d2                 xor edx, edx
// 00872201  895108               mov dword ptr [ecx + 8], edx
// 00872204  89510c               mov dword ptr [ecx + 0xc], edx
// 00872207  8b10                 mov edx, dword ptr [eax]
// 00872209  83ec10               sub esp, 0x10
// 0087220c  8bcc                 mov ecx, esp
// 0087220e  8911                 mov dword ptr [ecx], edx
// 00872210  8b5004               mov edx, dword ptr [eax + 4]
// 00872213  895104               mov dword ptr [ecx + 4], edx
// 00872216  8b5008               mov edx, dword ptr [eax + 8]
// 00872219  8b400c               mov eax, dword ptr [eax + 0xc]
// 0087221c  895108               mov dword ptr [ecx + 8], edx
// 0087221f  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00872226  89410c               mov dword ptr [ecx + 0xc], eax
// 00872229  8d4c2450             lea ecx, [esp + 0x50]
// 0087222d  51                   push ecx
// 0087222e  52                   push edx
// 0087222f  8bcf                 mov ecx, edi
// 00872231  e85adf0600           call 0x8e0190
// 00872236  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0087223a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0087223f  0f843b010000         je 0x872380
// 00872245  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0087224b  85c0                 test eax, eax
// 0087224d  0f8490000000         je 0x8722e3
// 00872253  3930                 cmp dword ptr [eax], esi
// 00872255  0f8588000000         jne 0x8722e3
// 0087225b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0087225f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00872263  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00872267  89442430             mov dword ptr [esp + 0x30], eax
// 0087226b  894c2434             mov dword ptr [esp + 0x34], ecx
// 0087226f  40                   inc eax
// 00872270  4a                   dec edx
// 00872271  681812a000           push 0xa01218
// 00872276  8bcd                 mov ecx, ebp
// 00872278  8944243c             mov dword ptr [esp + 0x3c], eax
// 0087227c  89542440             mov dword ptr [esp + 0x40], edx
// 00872280  e87bca0000           call 0x87ed00
// 00872285  8bf8                 mov edi, eax
// 00872287  85ff                 test edi, edi
// 00872289  7458                 je 0x8722e3
// 0087228b  6a01                 push 1
// 0087228d  33ed                 xor ebp, ebp
// 0087228f  55                   push ebp
// 00872290  8d442458             lea eax, [esp + 0x58]
// 00872294  50                   push eax
// 00872295  8bcf                 mov ecx, edi
// 00872297  33db                 xor ebx, ebx
// 00872299  e822e60600           call 0x8e08c0
// 0087229e  83ec10               sub esp, 0x10
// 008722a1  8bcc                 mov ecx, esp
// 008722a3  8919                 mov dword ptr [ecx], ebx
// 008722a5  896904               mov dword ptr [ecx + 4], ebp
// 008722a8  33d2                 xor edx, edx
// 008722aa  895108               mov dword ptr [ecx + 8], edx
// 008722ad  89510c               mov dword ptr [ecx + 0xc], edx
// 008722b0  8b10                 mov edx, dword ptr [eax]
// 008722b2  83ec10               sub esp, 0x10
// 008722b5  8bcc                 mov ecx, esp
// 008722b7  8911                 mov dword ptr [ecx], edx
// 008722b9  8b5004               mov edx, dword ptr [eax + 4]
// 008722bc  895104               mov dword ptr [ecx + 4], edx
// 008722bf  8b5008               mov edx, dword ptr [eax + 8]
// 008722c2  8b400c               mov eax, dword ptr [eax + 0xc]
// 008722c5  895108               mov dword ptr [ecx + 8], edx
// 008722c8  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 008722cf  89410c               mov dword ptr [ecx + 0xc], eax
// 008722d2  8d4c2450             lea ecx, [esp + 0x50]
// 008722d6  51                   push ecx
// 008722d7  52                   push edx
// 008722d8  8bcf                 mov ecx, edi
// 008722da  e8b1de0600           call 0x8e0190
// 008722df  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008722e3  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008722e9  85c0                 test eax, eax
// 008722eb  0f848f000000         je 0x872380
// 008722f1  397004               cmp dword ptr [eax + 4], esi
// 008722f4  0f8586000000         jne 0x872380
// 008722fa  8b442428             mov eax, dword ptr [esp + 0x28]
// 008722fe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00872302  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00872306  89442440             mov dword ptr [esp + 0x40], eax
// 0087230a  894c2444             mov dword ptr [esp + 0x44], ecx
// 0087230e  40                   inc eax
// 0087230f  4a                   dec edx
// 00872310  681812a000           push 0xa01218
// 00872315  8bcd                 mov ecx, ebp
// 00872317  8944244c             mov dword ptr [esp + 0x4c], eax
// 0087231b  89542450             mov dword ptr [esp + 0x50], edx
// 0087231f  e8dcc90000           call 0x87ed00
// 00872324  8bf0                 mov esi, eax
// 00872326  85f6                 test esi, esi
// 00872328  7456                 je 0x872380
// 0087232a  6a01                 push 1
// 0087232c  33ed                 xor ebp, ebp
// 0087232e  55                   push ebp
// 0087232f  8d442468             lea eax, [esp + 0x68]
// 00872333  50                   push eax
// 00872334  8bce                 mov ecx, esi
// 00872336  33ff                 xor edi, edi
// 00872338  33db                 xor ebx, ebx
// 0087233a  e881e50600           call 0x8e08c0
// 0087233f  83ec10               sub esp, 0x10
// 00872342  8bcc                 mov ecx, esp
// 00872344  8939                 mov dword ptr [ecx], edi
// 00872346  895904               mov dword ptr [ecx + 4], ebx
// 00872349  896908               mov dword ptr [ecx + 8], ebp
// 0087234c  33d2                 xor edx, edx
// 0087234e  89510c               mov dword ptr [ecx + 0xc], edx
// 00872351  8b10                 mov edx, dword ptr [eax]
// 00872353  83ec10               sub esp, 0x10
// 00872356  8bcc                 mov ecx, esp
// 00872358  8911                 mov dword ptr [ecx], edx
// 0087235a  8b5004               mov edx, dword ptr [eax + 4]
// 0087235d  895104               mov dword ptr [ecx + 4], edx
// 00872360  8b5008               mov edx, dword ptr [eax + 8]
// 00872363  8b400c               mov eax, dword ptr [eax + 0xc]
// 00872366  895108               mov dword ptr [ecx + 8], edx
// 00872369  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00872370  89410c               mov dword ptr [ecx + 0xc], eax
// 00872373  8d4c2460             lea ecx, [esp + 0x60]
// 00872377  51                   push ecx
// 00872378  52                   push edx
// 00872379  8bce                 mov ecx, esi
// 0087237b  e810de0600           call 0x8e0190
// 00872380  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00872384  64890d00000000       mov dword ptr fs:[0], ecx
// 0087238b  59                   pop ecx
// 0087238c  5f                   pop edi
// 0087238d  5e                   pop esi
// 0087238e  5d                   pop ebp
// 0087238f  5b                   pop ebx
// 00872390  83c468               add esp, 0x68
// 00872393  c20800               ret 8
// copied from an identical function in another client (function ?DrawRibbonTab@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp