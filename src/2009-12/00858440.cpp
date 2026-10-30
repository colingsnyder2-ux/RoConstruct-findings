// roc 2009-12 00858440  unit: CXTPTabClientWnd  size: 582 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00858440
//
// 00858440  83ec40               sub esp, 0x40
// 00858443  53                   push ebx
// 00858444  55                   push ebp
// 00858445  56                   push esi
// 00858446  57                   push edi
// 00858447  8bf9                 mov edi, ecx
// 00858449  57                   push edi
// 0085844a  8d4c2444             lea ecx, [esp + 0x44]
// 0085844e  e87d2effff           call 0x84b2d0
// 00858453  8b442458             mov eax, dword ptr [esp + 0x58]
// 00858457  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0085845b  33ed                 xor ebp, ebp
// 0085845d  50                   push eax
// 0085845e  51                   push ecx
// 0085845f  8d542448             lea edx, [esp + 0x48]
// 00858463  52                   push edx
// 00858464  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00858468  896c2420             mov dword ptr [esp + 0x20], ebp
// 0085846c  896c2424             mov dword ptr [esp + 0x24], ebp
// 00858470  896c2428             mov dword ptr [esp + 0x28], ebp
// 00858474  89aff0000000         mov dword ptr [edi + 0xf0], ebp
// 0085847a  89aff4000000         mov dword ptr [edi + 0xf4], ebp
// 00858480  ff155cca9800         call dword ptr [0x98ca5c]
// 00858486  85c0                 test eax, eax
// 00858488  0f84a7010000         je 0x858635
// 0085848e  8b87a8000000         mov eax, dword ptr [edi + 0xa8]
// 00858494  50                   push eax
// 00858495  c787f400000001000000 mov dword ptr [edi + 0xf4], 1
// 0085849f  ff1520ca9800         call dword ptr [0x98ca20]
// 008584a5  8bcf                 mov ecx, edi
// 008584a7  e8a4e1ffff           call 0x856650
// 008584ac  85c0                 test eax, eax
// 008584ae  0f8e8e010000         jle 0x858642
// 008584b4  55                   push ebp
// 008584b5  8bcf                 mov ecx, edi
// 008584b7  e884f0ffff           call 0x857540
// 008584bc  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008584c0  8bf0                 mov esi, eax
// 008584c2  397160               cmp dword ptr [ecx + 0x60], esi
// 008584c5  750a                 jne 0x8584d1
// 008584c7  837e5c01             cmp dword ptr [esi + 0x5c], 1
// 008584cb  7f04                 jg 0x8584d1
// 008584cd  33db                 xor ebx, ebx
// 008584cf  eb05                 jmp 0x8584d6
// 008584d1  bb01000000           mov ebx, 1
// 008584d6  8b4628               mov eax, dword ptr [esi + 0x28]
// 008584d9  8b5624               mov edx, dword ptr [esi + 0x24]
// 008584dc  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 008584df  89542420             mov dword ptr [esp + 0x20], edx
// 008584e3  8b5630               mov edx, dword ptr [esi + 0x30]
// 008584e6  89442424             mov dword ptr [esp + 0x24], eax
// 008584ea  8b442458             mov eax, dword ptr [esp + 0x58]
// 008584ee  894c2428             mov dword ptr [esp + 0x28], ecx
// 008584f2  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008584f6  50                   push eax
// 008584f7  89542430             mov dword ptr [esp + 0x30], edx
// 008584fb  51                   push ecx
// 008584fc  8d542428             lea edx, [esp + 0x28]
// 00858500  52                   push edx
// 00858501  ff155cca9800         call dword ptr [0x98ca5c]
// 00858507  85c0                 test eax, eax
// 00858509  0f8583000000         jne 0x858592
// 0085850f  8bcf                 mov ecx, edi
// 00858511  e83ae1ffff           call 0x856650
// 00858516  83f801               cmp eax, 1
// 00858519  7409                 je 0x858524
// 0085851b  83bf9c00000000       cmp dword ptr [edi + 0x9c], 0
// 00858522  7429                 je 0x85854d
// 00858524  85db                 test ebx, ebx
// 00858526  7425                 je 0x85854d
// 00858528  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0085852b  8b5638               mov edx, dword ptr [esi + 0x38]
// 0085852e  894c2430             mov dword ptr [esp + 0x30], ecx
// 00858532  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00858535  894c2438             mov dword ptr [esp + 0x38], ecx
// 00858539  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0085853c  2b4c2458             sub ecx, dword ptr [esp + 0x58]
// 00858540  89542434             mov dword ptr [esp + 0x34], edx
// 00858544  85c9                 test ecx, ecx
// 00858546  7e05                 jle 0x85854d
// 00858548  83f91e               cmp ecx, 0x1e
// 0085854b  7c76                 jl 0x8585c3
// 0085854d  83f801               cmp eax, 1
// 00858550  7409                 je 0x85855b
// 00858552  83bf9c00000000       cmp dword ptr [edi + 0x9c], 0
// 00858559  7529                 jne 0x858584
// 0085855b  85db                 test ebx, ebx
// 0085855d  7425                 je 0x858584
// 0085855f  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00858562  8b5634               mov edx, dword ptr [esi + 0x34]
// 00858565  894c2434             mov dword ptr [esp + 0x34], ecx
// 00858569  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0085856c  2b4c2454             sub ecx, dword ptr [esp + 0x54]
// 00858570  89542430             mov dword ptr [esp + 0x30], edx
// 00858574  8b5640               mov edx, dword ptr [esi + 0x40]
// 00858577  8954243c             mov dword ptr [esp + 0x3c], edx
// 0085857b  85c9                 test ecx, ecx
// 0085857d  7e05                 jle 0x858584
// 0085857f  83f91e               cmp ecx, 0x1e
// 00858582  7c78                 jl 0x8585fc
// 00858584  45                   inc ebp
// 00858585  3be8                 cmp ebp, eax
// 00858587  0f8c27ffffff         jl 0x8584b4
// 0085858d  e9b0000000           jmp 0x858642
// 00858592  8b4644               mov eax, dword ptr [esi + 0x44]
// 00858595  89442410             mov dword ptr [esp + 0x10], eax
// 00858599  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0085859c  894c2414             mov dword ptr [esp + 0x14], ecx
// 008585a0  8b564c               mov edx, dword ptr [esi + 0x4c]
// 008585a3  89542418             mov dword ptr [esp + 0x18], edx
// 008585a7  8b4650               mov eax, dword ptr [esi + 0x50]
// 008585aa  8944241c             mov dword ptr [esp + 0x1c], eax
// 008585ae  89b7f0000000         mov dword ptr [edi + 0xf0], esi
// 008585b4  c787f400000002000000 mov dword ptr [edi + 0xf4], 2
// 008585be  e97f000000           jmp 0x858642
// 008585c3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 008585c6  894c2410             mov dword ptr [esp + 0x10], ecx
// 008585ca  8b4638               mov eax, dword ptr [esi + 0x38]
// 008585cd  89442414             mov dword ptr [esp + 0x14], eax
// 008585d1  8b563c               mov edx, dword ptr [esi + 0x3c]
// 008585d4  89542418             mov dword ptr [esp + 0x18], edx
// 008585d8  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 008585db  03c1                 add eax, ecx
// 008585dd  99                   cdq 
// 008585de  2bc2                 sub eax, edx
// 008585e0  d1f8                 sar eax, 1
// 008585e2  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008585e6  89442414             mov dword ptr [esp + 0x14], eax
// 008585ea  89b7f0000000         mov dword ptr [edi + 0xf0], esi
// 008585f0  c787f400000003000000 mov dword ptr [edi + 0xf4], 3
// 008585fa  eb46                 jmp 0x858642
// 008585fc  8b4634               mov eax, dword ptr [esi + 0x34]
// 008585ff  89442410             mov dword ptr [esp + 0x10], eax
// 00858603  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00858606  894c2414             mov dword ptr [esp + 0x14], ecx
// 0085860a  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0085860d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00858611  8b5640               mov edx, dword ptr [esi + 0x40]
// 00858614  03c1                 add eax, ecx
// 00858616  8954241c             mov dword ptr [esp + 0x1c], edx
// 0085861a  99                   cdq 
// 0085861b  2bc2                 sub eax, edx
// 0085861d  d1f8                 sar eax, 1
// 0085861f  89442410             mov dword ptr [esp + 0x10], eax
// 00858623  89b7f0000000         mov dword ptr [edi + 0xf0], esi
// 00858629  c787f400000004000000 mov dword ptr [edi + 0xf4], 4
// 00858633  eb0d                 jmp 0x858642
// 00858635  8b87ac000000         mov eax, dword ptr [edi + 0xac]
// 0085863b  50                   push eax
// 0085863c  ff1520ca9800         call dword ptr [0x98ca20]
// 00858642  8d4c2410             lea ecx, [esp + 0x10]
// 00858646  51                   push ecx
// 00858647  8db7dc000000         lea esi, [edi + 0xdc]
// 0085864d  56                   push esi
// 0085864e  ff15bcca9800         call dword ptr [0x98cabc]
// 00858654  85c0                 test eax, eax
// 00858656  7524                 jne 0x85867c
// 00858658  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085865c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00858660  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00858664  8916                 mov dword ptr [esi], edx
// 00858666  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085866a  894604               mov dword ptr [esi + 4], eax
// 0085866d  894e08               mov dword ptr [esi + 8], ecx
// 00858670  6a00                 push 0
// 00858672  8bcf                 mov ecx, edi
// 00858674  89560c               mov dword ptr [esi + 0xc], edx
// 00858677  e8b4e3ffff           call 0x856a30
// 0085867c  5f                   pop edi
// 0085867d  5e                   pop esi
// 0085867e  5d                   pop ebp
// 0085867f  5b                   pop ebx
// 00858680  83c440               add esp, 0x40
// 00858683  c20c00               ret 0xc
// copied from an identical function in another client (function ?ReorderWorkspace@CXTPTabClientWnd@@IAEXVCPoint@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp