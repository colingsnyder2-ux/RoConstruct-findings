// roc 2009-12 008f3bb0  unit: CXTMemDC  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3bb0
//
// 008f3bb0  6aff                 push -1
// 008f3bb2  68236c9600           push 0x966c23
// 008f3bb7  64a100000000         mov eax, dword ptr fs:[0]
// 008f3bbd  50                   push eax
// 008f3bbe  83ec14               sub esp, 0x14
// 008f3bc1  53                   push ebx
// 008f3bc2  55                   push ebp
// 008f3bc3  56                   push esi
// 008f3bc4  57                   push edi
// 008f3bc5  a10052b600           mov eax, dword ptr [0xb65200]
// 008f3bca  33c4                 xor eax, esp
// 008f3bcc  50                   push eax
// 008f3bcd  8d442428             lea eax, [esp + 0x28]
// 008f3bd1  64a300000000         mov dword ptr fs:[0], eax
// 008f3bd7  8bf1                 mov esi, ecx
// 008f3bd9  89742414             mov dword ptr [esp + 0x14], esi
// 008f3bdd  e8cc280300           call 0x9264ae
// 008f3be2  33c9                 xor ecx, ecx
// 008f3be4  8d6e28               lea ebp, [esi + 0x28]
// 008f3be7  c7068cfaa000         mov dword ptr [esi], 0xa0fa8c
// 008f3bed  894c2430             mov dword ptr [esp + 0x30], ecx
// 008f3bf1  894d04               mov dword ptr [ebp + 4], ecx
// 008f3bf4  c7450018229a00       mov dword ptr [ebp], 0x9a2218
// 008f3bfb  8b442438             mov eax, dword ptr [esp + 0x38]
// 008f3bff  c644243001           mov byte ptr [esp + 0x30], 1
// 008f3c04  894610               mov dword ptr [esi + 0x10], eax
// 008f3c07  3bc1                 cmp eax, ecx
// 008f3c09  0f8401010000         je 0x8f3d10
// 008f3c0f  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 008f3c13  53                   push ebx
// 008f3c14  ff1568cc9800         call dword ptr [0x98cc68]
// 008f3c1a  8d7e18               lea edi, [esi + 0x18]
// 008f3c1d  85c0                 test eax, eax
// 008f3c1f  740d                 je 0x8f3c2e
// 008f3c21  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008f3c24  8b01                 mov eax, dword ptr [ecx]
// 008f3c26  8b5058               mov edx, dword ptr [eax + 0x58]
// 008f3c29  57                   push edi
// 008f3c2a  ffd2                 call edx
// 008f3c2c  eb08                 jmp 0x8f3c36
// 008f3c2e  53                   push ebx
// 008f3c2f  57                   push edi
// 008f3c30  ff1564cc9800         call dword ptr [0x98cc64]
// 008f3c36  8b4610               mov eax, dword ptr [esi + 0x10]
// 008f3c39  33db                 xor ebx, ebx
// 008f3c3b  3bc3                 cmp eax, ebx
// 008f3c3d  7504                 jne 0x8f3c43
// 008f3c3f  33c0                 xor eax, eax
// 008f3c41  eb03                 jmp 0x8f3c46
// 008f3c43  8b4004               mov eax, dword ptr [eax + 4]
// 008f3c46  50                   push eax
// 008f3c47  ff1554b19800         call dword ptr [0x98b154]
// 008f3c4d  50                   push eax
// 008f3c4e  8bce                 mov ecx, esi
// 008f3c50  e847280300           call 0x92649c
// 008f3c55  85c0                 test eax, eax
// 008f3c57  0f84ad000000         je 0x8f3d0a
// 008f3c5d  8b4610               mov eax, dword ptr [esi + 0x10]
// 008f3c60  8b4008               mov eax, dword ptr [eax + 8]
// 008f3c63  50                   push eax
// 008f3c64  ff1538b19800         call dword ptr [0x98b138]
// 008f3c6a  50                   push eax
// 008f3c6b  8bce                 mov ecx, esi
// 008f3c6d  e8b4280300           call 0x926526
// 008f3c72  8b470c               mov eax, dword ptr [edi + 0xc]
// 008f3c75  2b4704               sub eax, dword ptr [edi + 4]
// 008f3c78  8b4f08               mov ecx, dword ptr [edi + 8]
// 008f3c7b  2b0f                 sub ecx, dword ptr [edi]
// 008f3c7d  8b5610               mov edx, dword ptr [esi + 0x10]
// 008f3c80  50                   push eax
// 008f3c81  51                   push ecx
// 008f3c82  8b4a04               mov ecx, dword ptr [edx + 4]
// 008f3c85  51                   push ecx
// 008f3c86  ff1550b19800         call dword ptr [0x98b150]
// 008f3c8c  50                   push eax
// 008f3c8d  8bcd                 mov ecx, ebp
// 008f3c8f  e89601f0ff           call 0x7f3e2a
// 008f3c94  3beb                 cmp ebp, ebx
// 008f3c96  7504                 jne 0x8f3c9c
// 008f3c98  33ed                 xor ebp, ebp
// 008f3c9a  eb03                 jmp 0x8f3c9f
// 008f3c9c  8b6d04               mov ebp, dword ptr [ebp + 4]
// 008f3c9f  8b5604               mov edx, dword ptr [esi + 4]
// 008f3ca2  55                   push ebp
// 008f3ca3  52                   push edx
// 008f3ca4  e84f290300           call 0x9265f8
// 008f3ca9  3bc3                 cmp eax, ebx
// 008f3cab  7504                 jne 0x8f3cb1
// 008f3cad  33c0                 xor eax, eax
// 008f3caf  eb03                 jmp 0x8f3cb4
// 008f3cb1  8b4004               mov eax, dword ptr [eax + 4]
// 008f3cb4  894630               mov dword ptr [esi + 0x30], eax
// 008f3cb7  8b442458             mov eax, dword ptr [esp + 0x58]
// 008f3cbb  83f8ff               cmp eax, -1
// 008f3cbe  7509                 jne 0x8f3cc9
// 008f3cc0  8b442454             mov eax, dword ptr [esp + 0x54]
// 008f3cc4  83f8ff               cmp eax, -1
// 008f3cc7  7438                 je 0x8f3d01
// 008f3cc9  8b4708               mov eax, dword ptr [edi + 8]
// 008f3ccc  2b07                 sub eax, dword ptr [edi]
// 008f3cce  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008f3cd1  2b4f04               sub ecx, dword ptr [edi + 4]
// 008f3cd4  8b542460             mov edx, dword ptr [esp + 0x60]
// 008f3cd8  53                   push ebx
// 008f3cd9  52                   push edx
// 008f3cda  89442428             mov dword ptr [esp + 0x28], eax
// 008f3cde  8d442448             lea eax, [esp + 0x48]
// 008f3ce2  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008f3ce6  50                   push eax
// 008f3ce7  8d4c2424             lea ecx, [esp + 0x24]
// 008f3ceb  51                   push ecx
// 008f3cec  56                   push esi
// 008f3ced  895c242c             mov dword ptr [esp + 0x2c], ebx
// 008f3cf1  895c2430             mov dword ptr [esp + 0x30], ebx
// 008f3cf5  e8a695f5ff           call 0x84d2a0
// 008f3cfa  8bc8                 mov ecx, eax
// 008f3cfc  e8bf98f5ff           call 0x84d5c0
// 008f3d01  c7461401000000       mov dword ptr [esi + 0x14], 1
// 008f3d08  eb06                 jmp 0x8f3d10
// 008f3d0a  895e14               mov dword ptr [esi + 0x14], ebx
// 008f3d0d  895e30               mov dword ptr [esi + 0x30], ebx
// 008f3d10  8bc6                 mov eax, esi
// 008f3d12  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008f3d16  64890d00000000       mov dword ptr fs:[0], ecx
// 008f3d1d  59                   pop ecx
// 008f3d1e  5f                   pop edi
// 008f3d1f  5e                   pop esi
// 008f3d20  5d                   pop ebp
// 008f3d21  5b                   pop ebx
// 008f3d22  83c420               add esp, 0x20
// 008f3d25  c22c00               ret 0x2c
// copied from an identical function in another client (function ??0CXTMemDC@@QAE@PAVCDC@@ABVCRect@@VCXTPPaintManagerColorGradient@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTMemDC.cpp