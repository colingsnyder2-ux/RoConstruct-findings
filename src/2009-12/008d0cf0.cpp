// roc 2009-12 008d0cf0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0cf0
//
// 008d0cf0  51                   push ecx
// 008d0cf1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d0cf5  56                   push esi
// 008d0cf6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008d0cfa  57                   push edi
// 008d0cfb  8bf9                 mov edi, ecx
// 008d0cfd  89872c010000         mov dword ptr [edi + 0x12c], eax
// 008d0d03  85f6                 test esi, esi
// 008d0d05  0f841e010000         je 0x8d0e29
// 008d0d0b  83bfbc00000000       cmp dword ptr [edi + 0xbc], 0
// 008d0d12  7414                 je 0x8d0d28
// 008d0d14  e807aaf6ff           call 0x83b720
// 008d0d19  8bc8                 mov ecx, eax
// 008d0d1b  e840b3f6ff           call 0x83c060
// 008d0d20  85c0                 test eax, eax
// 008d0d22  7404                 je 0x8d0d28
// 008d0d24  c6461a05             mov byte ptr [esi + 0x1a], 5
// 008d0d28  53                   push ebx
// 008d0d29  8d9f0c010000         lea ebx, [edi + 0x10c]
// 008d0d2f  55                   push ebp
// 008d0d30  8bcb                 mov ecx, ebx
// 008d0d32  e8e730f2ff           call 0x7f3e1e
// 008d0d37  8daf14010000         lea ebp, [edi + 0x114]
// 008d0d3d  8bcd                 mov ecx, ebp
// 008d0d3f  e8da30f2ff           call 0x7f3e1e
// 008d0d44  8d8f1c010000         lea ecx, [edi + 0x11c]
// 008d0d4a  894c2418             mov dword ptr [esp + 0x18], ecx
// 008d0d4e  e8cb30f2ff           call 0x7f3e1e
// 008d0d53  8d8f24010000         lea ecx, [edi + 0x124]
// 008d0d59  894c2410             mov dword ptr [esp + 0x10], ecx
// 008d0d5d  e8bc30f2ff           call 0x7f3e1e
// 008d0d62  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008d0d65  f7d9                 neg ecx
// 008d0d67  1bc9                 sbb ecx, ecx
// 008d0d69  81e12c010000         and ecx, 0x12c
// 008d0d6f  81c190010000         add ecx, 0x190
// 008d0d75  56                   push esi
// 008d0d76  894e10               mov dword ptr [esi + 0x10], ecx
// 008d0d79  ff1528b19800         call dword ptr [0x98b128]
// 008d0d7f  50                   push eax
// 008d0d80  8bcb                 mov ecx, ebx
// 008d0d82  e8a330f2ff           call 0x7f3e2a
// 008d0d87  8b1d28b19800         mov ebx, dword ptr [0x98b128]
// 008d0d8d  56                   push esi
// 008d0d8e  c74610bc020000       mov dword ptr [esi + 0x10], 0x2bc
// 008d0d95  ffd3                 call ebx
// 008d0d97  50                   push eax
// 008d0d98  8bcd                 mov ecx, ebp
// 008d0d9a  e88b30f2ff           call 0x7f3e2a
// 008d0d9f  8d54241c             lea edx, [esp + 0x1c]
// 008d0da3  6a00                 push 0
// 008d0da5  52                   push edx
// 008d0da6  e8159bf7ff           call 0x84a8c0
// 008d0dab  83c408               add esp, 8
// 008d0dae  8bc8                 mov ecx, eax
// 008d0db0  ff1580de9800         call dword ptr [0x98de80]
// 008d0db6  50                   push eax
// 008d0db7  8d461c               lea eax, [esi + 0x1c]
// 008d0dba  6a20                 push 0x20
// 008d0dbc  50                   push eax
// 008d0dbd  ff15c8b79800         call dword ptr [0x98b7c8]
// 008d0dc3  83c40c               add esp, 0xc
// 008d0dc6  8d4c241c             lea ecx, [esp + 0x1c]
// 008d0dca  ff15c0de9800         call dword ptr [0x98dec0]
// 008d0dd0  8b06                 mov eax, dword ptr [esi]
// 008d0dd2  c7460c84030000       mov dword ptr [esi + 0xc], 0x384
// 008d0dd9  c746088c0a0000       mov dword ptr [esi + 8], 0xa8c
// 008d0de0  85c0                 test eax, eax
// 008d0de2  7d0a                 jge 0x8d0dee
// 008d0de4  83f8f5               cmp eax, -0xb
// 008d0de7  7e05                 jle 0x8d0dee
// 008d0de9  b8f5ffffff           mov eax, 0xfffffff5
// 008d0dee  8906                 mov dword ptr [esi], eax
// 008d0df0  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008d0df3  f7d9                 neg ecx
// 008d0df5  1bc9                 sbb ecx, ecx
// 008d0df7  81e12c010000         and ecx, 0x12c
// 008d0dfd  81c190010000         add ecx, 0x190
// 008d0e03  56                   push esi
// 008d0e04  894e10               mov dword ptr [esi + 0x10], ecx
// 008d0e07  ffd3                 call ebx
// 008d0e09  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d0e0d  50                   push eax
// 008d0e0e  e81730f2ff           call 0x7f3e2a
// 008d0e13  56                   push esi
// 008d0e14  c74610bc020000       mov dword ptr [esi + 0x10], 0x2bc
// 008d0e1b  ffd3                 call ebx
// 008d0e1d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d0e21  50                   push eax
// 008d0e22  e80330f2ff           call 0x7f3e2a
// 008d0e27  5d                   pop ebp
// 008d0e28  5b                   pop ebx
// 008d0e29  5f                   pop edi
// 008d0e2a  5e                   pop esi
// 008d0e2b  59                   pop ecx
// 008d0e2c  c20800               ret 8
// copied from an identical function in another client (function ?SetFontIndirect@CXTPTabPaintManager@@QAEXPAUtagLOGFONTA@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\TabManager\XTPTabPaintManager.cpp