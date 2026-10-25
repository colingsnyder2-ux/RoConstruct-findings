// from server: 23% by colin
// roc 2008-06 005a5c90  unit: RBX::Workspace  size: 2431 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a5c90
//
// 005a5c90  6aff                 push -1
// 005a5c92  68b13d7d00           push 0x7d3db1
// 005a5c97  64a100000000         mov eax, dword ptr fs:[0]
// 005a5c9d  50                   push eax
// 005a5c9e  64892500000000       mov dword ptr fs:[0], esp
// 005a5ca5  83ec20               sub esp, 0x20
// 005a5ca8  53                   push ebx
// 005a5ca9  55                   push ebp
// 005a5caa  56                   push esi
// 005a5cab  57                   push edi
// 005a5cac  8bf9                 mov edi, ecx
// 005a5cae  897c2410             mov dword ptr [esp + 0x10], edi
// 005a5cb2  e8298febff           call 0x45ebe0
// 005a5cb7  682c3e8300           push 0x833e2c
// 005a5cbc  8d4c2418             lea ecx, [esp + 0x18]
// 005a5cc0  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005a5cc8  c707ac408300         mov dword ptr [edi], 0x8340ac
// 005a5cce  c74710a0408300       mov dword ptr [edi + 0x10], 0x8340a0
// 005a5cd5  c7471498408300       mov dword ptr [edi + 0x14], 0x834098
// 005a5cdc  c7472090408300       mov dword ptr [edi + 0x20], 0x834090
// 005a5ce3  c7472480408300       mov dword ptr [edi + 0x24], 0x834080
// 005a5cea  c7474470408300       mov dword ptr [edi + 0x44], 0x834070
// 005a5cf1  c7476460408300       mov dword ptr [edi + 0x64], 0x834060
// 005a5cf8  c7878400000050408300 mov dword ptr [edi + 0x84], 0x834050
// 005a5d02  c787a400000040408300 mov dword ptr [edi + 0xa4], 0x834040
// 005a5d0c  c787c400000030408300 mov dword ptr [edi + 0xc4], 0x834030
// 005a5d16  ff1558248000         call dword ptr [0x802458]
// 005a5d1c  8d442414             lea eax, [esp + 0x14]
// 005a5d20  50                   push eax
// 005a5d21  8bcf                 mov ecx, edi
// 005a5d23  c644243c01           mov byte ptr [esp + 0x3c], 1
// 005a5d28  e86352fbff           call 0x55af90
// 005a5d2d  8d4c2414             lea ecx, [esp + 0x14]
// 005a5d31  c644243800           mov byte ptr [esp + 0x38], 0
// 005a5d36  ff1568248000         call dword ptr [0x802468]
// 005a5d3c  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 005a5d40  8b8328040000         mov eax, dword ptr [ebx + 0x428]
// 005a5d46  b9e0025a00           mov ecx, 0x5a02e0
// 005a5d4b  894c2414             mov dword ptr [esp + 0x14], ecx
// 005a5d4f  83ec20               sub esp, 0x20
// 005a5d52  8d4c2434             lea ecx, [esp + 0x34]
// 005a5d56  8bf4                 mov esi, esp
// 005a5d58  89442438             mov dword ptr [esp + 0x38], eax
// 005a5d5c  89642460             mov dword ptr [esp + 0x60], esp
// 005a5d60  51                   push ecx
// 005a5d61  c70600000000         mov dword ptr [esi], 0
// 005a5d67  e884450600           call 0x60a2f0
// 005a5d6c  83c404               add esp, 4
// 005a5d6f  84c0                 test al, al
// 005a5d71  751c                 jne 0x5a5d8f
// 005a5d73  8d4608               lea eax, [esi + 8]
// 005a5d76  85c0                 test eax, eax
// 005a5d78  740d                 je 0x5a5d87
// 005a5d7a  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a5d7e  8910                 mov dword ptr [eax], edx
// 005a5d80  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005a5d84  894804               mov dword ptr [eax + 4], ecx
// 005a5d87  c706d8388300         mov dword ptr [esi], 0x8338d8
// 005a5d8d  eb06                 jmp 0x5a5d95
// 005a5d8f  c70600000000         mov dword ptr [esi], 0
// 005a5d95  68b4ff8200           push 0x82ffb4
// 005a5d9a  8bcf                 mov ecx, edi
// 005a5d9c  e81ff5ffff           call 0x5a52c0
// 005a5da1  8b742444             mov esi, dword ptr [esp + 0x44]
// 005a5da5  83ec20               sub esp, 0x20
// 005a5da8  33c9                 xor ecx, ecx
// 005a5daa  8be9                 mov ebp, ecx
// 005a5dac  8bcc                 mov ecx, esp
// 005a5dae  89642460             mov dword ptr [esp + 0x60], esp
// 005a5db2  55                   push ebp
// 005a5db3  b8d04f5700           mov eax, 0x574fd0
// 005a5db8  8bd0                 mov edx, eax
// 005a5dba  83ec10               sub esp, 0x10
// 005a5dbd  8bc4                 mov eax, esp
// 005a5dbf  8910                 mov dword ptr [eax], edx
// 005a5dc1  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a5dc5  896804               mov dword ptr [eax + 4], ebp
// 005a5dc8  897008               mov dword ptr [eax + 8], esi
// 005a5dcb  89500c               mov dword ptr [eax + 0xc], edx
// 005a5dce  e85dd0ffff           call 0x5a2e30
// 005a5dd3  6818408300           push 0x834018
// 005a5dd8  8bcf                 mov ecx, edi
// 005a5dda  e851f6ffff           call 0x5a5430
// 005a5ddf  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 005a5de3  83ec20               sub esp, 0x20
// 005a5de6  33c9                 xor ecx, ecx
// 005a5de8  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a5dec  8bcc                 mov ecx, esp
// 005a5dee  89642460             mov dword ptr [esp + 0x60], esp
// 005a5df2  6a00                 push 0
// 005a5df4  b890005a00           mov eax, 0x5a0090
// 005a5df9  8bd0                 mov edx, eax
// 005a5dfb  83ec10               sub esp, 0x10
// 005a5dfe  8bc4                 mov eax, esp
// 005a5e00  8910                 mov dword ptr [eax], edx
// 005a5e02  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a5e06  895004               mov dword ptr [eax + 4], edx
// 005a5e09  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a5e0d  896808               mov dword ptr [eax + 8], ebp
// 005a5e10  89500c               mov dword ptr [eax + 0xc], edx
// 005a5e13  e878d0ffff           call 0x5a2e90
// 005a5e18  6808408300           push 0x834008
// 005a5e1d  8bcf                 mov ecx, edi
// 005a5e1f  e89cf4ffff           call 0x5a52c0
// 005a5e24  83ec20               sub esp, 0x20
// 005a5e27  33c9                 xor ecx, ecx
// 005a5e29  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a5e2d  8bcc                 mov ecx, esp
// 005a5e2f  89642460             mov dword ptr [esp + 0x60], esp
// 005a5e33  6a00                 push 0
// 005a5e35  b8b0005a00           mov eax, 0x5a00b0
// 005a5e3a  8bd0                 mov edx, eax
// 005a5e3c  83ec10               sub esp, 0x10
// 005a5e3f  8bc4                 mov eax, esp
// 005a5e41  8910                 mov dword ptr [eax], edx
// 005a5e43  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a5e47  895004               mov dword ptr [eax + 4], edx
// 005a5e4a  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a5e4e  896808               mov dword ptr [eax + 8], ebp
// 005a5e51  89500c               mov dword ptr [eax + 0xc], edx
// 005a5e54  e837d0ffff           call 0x5a2e90
// 005a5e59  68f83f8300           push 0x833ff8
// 005a5e5e  8bcf                 mov ecx, edi
// 005a5e60  e85bf4ffff           call 0x5a52c0
// 005a5e65  83ec20               sub esp, 0x20
// 005a5e68  33c9                 xor ecx, ecx
// 005a5e6a  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a5e6e  8bcc                 mov ecx, esp
// 005a5e70  89642460             mov dword ptr [esp + 0x60], esp
// 005a5e74  6a00                 push 0
// 005a5e76  b8d0005a00           mov eax, 0x5a00d0
// 005a5e7b  8bd0                 mov edx, eax
// 005a5e7d  83ec10               sub esp, 0x10
// 005a5e80  8bc4                 mov eax, esp
// 005a5e82  8910                 mov dword ptr [eax], edx
// 005a5e84  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a5e88  895004               mov dword ptr [eax + 4], edx
// 005a5e8b  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a5e8f  896808               mov dword ptr [eax + 8], ebp
// 005a5e92  89500c               mov dword ptr [eax + 0xc], edx
// 005a5e95  e8f6cfffff           call 0x5a2e90
// 005a5e9a  68ec3f8300           push 0x833fec
// 005a5e9f  8bcf                 mov ecx, edi
// 005a5ea1  e81af4ffff           call 0x5a52c0
// 005a5ea6  83ec20               sub esp, 0x20
// 005a5ea9  33c9                 xor ecx, ecx
// 005a5eab  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a5eaf  8bcc                 mov ecx, esp
// 005a5eb1  89642460             mov dword ptr [esp + 0x60], esp
// 005a5eb5  6a00                 push 0
// 005a5eb7  b890565700           mov eax, 0x575690
// 005a5ebc  8bd0                 mov edx, eax
// 005a5ebe  83ec10               sub esp, 0x10
// 005a5ec1  8bc4                 mov eax, esp
// 005a5ec3  8910                 mov dword ptr [eax], edx
// 005a5ec5  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a5ec9  895004               mov dword ptr [eax + 4], edx
// 005a5ecc  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a5ed0  896808               mov dword ptr [eax + 8], ebp
// 005a5ed3  89500c               mov dword ptr [eax + 0xc], edx
// 005a5ed6  e8b5cfffff           call 0x5a2e90
// 005a5edb  68e03f8300           push 0x833fe0
// 005a5ee0  8bcf                 mov ecx, edi
// 005a5ee2  e8d9f3ffff           call 0x5a52c0
// 005a5ee7  8b8328040000         mov eax, dword ptr [ebx + 0x428]
// 005a5eed  50                   push eax
// 005a5eee  8bcf                 mov ecx, edi
// 005a5ef0  e84b430200           call 0x5ca240
// 005a5ef5  8b8b2c040000         mov ecx, dword ptr [ebx + 0x42c]
// 005a5efb  51                   push ecx
// 005a5efc  8bc8                 mov ecx, eax
// 005a5efe  89442444             mov dword ptr [esp + 0x44], eax
// 005a5f02  e839430200           call 0x5ca240
// 005a5f07  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 005a5f0d  51                   push ecx
// 005a5f0e  8bc8                 mov ecx, eax
// 005a5f10  e82b430200           call 0x5ca240
// 005a5f15  8be8                 mov ebp, eax
// 005a5f17  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 005a5f1d  50                   push eax
// 005a5f1e  8bcd                 mov ecx, ebp
// 005a5f20  e81b430200           call 0x5ca240
// 005a5f25  8b8e08010000         mov ecx, dword ptr [esi + 0x108]
// 005a5f2b  51                   push ecx
// 005a5f2c  8bcd                 mov ecx, ebp
// 005a5f2e  e80d430200           call 0x5ca240
// 005a5f33  8b9610010000         mov edx, dword ptr [esi + 0x110]
// 005a5f39  52                   push edx
// 005a5f3a  8bcd                 mov ecx, ebp
// 005a5f3c  e8ff420200           call 0x5ca240
// 005a5f41  8bce                 mov ecx, esi
// 005a5f43  e898340400           call 0x5e93e0
// 005a5f48  05e4010000           add eax, 0x1e4
// 005a5f4d  8b00                 mov eax, dword ptr [eax]
// 005a5f4f  50                   push eax
// 005a5f50  8bcd                 mov ecx, ebp
// 005a5f52  e8e9420200           call 0x5ca240
// 005a5f57  8bce                 mov ecx, esi
// 005a5f59  e882340400           call 0x5e93e0
// 005a5f5e  8b88e0010000         mov ecx, dword ptr [eax + 0x1e0]
// 005a5f64  05e0010000           add eax, 0x1e0
// 005a5f69  51                   push ecx
// 005a5f6a  8bcd                 mov ecx, ebp
// 005a5f6c  e8cf420200           call 0x5ca240
// 005a5f71  8bce                 mov ecx, esi
// 005a5f73  e868340400           call 0x5e93e0
// 005a5f78  8b90e8010000         mov edx, dword ptr [eax + 0x1e8]
// 005a5f7e  05e8010000           add eax, 0x1e8
// 005a5f83  52                   push edx
// 005a5f84  8bcd                 mov ecx, ebp
// 005a5f86  e8b5420200           call 0x5ca240
// 005a5f8b  8bce                 mov ecx, esi
// 005a5f8d  e8be310400           call 0x5e9150
// 005a5f92  83c020               add eax, 0x20
// 005a5f95  8b00                 mov eax, dword ptr [eax]
// 005a5f97  50                   push eax
// 005a5f98  8bcd                 mov ecx, ebp
// 005a5f9a  e8a1420200           call 0x5ca240
// 005a5f9f  8b8b30040000         mov ecx, dword ptr [ebx + 0x430]
// 005a5fa5  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005a5fa9  51                   push ecx
// 005a5faa  8bcd                 mov ecx, ebp
// 005a5fac  e88f420200           call 0x5ca240
// 005a5fb1  8b9334040000         mov edx, dword ptr [ebx + 0x434]
// 005a5fb7  52                   push edx
// 005a5fb8  8bcd                 mov ecx, ebp
// 005a5fba  e881420200           call 0x5ca240
// 005a5fbf  8b8338040000         mov eax, dword ptr [ebx + 0x438]
// 005a5fc5  50                   push eax
// 005a5fc6  8bcd                 mov ecx, ebp
// 005a5fc8  e873420200           call 0x5ca240
// 005a5fcd  68d83f8300           push 0x833fd8
// 005a5fd2  8bcf                 mov ecx, edi
// 005a5fd4  e8973c0200           call 0x5c9c70
// 005a5fd9  83ec20               sub esp, 0x20
// 005a5fdc  33c9                 xor ecx, ecx
// 005a5fde  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a5fe2  8bcc                 mov ecx, esp
// 005a5fe4  89642460             mov dword ptr [esp + 0x60], esp
// 005a5fe8  8be8                 mov ebp, eax
// 005a5fea  6a00                 push 0
// 005a5fec  b890045a00           mov eax, 0x5a0490
// 005a5ff1  8bd0                 mov edx, eax
// 005a5ff3  83ec10               sub esp, 0x10
// 005a5ff6  8bc4                 mov eax, esp
// 005a5ff8  8910                 mov dword ptr [eax], edx
// 005a5ffa  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a5ffe  895004               mov dword ptr [eax + 4], edx
// 005a6001  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a6005  897008               mov dword ptr [eax + 8], esi
// 005a6008  89500c               mov dword ptr [eax + 0xc], edx
// 005a600b  e8e0ceffff           call 0x5a2ef0
// 005a6010  68cc3f8300           push 0x833fcc
// 005a6015  8bcd                 mov ecx, ebp
// 005a6017  e884f5ffff           call 0x5a55a0
// 005a601c  83ec20               sub esp, 0x20
// 005a601f  33c9                 xor ecx, ecx
// 005a6021  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a6025  8bcc                 mov ecx, esp
// 005a6027  89642460             mov dword ptr [esp + 0x60], esp
// 005a602b  6a00                 push 0
// 005a602d  b8c04f5700           mov eax, 0x574fc0
// 005a6032  8bd0                 mov edx, eax
// 005a6034  83ec10               sub esp, 0x10
// 005a6037  8bc4                 mov eax, esp
// 005a6039  8910                 mov dword ptr [eax], edx
// 005a603b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a603f  895004               mov dword ptr [eax + 4], edx
// 005a6042  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a6046  897008               mov dword ptr [eax + 8], esi
// 005a6049  89500c               mov dword ptr [eax + 0xc], edx
// 005a604c  e89fceffff           call 0x5a2ef0
// 005a6051  68c43f8300           push 0x833fc4
// 005a6056  8bcd                 mov ecx, ebp
// 005a6058  e843f5ffff           call 0x5a55a0
// 005a605d  83ec20               sub esp, 0x20
// 005a6060  33c9                 xor ecx, ecx
// 005a6062  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a6066  8bcc                 mov ecx, esp
// 005a6068  89642460             mov dword ptr [esp + 0x60], esp
// 005a606c  6a00                 push 0
// 005a606e  b8b04f5700           mov eax, 0x574fb0
// 005a6073  8bd0                 mov edx, eax
// 005a6075  83ec10               sub esp, 0x10
// 005a6078  8bc4                 mov eax, esp
// 005a607a  8910                 mov dword ptr [eax], edx
// 005a607c  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a6080  895004               mov dword ptr [eax + 4], edx
// 005a6083  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a6087  897008               mov dword ptr [eax + 8], esi
// 005a608a  89500c               mov dword ptr [eax + 0xc], edx
// 005a608d  e85eceffff           call 0x5a2ef0
// 005a6092  68b83f8300           push 0x833fb8
// 005a6097  8bcd                 mov ecx, ebp
// 005a6099  e802f5ffff           call 0x5a55a0
// 005a609e  68b83f8300           push 0x833fb8
// 005a60a3  8bcf                 mov ecx, edi
// 005a60a5  e8c63b0200           call 0x5c9c70
// 005a60aa  8be8                 mov ebp, eax
// 005a60ac  b860915e00           mov eax, 0x5e9160
// 005a60b1  33c9                 xor ecx, ecx
// 005a60b3  33d2                 xor edx, edx
// 005a60b5  89442414             mov dword ptr [esp + 0x14], eax
// 005a60b9  83ec20               sub esp, 0x20
// 005a60bc  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a60c0  8bcc                 mov ecx, esp
// 005a60c2  89642460             mov dword ptr [esp + 0x60], esp
// 005a60c6  52                   push edx
// 005a60c7  89542444             mov dword ptr [esp + 0x44], edx
// 005a60cb  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a60cf  83ec10               sub esp, 0x10
// 005a60d2  8bc4                 mov eax, esp
// 005a60d4  8910                 mov dword ptr [eax], edx
// 005a60d6  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a60da  895004               mov dword ptr [eax + 4], edx
// 005a60dd  8bd6                 mov edx, esi
// 005a60df  895008               mov dword ptr [eax + 8], edx
// 005a60e2  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a60e6  89500c               mov dword ptr [eax + 0xc], edx
// 005a60e9  e862ceffff           call 0x5a2f50
// 005a60ee  68a83f8300           push 0x833fa8
// 005a60f3  8bcd                 mov ecx, ebp
// 005a60f5  e8a6f4ffff           call 0x5a55a0
// 005a60fa  83ec20               sub esp, 0x20
// 005a60fd  33c9                 xor ecx, ecx
// 005a60ff  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a6103  8bcc                 mov ecx, esp
// 005a6105  89642460             mov dword ptr [esp + 0x60], esp
// 005a6109  6a00                 push 0
// 005a610b  b860915e00           mov eax, 0x5e9160
// 005a6110  ba01000000           mov edx, 1
// 005a6115  89542444             mov dword ptr [esp + 0x44], edx
// 005a6119  89442438             mov dword ptr [esp + 0x38], eax
// 005a611d  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a6121  83ec10               sub esp, 0x10
// 005a6124  8bc4                 mov eax, esp
// 005a6126  8910                 mov dword ptr [eax], edx
// 005a6128  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a612c  895004               mov dword ptr [eax + 4], edx
// 005a612f  8bd6                 mov edx, esi
// 005a6131  895008               mov dword ptr [eax + 8], edx
// 005a6134  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a6138  89500c               mov dword ptr [eax + 0xc], edx
// 005a613b  e810ceffff           call 0x5a2f50
// 005a6140  68983f8300           push 0x833f98
// 005a6145  8bcd                 mov ecx, ebp
// 005a6147  e854f4ffff           call 0x5a55a0
// 005a614c  83ec20               sub esp, 0x20
// 005a614f  33c9                 xor ecx, ecx
// 005a6151  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a6155  8bcc                 mov ecx, esp
// 005a6157  89642460             mov dword ptr [esp + 0x60], esp
// 005a615b  6a00                 push 0
// 005a615d  b860915e00           mov eax, 0x5e9160
// 005a6162  ba02000000           mov edx, 2
// 005a6167  89542444             mov dword ptr [esp + 0x44], edx
// 005a616b  89442438             mov dword ptr [esp + 0x38], eax
// 005a616f  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a6173  83ec10               sub esp, 0x10
// 005a6176  8bc4                 mov eax, esp
// 005a6178  8910                 mov dword ptr [eax], edx
// 005a617a  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a617e  895004               mov dword ptr [eax + 4], edx
// 005a6181  8bd6                 mov edx, esi
// 005a6183  895008               mov dword ptr [eax + 8], edx
// 005a6186  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a618a  89500c               mov dword ptr [eax + 0xc], edx
// 005a618d  e8becdffff           call 0x5a2f50
// 005a6192  68883f8300           push 0x833f88
// 005a6197  8bcd                 mov ecx, ebp
// 005a6199  e802f4ffff           call 0x5a55a0
// 005a619e  33c9                 xor ecx, ecx
// 005a61a0  83ec20               sub esp, 0x20
// 005a61a3  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a61a7  8bcc                 mov ecx, esp
// 005a61a9  89642460             mov dword ptr [esp + 0x60], esp
// 005a61ad  b860915e00           mov eax, 0x5e9160
// 005a61b2  ba03000000           mov edx, 3
// 005a61b7  6a00                 push 0
// 005a61b9  89442438             mov dword ptr [esp + 0x38], eax
// 005a61bd  83ec10               sub esp, 0x10
// 005a61c0  89542454             mov dword ptr [esp + 0x54], edx
// 005a61c4  8b542448             mov edx, dword ptr [esp + 0x48]
// 005a61c8  8bc4                 mov eax, esp
// 005a61ca  8910                 mov dword ptr [eax], edx
// 005a61cc  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a61d0  895004               mov dword ptr [eax + 4], edx
// 005a61d3  8bd6                 mov edx, esi
// 005a61d5  895008               mov dword ptr [eax + 8], edx
// 005a61d8  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a61dc  89500c               mov dword ptr [eax + 0xc], edx
// 005a61df  e86ccdffff           call 0x5a2f50
// 005a61e4  68783f8300           push 0x833f78
// 005a61e9  8bcd                 mov ecx, ebp
// 005a61eb  e8b0f3ffff           call 0x5a55a0
// 005a61f0  83ec20               sub esp, 0x20
// 005a61f3  33c9                 xor ecx, ecx
// 005a61f5  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a61f9  8bcc                 mov ecx, esp
// 005a61fb  89642460             mov dword ptr [esp + 0x60], esp
// 005a61ff  6a00                 push 0
// 005a6201  b8a04f5700           mov eax, 0x574fa0
// 005a6206  8bd0                 mov edx, eax
// 005a6208  83ec10               sub esp, 0x10
// 005a620b  8bc4                 mov eax, esp
// 005a620d  8910                 mov dword ptr [eax], edx
// 005a620f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a6213  895004               mov dword ptr [eax + 4], edx
// 005a6216  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a621a  897008               mov dword ptr [eax + 8], esi
// 005a621d  89500c               mov dword ptr [eax + 0xc], edx
// 005a6220  e8cbccffff           call 0x5a2ef0
// 005a6225  686c3f8300           push 0x833f6c
// 005a622a  8bcd                 mov ecx, ebp
// 005a622c  e86ff3ffff           call 0x5a55a0
// 005a6231  83ec20               sub esp, 0x20
// 005a6234  33c9                 xor ecx, ecx
// 005a6236  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a623a  8bcc                 mov ecx, esp
// 005a623c  89642460             mov dword ptr [esp + 0x60], esp
// 005a6240  6a00                 push 0
// 005a6242  b870915e00           mov eax, 0x5e9170
// 005a6247  8bd0                 mov edx, eax
// 005a6249  83ec10               sub esp, 0x10
// 005a624c  8bc4                 mov eax, esp
// 005a624e  8910                 mov dword ptr [eax], edx
// 005a6250  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a6254  895004               mov dword ptr [eax + 4], edx
// 005a6257  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a625b  897008               mov dword ptr [eax + 8], esi
// 005a625e  89500c               mov dword ptr [eax + 0xc], edx
// 005a6261  e88accffff           call 0x5a2ef0
// 005a6266  685c3f8300           push 0x833f5c
// 005a626b  8bcd                 mov ecx, ebp
// 005a626d  e82ef3ffff           call 0x5a55a0
// 005a6272  83ec20               sub esp, 0x20
// 005a6275  33c9                 xor ecx, ecx
// 005a6277  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a627b  8bcc                 mov ecx, esp
// 005a627d  89642460             mov dword ptr [esp + 0x60], esp
// 005a6281  6a00                 push 0
// 005a6283  b880915e00           mov eax, 0x5e9180
// 005a6288  8bd0                 mov edx, eax
// 005a628a  83ec10               sub esp, 0x10
// 005a628d  8bc4                 mov eax, esp
// 005a628f  8910                 mov dword ptr [eax], edx
// 005a6291  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 005a6295  895004               mov dword ptr [eax + 4], edx
// 005a6298  8b542454             mov edx, dword ptr [esp + 0x54]
// 005a629c  897008               mov dword ptr [eax + 8], esi
// 005a629f  89500c               mov dword ptr [eax + 0xc], edx
// 005a62a2  e849ccffff           call 0x5a2ef0
// 005a62a7  684c3f8300           push 0x833f4c
// 005a62ac  8bcd                 mov ecx, ebp
// 005a62ae  e8edf2ffff           call 0x5a55a0
// 005a62b3  68443f8300           push 0x833f44
// 005a62b8  8bcf                 mov ecx, edi
// 005a62ba  e8b1390200           call 0x5c9c70
// 005a62bf  8bce                 mov ecx, esi
// 005a62c1  89442440             mov dword ptr [esp + 0x40], eax
// 005a62c5  e8862e0400           call 0x5e9150
// 005a62ca  8be8                 mov ebp, eax
// 005a62cc  b8d0ad5f00           mov eax, 0x5fadd0
// 005a62d1  89442414             mov dword ptr [esp + 0x14], eax
// 005a62d5  896c2418             mov dword ptr [esp + 0x18], ebp
// 005a62d9  83ec20               sub esp, 0x20
// 005a62dc  8d442434             lea eax, [esp + 0x34]
// 005a62e0  8bf4                 mov esi, esp
// 005a62e2  89642464             mov dword ptr [esp + 0x64], esp
// 005a62e6  50                   push eax
// 005a62e7  c70600000000         mov dword ptr [esi], 0
// 005a62ed  e8fe3f0600           call 0x60a2f0
// 005a62f2  83c404               add esp, 4
// 005a62f5  84c0                 test al, al
// 005a62f7  751c                 jne 0x5a6315
// 005a62f9  8d4608               lea eax, [esi + 8]
// 005a62fc  85c0                 test eax, eax
// 005a62fe  740d                 je 0x5a630d
// 005a6300  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a6304  8908                 mov dword ptr [eax], ecx
// 005a6306  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a630a  895004               mov dword ptr [eax + 4], edx
// 005a630d  c70600398300         mov dword ptr [esi], 0x833900
// 005a6313  eb06                 jmp 0x5a631b
// 005a6315  c70600000000         mov dword ptr [esi], 0
// 005a631b  8b742460             mov esi, dword ptr [esp + 0x60]
// 005a631f  68303f8300           push 0x833f30
// 005a6324  8bce                 mov ecx, esi
// 005a6326  e875f2ffff           call 0x5a55a0
// 005a632b  b890aa5f00           mov eax, 0x5faa90
// 005a6330  89442414             mov dword ptr [esp + 0x14], eax
// 005a6334  83ec20               sub esp, 0x20
// 005a6337  8bc4                 mov eax, esp
// 005a6339  896c2438             mov dword ptr [esp + 0x38], ebp
// 005a633d  89642460             mov dword ptr [esp + 0x60], esp
// 005a6341  89442460             mov dword ptr [esp + 0x60], eax
// 005a6345  c70000000000         mov dword ptr [eax], 0
// 005a634b  8d442434             lea eax, [esp + 0x34]
// 005a634f  50                   push eax
// 005a6350  e89b3f0600           call 0x60a2f0
// 005a6355  83c404               add esp, 4
// 005a6358  84c0                 test al, al
// 005a635a  7520                 jne 0x5a637c
// 005a635c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005a6360  8d4108               lea eax, [ecx + 8]
// 005a6363  85c0                 test eax, eax
// 005a6365  740d                 je 0x5a6374
// 005a6367  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a636b  8910                 mov dword ptr [eax], edx
// 005a636d  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a6371  895004               mov dword ptr [eax + 4], edx
// 005a6374  c70100398300         mov dword ptr [ecx], 0x833900
// 005a637a  eb0a                 jmp 0x5a6386
// 005a637c  8b442460             mov eax, dword ptr [esp + 0x60]
// 005a6380  c70000000000         mov dword ptr [eax], 0
// 005a6386  68243f8300           push 0x833f24
// 005a638b  8bce                 mov ecx, esi
// 005a638d  e80ef2ffff           call 0x5a55a0
// 005a6392  b820aa5f00           mov eax, 0x5faa20
// 005a6397  83ec20               sub esp, 0x20
// 005a639a  89442434             mov dword ptr [esp + 0x34], eax
// 005a639e  8bc4                 mov eax, esp
// 005a63a0  8d4c2434             lea ecx, [esp + 0x34]
// 005a63a4  89642460             mov dword ptr [esp + 0x60], esp
// 005a63a8  896c2438             mov dword ptr [esp + 0x38], ebp
// 005a63ac  51                   push ecx
// 005a63ad  89442464             mov dword ptr [esp + 0x64], eax
// 005a63b1  c70000000000         mov dword ptr [eax], 0
// 005a63b7  e8343f0600           call 0x60a2f0
// 005a63bc  83c404               add esp, 4
// 005a63bf  84c0                 test al, al
// 005a63c1  7520                 jne 0x5a63e3
// 005a63c3  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005a63c7  8d4108               lea eax, [ecx + 8]
// 005a63ca  85c0                 test eax, eax
// 005a63cc  740d                 je 0x5a63db
// 005a63ce  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a63d2  8910                 mov dword ptr [eax], edx
// 005a63d4  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a63d8  895004               mov dword ptr [eax + 4], edx
// 005a63db  c70100398300         mov dword ptr [ecx], 0x833900
// 005a63e1  eb0a                 jmp 0x5a63ed
// 005a63e3  8b442460             mov eax, dword ptr [esp + 0x60]
// 005a63e7  c70000000000         mov dword ptr [eax], 0
// 005a63ed  681c3f8300           push 0x833f1c
// 005a63f2  8bce                 mov ecx, esi
// 005a63f4  e8a7f1ffff           call 0x5a55a0
// 005a63f9  b820a65f00           mov eax, 0x5fa620
// 005a63fe  83ec20               sub esp, 0x20
// 005a6401  89442434             mov dword ptr [esp + 0x34], eax
// 005a6405  8bc4                 mov eax, esp
// 005a6407  8d4c2434             lea ecx, [esp + 0x34]
// 005a640b  89642460             mov dword ptr [esp + 0x60], esp
// 005a640f  896c2438             mov dword ptr [esp + 0x38], ebp
// 005a6413  51                   push ecx
// 005a6414  89442464             mov dword ptr [esp + 0x64], eax
// 005a6418  c70000000000         mov dword ptr [eax], 0
// 005a641e  e8cd3e0600           call 0x60a2f0
// 005a6423  83c404               add esp, 4
// 005a6426  84c0                 test al, al
// 005a6428  7520                 jne 0x5a644a
// 005a642a  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005a642e  8d4108               lea eax, [ecx + 8]
// 005a6431  85c0                 test eax, eax
// 005a6433  740d                 je 0x5a6442
// 005a6435  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a6439  8910                 mov dword ptr [eax], edx
// 005a643b  8b542438             mov edx, dword ptr [esp + 0x38]
// 005a643f  895004               mov dword ptr [eax + 4], edx
// 005a6442  c70100398300         mov dword ptr [ecx], 0x833900
// 005a6448  eb0a                 jmp 0x5a6454
// 005a644a  8b442460             mov eax, dword ptr [esp + 0x60]
// 005a644e  c70000000000         mov dword ptr [eax], 0
// 005a6454  68103f8300           push 0x833f10
// 005a6459  8bce                 mov ecx, esi
// 005a645b  e840f1ffff           call 0x5a55a0
// 005a6460  83ec20               sub esp, 0x20
// 005a6463  896c2438             mov dword ptr [esp + 0x38], ebp
// 005a6467  b840aa5f00           mov eax, 0x5faa40
// 005a646c  8d4c2434             lea ecx, [esp + 0x34]
// 005a6470  8bec                 mov ebp, esp
// 005a6472  89442434             mov dword ptr [esp + 0x34], eax
// 005a6476  89642460             mov dword ptr [esp + 0x60], esp
// 005a647a  51                   push ecx
// 005a647b  c7450000000000       mov dword ptr [ebp], 0
// 005a6482  e8693e0600           call 0x60a2f0
// 005a6487  83c404               add esp, 4
// 005a648a  84c0                 test al, al
// 005a648c  751d                 jne 0x5a64ab
// 005a648e  8d4508               lea eax, [ebp + 8]
// 005a6491  85c0                 test eax, eax
// 005a6493  740d                 je 0x5a64a2
// 005a6495  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a6499  8910                 mov dword ptr [eax], edx
// 005a649b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005a649f  894804               mov dword ptr [eax + 4], ecx
// 005a64a2  c7450000398300       mov dword ptr [ebp], 0x833900
// 005a64a9  eb07                 jmp 0x5a64b2
// 005a64ab  c7450000000000       mov dword ptr [ebp], 0
// 005a64b2  68083f8300           push 0x833f08
// 005a64b7  8bce                 mov ecx, esi
// 005a64b9  e8e2f0ffff           call 0x5a55a0
// 005a64be  68f83e8300           push 0x833ef8
// 005a64c3  8bcf                 mov ecx, edi
// 005a64c5  e8a6370200           call 0x5c9c70
// 005a64ca  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005a64ce  8bf0                 mov esi, eax
// 005a64d0  33d2                 xor edx, edx
// 005a64d2  b820015a00           mov eax, 0x5a0120
// 005a64d7  33c9                 xor ecx, ecx
// 005a64d9  83ec20               sub esp, 0x20
// 005a64dc  89442434             mov dword ptr [esp + 0x34], eax
// 005a64e0  8954243c             mov dword ptr [esp + 0x3c], edx
// 005a64e4  8b542448             mov edx, dword ptr [esp + 0x48]
// 005a64e8  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a64ec  8bcc                 mov ecx, esp
// 005a64ee  8d442434             lea eax, [esp + 0x34]
// 005a64f2  89642460             mov dword ptr [esp + 0x60], esp
// 005a64f6  896c2440             mov dword ptr [esp + 0x40], ebp
// 005a64fa  895c2444             mov dword ptr [esp + 0x44], ebx
// 005a64fe  89542448             mov dword ptr [esp + 0x48], edx
// 005a6502  50                   push eax
// 005a6503  c70100000000         mov dword ptr [ecx], 0
// 005a6509  e852c3ffff           call 0x5a2860
// 005a650e  68e83e8300           push 0x833ee8
// 005a6513  8bce                 mov ecx, esi
// 005a6515  e8a6edffff           call 0x5a52c0
// 005a651a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005a651e  33c9                 xor ecx, ecx
// 005a6520  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a6524  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a6528  83ec20               sub esp, 0x20
// 005a652b  33d2                 xor edx, edx
// 005a652d  894c2448             mov dword ptr [esp + 0x48], ecx
// 005a6531  b8f0005a00           mov eax, 0x5a00f0
// 005a6536  8bcc                 mov ecx, esp
// 005a6538  8954243c             mov dword ptr [esp + 0x3c], edx
// 005a653c  89442434             mov dword ptr [esp + 0x34], eax
// 005a6540  896c2440             mov dword ptr [esp + 0x40], ebp
// 005a6544  895c2444             mov dword ptr [esp + 0x44], ebx
// 005a6548  8911                 mov dword ptr [ecx], edx
// 005a654a  8d542434             lea edx, [esp + 0x34]
// 005a654e  89642460             mov dword ptr [esp + 0x60], esp
// 005a6552  52                   push edx
// 005a6553  e808c3ffff           call 0x5a2860
// 005a6558  68d43e8300           push 0x833ed4
// 005a655d  8bce                 mov ecx, esi
// 005a655f  e85cedffff           call 0x5a52c0
// 005a6564  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005a6568  b800015a00           mov eax, 0x5a0100
// 005a656d  33c9                 xor ecx, ecx
// 005a656f  83ec20               sub esp, 0x20
// 005a6572  33d2                 xor edx, edx
// 005a6574  89442434             mov dword ptr [esp + 0x34], eax
// 005a6578  8b442448             mov eax, dword ptr [esp + 0x48]
// 005a657c  894c2438             mov dword ptr [esp + 0x38], ecx
// 005a6580  8bcc                 mov ecx, esp
// 005a6582  8954243c             mov dword ptr [esp + 0x3c], edx
// 005a6586  896c2440             mov dword ptr [esp + 0x40], ebp
// 005a658a  895c2444             mov dword ptr [esp + 0x44], ebx
// 005a658e  89442448             mov dword ptr [esp + 0x48], eax
// 005a6592  8911                 mov dword ptr [ecx], edx
// 005a6594  8d542434             lea edx, [esp + 0x34]
// 005a6598  89642460             mov dword ptr [esp + 0x60], esp
// 005a659c  52                   push edx
// 005a659d  e8bec2ffff           call 0x5a2860
// 005a65a2  68c43e8300           push 0x833ec4
// 005a65a7  8bce                 mov ecx, esi
// 005a65a9  e812edffff           call 0x5a52c0
// 005a65ae  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005a65b2  b810015a00           mov eax, 0x5a0110
// 005a65b7  33c9                 xor ecx, ecx
// 005a65b9  89442414             mov dword ptr [esp + 0x14], eax
// 005a65bd  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a65c1  33d2                 xor edx, edx
// 005a65c3  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a65c7  8954241c             mov dword ptr [esp + 0x1c], edx
// 005a65cb  896c2420             mov dword ptr [esp + 0x20], ebp
// 005a65cf  895c2424             mov dword ptr [esp + 0x24], ebx
// 005a65d3  89442428             mov dword ptr [esp + 0x28], eax
// 005a65d7  83ec20               sub esp, 0x20
// 005a65da  8bcc                 mov ecx, esp
// 005a65dc  8911                 mov dword ptr [ecx], edx
// 005a65de  8d542434             lea edx, [esp + 0x34]
// 005a65e2  89642460             mov dword ptr [esp + 0x60], esp
// 005a65e6  52                   push edx
// 005a65e7  e874c2ffff           call 0x5a2860
// 005a65ec  68b43e8300           push 0x833eb4
// 005a65f1  8bce                 mov ecx, esi
// 005a65f3  e8c8ecffff           call 0x5a52c0
// 005a65f8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a65fc  8bc7                 mov eax, edi
// 005a65fe  5f                   pop edi
// 005a65ff  5e                   pop esi
// 005a6600  5d                   pop ebp
// 005a6601  64890d00000000       mov dword ptr fs:[0], ecx
// 005a6608  5b                   pop ebx
// 005a6609  83c42c               add esp, 0x2c
// 005a660c  c20c00               ret 0xc

