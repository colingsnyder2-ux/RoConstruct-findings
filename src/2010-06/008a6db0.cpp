// roc 2010-06 008a6db0  unit: CXTPRibbonSystemPopupBar  size: 541 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a6db0
//
// 008a6db0  6aff                 push -1
// 008a6db2  68a8ca9b00           push 0x9bcaa8
// 008a6db7  64a100000000         mov eax, dword ptr fs:[0]
// 008a6dbd  50                   push eax
// 008a6dbe  83ec48               sub esp, 0x48
// 008a6dc1  53                   push ebx
// 008a6dc2  55                   push ebp
// 008a6dc3  56                   push esi
// 008a6dc4  57                   push edi
// 008a6dc5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008a6dca  33c4                 xor eax, esp
// 008a6dcc  50                   push eax
// 008a6dcd  8d44245c             lea eax, [esp + 0x5c]
// 008a6dd1  64a300000000         mov dword ptr fs:[0], eax
// 008a6dd7  8bd9                 mov ebx, ecx
// 008a6dd9  8d4c2434             lea ecx, [esp + 0x34]
// 008a6ddd  e87e4bf0ff           call 0x7ab960
// 008a6de2  8bcb                 mov ecx, ebx
// 008a6de4  c744246400000000     mov dword ptr [esp + 0x64], 0
// 008a6dec  33ff                 xor edi, edi
// 008a6dee  e8cd25f1ff           call 0x7b93c0
// 008a6df3  85c0                 test eax, eax
// 008a6df5  7e50                 jle 0x8a6e47
// 008a6df7  57                   push edi
// 008a6df8  8bcb                 mov ecx, ebx
// 008a6dfa  e8d125f1ff           call 0x7b93d0
// 008a6dff  8bf0                 mov esi, eax
// 008a6e01  85f6                 test esi, esi
// 008a6e03  7436                 je 0x8a6e3b
// 008a6e05  e8a6edffff           call 0x8a5bb0
// 008a6e0a  50                   push eax
// 008a6e0b  8bce                 mov ecx, esi
// 008a6e0d  e81611f0ff           call 0x7a7f28
// 008a6e12  85c0                 test eax, eax
// 008a6e14  7425                 je 0x8a6e3b
// 008a6e16  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008a6e1a  56                   push esi
// 008a6e1b  50                   push eax
// 008a6e1c  8d4c243c             lea ecx, [esp + 0x3c]
// 008a6e20  e88ba6f3ff           call 0x7e14b0
// 008a6e25  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 008a6e2b  8b16                 mov edx, dword ptr [esi]
// 008a6e2d  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008a6e33  83c804               or eax, 4
// 008a6e36  50                   push eax
// 008a6e37  8bce                 mov ecx, esi
// 008a6e39  ffd2                 call edx
// 008a6e3b  8bcb                 mov ecx, ebx
// 008a6e3d  47                   inc edi
// 008a6e3e  e87d25f1ff           call 0x7b93c0
// 008a6e43  3bf8                 cmp edi, eax
// 008a6e45  7cb0                 jl 0x8a6df7
// 008a6e47  8b442474             mov eax, dword ptr [esp + 0x74]
// 008a6e4b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008a6e4f  50                   push eax
// 008a6e50  51                   push ecx
// 008a6e51  8d54241c             lea edx, [esp + 0x1c]
// 008a6e55  52                   push edx
// 008a6e56  8bcb                 mov ecx, ebx
// 008a6e58  e813f9f4ff           call 0x7f6770
// 008a6e5d  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008a6e61  85f6                 test esi, esi
// 008a6e63  7513                 jne 0x8a6e78
// 008a6e65  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008a6e69  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a6e6d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a6e71  8906                 mov dword ptr [esi], eax
// 008a6e73  894e04               mov dword ptr [esi + 4], ecx
// 008a6e76  eb78                 jmp 0x8a6ef0
// 008a6e78  53                   push ebx
// 008a6e79  8d4c244c             lea ecx, [esp + 0x4c]
// 008a6e7d  e8b219f0ff           call 0x7a8834
// 008a6e82  8bcb                 mov ecx, ebx
// 008a6e84  c644246401           mov byte ptr [esp + 0x64], 1
// 008a6e89  e80218f1ff           call 0x7b8690
// 008a6e8e  8b10                 mov edx, dword ptr [eax]
// 008a6e90  6a00                 push 0
// 008a6e92  8bc8                 mov ecx, eax
// 008a6e94  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 008a6e9a  53                   push ebx
// 008a6e9b  ffd0                 call eax
// 008a6e9d  50                   push eax
// 008a6e9e  8d4c244c             lea ecx, [esp + 0x4c]
// 008a6ea2  51                   push ecx
// 008a6ea3  8d4c242c             lea ecx, [esp + 0x2c]
// 008a6ea7  e8f487f5ff           call 0x7ff6a0
// 008a6eac  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008a6eb0  2bbb08020000         sub edi, dword ptr [ebx + 0x208]
// 008a6eb6  8d6eff               lea ebp, [esi - 1]
// 008a6eb9  47                   inc edi
// 008a6eba  c644246402           mov byte ptr [esp + 0x64], 2
// 008a6ebf  85ed                 test ebp, ebp
// 008a6ec1  7d61                 jge 0x8a6f24
// 008a6ec3  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 008a6ec7  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a6ecb  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a6ecf  8d4c2424             lea ecx, [esp + 0x24]
// 008a6ed3  8916                 mov dword ptr [esi], edx
// 008a6ed5  894604               mov dword ptr [esi + 4], eax
// 008a6ed8  c644246401           mov byte ptr [esp + 0x64], 1
// 008a6edd  e83e88f5ff           call 0x7ff720
// 008a6ee2  8d4c2448             lea ecx, [esp + 0x48]
// 008a6ee6  c644246400           mov byte ptr [esp + 0x64], 0
// 008a6eeb  e83e19f0ff           call 0x7a882e
// 008a6ef0  8d4c2434             lea ecx, [esp + 0x34]
// 008a6ef4  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008a6efc  e87f4af0ff           call 0x7ab980
// 008a6f01  8bc6                 mov eax, esi
// 008a6f03  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008a6f07  64890d00000000       mov dword ptr fs:[0], ecx
// 008a6f0e  59                   pop ecx
// 008a6f0f  5f                   pop edi
// 008a6f10  5e                   pop esi
// 008a6f11  5d                   pop ebp
// 008a6f12  5b                   pop ebx
// 008a6f13  83c454               add esp, 0x54
// 008a6f16  c20c00               ret 0xc
// 008a6f19  8da42400000000       lea esp, [esp]
// 008a6f20  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 008a6f24  85ed                 test ebp, ebp
// 008a6f26  0f8c9c000000         jl 0x8a6fc8
// 008a6f2c  3bee                 cmp ebp, esi
// 008a6f2e  0f8d94000000         jge 0x8a6fc8
// 008a6f34  8b542438             mov edx, dword ptr [esp + 0x38]
// 008a6f38  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 008a6f3b  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 008a6f41  8b06                 mov eax, dword ptr [esi]
// 008a6f43  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 008a6f49  83e1fb               and ecx, 0xfffffffb
// 008a6f4c  51                   push ecx
// 008a6f4d  8bce                 mov ecx, esi
// 008a6f4f  ffd2                 call edx
// 008a6f51  8b06                 mov eax, dword ptr [esi]
// 008a6f53  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 008a6f59  8d4c2448             lea ecx, [esp + 0x48]
// 008a6f5d  51                   push ecx
// 008a6f5e  8d542420             lea edx, [esp + 0x20]
// 008a6f62  52                   push edx
// 008a6f63  8bce                 mov ecx, esi
// 008a6f65  ffd0                 call eax
// 008a6f67  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a6f6b  8d48fd               lea ecx, [eax - 3]
// 008a6f6e  2b830c020000         sub eax, dword ptr [ebx + 0x20c]
// 008a6f74  894c2470             mov dword ptr [esp + 0x70], ecx
// 008a6f78  83c004               add eax, 4
// 008a6f7b  8bd7                 mov edx, edi
// 008a6f7d  2b54241c             sub edx, dword ptr [esp + 0x1c]
// 008a6f81  83ec10               sub esp, 0x10
// 008a6f84  8bcc                 mov ecx, esp
// 008a6f86  8911                 mov dword ptr [ecx], edx
// 008a6f88  89842484000000       mov dword ptr [esp + 0x84], eax
// 008a6f8f  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008a6f96  8b06                 mov eax, dword ptr [esi]
// 008a6f98  8b407c               mov eax, dword ptr [eax + 0x7c]
// 008a6f9b  895104               mov dword ptr [ecx + 4], edx
// 008a6f9e  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 008a6fa5  897908               mov dword ptr [ecx + 8], edi
// 008a6fa8  89510c               mov dword ptr [ecx + 0xc], edx
// 008a6fab  8bce                 mov ecx, esi
// 008a6fad  ffd0                 call eax
// 008a6faf  b9faffffff           mov ecx, 0xfffffffa
// 008a6fb4  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 008a6fb8  03f9                 add edi, ecx
// 008a6fba  83ed01               sub ebp, 1
// 008a6fbd  0f895dffffff         jns 0x8a6f20
// 008a6fc3  e9fbfeffff           jmp 0x8a6ec3
// 008a6fc8  e87f0cf0ff           call 0x7a7c4c
// copied from an identical function in another client (function ?CalcDynamicLayout@CXTPRibbonSystemPopupBar@@UAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp