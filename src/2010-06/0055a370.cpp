// from server: 100% by auto
// roc 2010-06 0055a370  unit: G3D::BinaryInput  size: 1373 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055a370
//
// 0055a370  6aff                 push -1
// 0055a372  684e149900           push 0x99144e
// 0055a377  64a100000000         mov eax, dword ptr fs:[0]
// 0055a37d  50                   push eax
// 0055a37e  64892500000000       mov dword ptr fs:[0], esp
// 0055a385  83ec40               sub esp, 0x40
// 0055a388  8b442450             mov eax, dword ptr [esp + 0x50]
// 0055a38c  56                   push esi
// 0055a38d  50                   push eax
// 0055a38e  8d4c2410             lea ecx, [esp + 0x10]
// 0055a392  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055a398  8b742458             mov esi, dword ptr [esp + 0x58]
// 0055a39c  68fe08a000           push 0xa008fe
// 0055a3a1  8bce                 mov ecx, esi
// 0055a3a3  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0055a3ab  ff151ca49e00         call dword ptr [0x9ea41c]
// 0055a3b1  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0055a3b5  6a01                 push 1
// 0055a3b7  6a00                 push 0
// 0055a3b9  e8323effff           call 0x54e1f0
// 0055a3be  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0055a3c2  68fe08a000           push 0xa008fe
// 0055a3c7  ff151ca49e00         call dword ptr [0x9ea41c]
// 0055a3cd  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0055a3d1  68fe08a000           push 0xa008fe
// 0055a3d6  ff151ca49e00         call dword ptr [0x9ea41c]
// 0055a3dc  8d4c240c             lea ecx, [esp + 0xc]
// 0055a3e0  68fe08a000           push 0xa008fe
// 0055a3e5  51                   push ecx
// 0055a3e6  ff1558a49e00         call dword ptr [0x9ea458]
// 0055a3ec  83c408               add esp, 8
// 0055a3ef  84c0                 test al, al
// 0055a3f1  7422                 je 0x55a415
// 0055a3f3  8d4c240c             lea ecx, [esp + 0xc]
// 0055a3f7  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0055a3ff  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a405  5e                   pop esi
// 0055a406  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0055a40a  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a411  83c44c               add esp, 0x4c
// 0055a414  c3                   ret 
// 0055a415  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055a419  53                   push ebx
// 0055a41a  8b1d0ca99e00         mov ebx, dword ptr [0x9ea90c]
// 0055a420  55                   push ebp
// 0055a421  57                   push edi
// 0055a422  83f902               cmp ecx, 2
// 0055a425  0f82fc000000         jb 0x55a527
// 0055a42b  83f901               cmp ecx, 1
// 0055a42e  7306                 jae 0x55a436
// 0055a430  ffd3                 call ebx
// 0055a432  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0055a436  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0055a43a  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0055a43e  8bc5                 mov eax, ebp
// 0055a440  83ff10               cmp edi, 0x10
// 0055a443  7304                 jae 0x55a449
// 0055a445  8d44241c             lea eax, [esp + 0x1c]
// 0055a449  8078013a             cmp byte ptr [eax + 1], 0x3a
// 0055a44d  0f85dc000000         jne 0x55a52f
// 0055a453  83f902               cmp ecx, 2
// 0055a456  7675                 jbe 0x55a4cd
// 0055a458  730a                 jae 0x55a464
// 0055a45a  ffd3                 call ebx
// 0055a45c  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0055a460  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0055a464  8bc5                 mov eax, ebp
// 0055a466  83ff10               cmp edi, 0x10
// 0055a469  7304                 jae 0x55a46f
// 0055a46b  8d44241c             lea eax, [esp + 0x1c]
// 0055a46f  8a4002               mov al, byte ptr [eax + 2]
// 0055a472  3c5c                 cmp al, 0x5c
// 0055a474  7404                 je 0x55a47a
// 0055a476  3c2f                 cmp al, 0x2f
// 0055a478  7553                 jne 0x55a4cd
// 0055a47a  6a03                 push 3
// 0055a47c  6a00                 push 0
// 0055a47e  8d54243c             lea edx, [esp + 0x3c]
// 0055a482  52                   push edx
// 0055a483  8d4c2424             lea ecx, [esp + 0x24]
// 0055a487  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a48d  50                   push eax
// 0055a48e  8bce                 mov ecx, esi
// 0055a490  c644245c01           mov byte ptr [esp + 0x5c], 1
// 0055a495  ff1568a49e00         call dword ptr [0x9ea468]
// 0055a49b  8d4c2434             lea ecx, [esp + 0x34]
// 0055a49f  c644245800           mov byte ptr [esp + 0x58], 0
// 0055a4a4  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a4aa  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055a4ae  83c0fd               add eax, -3
// 0055a4b1  50                   push eax
// 0055a4b2  6a03                 push 3
// 0055a4b4  8d4c243c             lea ecx, [esp + 0x3c]
// 0055a4b8  51                   push ecx
// 0055a4b9  8d4c2424             lea ecx, [esp + 0x24]
// 0055a4bd  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a4c3  c644245802           mov byte ptr [esp + 0x58], 2
// 0055a4c8  e960010000           jmp 0x55a62d
// 0055a4cd  8b1560a49e00         mov edx, dword ptr [0x9ea460]
// 0055a4d3  8b02                 mov eax, dword ptr [edx]
// 0055a4d5  50                   push eax
// 0055a4d6  6a02                 push 2
// 0055a4d8  8d4c243c             lea ecx, [esp + 0x3c]
// 0055a4dc  51                   push ecx
// 0055a4dd  8d4c2424             lea ecx, [esp + 0x24]
// 0055a4e1  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a4e7  50                   push eax
// 0055a4e8  8bce                 mov ecx, esi
// 0055a4ea  c644245c03           mov byte ptr [esp + 0x5c], 3
// 0055a4ef  ff1568a49e00         call dword ptr [0x9ea468]
// 0055a4f5  8d4c2434             lea ecx, [esp + 0x34]
// 0055a4f9  c644245800           mov byte ptr [esp + 0x58], 0
// 0055a4fe  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a504  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0055a508  83c2fe               add edx, -2
// 0055a50b  52                   push edx
// 0055a50c  6a02                 push 2
// 0055a50e  8d44243c             lea eax, [esp + 0x3c]
// 0055a512  50                   push eax
// 0055a513  8d4c2424             lea ecx, [esp + 0x24]
// 0055a517  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a51d  c644245804           mov byte ptr [esp + 0x58], 4
// 0055a522  e906010000           jmp 0x55a62d
// 0055a527  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0055a52b  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0055a52f  8bc5                 mov eax, ebp
// 0055a531  83ff10               cmp edi, 0x10
// 0055a534  7304                 jae 0x55a53a
// 0055a536  8d44241c             lea eax, [esp + 0x1c]
// 0055a53a  8a00                 mov al, byte ptr [eax]
// 0055a53c  3c5c                 cmp al, 0x5c
// 0055a53e  7408                 je 0x55a548
// 0055a540  3c2f                 cmp al, 0x2f
// 0055a542  7404                 je 0x55a548
// 0055a544  33c0                 xor eax, eax
// 0055a546  eb05                 jmp 0x55a54d
// 0055a548  b801000000           mov eax, 1
// 0055a54d  83f902               cmp ecx, 2
// 0055a550  1bd2                 sbb edx, edx
// 0055a552  42                   inc edx
// 0055a553  84d0                 test al, dl
// 0055a555  7475                 je 0x55a5cc
// 0055a557  83f901               cmp ecx, 1
// 0055a55a  730a                 jae 0x55a566
// 0055a55c  ffd3                 call ebx
// 0055a55e  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0055a562  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0055a566  8bc5                 mov eax, ebp
// 0055a568  83ff10               cmp edi, 0x10
// 0055a56b  7304                 jae 0x55a571
// 0055a56d  8d44241c             lea eax, [esp + 0x1c]
// 0055a571  8a4001               mov al, byte ptr [eax + 1]
// 0055a574  3c5c                 cmp al, 0x5c
// 0055a576  7404                 je 0x55a57c
// 0055a578  3c2f                 cmp al, 0x2f
// 0055a57a  7550                 jne 0x55a5cc
// 0055a57c  6a02                 push 2
// 0055a57e  6a00                 push 0
// 0055a580  8d44243c             lea eax, [esp + 0x3c]
// 0055a584  50                   push eax
// 0055a585  8d4c2424             lea ecx, [esp + 0x24]
// 0055a589  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a58f  50                   push eax
// 0055a590  8bce                 mov ecx, esi
// 0055a592  c644245c05           mov byte ptr [esp + 0x5c], 5
// 0055a597  ff1568a49e00         call dword ptr [0x9ea468]
// 0055a59d  8d4c2434             lea ecx, [esp + 0x34]
// 0055a5a1  c644245800           mov byte ptr [esp + 0x58], 0
// 0055a5a6  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a5ac  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0055a5b0  83c1fe               add ecx, -2
// 0055a5b3  51                   push ecx
// 0055a5b4  6a02                 push 2
// 0055a5b6  8d54243c             lea edx, [esp + 0x3c]
// 0055a5ba  52                   push edx
// 0055a5bb  8d4c2424             lea ecx, [esp + 0x24]
// 0055a5bf  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a5c5  c644245806           mov byte ptr [esp + 0x58], 6
// 0055a5ca  eb61                 jmp 0x55a62d
// 0055a5cc  8bc5                 mov eax, ebp
// 0055a5ce  83ff10               cmp edi, 0x10
// 0055a5d1  7304                 jae 0x55a5d7
// 0055a5d3  8d44241c             lea eax, [esp + 0x1c]
// 0055a5d7  8a00                 mov al, byte ptr [eax]
// 0055a5d9  3c5c                 cmp al, 0x5c
// 0055a5db  7404                 je 0x55a5e1
// 0055a5dd  3c2f                 cmp al, 0x2f
// 0055a5df  7566                 jne 0x55a647
// 0055a5e1  6a01                 push 1
// 0055a5e3  6a00                 push 0
// 0055a5e5  8d44243c             lea eax, [esp + 0x3c]
// 0055a5e9  50                   push eax
// 0055a5ea  8d4c2424             lea ecx, [esp + 0x24]
// 0055a5ee  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a5f4  50                   push eax
// 0055a5f5  8bce                 mov ecx, esi
// 0055a5f7  c644245c07           mov byte ptr [esp + 0x5c], 7
// 0055a5fc  ff1568a49e00         call dword ptr [0x9ea468]
// 0055a602  8d4c2434             lea ecx, [esp + 0x34]
// 0055a606  c644245800           mov byte ptr [esp + 0x58], 0
// 0055a60b  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a611  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0055a615  49                   dec ecx
// 0055a616  51                   push ecx
// 0055a617  6a01                 push 1
// 0055a619  8d54243c             lea edx, [esp + 0x3c]
// 0055a61d  52                   push edx
// 0055a61e  8d4c2424             lea ecx, [esp + 0x24]
// 0055a622  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a628  c644245808           mov byte ptr [esp + 0x58], 8
// 0055a62d  50                   push eax
// 0055a62e  8d4c241c             lea ecx, [esp + 0x1c]
// 0055a632  ff1568a49e00         call dword ptr [0x9ea468]
// 0055a638  8d4c2434             lea ecx, [esp + 0x34]
// 0055a63c  c644245800           mov byte ptr [esp + 0x58], 0
// 0055a641  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a647  a160a49e00           mov eax, dword ptr [0x9ea460]
// 0055a64c  8b00                 mov eax, dword ptr [eax]
// 0055a64e  6a01                 push 1
// 0055a650  50                   push eax
// 0055a651  8d4c2418             lea ecx, [esp + 0x18]
// 0055a655  51                   push ecx
// 0055a656  8d4c2424             lea ecx, [esp + 0x24]
// 0055a65a  c644241c2e           mov byte ptr [esp + 0x1c], 0x2e
// 0055a65f  ff1508a79e00         call dword ptr [0x9ea708]
// 0055a665  8b1560a49e00         mov edx, dword ptr [0x9ea460]
// 0055a66b  8bf0                 mov esi, eax
// 0055a66d  8b02                 mov eax, dword ptr [edx]
// 0055a66f  6a01                 push 1
// 0055a671  50                   push eax
// 0055a672  8d442418             lea eax, [esp + 0x18]
// 0055a676  50                   push eax
// 0055a677  8d4c2424             lea ecx, [esp + 0x24]
// 0055a67b  c644241c5c           mov byte ptr [esp + 0x1c], 0x5c
// 0055a680  ff1508a79e00         call dword ptr [0x9ea708]
// 0055a686  8b0d60a49e00         mov ecx, dword ptr [0x9ea460]
// 0055a68c  8bf8                 mov edi, eax
// 0055a68e  8b01                 mov eax, dword ptr [ecx]
// 0055a690  6a01                 push 1
// 0055a692  50                   push eax
// 0055a693  8d54241c             lea edx, [esp + 0x1c]
// 0055a697  52                   push edx
// 0055a698  8d4c2424             lea ecx, [esp + 0x24]
// 0055a69c  c64424202f           mov byte ptr [esp + 0x20], 0x2f
// 0055a6a1  ff1508a79e00         call dword ptr [0x9ea708]
// 0055a6a7  3bc7                 cmp eax, edi
// 0055a6a9  7d02                 jge 0x55a6ad
// 0055a6ab  8bc7                 mov eax, edi
// 0055a6ad  8b0d60a49e00         mov ecx, dword ptr [0x9ea460]
// 0055a6b3  3b31                 cmp esi, dword ptr [ecx]
// 0055a6b5  746f                 je 0x55a726
// 0055a6b7  3bf0                 cmp esi, eax
// 0055a6b9  766b                 jbe 0x55a726
// 0055a6bb  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0055a6bf  2bd6                 sub edx, esi
// 0055a6c1  4a                   dec edx
// 0055a6c2  52                   push edx
// 0055a6c3  8d4601               lea eax, [esi + 1]
// 0055a6c6  50                   push eax
// 0055a6c7  8d4c243c             lea ecx, [esp + 0x3c]
// 0055a6cb  51                   push ecx
// 0055a6cc  8d4c2424             lea ecx, [esp + 0x24]
// 0055a6d0  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a6d6  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0055a6da  50                   push eax
// 0055a6db  c644245c09           mov byte ptr [esp + 0x5c], 9
// 0055a6e0  ff1568a49e00         call dword ptr [0x9ea468]
// 0055a6e6  8d4c2434             lea ecx, [esp + 0x34]
// 0055a6ea  c644245800           mov byte ptr [esp + 0x58], 0
// 0055a6ef  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a6f5  56                   push esi
// 0055a6f6  6a00                 push 0
// 0055a6f8  8d54243c             lea edx, [esp + 0x3c]
// 0055a6fc  52                   push edx
// 0055a6fd  8d4c2424             lea ecx, [esp + 0x24]
// 0055a701  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a707  50                   push eax
// 0055a708  8d4c241c             lea ecx, [esp + 0x1c]
// 0055a70c  c644245c0a           mov byte ptr [esp + 0x5c], 0xa
// 0055a711  ff1568a49e00         call dword ptr [0x9ea468]
// 0055a717  8d4c2434             lea ecx, [esp + 0x34]
// 0055a71b  c644245800           mov byte ptr [esp + 0x58], 0
// 0055a720  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a726  a160a49e00           mov eax, dword ptr [0x9ea460]
// 0055a72b  8b00                 mov eax, dword ptr [eax]
// 0055a72d  6a01                 push 1
// 0055a72f  50                   push eax
// 0055a730  8d4c241c             lea ecx, [esp + 0x1c]
// 0055a734  51                   push ecx
// 0055a735  8d4c2424             lea ecx, [esp + 0x24]
// 0055a739  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 0055a73e  ff1508a79e00         call dword ptr [0x9ea708]
// 0055a744  8b1560a49e00         mov edx, dword ptr [0x9ea460]
// 0055a74a  8bf0                 mov esi, eax
// 0055a74c  8b02                 mov eax, dword ptr [edx]
// 0055a74e  6a01                 push 1
// 0055a750  50                   push eax
// 0055a751  8d442418             lea eax, [esp + 0x18]
// 0055a755  50                   push eax
// 0055a756  8d4c2424             lea ecx, [esp + 0x24]
// 0055a75a  c644241c2f           mov byte ptr [esp + 0x1c], 0x2f
// 0055a75f  ff1508a79e00         call dword ptr [0x9ea708]
// 0055a765  3bc6                 cmp eax, esi
// 0055a767  7c02                 jl 0x55a76b
// 0055a769  8bf0                 mov esi, eax
// 0055a76b  8b0d60a49e00         mov ecx, dword ptr [0x9ea460]
// 0055a771  3b31                 cmp esi, dword ptr [ecx]
// 0055a773  7520                 jne 0x55a795
// 0055a775  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0055a779  8d542418             lea edx, [esp + 0x18]
// 0055a77d  52                   push edx
// 0055a77e  ff1568a49e00         call dword ptr [0x9ea468]
// 0055a784  68fe08a000           push 0xa008fe
// 0055a789  8d4c241c             lea ecx, [esp + 0x1c]
// 0055a78d  ff151ca49e00         call dword ptr [0x9ea41c]
// 0055a793  eb72                 jmp 0x55a807
// 0055a795  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055a799  8d48ff               lea ecx, [eax - 1]
// 0055a79c  3bf1                 cmp esi, ecx
// 0055a79e  7367                 jae 0x55a807
// 0055a7a0  2bc6                 sub eax, esi
// 0055a7a2  48                   dec eax
// 0055a7a3  50                   push eax
// 0055a7a4  8d5601               lea edx, [esi + 1]
// 0055a7a7  52                   push edx
// 0055a7a8  8d44243c             lea eax, [esp + 0x3c]
// 0055a7ac  50                   push eax
// 0055a7ad  8d4c2424             lea ecx, [esp + 0x24]
// 0055a7b1  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a7b7  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0055a7bb  50                   push eax
// 0055a7bc  c644245c0b           mov byte ptr [esp + 0x5c], 0xb
// 0055a7c1  ff1568a49e00         call dword ptr [0x9ea468]
// 0055a7c7  8d4c2434             lea ecx, [esp + 0x34]
// 0055a7cb  c644245800           mov byte ptr [esp + 0x58], 0
// 0055a7d0  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a7d6  56                   push esi
// 0055a7d7  6a00                 push 0
// 0055a7d9  8d4c243c             lea ecx, [esp + 0x3c]
// 0055a7dd  51                   push ecx
// 0055a7de  8d4c2424             lea ecx, [esp + 0x24]
// 0055a7e2  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a7e8  50                   push eax
// 0055a7e9  8d4c241c             lea ecx, [esp + 0x1c]
// 0055a7ed  c644245c0c           mov byte ptr [esp + 0x5c], 0xc
// 0055a7f2  ff1568a49e00         call dword ptr [0x9ea468]
// 0055a7f8  8d4c2434             lea ecx, [esp + 0x34]
// 0055a7fc  c644245800           mov byte ptr [esp + 0x58], 0
// 0055a801  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a807  33f6                 xor esi, esi
// 0055a809  3974242c             cmp dword ptr [esp + 0x2c], esi
// 0055a80d  0f8695000000         jbe 0x55a8a8
// 0055a813  b30d                 mov bl, 0xd
// 0055a815  6a01                 push 1
// 0055a817  8d7e01               lea edi, [esi + 1]
// 0055a81a  57                   push edi
// 0055a81b  8d54241c             lea edx, [esp + 0x1c]
// 0055a81f  52                   push edx
// 0055a820  8d4c2424             lea ecx, [esp + 0x24]
// 0055a824  8bee                 mov ebp, esi
// 0055a826  c64424202f           mov byte ptr [esp + 0x20], 0x2f
// 0055a82b  ff1560a59e00         call dword ptr [0x9ea560]
// 0055a831  6a01                 push 1
// 0055a833  8bf0                 mov esi, eax
// 0055a835  57                   push edi
// 0055a836  8d44241c             lea eax, [esp + 0x1c]
// 0055a83a  50                   push eax
// 0055a83b  8d4c2424             lea ecx, [esp + 0x24]
// 0055a83f  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 0055a844  ff1560a59e00         call dword ptr [0x9ea560]
// 0055a84a  8b0d60a49e00         mov ecx, dword ptr [0x9ea460]
// 0055a850  8b09                 mov ecx, dword ptr [ecx]
// 0055a852  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0055a856  3bf1                 cmp esi, ecx
// 0055a858  0f44f2               cmove esi, edx
// 0055a85b  3bc1                 cmp eax, ecx
// 0055a85d  0f44c2               cmove eax, edx
// 0055a860  3bf0                 cmp esi, eax
// 0055a862  7c02                 jl 0x55a866
// 0055a864  8bf0                 mov esi, eax
// 0055a866  3bf1                 cmp esi, ecx
// 0055a868  0f44f2               cmove esi, edx
// 0055a86b  8bd6                 mov edx, esi
// 0055a86d  2bd5                 sub edx, ebp
// 0055a86f  52                   push edx
// 0055a870  55                   push ebp
// 0055a871  8d44243c             lea eax, [esp + 0x3c]
// 0055a875  50                   push eax
// 0055a876  8d4c2424             lea ecx, [esp + 0x24]
// 0055a87a  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a880  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0055a884  50                   push eax
// 0055a885  885c245c             mov byte ptr [esp + 0x5c], bl
// 0055a889  e80248ffff           call 0x54f090
// 0055a88e  8d4c2434             lea ecx, [esp + 0x34]
// 0055a892  c644245800           mov byte ptr [esp + 0x58], 0
// 0055a897  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a89d  46                   inc esi
// 0055a89e  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 0055a8a2  0f826dffffff         jb 0x55a815
// 0055a8a8  8d4c2418             lea ecx, [esp + 0x18]
// 0055a8ac  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0055a8b4  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a8ba  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0055a8be  5f                   pop edi
// 0055a8bf  5d                   pop ebp
// 0055a8c0  5b                   pop ebx
// 0055a8c1  5e                   pop esi
// 0055a8c2  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a8c9  83c44c               add esp, 0x4c
// 0055a8cc  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?parseFilename@G3D@@YAXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV23@AAV?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@11@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
