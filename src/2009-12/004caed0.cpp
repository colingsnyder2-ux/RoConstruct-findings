// roc 2009-12 004caed0  unit: G3D::VARArea  size: 590 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004caed0
//
// 004caed0  53                   push ebx
// 004caed1  55                   push ebp
// 004caed2  56                   push esi
// 004caed3  8bf1                 mov esi, ecx
// 004caed5  ff4678               inc dword ptr [esi + 0x78]
// 004caed8  b808000000           mov eax, 8
// 004caedd  57                   push edi
// 004caede  39442414             cmp dword ptr [esp + 0x14], eax
// 004caee2  750a                 jne 0x4caeee
// 004caee4  8b8e28040000         mov ecx, dword ptr [esi + 0x428]
// 004caeea  894c2414             mov dword ptr [esp + 0x14], ecx
// 004caeee  8b542418             mov edx, dword ptr [esp + 0x18]
// 004caef2  3bd0                 cmp edx, eax
// 004caef4  750a                 jne 0x4caf00
// 004caef6  8b962c040000         mov edx, dword ptr [esi + 0x42c]
// 004caefc  89542418             mov dword ptr [esp + 0x18], edx
// 004caf00  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004caf04  3bf8                 cmp edi, eax
// 004caf06  7506                 jne 0x4caf0e
// 004caf08  8bbe30040000         mov edi, dword ptr [esi + 0x430]
// 004caf0e  39442420             cmp dword ptr [esp + 0x20], eax
// 004caf12  750a                 jne 0x4caf1e
// 004caf14  8b8e34040000         mov ecx, dword ptr [esi + 0x434]
// 004caf1a  894c2420             mov dword ptr [esp + 0x20], ecx
// 004caf1e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004caf22  3bd8                 cmp ebx, eax
// 004caf24  750c                 jne 0x4caf32
// 004caf26  8b8e38040000         mov ecx, dword ptr [esi + 0x438]
// 004caf2c  894c2424             mov dword ptr [esp + 0x24], ecx
// 004caf30  8bd9                 mov ebx, ecx
// 004caf32  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004caf36  3be8                 cmp ebp, eax
// 004caf38  7506                 jne 0x4caf40
// 004caf3a  8bae3c040000         mov ebp, dword ptr [esi + 0x43c]
// 004caf40  8b442414             mov eax, dword ptr [esp + 0x14]
// 004caf44  3b8628040000         cmp eax, dword ptr [esi + 0x428]
// 004caf4a  7541                 jne 0x4caf8d
// 004caf4c  3b962c040000         cmp edx, dword ptr [esi + 0x42c]
// 004caf52  7539                 jne 0x4caf8d
// 004caf54  3bbe30040000         cmp edi, dword ptr [esi + 0x430]
// 004caf5a  7531                 jne 0x4caf8d
// 004caf5c  e82f7f0000           call 0x4d2e90
// 004caf61  84c0                 test al, al
// 004caf63  0f84ae010000         je 0x4cb117
// 004caf69  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004caf6d  3b8e34040000         cmp ecx, dword ptr [esi + 0x434]
// 004caf73  7514                 jne 0x4caf89
// 004caf75  3b9e38040000         cmp ebx, dword ptr [esi + 0x438]
// 004caf7b  750c                 jne 0x4caf89
// 004caf7d  3bae3c040000         cmp ebp, dword ptr [esi + 0x43c]
// 004caf83  0f848e010000         je 0x4cb117
// 004caf89  8b542418             mov edx, dword ptr [esp + 0x18]
// 004caf8d  803dc3d0b70000       cmp byte ptr [0xb7d0c3], 0
// 004caf94  7466                 je 0x4caffc
// 004caf96  6805040000           push 0x405
// 004caf9b  ff15f0d9b700         call dword ptr [0xb7d9f0]
// 004cafa1  55                   push ebp
// 004cafa2  8bce                 mov ecx, esi
// 004cafa4  e8a7feffff           call 0x4cae50
// 004cafa9  50                   push eax
// 004cafaa  53                   push ebx
// 004cafab  e8a0feffff           call 0x4cae50
// 004cafb0  8b542424             mov edx, dword ptr [esp + 0x24]
// 004cafb4  50                   push eax
// 004cafb5  52                   push edx
// 004cafb6  e895feffff           call 0x4cae50
// 004cafbb  8b1d98ba9800         mov ebx, dword ptr [0x98ba98]
// 004cafc1  50                   push eax
// 004cafc2  ffd3                 call ebx
// 004cafc4  6804040000           push 0x404
// 004cafc9  ff15f0d9b700         call dword ptr [0xb7d9f0]
// 004cafcf  57                   push edi
// 004cafd0  8bce                 mov ecx, esi
// 004cafd2  e879feffff           call 0x4cae50
// 004cafd7  50                   push eax
// 004cafd8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004cafdc  50                   push eax
// 004cafdd  e86efeffff           call 0x4cae50
// 004cafe2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004cafe6  50                   push eax
// 004cafe7  51                   push ecx
// 004cafe8  8bce                 mov ecx, esi
// 004cafea  e861feffff           call 0x4cae50
// 004cafef  50                   push eax
// 004caff0  ffd3                 call ebx
// 004caff2  83467004             add dword ptr [esi + 0x70], 4
// 004caff6  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004caffa  eb7e                 jmp 0x4cb07a
// 004caffc  803dc4d0b70000       cmp byte ptr [0xb7d0c4], 0
// 004cb003  57                   push edi
// 004cb004  8bce                 mov ecx, esi
// 004cb006  744f                 je 0x4cb057
// 004cb008  83467002             add dword ptr [esi + 0x70], 2
// 004cb00c  e83ffeffff           call 0x4cae50
// 004cb011  50                   push eax
// 004cb012  52                   push edx
// 004cb013  e838feffff           call 0x4cae50
// 004cb018  8b542418             mov edx, dword ptr [esp + 0x18]
// 004cb01c  50                   push eax
// 004cb01d  52                   push edx
// 004cb01e  e82dfeffff           call 0x4cae50
// 004cb023  50                   push eax
// 004cb024  6804040000           push 0x404
// 004cb029  ff1540dbb700         call dword ptr [0xb7db40]
// 004cb02f  55                   push ebp
// 004cb030  8bce                 mov ecx, esi
// 004cb032  e819feffff           call 0x4cae50
// 004cb037  50                   push eax
// 004cb038  53                   push ebx
// 004cb039  e812feffff           call 0x4cae50
// 004cb03e  50                   push eax
// 004cb03f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004cb043  50                   push eax
// 004cb044  e807feffff           call 0x4cae50
// 004cb049  50                   push eax
// 004cb04a  6805040000           push 0x405
// 004cb04f  ff1540dbb700         call dword ptr [0xb7db40]
// 004cb055  eb23                 jmp 0x4cb07a
// 004cb057  e8f4fdffff           call 0x4cae50
// 004cb05c  50                   push eax
// 004cb05d  52                   push edx
// 004cb05e  e8edfdffff           call 0x4cae50
// 004cb063  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004cb067  50                   push eax
// 004cb068  51                   push ecx
// 004cb069  8bce                 mov ecx, esi
// 004cb06b  e8e0fdffff           call 0x4cae50
// 004cb070  50                   push eax
// 004cb071  ff1598ba9800         call dword ptr [0x98ba98]
// 004cb077  ff4670               inc dword ptr [esi + 0x70]
// 004cb07a  b802000000           mov eax, 2
// 004cb07f  39442414             cmp dword ptr [esp + 0x14], eax
// 004cb083  7539                 jne 0x4cb0be
// 004cb085  3bf8                 cmp edi, eax
// 004cb087  7535                 jne 0x4cb0be
// 004cb089  39442418             cmp dword ptr [esp + 0x18], eax
// 004cb08d  752f                 jne 0x4cb0be
// 004cb08f  e8fc7d0000           call 0x4d2e90
// 004cb094  84c0                 test al, al
// 004cb096  7410                 je 0x4cb0a8
// 004cb098  837c242002           cmp dword ptr [esp + 0x20], 2
// 004cb09d  751f                 jne 0x4cb0be
// 004cb09f  83fd02               cmp ebp, 2
// 004cb0a2  751a                 jne 0x4cb0be
// 004cb0a4  3bdd                 cmp ebx, ebp
// 004cb0a6  7516                 jne 0x4cb0be
// 004cb0a8  83be1c04000006       cmp dword ptr [esi + 0x41c], 6
// 004cb0af  7536                 jne 0x4cb0e7
// 004cb0b1  68900b0000           push 0xb90
// 004cb0b6  ff15dcbb9800         call dword ptr [0x98bbdc]
// 004cb0bc  eb29                 jmp 0x4cb0e7
// 004cb0be  83be1c04000006       cmp dword ptr [esi + 0x41c], 6
// 004cb0c5  7520                 jne 0x4cb0e7
// 004cb0c7  68900b0000           push 0xb90
// 004cb0cc  ff15d0bb9800         call dword ptr [0x98bbd0]
// 004cb0d2  8b9620040000         mov edx, dword ptr [esi + 0x420]
// 004cb0d8  8b861c040000         mov eax, dword ptr [esi + 0x41c]
// 004cb0de  52                   push edx
// 004cb0df  50                   push eax
// 004cb0e0  8bce                 mov ecx, esi
// 004cb0e2  e8e9faffff           call 0x4cabd0
// 004cb0e7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004cb0eb  8b542418             mov edx, dword ptr [esp + 0x18]
// 004cb0ef  8b442420             mov eax, dword ptr [esp + 0x20]
// 004cb0f3  898e28040000         mov dword ptr [esi + 0x428], ecx
// 004cb0f9  89962c040000         mov dword ptr [esi + 0x42c], edx
// 004cb0ff  89be30040000         mov dword ptr [esi + 0x430], edi
// 004cb105  898634040000         mov dword ptr [esi + 0x434], eax
// 004cb10b  899e38040000         mov dword ptr [esi + 0x438], ebx
// 004cb111  89ae3c040000         mov dword ptr [esi + 0x43c], ebp
// 004cb117  5f                   pop edi
// 004cb118  5e                   pop esi
// 004cb119  5d                   pop ebp
// 004cb11a  5b                   pop ebx
// 004cb11b  c21800               ret 0x18
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setStencilOp@RenderDevice@G3D@@QAEXW4StencilOp@12@00000@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