struct String {
    char storage[28];
};

struct Property;

extern "C" {
    void __stdcall string_ctor(void*);
    void __stdcall string_dtor(void*);
    bool __cdecl func_0060a2f0();
}

extern void (__thiscall *string_construct)(void *);
extern bool (__cdecl *stringNotEqual)(const String&, const String&);
extern String& (__thiscall *stringAssign)(String*, const String&);

struct Data6 {
    unsigned long a, b, c, d, e, f;
};

struct Data4 {
    unsigned long a, b, c, d;
};

struct Argument {
    Data4 data;
    unsigned long extra;
};

struct S {
    char pad0[0x10];
    void* vt10;
    void* vt14;
    char pad18[8];
    void* vt20;
    void* vt24;
    char pad28[0x1c];
    void* vt44;
    char pad48[0x1c];
    void* vt64;
    char pad68[0x1c];
    void* vt84;
    char pad88[0x1c];
    void* vta4;
    char padA8[0x1c];
    void* vtc4;

    void f(int a, int b, int c);

    void call_55af90(void* p);
    void call_5a52c0(void* p);
    void call_5a5430(void* p);
    void call_5a55a0(void* p);
    void* call_5c9c70(void* p);
    void* call_5ca240(void* p);
    void call_5a2e30(void* p);
    void call_5a2e90(void* p);
    void call_5a2ef0(void* p);
    void call_5a2f50(void* p);
    void call_5a2860(void* p);
};

