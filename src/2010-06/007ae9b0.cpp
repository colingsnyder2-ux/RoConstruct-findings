// roc 2010-06 007ae9b0  unit: CXTPPaintManager  size: 561 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ae9b0
//
// 007ae9b0  83ec18               sub esp, 0x18
// 007ae9b3  53                   push ebx
// 007ae9b4  55                   push ebp
// 007ae9b5  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007ae9b9  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 007ae9bf  56                   push esi
// 007ae9c0  57                   push edi
// 007ae9c1  8bf9                 mov edi, ecx
// 007ae9c3  897c2414             mov dword ptr [esp + 0x14], edi
// 007ae9c7  83f8ff               cmp eax, -1
// 007ae9ca  750f                 jne 0x7ae9db
// 007ae9cc  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 007ae9d2  85c9                 test ecx, ecx
// 007ae9d4  7405                 je 0x7ae9db
// 007ae9d6  e8b5bcffff           call 0x7aa690
// 007ae9db  85c0                 test eax, eax
// 007ae9dd  750d                 jne 0x7ae9ec
// 007ae9df  398724010000         cmp dword ptr [edi + 0x124], eax
// 007ae9e5  7405                 je 0x7ae9ec
// 007ae9e7  8d7001               lea esi, [eax + 1]
// 007ae9ea  eb02                 jmp 0x7ae9ee
// 007ae9ec  33f6                 xor esi, esi
// 007ae9ee  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 007ae9f4  8b01                 mov eax, dword ptr [ecx]
// 007ae9f6  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 007ae9fc  ffd2                 call edx
// 007ae9fe  89442410             mov dword ptr [esp + 0x10], eax
// 007aea02  8b8760010000         mov eax, dword ptr [edi + 0x160]
// 007aea08  83f8ff               cmp eax, -1
// 007aea0b  7e04                 jle 0x7aea11
// 007aea0d  89442410             mov dword ptr [esp + 0x10], eax
// 007aea11  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 007aea15  33c0                 xor eax, eax
// 007aea17  39442450             cmp dword ptr [esp + 0x50], eax
// 007aea1b  0f95c0               setne al
// 007aea1e  83c820               or eax, 0x20
// 007aea21  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 007aea26  8bf8                 mov edi, eax
// 007aea28  0f85eb000000         jne 0x7aeb19
// 007aea2e  85f6                 test esi, esi
// 007aea30  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007aea34  0f848f000000         je 0x7aeac9
// 007aea3a  8b4e08               mov ecx, dword ptr [esi + 8]
// 007aea3d  51                   push ecx
// 007aea3e  ff156ca19e00         call dword ptr [0x9ea16c]
// 007aea44  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007aea48  8b16                 mov edx, dword ptr [esi]
// 007aea4a  6a14                 push 0x14
// 007aea4c  8be8                 mov ebp, eax
// 007aea4e  e8bde6ffff           call 0x7ad110
// 007aea53  50                   push eax
// 007aea54  8b4238               mov eax, dword ptr [edx + 0x38]
// 007aea57  8bce                 mov ecx, esi
// 007aea59  ffd0                 call eax
// 007aea5b  8b542440             mov edx, dword ptr [esp + 0x40]
// 007aea5f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007aea63  8b442444             mov eax, dword ptr [esp + 0x44]
// 007aea67  6a01                 push 1
// 007aea69  89542420             mov dword ptr [esp + 0x20], edx
// 007aea6d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007aea71  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007aea75  6a01                 push 1
// 007aea77  8d542420             lea edx, [esp + 0x20]
// 007aea7b  52                   push edx
// 007aea7c  8944242c             mov dword ptr [esp + 0x2c], eax
// 007aea80  894c2430             mov dword ptr [esp + 0x30], ecx
// 007aea84  ff1540bc9e00         call dword ptr [0x9ebc40]
// 007aea8a  8b06                 mov eax, dword ptr [esi]
// 007aea8c  8bcf                 mov ecx, edi
// 007aea8e  81c904080000         or ecx, 0x804
// 007aea94  51                   push ecx
// 007aea95  8d54241c             lea edx, [esp + 0x1c]
// 007aea99  52                   push edx
// 007aea9a  8bcb                 mov ecx, ebx
// 007aea9c  89442440             mov dword ptr [esp + 0x40], eax
// 007aeaa0  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007aeaa6  50                   push eax
// 007aeaa7  8bcb                 mov ecx, ebx
// 007aeaa9  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007aeaaf  50                   push eax
// 007aeab0  8b442448             mov eax, dword ptr [esp + 0x48]
// 007aeab4  8b5070               mov edx, dword ptr [eax + 0x70]
// 007aeab7  8bce                 mov ecx, esi
// 007aeab9  ffd2                 call edx
// 007aeabb  8b06                 mov eax, dword ptr [esi]
// 007aeabd  8b5038               mov edx, dword ptr [eax + 0x38]
// 007aeac0  55                   push ebp
// 007aeac1  8bce                 mov ecx, esi
// 007aeac3  ffd2                 call edx
// 007aeac5  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007aeac9  8bcd                 mov ecx, ebp
// 007aeacb  e820e20700           call 0x82ccf0
// 007aead0  837c241000           cmp dword ptr [esp + 0x10], 0
// 007aead5  50                   push eax
// 007aead6  7421                 je 0x7aeaf9
// 007aead8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007aeadc  83cf04               or edi, 4
// 007aeadf  57                   push edi
// 007aeae0  8d442444             lea eax, [esp + 0x44]
// 007aeae4  50                   push eax
// 007aeae5  51                   push ecx
// 007aeae6  56                   push esi
// 007aeae7  e864fcffff           call 0x7ae750
// 007aeaec  83c414               add esp, 0x14
// 007aeaef  5f                   pop edi
// 007aeaf0  5e                   pop esi
// 007aeaf1  5d                   pop ebp
// 007aeaf2  5b                   pop ebx
// 007aeaf3  83c418               add esp, 0x18
// 007aeaf6  c22800               ret 0x28
// 007aeaf9  81cf04080000         or edi, 0x804
// 007aeaff  57                   push edi
// 007aeb00  8d542444             lea edx, [esp + 0x44]
// 007aeb04  52                   push edx
// 007aeb05  53                   push ebx
// 007aeb06  56                   push esi
// 007aeb07  e844fcffff           call 0x7ae750
// 007aeb0c  83c414               add esp, 0x14
// 007aeb0f  5f                   pop edi
// 007aeb10  5e                   pop esi
// 007aeb11  5d                   pop ebp
// 007aeb12  5b                   pop ebx
// 007aeb13  83c418               add esp, 0x18
// 007aeb16  c22800               ret 0x28
// 007aeb19  85f6                 test esi, esi
// 007aeb1b  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007aeb1f  0f848b000000         je 0x7aebb0
// 007aeb25  8b4608               mov eax, dword ptr [esi + 8]
// 007aeb28  50                   push eax
// 007aeb29  ff156ca19e00         call dword ptr [0x9ea16c]
// 007aeb2f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007aeb33  8b16                 mov edx, dword ptr [esi]
// 007aeb35  6a14                 push 0x14
// 007aeb37  8be8                 mov ebp, eax
// 007aeb39  e8d2e5ffff           call 0x7ad110
// 007aeb3e  50                   push eax
// 007aeb3f  8b4238               mov eax, dword ptr [edx + 0x38]
// 007aeb42  8bce                 mov ecx, esi
// 007aeb44  ffd0                 call eax
// 007aeb46  8b542440             mov edx, dword ptr [esp + 0x40]
// 007aeb4a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007aeb4e  8b442444             mov eax, dword ptr [esp + 0x44]
// 007aeb52  6a01                 push 1
// 007aeb54  89542420             mov dword ptr [esp + 0x20], edx
// 007aeb58  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007aeb5c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007aeb60  6a01                 push 1
// 007aeb62  8d542420             lea edx, [esp + 0x20]
// 007aeb66  52                   push edx
// 007aeb67  8944242c             mov dword ptr [esp + 0x2c], eax
// 007aeb6b  894c2430             mov dword ptr [esp + 0x30], ecx
// 007aeb6f  ff1540bc9e00         call dword ptr [0x9ebc40]
// 007aeb75  8b06                 mov eax, dword ptr [esi]
// 007aeb77  8bcf                 mov ecx, edi
// 007aeb79  81c900090000         or ecx, 0x900
// 007aeb7f  51                   push ecx
// 007aeb80  8d54241c             lea edx, [esp + 0x1c]
// 007aeb84  52                   push edx
// 007aeb85  8bcb                 mov ecx, ebx
// 007aeb87  89442438             mov dword ptr [esp + 0x38], eax
// 007aeb8b  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007aeb91  50                   push eax
// 007aeb92  8bcb                 mov ecx, ebx
// 007aeb94  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007aeb9a  50                   push eax
// 007aeb9b  8b442440             mov eax, dword ptr [esp + 0x40]
// 007aeb9f  8b5070               mov edx, dword ptr [eax + 0x70]
// 007aeba2  8bce                 mov ecx, esi
// 007aeba4  ffd2                 call edx
// 007aeba6  8b06                 mov eax, dword ptr [esi]
// 007aeba8  8b5038               mov edx, dword ptr [eax + 0x38]
// 007aebab  55                   push ebp
// 007aebac  8bce                 mov ecx, esi
// 007aebae  ffd2                 call edx
// 007aebb0  8b2e                 mov ebp, dword ptr [esi]
// 007aebb2  81cf00090000         or edi, 0x900
// 007aebb8  57                   push edi
// 007aebb9  8d442440             lea eax, [esp + 0x40]
// 007aebbd  50                   push eax
// 007aebbe  8bcb                 mov ecx, ebx
// 007aebc0  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007aebc6  50                   push eax
// 007aebc7  8bcb                 mov ecx, ebx
// 007aebc9  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007aebcf  8b5570               mov edx, dword ptr [ebp + 0x70]
// 007aebd2  50                   push eax
// 007aebd3  8bce                 mov ecx, esi
// 007aebd5  ffd2                 call edx
// 007aebd7  5f                   pop edi
// 007aebd8  5e                   pop esi
// 007aebd9  5d                   pop ebp
// 007aebda  5b                   pop ebx
// 007aebdb  83c418               add esp, 0x18
// 007aebde  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawControlText3@CXTPPaintManager@@IAEXPAVCDC@@PAVCXTPControl@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@2VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp