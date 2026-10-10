// roc 2008-06 00759e80  unit: CXTPDockingPaneWindowSelect  size: 604 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00759e80
//
// 00759e80  83ec1c               sub esp, 0x1c
// 00759e83  53                   push ebx
// 00759e84  55                   push ebp
// 00759e85  56                   push esi
// 00759e86  8bf1                 mov esi, ecx
// 00759e88  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00759e8e  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 00759e94  33ed                 xor ebp, ebp
// 00759e96  57                   push edi
// 00759e97  89442414             mov dword ptr [esp + 0x14], eax
// 00759e9b  3bc5                 cmp eax, ebp
// 00759e9d  7506                 jne 0x759ea5
// 00759e9f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00759ea3  eb07                 jmp 0x759eac
// 00759ea5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00759ea8  894c2410             mov dword ptr [esp + 0x10], ecx
// 00759eac  ff15102e8000         call dword ptr [0x802e10]
// 00759eb2  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 00759eb8  89442418             mov dword ptr [esp + 0x18], eax
// 00759ebc  e8cfb1f8ff           call 0x6e5090
// 00759ec1  8bf8                 mov edi, eax
// 00759ec3  8bdf                 mov ebx, edi
// 00759ec5  f7db                 neg ebx
// 00759ec7  1bdb                 sbb ebx, ebx
// 00759ec9  81e3e0f7ffff         and ebx, 0xfffff7e0
// 00759ecf  81c320080000         add ebx, 0x820
// 00759ed5  e856e1f8ff           call 0x6e8030
// 00759eda  8bc8                 mov ecx, eax
// 00759edc  e84feaf8ff           call 0x6e8930
// 00759ee1  84c0                 test al, al
// 00759ee3  7406                 je 0x759eeb
// 00759ee5  81cb00000200         or ebx, 0x20000
// 00759eeb  8b542414             mov edx, dword ptr [esp + 0x14]
// 00759eef  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00759ef5  6a00                 push 0
// 00759ef7  52                   push edx
// 00759ef8  8d442424             lea eax, [esp + 0x24]
// 00759efc  50                   push eax
// 00759efd  6800010080           push 0x80000100
// 00759f02  6a00                 push 0
// 00759f04  6a00                 push 0
// 00759f06  6a00                 push 0
// 00759f08  51                   push ecx
// 00759f09  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00759f0d  896c2440             mov dword ptr [esp + 0x40], ebp
// 00759f11  896c2444             mov dword ptr [esp + 0x44], ebp
// 00759f15  896c2448             mov dword ptr [esp + 0x48], ebp
// 00759f19  8b2e                 mov ebp, dword ptr [esi]
// 00759f1b  53                   push ebx
// 00759f1c  e86b70f4ff           call 0x6a0f8c
// 00759f21  8b95a0010000         mov edx, dword ptr [ebp + 0x1a0]
// 00759f27  f7df                 neg edi
// 00759f29  1bff                 sbb edi, edi
// 00759f2b  81e700004000         and edi, 0x400000
// 00759f31  50                   push eax
// 00759f32  81cf80000000         or edi, 0x80
// 00759f38  57                   push edi
// 00759f39  8bce                 mov ecx, esi
// 00759f3b  ffd2                 call edx
// 00759f3d  85c0                 test eax, eax
// 00759f3f  7419                 je 0x759f5a
// 00759f41  8b06                 mov eax, dword ptr [esi]
// 00759f43  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 00759f49  8bce                 mov ecx, esi
// 00759f4b  ffd2                 call edx
// 00759f4d  8bce                 mov ecx, esi
// 00759f4f  85c0                 test eax, eax
// 00759f51  7511                 jne 0x759f64
// 00759f53  8b06                 mov eax, dword ptr [esi]
// 00759f55  8b5068               mov edx, dword ptr [eax + 0x68]
// 00759f58  ffd2                 call edx
// 00759f5a  5f                   pop edi
// 00759f5b  5e                   pop esi
// 00759f5c  5d                   pop ebp
// 00759f5d  33c0                 xor eax, eax
// 00759f5f  5b                   pop ebx
// 00759f60  83c41c               add esp, 0x1c
// 00759f63  c3                   ret 
// 00759f64  e8bf6af4ff           call 0x6a0a28
// 00759f69  8b4620               mov eax, dword ptr [esi + 0x20]
// 00759f6c  50                   push eax
// 00759f6d  ff15a82d8000         call dword ptr [0x802da8]
// 00759f73  50                   push eax
// 00759f74  e8656cf4ff           call 0x6a0bde
// 00759f79  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00759f7d  33db                 xor ebx, ebx
// 00759f7f  85ff                 test edi, edi
// 00759f81  741d                 je 0x759fa0
// 00759f83  57                   push edi
// 00759f84  ff15cc2b8000         call dword ptr [0x802bcc]
// 00759f8a  85c0                 test eax, eax
// 00759f8c  7412                 je 0x759fa0
// 00759f8e  53                   push ebx
// 00759f8f  6800000008           push 0x8000000
// 00759f94  53                   push ebx
// 00759f95  57                   push edi
// 00759f96  e811270600           call 0x7bc6ac
// 00759f9b  bb01000000           mov ebx, 1
// 00759fa0  834e3c10             or dword ptr [esi + 0x3c], 0x10
// 00759fa4  f6463c10             test byte ptr [esi + 0x3c], 0x10
// 00759fa8  7409                 je 0x759fb3
// 00759faa  6a04                 push 4
// 00759fac  8bce                 mov ecx, esi
// 00759fae  e871240600           call 0x7bc424
// 00759fb3  837e2000             cmp dword ptr [esi + 0x20], 0
// 00759fb7  7416                 je 0x759fcf
// 00759fb9  6897000000           push 0x97
// 00759fbe  6a00                 push 0
// 00759fc0  6a00                 push 0
// 00759fc2  6a00                 push 0
// 00759fc4  6a00                 push 0
// 00759fc6  6a00                 push 0
// 00759fc8  8bce                 mov ecx, esi
// 00759fca  e8776af4ff           call 0x6a0a46
// 00759fcf  85db                 test ebx, ebx
// 00759fd1  740f                 je 0x759fe2
// 00759fd3  6a00                 push 0
// 00759fd5  6a00                 push 0
// 00759fd7  6800000008           push 0x8000000
// 00759fdc  57                   push edi
// 00759fdd  e8ca260600           call 0x7bc6ac
// 00759fe2  85ff                 test edi, edi
// 00759fe4  7412                 je 0x759ff8
// 00759fe6  ff15d02b8000         call dword ptr [0x802bd0]
// 00759fec  3b4620               cmp eax, dword ptr [esi + 0x20]
// 00759fef  7507                 jne 0x759ff8
// 00759ff1  57                   push edi
// 00759ff2  ff150c2d8000         call dword ptr [0x802d0c]
// 00759ff8  837e4401             cmp dword ptr [esi + 0x44], 1
// 00759ffc  0f85b9000000         jne 0x75a0bb
// 0075a002  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0075a008  85c0                 test eax, eax
// 0075a00a  0f84ab000000         je 0x75a0bb
// 0075a010  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0075a013  85c9                 test ecx, ecx
// 0075a015  7516                 jne 0x75a02d
// 0075a017  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0075a01a  6a01                 push 1
// 0075a01c  51                   push ecx
// 0075a01d  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0075a023  e838b9f8ff           call 0x6e5960
// 0075a028  e999000000           jmp 0x75a0c6
// 0075a02d  83f901               cmp ecx, 1
// 0075a030  0f8590000000         jne 0x75a0c6
// 0075a036  8bce                 mov ecx, esi
// 0075a038  e803f0ffff           call 0x759040
// 0075a03d  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 0075a043  8b4a10               mov ecx, dword ptr [edx + 0x10]
// 0075a046  6a00                 push 0
// 0075a048  51                   push ecx
// 0075a049  6822020000           push 0x222
// 0075a04e  50                   push eax
// 0075a04f  ff15142e8000         call dword ptr [0x802e14]
// 0075a055  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 0075a05b  8b4210               mov eax, dword ptr [edx + 0x10]
// 0075a05e  50                   push eax
// 0075a05f  e87a6bf4ff           call 0x6a0bde
// 0075a064  8bd8                 mov ebx, eax
// 0075a066  ff15102e8000         call dword ptr [0x802e10]
// 0075a06c  50                   push eax
// 0075a06d  e86c6bf4ff           call 0x6a0bde
// 0075a072  8bf8                 mov edi, eax
// 0075a074  85ff                 test edi, edi
// 0075a076  743a                 je 0x75a0b2
// 0075a078  837f2000             cmp dword ptr [edi + 0x20], 0
// 0075a07c  7434                 je 0x75a0b2
// 0075a07e  3bfb                 cmp edi, ebx
// 0075a080  7444                 je 0x75a0c6
// 0075a082  57                   push edi
// 0075a083  8bcb                 mov ecx, ebx
// 0075a085  e8867dfaff           call 0x701e10
// 0075a08a  85c0                 test eax, eax
// 0075a08c  7538                 jne 0x75a0c6
// 0075a08e  8bcf                 mov ecx, edi
// 0075a090  e87bcbf5ff           call 0x6b6c10
// 0075a095  85c0                 test eax, eax
// 0075a097  7419                 je 0x75a0b2
// 0075a099  83782000             cmp dword ptr [eax + 0x20], 0
// 0075a09d  7413                 je 0x75a0b2
// 0075a09f  8bcf                 mov ecx, edi
// 0075a0a1  e86acbf5ff           call 0x6b6c10
// 0075a0a6  50                   push eax
// 0075a0a7  8bcb                 mov ecx, ebx
// 0075a0a9  e8627dfaff           call 0x701e10
// 0075a0ae  85c0                 test eax, eax
// 0075a0b0  7514                 jne 0x75a0c6
// 0075a0b2  8bcb                 mov ecx, ebx
// 0075a0b4  e86f69f4ff           call 0x6a0a28
// 0075a0b9  eb0b                 jmp 0x75a0c6
// 0075a0bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0075a0bf  51                   push ecx
// 0075a0c0  ff15242e8000         call dword ptr [0x802e24]
// 0075a0c6  8b16                 mov edx, dword ptr [esi]
// 0075a0c8  8b4268               mov eax, dword ptr [edx + 0x68]
// 0075a0cb  8bce                 mov ecx, esi
// 0075a0cd  ffd0                 call eax
// 0075a0cf  5f                   pop edi
// 0075a0d0  5e                   pop esi
// 0075a0d1  5d                   pop ebp
// 0075a0d2  b801000000           mov eax, 1
// 0075a0d7  5b                   pop ebx
// 0075a0d8  83c41c               add esp, 0x1c
// 0075a0db  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?DoModal@CXTPDockingPaneWindowSelect@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
