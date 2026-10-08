// roc 2009-12 005f5dd0  unit: G3D::BinaryInput  size: 1373 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f5dd0
//
// 005f5dd0  6aff                 push -1
// 005f5dd2  680ef69300           push 0x93f60e
// 005f5dd7  64a100000000         mov eax, dword ptr fs:[0]
// 005f5ddd  50                   push eax
// 005f5dde  64892500000000       mov dword ptr fs:[0], esp
// 005f5de5  83ec40               sub esp, 0x40
// 005f5de8  8b442450             mov eax, dword ptr [esp + 0x50]
// 005f5dec  56                   push esi
// 005f5ded  50                   push eax
// 005f5dee  8d4c2410             lea ecx, [esp + 0x10]
// 005f5df2  ff15f0b69800         call dword ptr [0x98b6f0]
// 005f5df8  8b742458             mov esi, dword ptr [esp + 0x58]
// 005f5dfc  6856fd9900           push 0x99fd56
// 005f5e01  8bce                 mov ecx, esi
// 005f5e03  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005f5e0b  ff1500b79800         call dword ptr [0x98b700]
// 005f5e11  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005f5e15  6a01                 push 1
// 005f5e17  6a00                 push 0
// 005f5e19  e8f24dffff           call 0x5eac10
// 005f5e1e  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005f5e22  6856fd9900           push 0x99fd56
// 005f5e27  ff1500b79800         call dword ptr [0x98b700]
// 005f5e2d  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005f5e31  6856fd9900           push 0x99fd56
// 005f5e36  ff1500b79800         call dword ptr [0x98b700]
// 005f5e3c  8d4c240c             lea ecx, [esp + 0xc]
// 005f5e40  6856fd9900           push 0x99fd56
// 005f5e45  51                   push ecx
// 005f5e46  ff15acb69800         call dword ptr [0x98b6ac]
// 005f5e4c  83c408               add esp, 8
// 005f5e4f  84c0                 test al, al
// 005f5e51  7422                 je 0x5f5e75
// 005f5e53  8d4c240c             lea ecx, [esp + 0xc]
// 005f5e57  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 005f5e5f  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f5e65  5e                   pop esi
// 005f5e66  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005f5e6a  64890d00000000       mov dword ptr fs:[0], ecx
// 005f5e71  83c44c               add esp, 0x4c
// 005f5e74  c3                   ret 
// 005f5e75  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f5e79  53                   push ebx
// 005f5e7a  8b1d60b79800         mov ebx, dword ptr [0x98b760]
// 005f5e80  55                   push ebp
// 005f5e81  57                   push edi
// 005f5e82  83f902               cmp ecx, 2
// 005f5e85  0f82fc000000         jb 0x5f5f87
// 005f5e8b  83f901               cmp ecx, 1
// 005f5e8e  7306                 jae 0x5f5e96
// 005f5e90  ffd3                 call ebx
// 005f5e92  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f5e96  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005f5e9a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005f5e9e  8bc5                 mov eax, ebp
// 005f5ea0  83ff10               cmp edi, 0x10
// 005f5ea3  7304                 jae 0x5f5ea9
// 005f5ea5  8d44241c             lea eax, [esp + 0x1c]
// 005f5ea9  8078013a             cmp byte ptr [eax + 1], 0x3a
// 005f5ead  0f85dc000000         jne 0x5f5f8f
// 005f5eb3  83f902               cmp ecx, 2
// 005f5eb6  7675                 jbe 0x5f5f2d
// 005f5eb8  730a                 jae 0x5f5ec4
// 005f5eba  ffd3                 call ebx
// 005f5ebc  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005f5ec0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005f5ec4  8bc5                 mov eax, ebp
// 005f5ec6  83ff10               cmp edi, 0x10
// 005f5ec9  7304                 jae 0x5f5ecf
// 005f5ecb  8d44241c             lea eax, [esp + 0x1c]
// 005f5ecf  8a4002               mov al, byte ptr [eax + 2]
// 005f5ed2  3c5c                 cmp al, 0x5c
// 005f5ed4  7404                 je 0x5f5eda
// 005f5ed6  3c2f                 cmp al, 0x2f
// 005f5ed8  7553                 jne 0x5f5f2d
// 005f5eda  6a03                 push 3
// 005f5edc  6a00                 push 0
// 005f5ede  8d54243c             lea edx, [esp + 0x3c]
// 005f5ee2  52                   push edx
// 005f5ee3  8d4c2424             lea ecx, [esp + 0x24]
// 005f5ee7  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f5eed  50                   push eax
// 005f5eee  8bce                 mov ecx, esi
// 005f5ef0  c644245c01           mov byte ptr [esp + 0x5c], 1
// 005f5ef5  ff159cb69800         call dword ptr [0x98b69c]
// 005f5efb  8d4c2434             lea ecx, [esp + 0x34]
// 005f5eff  c644245800           mov byte ptr [esp + 0x58], 0
// 005f5f04  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f5f0a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f5f0e  83c0fd               add eax, -3
// 005f5f11  50                   push eax
// 005f5f12  6a03                 push 3
// 005f5f14  8d4c243c             lea ecx, [esp + 0x3c]
// 005f5f18  51                   push ecx
// 005f5f19  8d4c2424             lea ecx, [esp + 0x24]
// 005f5f1d  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f5f23  c644245802           mov byte ptr [esp + 0x58], 2
// 005f5f28  e960010000           jmp 0x5f608d
// 005f5f2d  8b15a4b69800         mov edx, dword ptr [0x98b6a4]
// 005f5f33  8b02                 mov eax, dword ptr [edx]
// 005f5f35  50                   push eax
// 005f5f36  6a02                 push 2
// 005f5f38  8d4c243c             lea ecx, [esp + 0x3c]
// 005f5f3c  51                   push ecx
// 005f5f3d  8d4c2424             lea ecx, [esp + 0x24]
// 005f5f41  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f5f47  50                   push eax
// 005f5f48  8bce                 mov ecx, esi
// 005f5f4a  c644245c03           mov byte ptr [esp + 0x5c], 3
// 005f5f4f  ff159cb69800         call dword ptr [0x98b69c]
// 005f5f55  8d4c2434             lea ecx, [esp + 0x34]
// 005f5f59  c644245800           mov byte ptr [esp + 0x58], 0
// 005f5f5e  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f5f64  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f5f68  83c2fe               add edx, -2
// 005f5f6b  52                   push edx
// 005f5f6c  6a02                 push 2
// 005f5f6e  8d44243c             lea eax, [esp + 0x3c]
// 005f5f72  50                   push eax
// 005f5f73  8d4c2424             lea ecx, [esp + 0x24]
// 005f5f77  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f5f7d  c644245804           mov byte ptr [esp + 0x58], 4
// 005f5f82  e906010000           jmp 0x5f608d
// 005f5f87  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005f5f8b  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005f5f8f  8bc5                 mov eax, ebp
// 005f5f91  83ff10               cmp edi, 0x10
// 005f5f94  7304                 jae 0x5f5f9a
// 005f5f96  8d44241c             lea eax, [esp + 0x1c]
// 005f5f9a  8a00                 mov al, byte ptr [eax]
// 005f5f9c  3c5c                 cmp al, 0x5c
// 005f5f9e  7408                 je 0x5f5fa8
// 005f5fa0  3c2f                 cmp al, 0x2f
// 005f5fa2  7404                 je 0x5f5fa8
// 005f5fa4  33c0                 xor eax, eax
// 005f5fa6  eb05                 jmp 0x5f5fad
// 005f5fa8  b801000000           mov eax, 1
// 005f5fad  83f902               cmp ecx, 2
// 005f5fb0  1bd2                 sbb edx, edx
// 005f5fb2  42                   inc edx
// 005f5fb3  84d0                 test al, dl
// 005f5fb5  7475                 je 0x5f602c
// 005f5fb7  83f901               cmp ecx, 1
// 005f5fba  730a                 jae 0x5f5fc6
// 005f5fbc  ffd3                 call ebx
// 005f5fbe  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005f5fc2  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005f5fc6  8bc5                 mov eax, ebp
// 005f5fc8  83ff10               cmp edi, 0x10
// 005f5fcb  7304                 jae 0x5f5fd1
// 005f5fcd  8d44241c             lea eax, [esp + 0x1c]
// 005f5fd1  8a4001               mov al, byte ptr [eax + 1]
// 005f5fd4  3c5c                 cmp al, 0x5c
// 005f5fd6  7404                 je 0x5f5fdc
// 005f5fd8  3c2f                 cmp al, 0x2f
// 005f5fda  7550                 jne 0x5f602c
// 005f5fdc  6a02                 push 2
// 005f5fde  6a00                 push 0
// 005f5fe0  8d44243c             lea eax, [esp + 0x3c]
// 005f5fe4  50                   push eax
// 005f5fe5  8d4c2424             lea ecx, [esp + 0x24]
// 005f5fe9  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f5fef  50                   push eax
// 005f5ff0  8bce                 mov ecx, esi
// 005f5ff2  c644245c05           mov byte ptr [esp + 0x5c], 5
// 005f5ff7  ff159cb69800         call dword ptr [0x98b69c]
// 005f5ffd  8d4c2434             lea ecx, [esp + 0x34]
// 005f6001  c644245800           mov byte ptr [esp + 0x58], 0
// 005f6006  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f600c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f6010  83c1fe               add ecx, -2
// 005f6013  51                   push ecx
// 005f6014  6a02                 push 2
// 005f6016  8d54243c             lea edx, [esp + 0x3c]
// 005f601a  52                   push edx
// 005f601b  8d4c2424             lea ecx, [esp + 0x24]
// 005f601f  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f6025  c644245806           mov byte ptr [esp + 0x58], 6
// 005f602a  eb61                 jmp 0x5f608d
// 005f602c  8bc5                 mov eax, ebp
// 005f602e  83ff10               cmp edi, 0x10
// 005f6031  7304                 jae 0x5f6037
// 005f6033  8d44241c             lea eax, [esp + 0x1c]
// 005f6037  8a00                 mov al, byte ptr [eax]
// 005f6039  3c5c                 cmp al, 0x5c
// 005f603b  7404                 je 0x5f6041
// 005f603d  3c2f                 cmp al, 0x2f
// 005f603f  7566                 jne 0x5f60a7
// 005f6041  6a01                 push 1
// 005f6043  6a00                 push 0
// 005f6045  8d44243c             lea eax, [esp + 0x3c]
// 005f6049  50                   push eax
// 005f604a  8d4c2424             lea ecx, [esp + 0x24]
// 005f604e  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f6054  50                   push eax
// 005f6055  8bce                 mov ecx, esi
// 005f6057  c644245c07           mov byte ptr [esp + 0x5c], 7
// 005f605c  ff159cb69800         call dword ptr [0x98b69c]
// 005f6062  8d4c2434             lea ecx, [esp + 0x34]
// 005f6066  c644245800           mov byte ptr [esp + 0x58], 0
// 005f606b  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f6071  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f6075  49                   dec ecx
// 005f6076  51                   push ecx
// 005f6077  6a01                 push 1
// 005f6079  8d54243c             lea edx, [esp + 0x3c]
// 005f607d  52                   push edx
// 005f607e  8d4c2424             lea ecx, [esp + 0x24]
// 005f6082  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f6088  c644245808           mov byte ptr [esp + 0x58], 8
// 005f608d  50                   push eax
// 005f608e  8d4c241c             lea ecx, [esp + 0x1c]
// 005f6092  ff159cb69800         call dword ptr [0x98b69c]
// 005f6098  8d4c2434             lea ecx, [esp + 0x34]
// 005f609c  c644245800           mov byte ptr [esp + 0x58], 0
// 005f60a1  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f60a7  a1a4b69800           mov eax, dword ptr [0x98b6a4]
// 005f60ac  8b00                 mov eax, dword ptr [eax]
// 005f60ae  6a01                 push 1
// 005f60b0  50                   push eax
// 005f60b1  8d4c2418             lea ecx, [esp + 0x18]
// 005f60b5  51                   push ecx
// 005f60b6  8d4c2424             lea ecx, [esp + 0x24]
// 005f60ba  c644241c2e           mov byte ptr [esp + 0x1c], 0x2e
// 005f60bf  ff156cb59800         call dword ptr [0x98b56c]
// 005f60c5  8b15a4b69800         mov edx, dword ptr [0x98b6a4]
// 005f60cb  8bf0                 mov esi, eax
// 005f60cd  8b02                 mov eax, dword ptr [edx]
// 005f60cf  6a01                 push 1
// 005f60d1  50                   push eax
// 005f60d2  8d442418             lea eax, [esp + 0x18]
// 005f60d6  50                   push eax
// 005f60d7  8d4c2424             lea ecx, [esp + 0x24]
// 005f60db  c644241c5c           mov byte ptr [esp + 0x1c], 0x5c
// 005f60e0  ff156cb59800         call dword ptr [0x98b56c]
// 005f60e6  8b0da4b69800         mov ecx, dword ptr [0x98b6a4]
// 005f60ec  8bf8                 mov edi, eax
// 005f60ee  8b01                 mov eax, dword ptr [ecx]
// 005f60f0  6a01                 push 1
// 005f60f2  50                   push eax
// 005f60f3  8d54241c             lea edx, [esp + 0x1c]
// 005f60f7  52                   push edx
// 005f60f8  8d4c2424             lea ecx, [esp + 0x24]
// 005f60fc  c64424202f           mov byte ptr [esp + 0x20], 0x2f
// 005f6101  ff156cb59800         call dword ptr [0x98b56c]
// 005f6107  3bc7                 cmp eax, edi
// 005f6109  7d02                 jge 0x5f610d
// 005f610b  8bc7                 mov eax, edi
// 005f610d  8b0da4b69800         mov ecx, dword ptr [0x98b6a4]
// 005f6113  3b31                 cmp esi, dword ptr [ecx]
// 005f6115  746f                 je 0x5f6186
// 005f6117  3bf0                 cmp esi, eax
// 005f6119  766b                 jbe 0x5f6186
// 005f611b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f611f  2bd6                 sub edx, esi
// 005f6121  4a                   dec edx
// 005f6122  52                   push edx
// 005f6123  8d4601               lea eax, [esi + 1]
// 005f6126  50                   push eax
// 005f6127  8d4c243c             lea ecx, [esp + 0x3c]
// 005f612b  51                   push ecx
// 005f612c  8d4c2424             lea ecx, [esp + 0x24]
// 005f6130  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f6136  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005f613a  50                   push eax
// 005f613b  c644245c09           mov byte ptr [esp + 0x5c], 9
// 005f6140  ff159cb69800         call dword ptr [0x98b69c]
// 005f6146  8d4c2434             lea ecx, [esp + 0x34]
// 005f614a  c644245800           mov byte ptr [esp + 0x58], 0
// 005f614f  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f6155  56                   push esi
// 005f6156  6a00                 push 0
// 005f6158  8d54243c             lea edx, [esp + 0x3c]
// 005f615c  52                   push edx
// 005f615d  8d4c2424             lea ecx, [esp + 0x24]
// 005f6161  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f6167  50                   push eax
// 005f6168  8d4c241c             lea ecx, [esp + 0x1c]
// 005f616c  c644245c0a           mov byte ptr [esp + 0x5c], 0xa
// 005f6171  ff159cb69800         call dword ptr [0x98b69c]
// 005f6177  8d4c2434             lea ecx, [esp + 0x34]
// 005f617b  c644245800           mov byte ptr [esp + 0x58], 0
// 005f6180  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f6186  a1a4b69800           mov eax, dword ptr [0x98b6a4]
// 005f618b  8b00                 mov eax, dword ptr [eax]
// 005f618d  6a01                 push 1
// 005f618f  50                   push eax
// 005f6190  8d4c241c             lea ecx, [esp + 0x1c]
// 005f6194  51                   push ecx
// 005f6195  8d4c2424             lea ecx, [esp + 0x24]
// 005f6199  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 005f619e  ff156cb59800         call dword ptr [0x98b56c]
// 005f61a4  8b15a4b69800         mov edx, dword ptr [0x98b6a4]
// 005f61aa  8bf0                 mov esi, eax
// 005f61ac  8b02                 mov eax, dword ptr [edx]
// 005f61ae  6a01                 push 1
// 005f61b0  50                   push eax
// 005f61b1  8d442418             lea eax, [esp + 0x18]
// 005f61b5  50                   push eax
// 005f61b6  8d4c2424             lea ecx, [esp + 0x24]
// 005f61ba  c644241c2f           mov byte ptr [esp + 0x1c], 0x2f
// 005f61bf  ff156cb59800         call dword ptr [0x98b56c]
// 005f61c5  3bc6                 cmp eax, esi
// 005f61c7  7c02                 jl 0x5f61cb
// 005f61c9  8bf0                 mov esi, eax
// 005f61cb  8b0da4b69800         mov ecx, dword ptr [0x98b6a4]
// 005f61d1  3b31                 cmp esi, dword ptr [ecx]
// 005f61d3  7520                 jne 0x5f61f5
// 005f61d5  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005f61d9  8d542418             lea edx, [esp + 0x18]
// 005f61dd  52                   push edx
// 005f61de  ff159cb69800         call dword ptr [0x98b69c]
// 005f61e4  6856fd9900           push 0x99fd56
// 005f61e9  8d4c241c             lea ecx, [esp + 0x1c]
// 005f61ed  ff1500b79800         call dword ptr [0x98b700]
// 005f61f3  eb72                 jmp 0x5f6267
// 005f61f5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f61f9  8d48ff               lea ecx, [eax - 1]
// 005f61fc  3bf1                 cmp esi, ecx
// 005f61fe  7367                 jae 0x5f6267
// 005f6200  2bc6                 sub eax, esi
// 005f6202  48                   dec eax
// 005f6203  50                   push eax
// 005f6204  8d5601               lea edx, [esi + 1]
// 005f6207  52                   push edx
// 005f6208  8d44243c             lea eax, [esp + 0x3c]
// 005f620c  50                   push eax
// 005f620d  8d4c2424             lea ecx, [esp + 0x24]
// 005f6211  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f6217  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005f621b  50                   push eax
// 005f621c  c644245c0b           mov byte ptr [esp + 0x5c], 0xb
// 005f6221  ff159cb69800         call dword ptr [0x98b69c]
// 005f6227  8d4c2434             lea ecx, [esp + 0x34]
// 005f622b  c644245800           mov byte ptr [esp + 0x58], 0
// 005f6230  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f6236  56                   push esi
// 005f6237  6a00                 push 0
// 005f6239  8d4c243c             lea ecx, [esp + 0x3c]
// 005f623d  51                   push ecx
// 005f623e  8d4c2424             lea ecx, [esp + 0x24]
// 005f6242  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f6248  50                   push eax
// 005f6249  8d4c241c             lea ecx, [esp + 0x1c]
// 005f624d  c644245c0c           mov byte ptr [esp + 0x5c], 0xc
// 005f6252  ff159cb69800         call dword ptr [0x98b69c]
// 005f6258  8d4c2434             lea ecx, [esp + 0x34]
// 005f625c  c644245800           mov byte ptr [esp + 0x58], 0
// 005f6261  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f6267  33f6                 xor esi, esi
// 005f6269  3974242c             cmp dword ptr [esp + 0x2c], esi
// 005f626d  0f8695000000         jbe 0x5f6308
// 005f6273  b30d                 mov bl, 0xd
// 005f6275  6a01                 push 1
// 005f6277  8d7e01               lea edi, [esi + 1]
// 005f627a  57                   push edi
// 005f627b  8d54241c             lea edx, [esp + 0x1c]
// 005f627f  52                   push edx
// 005f6280  8d4c2424             lea ecx, [esp + 0x24]
// 005f6284  8bee                 mov ebp, esi
// 005f6286  c64424202f           mov byte ptr [esp + 0x20], 0x2f
// 005f628b  ff1588b59800         call dword ptr [0x98b588]
// 005f6291  6a01                 push 1
// 005f6293  8bf0                 mov esi, eax
// 005f6295  57                   push edi
// 005f6296  8d44241c             lea eax, [esp + 0x1c]
// 005f629a  50                   push eax
// 005f629b  8d4c2424             lea ecx, [esp + 0x24]
// 005f629f  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 005f62a4  ff1588b59800         call dword ptr [0x98b588]
// 005f62aa  8b0da4b69800         mov ecx, dword ptr [0x98b6a4]
// 005f62b0  8b09                 mov ecx, dword ptr [ecx]
// 005f62b2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f62b6  3bf1                 cmp esi, ecx
// 005f62b8  0f44f2               cmove esi, edx
// 005f62bb  3bc1                 cmp eax, ecx
// 005f62bd  0f44c2               cmove eax, edx
// 005f62c0  3bf0                 cmp esi, eax
// 005f62c2  7c02                 jl 0x5f62c6
// 005f62c4  8bf0                 mov esi, eax
// 005f62c6  3bf1                 cmp esi, ecx
// 005f62c8  0f44f2               cmove esi, edx
// 005f62cb  8bd6                 mov edx, esi
// 005f62cd  2bd5                 sub edx, ebp
// 005f62cf  52                   push edx
// 005f62d0  55                   push ebp
// 005f62d1  8d44243c             lea eax, [esp + 0x3c]
// 005f62d5  50                   push eax
// 005f62d6  8d4c2424             lea ecx, [esp + 0x24]
// 005f62da  ff15a8b69800         call dword ptr [0x98b6a8]
// 005f62e0  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 005f62e4  50                   push eax
// 005f62e5  885c245c             mov byte ptr [esp + 0x5c], bl
// 005f62e9  e8c257ffff           call 0x5ebab0
// 005f62ee  8d4c2434             lea ecx, [esp + 0x34]
// 005f62f2  c644245800           mov byte ptr [esp + 0x58], 0
// 005f62f7  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f62fd  46                   inc esi
// 005f62fe  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 005f6302  0f826dffffff         jb 0x5f6275
// 005f6308  8d4c2418             lea ecx, [esp + 0x18]
// 005f630c  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 005f6314  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f631a  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005f631e  5f                   pop edi
// 005f631f  5d                   pop ebp
// 005f6320  5b                   pop ebx
// 005f6321  5e                   pop esi
// 005f6322  64890d00000000       mov dword ptr fs:[0], ecx
// 005f6329  83c44c               add esp, 0x4c
// 005f632c  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?parseFilename@G3D@@YAXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV23@AAV?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@11@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
