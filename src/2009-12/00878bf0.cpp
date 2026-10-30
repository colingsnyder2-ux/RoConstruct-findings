// roc 2009-12 00878bf0  unit: CXTPControlGallery  size: 442 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878bf0
//
// 00878bf0  6aff                 push -1
// 00878bf2  68ca029600           push 0x9602ca
// 00878bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00878bfd  50                   push eax
// 00878bfe  83ec18               sub esp, 0x18
// 00878c01  56                   push esi
// 00878c02  a10052b600           mov eax, dword ptr [0xb65200]
// 00878c07  33c4                 xor eax, esp
// 00878c09  50                   push eax
// 00878c0a  8d442420             lea eax, [esp + 0x20]
// 00878c0e  64a300000000         mov dword ptr fs:[0], eax
// 00878c14  8bf1                 mov esi, ecx
// 00878c16  8b46fc               mov eax, dword ptr [esi - 4]
// 00878c19  50                   push eax
// 00878c1a  8d4c2414             lea ecx, [esp + 0x14]
// 00878c1e  e80daff7ff           call 0x7f3b30
// 00878c23  8d4c2430             lea ecx, [esp + 0x30]
// 00878c27  51                   push ecx
// 00878c28  8bce                 mov ecx, esi
// 00878c2a  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00878c32  e8692dfcff           call 0x83b9a0
// 00878c37  85c0                 test eax, eax
// 00878c39  756d                 jne 0x878ca8
// 00878c3b  8b542440             mov edx, dword ptr [esp + 0x40]
// 00878c3f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00878c43  52                   push edx
// 00878c44  8b542438             mov edx, dword ptr [esp + 0x38]
// 00878c48  83ec10               sub esp, 0x10
// 00878c4b  8bc4                 mov eax, esp
// 00878c4d  8908                 mov dword ptr [eax], ecx
// 00878c4f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00878c53  895004               mov dword ptr [eax + 4], edx
// 00878c56  8b542450             mov edx, dword ptr [esp + 0x50]
// 00878c5a  894808               mov dword ptr [eax + 8], ecx
// 00878c5d  8bce                 mov ecx, esi
// 00878c5f  89500c               mov dword ptr [eax + 0xc], edx
// 00878c62  e869e6f7ff           call 0x7f72d0
// 00878c67  8bf0                 mov esi, eax
// 00878c69  8b442414             mov eax, dword ptr [esp + 0x14]
// 00878c6d  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00878c75  85c0                 test eax, eax
// 00878c77  7407                 je 0x878c80
// 00878c79  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00878c7d  894804               mov dword ptr [eax + 4], ecx
// 00878c80  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00878c85  740c                 je 0x878c93
// 00878c87  8b542418             mov edx, dword ptr [esp + 0x18]
// 00878c8b  52                   push edx
// 00878c8c  6a00                 push 0
// 00878c8e  e891aef7ff           call 0x7f3b24
// 00878c93  8bc6                 mov eax, esi
// 00878c95  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00878c99  64890d00000000       mov dword ptr fs:[0], ecx
// 00878ca0  59                   pop ecx
// 00878ca1  5e                   pop esi
// 00878ca2  83c424               add esp, 0x24
// 00878ca5  c21400               ret 0x14
// 00878ca8  48                   dec eax
// 00878ca9  50                   push eax
// 00878caa  8d4ee0               lea ecx, [esi - 0x20]
// 00878cad  e84ef5ffff           call 0x878200
// 00878cb2  8bf0                 mov esi, eax
// 00878cb4  85f6                 test esi, esi
// 00878cb6  7542                 jne 0x878cfa
// 00878cb8  8b442414             mov eax, dword ptr [esp + 0x14]
// 00878cbc  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00878cc4  85c0                 test eax, eax
// 00878cc6  7407                 je 0x878ccf
// 00878cc8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00878ccc  894804               mov dword ptr [eax + 4], ecx
// 00878ccf  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00878cd4  740c                 je 0x878ce2
// 00878cd6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00878cda  52                   push edx
// 00878cdb  6a00                 push 0
// 00878cdd  e842aef7ff           call 0x7f3b24
// 00878ce2  b857000780           mov eax, 0x80070057
// 00878ce7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00878ceb  64890d00000000       mov dword ptr fs:[0], ecx
// 00878cf2  59                   pop ecx
// 00878cf3  5e                   pop esi
// 00878cf4  83c424               add esp, 0x24
// 00878cf7  c21400               ret 0x14
// 00878cfa  8d442408             lea eax, [esp + 8]
// 00878cfe  50                   push eax
// 00878cff  8bce                 mov ecx, esi
// 00878d01  e8dae5ffff           call 0x8772e0
// 00878d06  8d4c2408             lea ecx, [esp + 8]
// 00878d0a  51                   push ecx
// 00878d0b  c644242c01           mov byte ptr [esp + 0x2c], 1
// 00878d10  e81b16fdff           call 0x84a330
// 00878d15  83c404               add esp, 4
// 00878d18  8d4c2408             lea ecx, [esp + 8]
// 00878d1c  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00878d22  84c0                 test al, al
// 00878d24  742b                 je 0x878d51
// 00878d26  8d54240c             lea edx, [esp + 0xc]
// 00878d2a  52                   push edx
// 00878d2b  8bce                 mov ecx, esi
// 00878d2d  e8fe170200           call 0x89a530
// 00878d32  50                   push eax
// 00878d33  8d4c240c             lea ecx, [esp + 0xc]
// 00878d37  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00878d3c  ff1538d59800         call dword ptr [0x98d538]
// 00878d42  8d4c240c             lea ecx, [esp + 0xc]
// 00878d46  c644242801           mov byte ptr [esp + 0x28], 1
// 00878d4b  ff15c0de9800         call dword ptr [0x98dec0]
// 00878d51  8d4c2408             lea ecx, [esp + 8]
// 00878d55  ff156cd69800         call dword ptr [0x98d66c]
// 00878d5b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00878d5f  8901                 mov dword ptr [ecx], eax
// 00878d61  8d4c2408             lea ecx, [esp + 8]
// 00878d65  ff15c0de9800         call dword ptr [0x98dec0]
// 00878d6b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00878d6f  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00878d77  85c0                 test eax, eax
// 00878d79  7407                 je 0x878d82
// 00878d7b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00878d7f  895004               mov dword ptr [eax + 4], edx
// 00878d82  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00878d87  740c                 je 0x878d95
// 00878d89  8b442418             mov eax, dword ptr [esp + 0x18]
// 00878d8d  50                   push eax
// 00878d8e  6a00                 push 0
// 00878d90  e88fadf7ff           call 0x7f3b24
// 00878d95  33c0                 xor eax, eax
// 00878d97  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00878d9b  64890d00000000       mov dword ptr fs:[0], ecx
// 00878da2  59                   pop ecx
// 00878da3  5e                   pop esi
// 00878da4  83c424               add esp, 0x24
// 00878da7  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleName@CXTPControlGallery@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPControlGallery.cpp