void S::f(int a, int b, int c) {
    string_construct(this);
    this->vt10 = (void*)0x8340a0;
    this->vt14 = (void*)0x834098;
    this->vt20 = (void*)0x834090;
    this->vt24 = (void*)0x834080;
    this->vt44 = (void*)0x834070;
    this->vt64 = (void*)0x834060;
    this->vt84 = (void*)0x834050;
    this->vta4 = (void*)0x834040;
    this->vtc4 = (void*)0x834030;
    *(void**)this = (void*)0x8340ac;

    String s;
    string_ctor(&s);
    call_55af90(&s);
    string_dtor(&s);

    int* p = (int*)a;
    int v428 = *(int*)((char*)p + 0x428);
    int v42c = *(int*)((char*)p + 0x42c);
    int v430 = *(int*)((char*)p + 0x430);
    int v434 = *(int*)((char*)p + 0x434);
    int v438 = *(int*)((char*)p + 0x438);

    int* q = (int*)b;
    int vfc = *(int*)((char*)q + 0xfc);
    int v104 = *(int*)((char*)q + 0x104);
    int v108 = *(int*)((char*)q + 0x108);
    int v110 = *(int*)((char*)q + 0x110);

    call_5a52c0((void*)0x82ffb4);
    call_5a2e30((void*)0x574fd0);
    call_5a5430((void*)0x834018);
    call_5a2e90((void*)0x5a0090);
    call_5a52c0((void*)0x834008);
    call_5a2e90((void*)0x5a00b0);
    call_5a52c0((void*)0x833ff8);
    call_5a2e90((void*)0x5a00d0);
    call_5a52c0((void*)0x833fec);
    call_5a2e90((void*)0x575690);
    call_5a52c0((void*)0x833fe0);

    void* r = call_5ca240((void*)v428);
    r = call_5ca240((void*)v42c);
    r = call_5ca240((void*)vfc);
    r = call_5ca240((void*)v104);
    r = call_5ca240((void*)v108);
    r = call_5ca240((void*)v110);
    r = call_5ca240((void*)v430);
    r = call_5ca240((void*)v434);
    r = call_5ca240((void*)v438);

    void* t = call_5c9c70((void*)0x833fd8);
    call_5a2ef0((void*)0x5a0490);
    call_5a55a0((void*)0x833fcc);
    call_5a2ef0((void*)0x574fc0);
    call_5a55a0((void*)0x833fc4);
    call_5a2ef0((void*)0x574fb0);
    call_5a55a0((void*)0x833fb8);

    void* u = call_5c9c70((void*)0x833fb8);
    call_5a2f50((void*)0x5e9160);
    call_5a55a0((void*)0x833fa8);
    call_5a2f50((void*)0x5e9160);
    call_5a55a0((void*)0x833f98);
    call_5a2f50((void*)0x5e9160);
    call_5a55a0((void*)0x833f88);
    call_5a2f50((void*)0x5e9160);
    call_5a55a0((void*)0x833f78);
    call_5a2ef0((void*)0x574fa0);
    call_5a55a0((void*)0x833f6c);
    call_5a2ef0((void*)0x5e9170);
    call_5a55a0((void*)0x833f5c);
    call_5a2ef0((void*)0x5e9180);
    call_5a55a0((void*)0x833f4c);

    void* v = call_5c9c70((void*)0x833f44);
    call_5a55a0((void*)0x833f30);
    call_5a55a0((void*)0x833f24);
    call_5a55a0((void*)0x833f1c);
    call_5a55a0((void*)0x833f10);
    call_5a55a0((void*)0x833f08);

    void* w = call_5c9c70((void*)0x833ef8);
    call_5a2860((void*)0x5a0120);
    call_5a52c0((void*)0x833ee8);
    call_5a2860((void*)0x5a00f0);
    call_5a52c0((void*)0x833ed4);
    call_5a2860((void*)0x5a0100);
    call_5a52c0((void*)0x833ec4);
    call_5a2860((void*)0x5a0110);
    call_5a52c0((void*)0x833eb4);
}
