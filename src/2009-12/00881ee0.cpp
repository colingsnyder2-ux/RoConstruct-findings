// roc 2009-12 00881ee0  unit: CXTPControlGalleryOffice2007Theme  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00881ee0
//
// 00881ee0  6aff                 push -1
// 00881ee2  6851099600           push 0x960951
// 00881ee7  64a100000000         mov eax, dword ptr fs:[0]
// 00881eed  50                   push eax
// 00881eee  83ec20               sub esp, 0x20
// 00881ef1  53                   push ebx
// 00881ef2  56                   push esi
// 00881ef3  57                   push edi
// 00881ef4  a10052b600           mov eax, dword ptr [0xb65200]
// 00881ef9  33c4                 xor eax, esp
// 00881efb  50                   push eax
// 00881efc  8d442430             lea eax, [esp + 0x30]
// 00881f00  64a300000000         mov dword ptr fs:[0], eax
// 00881f06  8b792c               mov edi, dword ptr [ecx + 0x2c]
// 00881f09  6a38                 push 0x38
// 00881f0b  8bcf                 mov ecx, edi
// 00881f0d  e82eb7f7ff           call 0x7fd640
// 00881f12  8b742440             mov esi, dword ptr [esp + 0x40]
// 00881f16  50                   push eax
// 00881f17  8d44244c             lea eax, [esp + 0x4c]
// 00881f1b  50                   push eax
// 00881f1c  8bce                 mov ecx, esi
// 00881f1e  e8db26f7ff           call 0x7f45fe
// 00881f23  8b442448             mov eax, dword ptr [esp + 0x48]
// 00881f27  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00881f2b  8b542454             mov edx, dword ptr [esp + 0x54]
// 00881f2f  68c5c5c500           push 0xc5c5c5
// 00881f34  6a01                 push 1
// 00881f36  2bc8                 sub ecx, eax
// 00881f38  51                   push ecx
// 00881f39  4a                   dec edx
// 00881f3a  52                   push edx
// 00881f3b  50                   push eax
// 00881f3c  8bce                 mov ecx, esi
// 00881f3e  e853450a00           call 0x926496
// 00881f43  8d87f8000000         lea eax, [edi + 0xf8]
// 00881f49  50                   push eax
// 00881f4a  56                   push esi
// 00881f4b  8d4c2428             lea ecx, [esp + 0x28]
// 00881f4f  e80c97fcff           call 0x84b660
// 00881f54  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00881f58  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00881f5c  8b442450             mov eax, dword ptr [esp + 0x50]
// 00881f60  6a00                 push 0
// 00881f62  89542418             mov dword ptr [esp + 0x18], edx
// 00881f66  894c2414             mov dword ptr [esp + 0x14], ecx
// 00881f6a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00881f6e  6af6                 push -0xa
// 00881f70  8d542418             lea edx, [esp + 0x18]
// 00881f74  52                   push edx
// 00881f75  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00881f7d  89442424             mov dword ptr [esp + 0x24], eax
// 00881f81  894c2428             mov dword ptr [esp + 0x28], ecx
// 00881f85  ff1558ca9800         call dword ptr [0x98ca58]
// 00881f8b  8b1e                 mov ebx, dword ptr [esi]
// 00881f8d  6a2c                 push 0x2c
// 00881f8f  8bcf                 mov ecx, edi
// 00881f91  e8aab6f7ff           call 0x7fd640
// 00881f96  50                   push eax
// 00881f97  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00881f9a  8bce                 mov ecx, esi
// 00881f9c  ffd0                 call eax
// 00881f9e  8d4c2440             lea ecx, [esp + 0x40]
// 00881fa2  51                   push ecx
// 00881fa3  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00881fa7  e83453ffff           call 0x8772e0
// 00881fac  8bf8                 mov edi, eax
// 00881fae  8b1e                 mov ebx, dword ptr [esi]
// 00881fb0  6824800000           push 0x8024
// 00881fb5  8d542414             lea edx, [esp + 0x14]
// 00881fb9  52                   push edx
// 00881fba  8bcf                 mov ecx, edi
// 00881fbc  c644244001           mov byte ptr [esp + 0x40], 1
// 00881fc1  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00881fc7  50                   push eax
// 00881fc8  8bcf                 mov ecx, edi
// 00881fca  ff1580de9800         call dword ptr [0x98de80]
// 00881fd0  50                   push eax
// 00881fd1  8b4370               mov eax, dword ptr [ebx + 0x70]
// 00881fd4  8bce                 mov ecx, esi
// 00881fd6  ffd0                 call eax
// 00881fd8  8d4c2440             lea ecx, [esp + 0x40]
// 00881fdc  ff15c0de9800         call dword ptr [0x98dec0]
// 00881fe2  8d4c2420             lea ecx, [esp + 0x20]
// 00881fe6  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00881fee  e8ed96fcff           call 0x84b6e0
// 00881ff3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00881ff7  64890d00000000       mov dword ptr fs:[0], ecx
// 00881ffe  59                   pop ecx
// 00881fff  5f                   pop edi
// 00882000  5e                   pop esi
// 00882001  5b                   pop ebx
// 00882002  83c42c               add esp, 0x2c
// 00882005  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawLabel@CXTPControlGalleryOffice2007Theme@@UAEXPAVCDC@@PAVCXTPControlGalleryItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPOffice2007Theme.cpp