// roc 2009-12 00878680  unit: CXTPControlGallery  size: 387 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00878680
//
// 00878680  83ec18               sub esp, 0x18
// 00878683  56                   push esi
// 00878684  8bf1                 mov esi, ecx
// 00878686  89742408             mov dword ptr [esp + 8], esi
// 0087868a  e851fbffff           call 0x8781e0
// 0087868f  85c0                 test eax, eax
// 00878691  750a                 jne 0x87869d
// 00878693  83c8ff               or eax, 0xffffffff
// 00878696  5e                   pop esi
// 00878697  83c418               add esp, 0x18
// 0087869a  c20c00               ret 0xc
// 0087869d  53                   push ebx
// 0087869e  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008786a2  57                   push edi
// 008786a3  85db                 test ebx, ebx
// 008786a5  741d                 je 0x8786c4
// 008786a7  8bc3                 mov eax, ebx
// 008786a9  8d5001               lea edx, [eax + 1]
// 008786ac  8d642400             lea esp, [esp]
// 008786b0  8a08                 mov cl, byte ptr [eax]
// 008786b2  40                   inc eax
// 008786b3  84c9                 test cl, cl
// 008786b5  75f9                 jne 0x8786b0
// 008786b7  2bc2                 sub eax, edx
// 008786b9  8bf8                 mov edi, eax
// 008786bb  897c240c             mov dword ptr [esp + 0xc], edi
// 008786bf  83ff01               cmp edi, 1
// 008786c2  730c                 jae 0x8786d0
// 008786c4  5f                   pop edi
// 008786c5  5b                   pop ebx
// 008786c6  83c8ff               or eax, 0xffffffff
// 008786c9  5e                   pop esi
// 008786ca  83c418               add esp, 0x18
// 008786cd  c20c00               ret 0xc
// 008786d0  55                   push ebp
// 008786d1  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008786d5  45                   inc ebp
// 008786d6  8bce                 mov ecx, esi
// 008786d8  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008786dc  e8fffaffff           call 0x8781e0
// 008786e1  3be8                 cmp ebp, eax
// 008786e3  7d04                 jge 0x8786e9
// 008786e5  85ed                 test ebp, ebp
// 008786e7  7d0c                 jge 0x8786f5
// 008786e9  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008786f1  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008786f5  896c2424             mov dword ptr [esp + 0x24], ebp
// 008786f9  8da42400000000       lea esp, [esp]
// 00878700  55                   push ebp
// 00878701  8bce                 mov ecx, esi
// 00878703  e8f8faffff           call 0x878200
// 00878708  837c243400           cmp dword ptr [esp + 0x34], 0
// 0087870d  8bf0                 mov esi, eax
// 0087870f  7434                 je 0x878745
// 00878711  8d442418             lea eax, [esp + 0x18]
// 00878715  50                   push eax
// 00878716  8bce                 mov ecx, esi
// 00878718  e8c3ebffff           call 0x8772e0
// 0087871d  53                   push ebx
// 0087871e  8bc8                 mov ecx, eax
// 00878720  ff15d4cf9800         call dword ptr [0x98cfd4]
// 00878726  85c0                 test eax, eax
// 00878728  8d4c2418             lea ecx, [esp + 0x18]
// 0087872c  0f94c3               sete bl
// 0087872f  ff15c0de9800         call dword ptr [0x98dec0]
// 00878735  84db                 test bl, bl
// 00878737  747e                 je 0x8787b7
// 00878739  8bc5                 mov eax, ebp
// 0087873b  5d                   pop ebp
// 0087873c  5f                   pop edi
// 0087873d  5b                   pop ebx
// 0087873e  5e                   pop esi
// 0087873f  83c418               add esp, 0x18
// 00878742  c20c00               ret 0xc
// 00878745  8d4c241c             lea ecx, [esp + 0x1c]
// 00878749  51                   push ecx
// 0087874a  8bce                 mov ecx, esi
// 0087874c  e88febffff           call 0x8772e0
// 00878751  8bc8                 mov ecx, eax
// 00878753  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00878759  8d4c241c             lea ecx, [esp + 0x1c]
// 0087875d  8be8                 mov ebp, eax
// 0087875f  ff15c0de9800         call dword ptr [0x98dec0]
// 00878765  8bdf                 mov ebx, edi
// 00878767  3bfd                 cmp edi, ebp
// 00878769  7204                 jb 0x87876f
// 0087876b  8bdd                 mov ebx, ebp
// 0087876d  8bfd                 mov edi, ebp
// 0087876f  8d542420             lea edx, [esp + 0x20]
// 00878773  52                   push edx
// 00878774  8bce                 mov ecx, esi
// 00878776  e865ebffff           call 0x8772e0
// 0087877b  53                   push ebx
// 0087877c  8bc8                 mov ecx, eax
// 0087877e  ff1580de9800         call dword ptr [0x98de80]
// 00878784  50                   push eax
// 00878785  8b442438             mov eax, dword ptr [esp + 0x38]
// 00878789  57                   push edi
// 0087878a  50                   push eax
// 0087878b  6a01                 push 1
// 0087878d  6800080000           push 0x800
// 00878792  ff1550b39800         call dword ptr [0x98b350]
// 00878798  8d4c2420             lea ecx, [esp + 0x20]
// 0087879c  8bf0                 mov esi, eax
// 0087879e  ff15c0de9800         call dword ptr [0x98dec0]
// 008787a4  83fe02               cmp esi, 2
// 008787a7  7506                 jne 0x8787af
// 008787a9  396c2410             cmp dword ptr [esp + 0x10], ebp
// 008787ad  7639                 jbe 0x8787e8
// 008787af  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008787b3  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008787b7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008787bb  45                   inc ebp
// 008787bc  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008787c0  e81bfaffff           call 0x8781e0
// 008787c5  3be8                 cmp ebp, eax
// 008787c7  750c                 jne 0x8787d5
// 008787c9  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008787d1  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008787d5  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 008787d9  741b                 je 0x8787f6
// 008787db  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008787df  8b742414             mov esi, dword ptr [esp + 0x14]
// 008787e3  e918ffffff           jmp 0x878700
// 008787e8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008787ec  5d                   pop ebp
// 008787ed  5f                   pop edi
// 008787ee  5b                   pop ebx
// 008787ef  5e                   pop esi
// 008787f0  83c418               add esp, 0x18
// 008787f3  c20c00               ret 0xc
// 008787f6  5d                   pop ebp
// 008787f7  5f                   pop edi
// 008787f8  5b                   pop ebx
// 008787f9  83c8ff               or eax, 0xffffffff
// 008787fc  5e                   pop esi
// 008787fd  83c418               add esp, 0x18
// 00878800  c20c00               ret 0xc
// copied from an identical function in another client (function ?FindItem@CXTPControlGallery@@QBEHHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/CommandBars/XTPControlGallery.cpp