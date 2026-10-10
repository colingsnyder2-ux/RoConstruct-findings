// roc 2012-06 00a19ee0  unit: CXTPDockContext  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a19ee0
//
// 00a19ee0  83ec30               sub esp, 0x30
// 00a19ee3  53                   push ebx
// 00a19ee4  56                   push esi
// 00a19ee5  8bf1                 mov esi, ecx
// 00a19ee7  8b460c               mov eax, dword ptr [esi + 0xc]
// 00a19eea  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a19eee  8b5610               mov edx, dword ptr [esi + 0x10]
// 00a19ef1  57                   push edi
// 00a19ef2  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00a19ef6  2bc8                 sub ecx, eax
// 00a19ef8  8b4608               mov eax, dword ptr [esi + 8]
// 00a19efb  2bfa                 sub edi, edx
// 00a19efd  83f80a               cmp eax, 0xa
// 00a19f00  740a                 je 0xa19f0c
// 00a19f02  83f80d               cmp eax, 0xd
// 00a19f05  7405                 je 0xa19f0c
// 00a19f07  83f810               cmp eax, 0x10
// 00a19f0a  7503                 jne 0xa19f0f
// 00a19f0c  014e40               add dword ptr [esi + 0x40], ecx
// 00a19f0f  83f80b               cmp eax, 0xb
// 00a19f12  740a                 je 0xa19f1e
// 00a19f14  83f80e               cmp eax, 0xe
// 00a19f17  7405                 je 0xa19f1e
// 00a19f19  83f811               cmp eax, 0x11
// 00a19f1c  7503                 jne 0xa19f21
// 00a19f1e  014e48               add dword ptr [esi + 0x48], ecx
// 00a19f21  83f80c               cmp eax, 0xc
// 00a19f24  740a                 je 0xa19f30
// 00a19f26  83f80e               cmp eax, 0xe
// 00a19f29  7405                 je 0xa19f30
// 00a19f2b  83f80d               cmp eax, 0xd
// 00a19f2e  7503                 jne 0xa19f33
// 00a19f30  017e44               add dword ptr [esi + 0x44], edi
// 00a19f33  83f80f               cmp eax, 0xf
// 00a19f36  740a                 je 0xa19f42
// 00a19f38  83f811               cmp eax, 0x11
// 00a19f3b  7405                 je 0xa19f42
// 00a19f3d  83f810               cmp eax, 0x10
// 00a19f40  7503                 jne 0xa19f45
// 00a19f42  017e4c               add dword ptr [esi + 0x4c], edi
// 00a19f45  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a19f48  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00a19f4b  8d44240c             lea eax, [esp + 0xc]
// 00a19f4f  50                   push eax
// 00a19f50  52                   push edx
// 00a19f51  ff15f83ab200         call dword ptr [0xb23af8]
// 00a19f57  8b4648               mov eax, dword ptr [esi + 0x48]
// 00a19f5a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a19f5e  2b4640               sub eax, dword ptr [esi + 0x40]
// 00a19f61  8b564c               mov edx, dword ptr [esi + 0x4c]
// 00a19f64  2b4c240c             sub ecx, dword ptr [esp + 0xc]
// 00a19f68  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a19f6c  2b5644               sub edx, dword ptr [esi + 0x44]
// 00a19f6f  2b5c2410             sub ebx, dword ptr [esp + 0x10]
// 00a19f73  8d7e40               lea edi, [esi + 0x40]
// 00a19f76  3bc8                 cmp ecx, eax
// 00a19f78  7504                 jne 0xa19f7e
// 00a19f7a  3bda                 cmp ebx, edx
// 00a19f7c  745e                 je 0xa19fdc
// 00a19f7e  8b4604               mov eax, dword ptr [esi + 4]
// 00a19f81  50                   push eax
// 00a19f82  8d4c2420             lea ecx, [esp + 0x20]
// 00a19f86  51                   push ecx
// 00a19f87  e84406fbff           call 0x9ca5d0
// 00a19f8c  8bc8                 mov ecx, eax
// 00a19f8e  e8dd01fbff           call 0x9ca170
// 00a19f93  57                   push edi
// 00a19f94  50                   push eax
// 00a19f95  8d542434             lea edx, [esp + 0x34]
// 00a19f99  52                   push edx
// 00a19f9a  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a19fa0  85c0                 test eax, eax
// 00a19fa2  7438                 je 0xa19fdc
// 00a19fa4  8b4608               mov eax, dword ptr [esi + 8]
// 00a19fa7  8b0f                 mov ecx, dword ptr [edi]
// 00a19fa9  8b5704               mov edx, dword ptr [edi + 4]
// 00a19fac  50                   push eax
// 00a19fad  83ec10               sub esp, 0x10
// 00a19fb0  8bc4                 mov eax, esp
// 00a19fb2  8908                 mov dword ptr [eax], ecx
// 00a19fb4  8b4f08               mov ecx, dword ptr [edi + 8]
// 00a19fb7  895004               mov dword ptr [eax + 4], edx
// 00a19fba  8b570c               mov edx, dword ptr [edi + 0xc]
// 00a19fbd  894808               mov dword ptr [eax + 8], ecx
// 00a19fc0  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a19fc3  89500c               mov dword ptr [eax + 0xc], edx
// 00a19fc6  e865780500           call 0xa71830
// 00a19fcb  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a19fce  8b01                 mov eax, dword ptr [ecx]
// 00a19fd0  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00a19fd6  6a01                 push 1
// 00a19fd8  6a00                 push 0
// 00a19fda  ffd2                 call edx
// 00a19fdc  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a19fe0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a19fe4  5f                   pop edi
// 00a19fe5  89460c               mov dword ptr [esi + 0xc], eax
// 00a19fe8  894e10               mov dword ptr [esi + 0x10], ecx
// 00a19feb  5e                   pop esi
// 00a19fec  5b                   pop ebx
// 00a19fed  83c430               add esp, 0x30
// 00a19ff0  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPDockContext.cpp (function ?Resize@CXTPDockContext@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPDockContext.cpp
