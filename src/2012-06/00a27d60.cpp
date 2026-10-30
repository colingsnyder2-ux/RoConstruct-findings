// roc 2012-06 00a27d60  unit: CXTPReportPaintManager  size: 711 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a27d60
//
// 00a27d60  6aff                 push -1
// 00a27d62  68c64aae00           push 0xae4ac6
// 00a27d67  64a100000000         mov eax, dword ptr fs:[0]
// 00a27d6d  50                   push eax
// 00a27d6e  83ec1c               sub esp, 0x1c
// 00a27d71  53                   push ebx
// 00a27d72  55                   push ebp
// 00a27d73  56                   push esi
// 00a27d74  57                   push edi
// 00a27d75  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a27d7a  33c4                 xor eax, esp
// 00a27d7c  50                   push eax
// 00a27d7d  8d442430             lea eax, [esp + 0x30]
// 00a27d81  64a300000000         mov dword ptr fs:[0], eax
// 00a27d87  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00a27d8b  33ff                 xor edi, edi
// 00a27d8d  33c0                 xor eax, eax
// 00a27d8f  83fe10               cmp esi, 0x10
// 00a27d92  0f8719020000         ja 0xa27fb1
// 00a27d98  7453                 je 0xa27ded
// 00a27d9a  83fe02               cmp esi, 2
// 00a27d9d  0f876e020000         ja 0xa28011
// 00a27da3  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 00a27da7  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00a27dab  57                   push edi
// 00a27dac  55                   push ebp
// 00a27dad  e87ec4ffff           call 0xa24230
// 00a27db2  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a27db6  0101                 add dword ptr [ecx], eax
// 00a27db8  8b09                 mov ecx, dword ptr [ecx]
// 00a27dba  83c408               add esp, 8
// 00a27dbd  3b4c2454             cmp ecx, dword ptr [esp + 0x54]
// 00a27dc1  7c05                 jl 0xa27dc8
// 00a27dc3  83cbff               or ebx, 0xffffffff
// 00a27dc6  eb0a                 jmp 0xa27dd2
// 00a27dc8  8bcf                 mov ecx, edi
// 00a27dca  ff155846b200         call dword ptr [0xb24658]
// 00a27dd0  8bd8                 mov ebx, eax
// 00a27dd2  81ce00080000         or esi, 0x800
// 00a27dd8  56                   push esi
// 00a27dd9  8d442450             lea eax, [esp + 0x50]
// 00a27ddd  50                   push eax
// 00a27dde  57                   push edi
// 00a27ddf  8bcd                 mov ecx, ebp
// 00a27de1  e8ea05f6ff           call 0x9883d0
// 00a27de6  8bc3                 mov eax, ebx
// 00a27de8  e924020000           jmp 0xa28011
// 00a27ded  68e83bb400           push 0xb43be8
// 00a27df2  8d4c2460             lea ecx, [esp + 0x60]
// 00a27df6  c744242020090a00     mov dword ptr [esp + 0x20], 0xa0920
// 00a27dfe  897c241c             mov dword ptr [esp + 0x1c], edi
// 00a27e02  ff15c847b200         call dword ptr [0xb247c8]
// 00a27e08  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a27e0c  51                   push ecx
// 00a27e0d  8d4c2418             lea ecx, [esp + 0x18]
// 00a27e11  897c243c             mov dword ptr [esp + 0x3c], edi
// 00a27e15  ff158047b200         call dword ptr [0xb24780]
// 00a27e1b  8d4c2414             lea ecx, [esp + 0x14]
// 00a27e1f  c644243801           mov byte ptr [esp + 0x38], 1
// 00a27e24  ff155846b200         call dword ptr [0xb24658]
// 00a27e2a  50                   push eax
// 00a27e2b  8d4c2418             lea ecx, [esp + 0x18]
// 00a27e2f  ff15ac43b200         call dword ptr [0xb243ac]
// 00a27e35  8b1d5c2ab200         mov ebx, dword ptr [0xb22a5c]
// 00a27e3b  8d542418             lea edx, [esp + 0x18]
// 00a27e3f  52                   push edx
// 00a27e40  8d4c2420             lea ecx, [esp + 0x20]
// 00a27e44  51                   push ecx
// 00a27e45  50                   push eax
// 00a27e46  ffd3                 call ebx
// 00a27e48  83c40c               add esp, 0xc
// 00a27e4b  8bf0                 mov esi, eax
// 00a27e4d  56                   push esi
// 00a27e4e  8d4c2424             lea ecx, [esp + 0x24]
// 00a27e52  ff15c847b200         call dword ptr [0xb247c8]
// 00a27e58  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00a27e5c  50                   push eax
// 00a27e5d  55                   push ebp
// 00a27e5e  c644244002           mov byte ptr [esp + 0x40], 2
// 00a27e63  e8c8c3ffff           call 0xa24230
// 00a27e68  83c408               add esp, 8
// 00a27e6b  8d4c2420             lea ecx, [esp + 0x20]
// 00a27e6f  8bf8                 mov edi, eax
// 00a27e71  c644243801           mov byte ptr [esp + 0x38], 1
// 00a27e76  ff15d047b200         call dword ptr [0xb247d0]
// 00a27e7c  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a27e80  8bd0                 mov edx, eax
// 00a27e82  2b54244c             sub edx, dword ptr [esp + 0x4c]
// 00a27e86  3bfa                 cmp edi, edx
// 00a27e88  7e10                 jle 0xa27e9a
// 00a27e8a  56                   push esi
// 00a27e8b  8d4c2460             lea ecx, [esp + 0x60]
// 00a27e8f  ff157847b200         call dword ptr [0xb24778]
// 00a27e95  e9b3000000           jmp 0xa27f4d
// 00a27e9a  85f6                 test esi, esi
// 00a27e9c  0f84ab000000         je 0xa27f4d
// 00a27ea2  eb04                 jmp 0xa27ea8
// 00a27ea4  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a27ea8  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 00a27eac  3bf8                 cmp edi, eax
// 00a27eae  0f8d99000000         jge 0xa27f4d
// 00a27eb4  56                   push esi
// 00a27eb5  8d442460             lea eax, [esp + 0x60]
// 00a27eb9  50                   push eax
// 00a27eba  8d4c2430             lea ecx, [esp + 0x30]
// 00a27ebe  51                   push ecx
// 00a27ebf  e8dcda9eff           call 0x4159a0
// 00a27ec4  68ecf3b400           push 0xb4f3ec
// 00a27ec9  50                   push eax
// 00a27eca  8d542438             lea edx, [esp + 0x38]
// 00a27ece  52                   push edx
// 00a27ecf  c644245003           mov byte ptr [esp + 0x50], 3
// 00a27ed4  e8c7da9eff           call 0x4159a0
// 00a27ed9  83c418               add esp, 0x18
// 00a27edc  50                   push eax
// 00a27edd  8d4c2460             lea ecx, [esp + 0x60]
// 00a27ee1  c644243c04           mov byte ptr [esp + 0x3c], 4
// 00a27ee6  ff152045b200         call dword ptr [0xb24520]
// 00a27eec  8d4c2424             lea ecx, [esp + 0x24]
// 00a27ef0  ff15d047b200         call dword ptr [0xb247d0]
// 00a27ef6  8d4c2428             lea ecx, [esp + 0x28]
// 00a27efa  c644243801           mov byte ptr [esp + 0x38], 1
// 00a27eff  ff15d047b200         call dword ptr [0xb247d0]
// 00a27f05  8d442418             lea eax, [esp + 0x18]
// 00a27f09  50                   push eax
// 00a27f0a  8d4c2420             lea ecx, [esp + 0x20]
// 00a27f0e  51                   push ecx
// 00a27f0f  6a00                 push 0
// 00a27f11  ffd3                 call ebx
// 00a27f13  8bf0                 mov esi, eax
// 00a27f15  56                   push esi
// 00a27f16  8d54246c             lea edx, [esp + 0x6c]
// 00a27f1a  52                   push edx
// 00a27f1b  8d442440             lea eax, [esp + 0x40]
// 00a27f1f  50                   push eax
// 00a27f20  e87bda9eff           call 0x4159a0
// 00a27f25  50                   push eax
// 00a27f26  55                   push ebp
// 00a27f27  c644245805           mov byte ptr [esp + 0x58], 5
// 00a27f2c  e8ffc2ffff           call 0xa24230
// 00a27f31  83c420               add esp, 0x20
// 00a27f34  8d4c242c             lea ecx, [esp + 0x2c]
// 00a27f38  8bf8                 mov edi, eax
// 00a27f3a  c644243801           mov byte ptr [esp + 0x38], 1
// 00a27f3f  ff15d047b200         call dword ptr [0xb247d0]
// 00a27f45  85f6                 test esi, esi
// 00a27f47  0f8557ffffff         jne 0xa27ea4
// 00a27f4d  8d4c245c             lea ecx, [esp + 0x5c]
// 00a27f51  ff155846b200         call dword ptr [0xb24658]
// 00a27f57  8d4c245c             lea ecx, [esp + 0x5c]
// 00a27f5b  51                   push ecx
// 00a27f5c  55                   push ebp
// 00a27f5d  8bf8                 mov edi, eax
// 00a27f5f  e8ccc2ffff           call 0xa24230
// 00a27f64  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a27f68  0101                 add dword ptr [ecx], eax
// 00a27f6a  8b7500               mov esi, dword ptr [ebp]
// 00a27f6d  83c408               add esp, 8
// 00a27f70  6800080000           push 0x800
// 00a27f75  8d542450             lea edx, [esp + 0x50]
// 00a27f79  52                   push edx
// 00a27f7a  8d4c2464             lea ecx, [esp + 0x64]
// 00a27f7e  83c670               add esi, 0x70
// 00a27f81  ff155846b200         call dword ptr [0xb24658]
// 00a27f87  50                   push eax
// 00a27f88  8d4c2468             lea ecx, [esp + 0x68]
// 00a27f8c  ff159847b200         call dword ptr [0xb24798]
// 00a27f92  50                   push eax
// 00a27f93  8b06                 mov eax, dword ptr [esi]
// 00a27f95  8bcd                 mov ecx, ebp
// 00a27f97  ffd0                 call eax
// 00a27f99  8d4c2414             lea ecx, [esp + 0x14]
// 00a27f9d  ff15d047b200         call dword ptr [0xb247d0]
// 00a27fa3  8d4c245c             lea ecx, [esp + 0x5c]
// 00a27fa7  ff15d047b200         call dword ptr [0xb247d0]
// 00a27fad  8bc7                 mov eax, edi
// 00a27faf  eb60                 jmp 0xa28011
// 00a27fb1  81fe00800000         cmp esi, 0x8000
// 00a27fb7  7558                 jne 0xa28011
// 00a27fb9  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 00a27fbd  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00a27fc1  57                   push edi
// 00a27fc2  53                   push ebx
// 00a27fc3  e868c2ffff           call 0xa24230
// 00a27fc8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a27fcc  0101                 add dword ptr [ecx], eax
// 00a27fce  8b09                 mov ecx, dword ptr [ecx]
// 00a27fd0  83c408               add esp, 8
// 00a27fd3  3b4c2454             cmp ecx, dword ptr [esp + 0x54]
// 00a27fd7  7c05                 jl 0xa27fde
// 00a27fd9  83cdff               or ebp, 0xffffffff
// 00a27fdc  eb0a                 jmp 0xa27fe8
// 00a27fde  8bcf                 mov ecx, edi
// 00a27fe0  ff155846b200         call dword ptr [0xb24658]
// 00a27fe6  8be8                 mov ebp, eax
// 00a27fe8  8b33                 mov esi, dword ptr [ebx]
// 00a27fea  6800880000           push 0x8800
// 00a27fef  8d4c2450             lea ecx, [esp + 0x50]
// 00a27ff3  51                   push ecx
// 00a27ff4  8bcf                 mov ecx, edi
// 00a27ff6  83c670               add esi, 0x70
// 00a27ff9  ff155846b200         call dword ptr [0xb24658]
// 00a27fff  50                   push eax
// 00a28000  8bcf                 mov ecx, edi
// 00a28002  ff159847b200         call dword ptr [0xb24798]
// 00a28008  8b16                 mov edx, dword ptr [esi]
// 00a2800a  50                   push eax
// 00a2800b  8bcb                 mov ecx, ebx
// 00a2800d  ffd2                 call edx
// 00a2800f  8bc5                 mov eax, ebp
// 00a28011  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a28015  64890d00000000       mov dword ptr fs:[0], ecx
// 00a2801c  59                   pop ecx
// 00a2801d  5f                   pop edi
// 00a2801e  5e                   pop esi
// 00a2801f  5d                   pop ebp
// 00a28020  5b                   pop ebx
// 00a28021  83c428               add esp, 0x28
// 00a28024  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawString@CXTPReportPaintManager@@MAEHPAHPAVCDC@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp