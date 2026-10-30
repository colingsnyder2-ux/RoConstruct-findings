// roc 2009-12 008f4ee0  unit: CXTCaptionButtonTheme  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4ee0
//
// 008f4ee0  83ec14               sub esp, 0x14
// 008f4ee3  8b01                 mov eax, dword ptr [ecx]
// 008f4ee5  8b5014               mov edx, dword ptr [eax + 0x14]
// 008f4ee8  57                   push edi
// 008f4ee9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008f4eed  57                   push edi
// 008f4eee  894c2408             mov dword ptr [esp + 8], ecx
// 008f4ef2  ffd2                 call edx
// 008f4ef4  85c0                 test eax, eax
// 008f4ef6  0f841a010000         je 0x8f5016
// 008f4efc  53                   push ebx
// 008f4efd  55                   push ebp
// 008f4efe  56                   push esi
// 008f4eff  8b742428             mov esi, dword ptr [esp + 0x28]
// 008f4f03  8b4618               mov eax, dword ptr [esi + 0x18]
// 008f4f06  50                   push eax
// 008f4f07  e824150300           call 0x926430
// 008f4f0c  8d4e1c               lea ecx, [esi + 0x1c]
// 008f4f0f  51                   push ecx
// 008f4f10  8d542418             lea edx, [esp + 0x18]
// 008f4f14  52                   push edx
// 008f4f15  8be8                 mov ebp, eax
// 008f4f17  ff1564cc9800         call dword ptr [0x98cc64]
// 008f4f1d  8b4610               mov eax, dword ptr [esi + 0x10]
// 008f4f20  8ad8                 mov bl, al
// 008f4f22  c1e802               shr eax, 2
// 008f4f25  2401                 and al, 1
// 008f4f27  8bcf                 mov ecx, edi
// 008f4f29  80e301               and bl, 1
// 008f4f2c  8844242c             mov byte ptr [esp + 0x2c], al
// 008f4f30  be01000000           mov esi, 1
// 008f4f35  e8c605ffff           call 0x8e5500
// 008f4f3a  3c01                 cmp al, 1
// 008f4f3c  7505                 jne 0x8f4f43
// 008f4f3e  be05000000           mov esi, 5
// 008f4f43  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 008f4f4a  750b                 jne 0x8f4f57
// 008f4f4c  ff1528cc9800         call dword ptr [0x98cc28]
// 008f4f52  3b4720               cmp eax, dword ptr [edi + 0x20]
// 008f4f55  7505                 jne 0x8f4f5c
// 008f4f57  be02000000           mov esi, 2
// 008f4f5c  84db                 test bl, bl
// 008f4f5e  7506                 jne 0x8f4f66
// 008f4f60  837f7c00             cmp dword ptr [edi + 0x7c], 0
// 008f4f64  7405                 je 0x8f4f6b
// 008f4f66  be03000000           mov esi, 3
// 008f4f6b  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 008f4f70  7405                 je 0x8f4f77
// 008f4f72  be04000000           mov esi, 4
// 008f4f77  8b7f20               mov edi, dword ptr [edi + 0x20]
// 008f4f7a  85ed                 test ebp, ebp
// 008f4f7c  7504                 jne 0x8f4f82
// 008f4f7e  33db                 xor ebx, ebx
// 008f4f80  eb03                 jmp 0x8f4f85
// 008f4f82  8b5d04               mov ebx, dword ptr [ebp + 4]
// 008f4f85  57                   push edi
// 008f4f86  ff15bccb9800         call dword ptr [0x98cbbc]
// 008f4f8c  50                   push eax
// 008f4f8d  e898ebefff           call 0x7f3b2a
// 008f4f92  8b4020               mov eax, dword ptr [eax + 0x20]
// 008f4f95  57                   push edi
// 008f4f96  53                   push ebx
// 008f4f97  6835010000           push 0x135
// 008f4f9c  50                   push eax
// 008f4f9d  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008f4fa3  85c0                 test eax, eax
// 008f4fa5  7427                 je 0x8f4fce
// 008f4fa7  85ed                 test ebp, ebp
// 008f4fa9  7511                 jne 0x8f4fbc
// 008f4fab  50                   push eax
// 008f4fac  8d542418             lea edx, [esp + 0x18]
// 008f4fb0  33c9                 xor ecx, ecx
// 008f4fb2  52                   push edx
// 008f4fb3  51                   push ecx
// 008f4fb4  ff1560cb9800         call dword ptr [0x98cb60]
// 008f4fba  eb2d                 jmp 0x8f4fe9
// 008f4fbc  8b4d04               mov ecx, dword ptr [ebp + 4]
// 008f4fbf  50                   push eax
// 008f4fc0  8d542418             lea edx, [esp + 0x18]
// 008f4fc4  52                   push edx
// 008f4fc5  51                   push ecx
// 008f4fc6  ff1560cb9800         call dword ptr [0x98cb60]
// 008f4fcc  eb1b                 jmp 0x8f4fe9
// 008f4fce  e8fda9f3ff           call 0x82f9d0
// 008f4fd3  6a0f                 push 0xf
// 008f4fd5  8bc8                 mov ecx, eax
// 008f4fd7  e824a1f3ff           call 0x82f100
// 008f4fdc  50                   push eax
// 008f4fdd  8d442418             lea eax, [esp + 0x18]
// 008f4fe1  50                   push eax
// 008f4fe2  8bcd                 mov ecx, ebp
// 008f4fe4  e815f6efff           call 0x7f45fe
// 008f4fe9  85ed                 test ebp, ebp
// 008f4feb  7403                 je 0x8f4ff0
// 008f4fed  8b6d04               mov ebp, dword ptr [ebp + 4]
// 008f4ff0  6a00                 push 0
// 008f4ff2  8d4c2418             lea ecx, [esp + 0x18]
// 008f4ff6  51                   push ecx
// 008f4ff7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f4ffb  56                   push esi
// 008f4ffc  6a01                 push 1
// 008f4ffe  55                   push ebp
// 008f4fff  83c174               add ecx, 0x74
// 008f5002  e83968f7ff           call 0x86b840
// 008f5007  5e                   pop esi
// 008f5008  f7d8                 neg eax
// 008f500a  5d                   pop ebp
// 008f500b  1bc0                 sbb eax, eax
// 008f500d  5b                   pop ebx
// 008f500e  40                   inc eax
// 008f500f  5f                   pop edi
// 008f5010  83c414               add esp, 0x14
// 008f5013  c20800               ret 8
// 008f5016  33c0                 xor eax, eax
// 008f5018  5f                   pop edi
// 008f5019  83c414               add esp, 0x14
// 008f501c  c20800               ret 8
// copied from an identical function in another client (function ?DrawWinThemeBackground@CXTButtonTheme@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp