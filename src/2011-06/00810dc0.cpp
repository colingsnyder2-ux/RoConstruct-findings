// roc 2011-06 00810dc0  unit: CXTPPaintManager  size: 561 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00810dc0
//
// 00810dc0  83ec18               sub esp, 0x18
// 00810dc3  53                   push ebx
// 00810dc4  55                   push ebp
// 00810dc5  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00810dc9  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 00810dcf  56                   push esi
// 00810dd0  57                   push edi
// 00810dd1  8bf9                 mov edi, ecx
// 00810dd3  897c2414             mov dword ptr [esp + 0x14], edi
// 00810dd7  83f8ff               cmp eax, -1
// 00810dda  750f                 jne 0x810deb
// 00810ddc  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 00810de2  85c9                 test ecx, ecx
// 00810de4  7405                 je 0x810deb
// 00810de6  e875beffff           call 0x80cc60
// 00810deb  85c0                 test eax, eax
// 00810ded  750d                 jne 0x810dfc
// 00810def  398724010000         cmp dword ptr [edi + 0x124], eax
// 00810df5  7405                 je 0x810dfc
// 00810df7  8d7001               lea esi, [eax + 1]
// 00810dfa  eb02                 jmp 0x810dfe
// 00810dfc  33f6                 xor esi, esi
// 00810dfe  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 00810e04  8b01                 mov eax, dword ptr [ecx]
// 00810e06  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 00810e0c  ffd2                 call edx
// 00810e0e  89442410             mov dword ptr [esp + 0x10], eax
// 00810e12  8b8760010000         mov eax, dword ptr [edi + 0x160]
// 00810e18  83f8ff               cmp eax, -1
// 00810e1b  7e04                 jle 0x810e21
// 00810e1d  89442410             mov dword ptr [esp + 0x10], eax
// 00810e21  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00810e25  33c0                 xor eax, eax
// 00810e27  39442450             cmp dword ptr [esp + 0x50], eax
// 00810e2b  0f95c0               setne al
// 00810e2e  83c820               or eax, 0x20
// 00810e31  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 00810e36  8bf8                 mov edi, eax
// 00810e38  0f85eb000000         jne 0x810f29
// 00810e3e  85f6                 test esi, esi
// 00810e40  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00810e44  0f848f000000         je 0x810ed9
// 00810e4a  8b4e08               mov ecx, dword ptr [esi + 8]
// 00810e4d  51                   push ecx
// 00810e4e  ff151c01a400         call dword ptr [0xa4011c]
// 00810e54  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00810e58  8b16                 mov edx, dword ptr [esi]
// 00810e5a  6a14                 push 0x14
// 00810e5c  8be8                 mov ebp, eax
// 00810e5e  e84de7ffff           call 0x80f5b0
// 00810e63  50                   push eax
// 00810e64  8b4238               mov eax, dword ptr [edx + 0x38]
// 00810e67  8bce                 mov ecx, esi
// 00810e69  ffd0                 call eax
// 00810e6b  8b542440             mov edx, dword ptr [esp + 0x40]
// 00810e6f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00810e73  8b442444             mov eax, dword ptr [esp + 0x44]
// 00810e77  6a01                 push 1
// 00810e79  89542420             mov dword ptr [esp + 0x20], edx
// 00810e7d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00810e81  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00810e85  6a01                 push 1
// 00810e87  8d542420             lea edx, [esp + 0x20]
// 00810e8b  52                   push edx
// 00810e8c  8944242c             mov dword ptr [esp + 0x2c], eax
// 00810e90  894c2430             mov dword ptr [esp + 0x30], ecx
// 00810e94  ff15601ca400         call dword ptr [0xa41c60]
// 00810e9a  8b06                 mov eax, dword ptr [esi]
// 00810e9c  8bcf                 mov ecx, edi
// 00810e9e  81c904080000         or ecx, 0x804
// 00810ea4  51                   push ecx
// 00810ea5  8d54241c             lea edx, [esp + 0x1c]
// 00810ea9  52                   push edx
// 00810eaa  8bcb                 mov ecx, ebx
// 00810eac  89442440             mov dword ptr [esp + 0x40], eax
// 00810eb0  ff15a826a400         call dword ptr [0xa426a8]
// 00810eb6  50                   push eax
// 00810eb7  8bcb                 mov ecx, ebx
// 00810eb9  ff15c82da400         call dword ptr [0xa42dc8]
// 00810ebf  50                   push eax
// 00810ec0  8b442448             mov eax, dword ptr [esp + 0x48]
// 00810ec4  8b5070               mov edx, dword ptr [eax + 0x70]
// 00810ec7  8bce                 mov ecx, esi
// 00810ec9  ffd2                 call edx
// 00810ecb  8b06                 mov eax, dword ptr [esi]
// 00810ecd  8b5038               mov edx, dword ptr [eax + 0x38]
// 00810ed0  55                   push ebp
// 00810ed1  8bce                 mov ecx, esi
// 00810ed3  ffd2                 call edx
// 00810ed5  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00810ed9  8bcd                 mov ecx, ebp
// 00810edb  e8a08e0700           call 0x889d80
// 00810ee0  837c241000           cmp dword ptr [esp + 0x10], 0
// 00810ee5  50                   push eax
// 00810ee6  7421                 je 0x810f09
// 00810ee8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00810eec  83cf04               or edi, 4
// 00810eef  57                   push edi
// 00810ef0  8d442444             lea eax, [esp + 0x44]
// 00810ef4  50                   push eax
// 00810ef5  51                   push ecx
// 00810ef6  56                   push esi
// 00810ef7  e864fcffff           call 0x810b60
// 00810efc  83c414               add esp, 0x14
// 00810eff  5f                   pop edi
// 00810f00  5e                   pop esi
// 00810f01  5d                   pop ebp
// 00810f02  5b                   pop ebx
// 00810f03  83c418               add esp, 0x18
// 00810f06  c22800               ret 0x28
// 00810f09  81cf04080000         or edi, 0x804
// 00810f0f  57                   push edi
// 00810f10  8d542444             lea edx, [esp + 0x44]
// 00810f14  52                   push edx
// 00810f15  53                   push ebx
// 00810f16  56                   push esi
// 00810f17  e844fcffff           call 0x810b60
// 00810f1c  83c414               add esp, 0x14
// 00810f1f  5f                   pop edi
// 00810f20  5e                   pop esi
// 00810f21  5d                   pop ebp
// 00810f22  5b                   pop ebx
// 00810f23  83c418               add esp, 0x18
// 00810f26  c22800               ret 0x28
// 00810f29  85f6                 test esi, esi
// 00810f2b  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00810f2f  0f848b000000         je 0x810fc0
// 00810f35  8b4608               mov eax, dword ptr [esi + 8]
// 00810f38  50                   push eax
// 00810f39  ff151c01a400         call dword ptr [0xa4011c]
// 00810f3f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00810f43  8b16                 mov edx, dword ptr [esi]
// 00810f45  6a14                 push 0x14
// 00810f47  8be8                 mov ebp, eax
// 00810f49  e862e6ffff           call 0x80f5b0
// 00810f4e  50                   push eax
// 00810f4f  8b4238               mov eax, dword ptr [edx + 0x38]
// 00810f52  8bce                 mov ecx, esi
// 00810f54  ffd0                 call eax
// 00810f56  8b542440             mov edx, dword ptr [esp + 0x40]
// 00810f5a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00810f5e  8b442444             mov eax, dword ptr [esp + 0x44]
// 00810f62  6a01                 push 1
// 00810f64  89542420             mov dword ptr [esp + 0x20], edx
// 00810f68  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00810f6c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00810f70  6a01                 push 1
// 00810f72  8d542420             lea edx, [esp + 0x20]
// 00810f76  52                   push edx
// 00810f77  8944242c             mov dword ptr [esp + 0x2c], eax
// 00810f7b  894c2430             mov dword ptr [esp + 0x30], ecx
// 00810f7f  ff15601ca400         call dword ptr [0xa41c60]
// 00810f85  8b06                 mov eax, dword ptr [esi]
// 00810f87  8bcf                 mov ecx, edi
// 00810f89  81c900090000         or ecx, 0x900
// 00810f8f  51                   push ecx
// 00810f90  8d54241c             lea edx, [esp + 0x1c]
// 00810f94  52                   push edx
// 00810f95  8bcb                 mov ecx, ebx
// 00810f97  89442438             mov dword ptr [esp + 0x38], eax
// 00810f9b  ff15a826a400         call dword ptr [0xa426a8]
// 00810fa1  50                   push eax
// 00810fa2  8bcb                 mov ecx, ebx
// 00810fa4  ff15c82da400         call dword ptr [0xa42dc8]
// 00810faa  50                   push eax
// 00810fab  8b442440             mov eax, dword ptr [esp + 0x40]
// 00810faf  8b5070               mov edx, dword ptr [eax + 0x70]
// 00810fb2  8bce                 mov ecx, esi
// 00810fb4  ffd2                 call edx
// 00810fb6  8b06                 mov eax, dword ptr [esi]
// 00810fb8  8b5038               mov edx, dword ptr [eax + 0x38]
// 00810fbb  55                   push ebp
// 00810fbc  8bce                 mov ecx, esi
// 00810fbe  ffd2                 call edx
// 00810fc0  8b2e                 mov ebp, dword ptr [esi]
// 00810fc2  81cf00090000         or edi, 0x900
// 00810fc8  57                   push edi
// 00810fc9  8d442440             lea eax, [esp + 0x40]
// 00810fcd  50                   push eax
// 00810fce  8bcb                 mov ecx, ebx
// 00810fd0  ff15a826a400         call dword ptr [0xa426a8]
// 00810fd6  50                   push eax
// 00810fd7  8bcb                 mov ecx, ebx
// 00810fd9  ff15c82da400         call dword ptr [0xa42dc8]
// 00810fdf  8b5570               mov edx, dword ptr [ebp + 0x70]
// 00810fe2  50                   push eax
// 00810fe3  8bce                 mov ecx, esi
// 00810fe5  ffd2                 call edx
// 00810fe7  5f                   pop edi
// 00810fe8  5e                   pop esi
// 00810fe9  5d                   pop ebp
// 00810fea  5b                   pop ebx
// 00810feb  83c418               add esp, 0x18
// 00810fee  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawControlText3@CXTPPaintManager@@IAEXPAVCDC@@PAVCXTPControl@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@2VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp