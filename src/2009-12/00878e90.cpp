// roc 2009-12 00878e90  unit: CXTPControlGalleryPaintManager  size: 303 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878e90
//
// 00878e90  6aff                 push -1
// 00878e92  6851099600           push 0x960951
// 00878e97  64a100000000         mov eax, dword ptr fs:[0]
// 00878e9d  50                   push eax
// 00878e9e  83ec20               sub esp, 0x20
// 00878ea1  53                   push ebx
// 00878ea2  56                   push esi
// 00878ea3  57                   push edi
// 00878ea4  a10052b600           mov eax, dword ptr [0xb65200]
// 00878ea9  33c4                 xor eax, esp
// 00878eab  50                   push eax
// 00878eac  8d442430             lea eax, [esp + 0x30]
// 00878eb0  64a300000000         mov dword ptr fs:[0], eax
// 00878eb6  8b792c               mov edi, dword ptr [ecx + 0x2c]
// 00878eb9  6a38                 push 0x38
// 00878ebb  8bcf                 mov ecx, edi
// 00878ebd  e87e47f8ff           call 0x7fd640
// 00878ec2  8b742440             mov esi, dword ptr [esp + 0x40]
// 00878ec6  50                   push eax
// 00878ec7  8d44244c             lea eax, [esp + 0x4c]
// 00878ecb  50                   push eax
// 00878ecc  8bce                 mov ecx, esi
// 00878ece  e82bb7f7ff           call 0x7f45fe
// 00878ed3  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00878ed7  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 00878edb  6a34                 push 0x34
// 00878edd  8bcf                 mov ecx, edi
// 00878edf  e85c47f8ff           call 0x7fd640
// 00878ee4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00878ee8  8b542448             mov edx, dword ptr [esp + 0x48]
// 00878eec  50                   push eax
// 00878eed  6a01                 push 1
// 00878eef  53                   push ebx
// 00878ef0  49                   dec ecx
// 00878ef1  51                   push ecx
// 00878ef2  52                   push edx
// 00878ef3  8bce                 mov ecx, esi
// 00878ef5  e89cd50a00           call 0x926496
// 00878efa  8d87f8000000         lea eax, [edi + 0xf8]
// 00878f00  50                   push eax
// 00878f01  56                   push esi
// 00878f02  8d4c2428             lea ecx, [esp + 0x28]
// 00878f06  e85527fdff           call 0x84b660
// 00878f0b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00878f0f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00878f13  8b442450             mov eax, dword ptr [esp + 0x50]
// 00878f17  6a00                 push 0
// 00878f19  89542418             mov dword ptr [esp + 0x18], edx
// 00878f1d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00878f21  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00878f25  6af6                 push -0xa
// 00878f27  8d542418             lea edx, [esp + 0x18]
// 00878f2b  52                   push edx
// 00878f2c  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00878f34  89442424             mov dword ptr [esp + 0x24], eax
// 00878f38  894c2428             mov dword ptr [esp + 0x28], ecx
// 00878f3c  ff1558ca9800         call dword ptr [0x98ca58]
// 00878f42  8b1e                 mov ebx, dword ptr [esi]
// 00878f44  6a2c                 push 0x2c
// 00878f46  8bcf                 mov ecx, edi
// 00878f48  e8f346f8ff           call 0x7fd640
// 00878f4d  50                   push eax
// 00878f4e  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00878f51  8bce                 mov ecx, esi
// 00878f53  ffd0                 call eax
// 00878f55  8d4c2440             lea ecx, [esp + 0x40]
// 00878f59  51                   push ecx
// 00878f5a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00878f5e  e87de3ffff           call 0x8772e0
// 00878f63  8bf8                 mov edi, eax
// 00878f65  8b1e                 mov ebx, dword ptr [esi]
// 00878f67  6824800000           push 0x8024
// 00878f6c  8d542414             lea edx, [esp + 0x14]
// 00878f70  52                   push edx
// 00878f71  8bcf                 mov ecx, edi
// 00878f73  c644244001           mov byte ptr [esp + 0x40], 1
// 00878f78  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00878f7e  50                   push eax
// 00878f7f  8bcf                 mov ecx, edi
// 00878f81  ff1580de9800         call dword ptr [0x98de80]
// 00878f87  50                   push eax
// 00878f88  8b4370               mov eax, dword ptr [ebx + 0x70]
// 00878f8b  8bce                 mov ecx, esi
// 00878f8d  ffd0                 call eax
// 00878f8f  8d4c2440             lea ecx, [esp + 0x40]
// 00878f93  ff15c0de9800         call dword ptr [0x98dec0]
// 00878f99  8d4c2420             lea ecx, [esp + 0x20]
// 00878f9d  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00878fa5  e83627fdff           call 0x84b6e0
// 00878faa  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00878fae  64890d00000000       mov dword ptr fs:[0], ecx
// 00878fb5  59                   pop ecx
// 00878fb6  5f                   pop edi
// 00878fb7  5e                   pop esi
// 00878fb8  5b                   pop ebx
// 00878fb9  83c42c               add esp, 0x2c
// 00878fbc  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawLabel@CXTPControlGalleryPaintManager@@UAEXPAVCDC@@PAVCXTPControlGalleryItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/CommandBars/XTPControlGallery.cpp