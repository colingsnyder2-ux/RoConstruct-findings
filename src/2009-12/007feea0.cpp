// roc 2009-12 007feea0  unit: CXTPPaintManager  size: 561 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007feea0
//
// 007feea0  83ec18               sub esp, 0x18
// 007feea3  53                   push ebx
// 007feea4  55                   push ebp
// 007feea5  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007feea9  8b859c000000         mov eax, dword ptr [ebp + 0x9c]
// 007feeaf  56                   push esi
// 007feeb0  57                   push edi
// 007feeb1  8bf9                 mov edi, ecx
// 007feeb3  897c2414             mov dword ptr [esp + 0x14], edi
// 007feeb7  83f8ff               cmp eax, -1
// 007feeba  750f                 jne 0x7feecb
// 007feebc  8b8d5c010000         mov ecx, dword ptr [ebp + 0x15c]
// 007feec2  85c9                 test ecx, ecx
// 007feec4  7405                 je 0x7feecb
// 007feec6  e8e576ffff           call 0x7f65b0
// 007feecb  85c0                 test eax, eax
// 007feecd  750d                 jne 0x7feedc
// 007feecf  398724010000         cmp dword ptr [edi + 0x124], eax
// 007feed5  7405                 je 0x7feedc
// 007feed7  8d7001               lea esi, [eax + 1]
// 007feeda  eb02                 jmp 0x7feede
// 007feedc  33f6                 xor esi, esi
// 007feede  8b8d00010000         mov ecx, dword ptr [ebp + 0x100]
// 007feee4  8b01                 mov eax, dword ptr [ecx]
// 007feee6  8b90a8010000         mov edx, dword ptr [eax + 0x1a8]
// 007feeec  ffd2                 call edx
// 007feeee  89442410             mov dword ptr [esp + 0x10], eax
// 007feef2  8b8760010000         mov eax, dword ptr [edi + 0x160]
// 007feef8  83f8ff               cmp eax, -1
// 007feefb  7e04                 jle 0x7fef01
// 007feefd  89442410             mov dword ptr [esp + 0x10], eax
// 007fef01  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 007fef05  33c0                 xor eax, eax
// 007fef07  39442450             cmp dword ptr [esp + 0x50], eax
// 007fef0b  0f95c0               setne al
// 007fef0e  83c820               or eax, 0x20
// 007fef11  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 007fef16  8bf8                 mov edi, eax
// 007fef18  0f85eb000000         jne 0x7ff009
// 007fef1e  85f6                 test esi, esi
// 007fef20  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007fef24  0f848f000000         je 0x7fefb9
// 007fef2a  8b4e08               mov ecx, dword ptr [esi + 8]
// 007fef2d  51                   push ecx
// 007fef2e  ff1524b19800         call dword ptr [0x98b124]
// 007fef34  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007fef38  8b16                 mov edx, dword ptr [esi]
// 007fef3a  6a14                 push 0x14
// 007fef3c  8be8                 mov ebp, eax
// 007fef3e  e8fde6ffff           call 0x7fd640
// 007fef43  50                   push eax
// 007fef44  8b4238               mov eax, dword ptr [edx + 0x38]
// 007fef47  8bce                 mov ecx, esi
// 007fef49  ffd0                 call eax
// 007fef4b  8b542440             mov edx, dword ptr [esp + 0x40]
// 007fef4f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007fef53  8b442444             mov eax, dword ptr [esp + 0x44]
// 007fef57  6a01                 push 1
// 007fef59  89542420             mov dword ptr [esp + 0x20], edx
// 007fef5d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007fef61  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007fef65  6a01                 push 1
// 007fef67  8d542420             lea edx, [esp + 0x20]
// 007fef6b  52                   push edx
// 007fef6c  8944242c             mov dword ptr [esp + 0x2c], eax
// 007fef70  894c2430             mov dword ptr [esp + 0x30], ecx
// 007fef74  ff156ccc9800         call dword ptr [0x98cc6c]
// 007fef7a  8b06                 mov eax, dword ptr [esi]
// 007fef7c  8bcf                 mov ecx, edi
// 007fef7e  81c904080000         or ecx, 0x804
// 007fef84  51                   push ecx
// 007fef85  8d54241c             lea edx, [esp + 0x1c]
// 007fef89  52                   push edx
// 007fef8a  8bcb                 mov ecx, ebx
// 007fef8c  89442440             mov dword ptr [esp + 0x40], eax
// 007fef90  ff15b4dd9800         call dword ptr [0x98ddb4]
// 007fef96  50                   push eax
// 007fef97  8bcb                 mov ecx, ebx
// 007fef99  ff1580de9800         call dword ptr [0x98de80]
// 007fef9f  50                   push eax
// 007fefa0  8b442448             mov eax, dword ptr [esp + 0x48]
// 007fefa4  8b5070               mov edx, dword ptr [eax + 0x70]
// 007fefa7  8bce                 mov ecx, esi
// 007fefa9  ffd2                 call edx
// 007fefab  8b06                 mov eax, dword ptr [esi]
// 007fefad  8b5038               mov edx, dword ptr [eax + 0x38]
// 007fefb0  55                   push ebp
// 007fefb1  8bce                 mov ecx, esi
// 007fefb3  ffd2                 call edx
// 007fefb5  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007fefb9  8bcd                 mov ecx, ebp
// 007fefbb  e8002e0700           call 0x871dc0
// 007fefc0  837c241000           cmp dword ptr [esp + 0x10], 0
// 007fefc5  50                   push eax
// 007fefc6  7421                 je 0x7fefe9
// 007fefc8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007fefcc  83cf04               or edi, 4
// 007fefcf  57                   push edi
// 007fefd0  8d442444             lea eax, [esp + 0x44]
// 007fefd4  50                   push eax
// 007fefd5  51                   push ecx
// 007fefd6  56                   push esi
// 007fefd7  e864fcffff           call 0x7fec40
// 007fefdc  83c414               add esp, 0x14
// 007fefdf  5f                   pop edi
// 007fefe0  5e                   pop esi
// 007fefe1  5d                   pop ebp
// 007fefe2  5b                   pop ebx
// 007fefe3  83c418               add esp, 0x18
// 007fefe6  c22800               ret 0x28
// 007fefe9  81cf04080000         or edi, 0x804
// 007fefef  57                   push edi
// 007feff0  8d542444             lea edx, [esp + 0x44]
// 007feff4  52                   push edx
// 007feff5  53                   push ebx
// 007feff6  56                   push esi
// 007feff7  e844fcffff           call 0x7fec40
// 007feffc  83c414               add esp, 0x14
// 007fefff  5f                   pop edi
// 007ff000  5e                   pop esi
// 007ff001  5d                   pop ebp
// 007ff002  5b                   pop ebx
// 007ff003  83c418               add esp, 0x18
// 007ff006  c22800               ret 0x28
// 007ff009  85f6                 test esi, esi
// 007ff00b  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007ff00f  0f848b000000         je 0x7ff0a0
// 007ff015  8b4608               mov eax, dword ptr [esi + 8]
// 007ff018  50                   push eax
// 007ff019  ff1524b19800         call dword ptr [0x98b124]
// 007ff01f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ff023  8b16                 mov edx, dword ptr [esi]
// 007ff025  6a14                 push 0x14
// 007ff027  8be8                 mov ebp, eax
// 007ff029  e812e6ffff           call 0x7fd640
// 007ff02e  50                   push eax
// 007ff02f  8b4238               mov eax, dword ptr [edx + 0x38]
// 007ff032  8bce                 mov ecx, esi
// 007ff034  ffd0                 call eax
// 007ff036  8b542440             mov edx, dword ptr [esp + 0x40]
// 007ff03a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007ff03e  8b442444             mov eax, dword ptr [esp + 0x44]
// 007ff042  6a01                 push 1
// 007ff044  89542420             mov dword ptr [esp + 0x20], edx
// 007ff048  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007ff04c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007ff050  6a01                 push 1
// 007ff052  8d542420             lea edx, [esp + 0x20]
// 007ff056  52                   push edx
// 007ff057  8944242c             mov dword ptr [esp + 0x2c], eax
// 007ff05b  894c2430             mov dword ptr [esp + 0x30], ecx
// 007ff05f  ff156ccc9800         call dword ptr [0x98cc6c]
// 007ff065  8b06                 mov eax, dword ptr [esi]
// 007ff067  8bcf                 mov ecx, edi
// 007ff069  81c900090000         or ecx, 0x900
// 007ff06f  51                   push ecx
// 007ff070  8d54241c             lea edx, [esp + 0x1c]
// 007ff074  52                   push edx
// 007ff075  8bcb                 mov ecx, ebx
// 007ff077  89442438             mov dword ptr [esp + 0x38], eax
// 007ff07b  ff15b4dd9800         call dword ptr [0x98ddb4]
// 007ff081  50                   push eax
// 007ff082  8bcb                 mov ecx, ebx
// 007ff084  ff1580de9800         call dword ptr [0x98de80]
// 007ff08a  50                   push eax
// 007ff08b  8b442440             mov eax, dword ptr [esp + 0x40]
// 007ff08f  8b5070               mov edx, dword ptr [eax + 0x70]
// 007ff092  8bce                 mov ecx, esi
// 007ff094  ffd2                 call edx
// 007ff096  8b06                 mov eax, dword ptr [esi]
// 007ff098  8b5038               mov edx, dword ptr [eax + 0x38]
// 007ff09b  55                   push ebp
// 007ff09c  8bce                 mov ecx, esi
// 007ff09e  ffd2                 call edx
// 007ff0a0  8b2e                 mov ebp, dword ptr [esi]
// 007ff0a2  81cf00090000         or edi, 0x900
// 007ff0a8  57                   push edi
// 007ff0a9  8d442440             lea eax, [esp + 0x40]
// 007ff0ad  50                   push eax
// 007ff0ae  8bcb                 mov ecx, ebx
// 007ff0b0  ff15b4dd9800         call dword ptr [0x98ddb4]
// 007ff0b6  50                   push eax
// 007ff0b7  8bcb                 mov ecx, ebx
// 007ff0b9  ff1580de9800         call dword ptr [0x98de80]
// 007ff0bf  8b5570               mov edx, dword ptr [ebp + 0x70]
// 007ff0c2  50                   push eax
// 007ff0c3  8bce                 mov ecx, esi
// 007ff0c5  ffd2                 call edx
// 007ff0c7  5f                   pop edi
// 007ff0c8  5e                   pop esi
// 007ff0c9  5d                   pop ebp
// 007ff0ca  5b                   pop ebx
// 007ff0cb  83c418               add esp, 0x18
// 007ff0ce  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawControlText3@CXTPPaintManager@@IAEXPAVCDC@@PAVCXTPControl@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@2VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp