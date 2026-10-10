// roc 2008-06 00745bd0  unit: CXTPDockContext  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00745bd0
//
// 00745bd0  83ec30               sub esp, 0x30
// 00745bd3  53                   push ebx
// 00745bd4  56                   push esi
// 00745bd5  8bf1                 mov esi, ecx
// 00745bd7  8b460c               mov eax, dword ptr [esi + 0xc]
// 00745bda  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00745bde  8b5610               mov edx, dword ptr [esi + 0x10]
// 00745be1  57                   push edi
// 00745be2  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00745be6  2bc8                 sub ecx, eax
// 00745be8  8b4608               mov eax, dword ptr [esi + 8]
// 00745beb  2bfa                 sub edi, edx
// 00745bed  83f80a               cmp eax, 0xa
// 00745bf0  740a                 je 0x745bfc
// 00745bf2  83f80d               cmp eax, 0xd
// 00745bf5  7405                 je 0x745bfc
// 00745bf7  83f810               cmp eax, 0x10
// 00745bfa  7503                 jne 0x745bff
// 00745bfc  014e40               add dword ptr [esi + 0x40], ecx
// 00745bff  83f80b               cmp eax, 0xb
// 00745c02  740a                 je 0x745c0e
// 00745c04  83f80e               cmp eax, 0xe
// 00745c07  7405                 je 0x745c0e
// 00745c09  83f811               cmp eax, 0x11
// 00745c0c  7503                 jne 0x745c11
// 00745c0e  014e48               add dword ptr [esi + 0x48], ecx
// 00745c11  83f80c               cmp eax, 0xc
// 00745c14  740a                 je 0x745c20
// 00745c16  83f80e               cmp eax, 0xe
// 00745c19  7405                 je 0x745c20
// 00745c1b  83f80d               cmp eax, 0xd
// 00745c1e  7503                 jne 0x745c23
// 00745c20  017e44               add dword ptr [esi + 0x44], edi
// 00745c23  83f80f               cmp eax, 0xf
// 00745c26  740a                 je 0x745c32
// 00745c28  83f811               cmp eax, 0x11
// 00745c2b  7405                 je 0x745c32
// 00745c2d  83f810               cmp eax, 0x10
// 00745c30  7503                 jne 0x745c35
// 00745c32  017e4c               add dword ptr [esi + 0x4c], edi
// 00745c35  8b4e04               mov ecx, dword ptr [esi + 4]
// 00745c38  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00745c3b  8d44240c             lea eax, [esp + 0xc]
// 00745c3f  50                   push eax
// 00745c40  52                   push edx
// 00745c41  ff15342e8000         call dword ptr [0x802e34]
// 00745c47  8b4648               mov eax, dword ptr [esi + 0x48]
// 00745c4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00745c4e  2b4640               sub eax, dword ptr [esi + 0x40]
// 00745c51  8b564c               mov edx, dword ptr [esi + 0x4c]
// 00745c54  2b4c240c             sub ecx, dword ptr [esp + 0xc]
// 00745c58  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00745c5c  2b5644               sub edx, dword ptr [esi + 0x44]
// 00745c5f  2b5c2410             sub ebx, dword ptr [esp + 0x10]
// 00745c63  8d7e40               lea edi, [esi + 0x40]
// 00745c66  3bc8                 cmp ecx, eax
// 00745c68  7504                 jne 0x745c6e
// 00745c6a  3bda                 cmp ebx, edx
// 00745c6c  745e                 je 0x745ccc
// 00745c6e  8b4604               mov eax, dword ptr [esi + 4]
// 00745c71  50                   push eax
// 00745c72  8d4c2420             lea ecx, [esp + 0x20]
// 00745c76  51                   push ecx
// 00745c77  e80434faff           call 0x6e9080
// 00745c7c  8bc8                 mov ecx, eax
// 00745c7e  e89d2ffaff           call 0x6e8c20
// 00745c83  57                   push edi
// 00745c84  50                   push eax
// 00745c85  8d542434             lea edx, [esp + 0x34]
// 00745c89  52                   push edx
// 00745c8a  ff155c2b8000         call dword ptr [0x802b5c]
// 00745c90  85c0                 test eax, eax
// 00745c92  7438                 je 0x745ccc
// 00745c94  8b4608               mov eax, dword ptr [esi + 8]
// 00745c97  8b0f                 mov ecx, dword ptr [edi]
// 00745c99  8b5704               mov edx, dword ptr [edi + 4]
// 00745c9c  50                   push eax
// 00745c9d  83ec10               sub esp, 0x10
// 00745ca0  8bc4                 mov eax, esp
// 00745ca2  8908                 mov dword ptr [eax], ecx
// 00745ca4  8b4f08               mov ecx, dword ptr [edi + 8]
// 00745ca7  895004               mov dword ptr [eax + 4], edx
// 00745caa  8b570c               mov edx, dword ptr [edi + 0xc]
// 00745cad  894808               mov dword ptr [eax + 8], ecx
// 00745cb0  8b4e04               mov ecx, dword ptr [esi + 4]
// 00745cb3  89500c               mov dword ptr [eax + 0xc], edx
// 00745cb6  e8f59a0500           call 0x79f7b0
// 00745cbb  8b4e04               mov ecx, dword ptr [esi + 4]
// 00745cbe  8b01                 mov eax, dword ptr [ecx]
// 00745cc0  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00745cc6  6a01                 push 1
// 00745cc8  6a00                 push 0
// 00745cca  ffd2                 call edx
// 00745ccc  8b442440             mov eax, dword ptr [esp + 0x40]
// 00745cd0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00745cd4  5f                   pop edi
// 00745cd5  89460c               mov dword ptr [esi + 0xc], eax
// 00745cd8  894e10               mov dword ptr [esi + 0x10], ecx
// 00745cdb  5e                   pop esi
// 00745cdc  5b                   pop ebx
// 00745cdd  83c430               add esp, 0x30
// 00745ce0  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDockContext.cpp (function ?Resize@CXTPDockContext@@IAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockContext.cpp
