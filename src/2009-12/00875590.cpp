// roc 2009-12 00875590  unit: CXTPRibbonTheme  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00875590
//
// 00875590  83ec30               sub esp, 0x30
// 00875593  53                   push ebx
// 00875594  56                   push esi
// 00875595  57                   push edi
// 00875596  68a016a000           push 0xa016a0
// 0087559b  e860970000           call 0x87ed00
// 008755a0  8bd8                 mov ebx, eax
// 008755a2  85db                 test ebx, ebx
// 008755a4  0f84b5000000         je 0x87565f
// 008755aa  8b742444             mov esi, dword ptr [esp + 0x44]
// 008755ae  8b06                 mov eax, dword ptr [esi]
// 008755b0  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 008755b6  8bce                 mov ecx, esi
// 008755b8  ffd2                 call edx
// 008755ba  bf02000000           mov edi, 2
// 008755bf  85c0                 test eax, eax
// 008755c1  7404                 je 0x8755c7
// 008755c3  8bc7                 mov eax, edi
// 008755c5  eb0f                 jmp 0x8755d6
// 008755c7  8b06                 mov eax, dword ptr [esi]
// 008755c9  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008755cc  8bce                 mov ecx, esi
// 008755ce  ffd2                 call edx
// 008755d0  f7d8                 neg eax
// 008755d2  1bc0                 sbb eax, eax
// 008755d4  f7d8                 neg eax
// 008755d6  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 008755dc  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 008755e2  6a04                 push 4
// 008755e4  894c2420             mov dword ptr [esp + 0x20], ecx
// 008755e8  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 008755ee  50                   push eax
// 008755ef  89542428             mov dword ptr [esp + 0x28], edx
// 008755f3  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 008755f9  8d442434             lea eax, [esp + 0x34]
// 008755fd  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00875601  50                   push eax
// 00875602  8bcb                 mov ecx, ebx
// 00875604  897c2418             mov dword ptr [esp + 0x18], edi
// 00875608  897c241c             mov dword ptr [esp + 0x1c], edi
// 0087560c  897c2420             mov dword ptr [esp + 0x20], edi
// 00875610  897c2424             mov dword ptr [esp + 0x24], edi
// 00875614  89542434             mov dword ptr [esp + 0x34], edx
// 00875618  e8a3b20600           call 0x8e08c0
// 0087561d  56                   push esi
// 0087561e  8bf8                 mov edi, eax
// 00875620  e8dbc7ffff           call 0x871e00
// 00875625  8b17                 mov edx, dword ptr [edi]
// 00875627  83c404               add esp, 4
// 0087562a  50                   push eax
// 0087562b  68ff00ff00           push 0xff00ff
// 00875630  8d4c2414             lea ecx, [esp + 0x14]
// 00875634  51                   push ecx
// 00875635  8b4f04               mov ecx, dword ptr [edi + 4]
// 00875638  83ec10               sub esp, 0x10
// 0087563b  8bc4                 mov eax, esp
// 0087563d  8910                 mov dword ptr [eax], edx
// 0087563f  8b5708               mov edx, dword ptr [edi + 8]
// 00875642  894804               mov dword ptr [eax + 4], ecx
// 00875645  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00875648  895008               mov dword ptr [eax + 8], edx
// 0087564b  89480c               mov dword ptr [eax + 0xc], ecx
// 0087564e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00875652  8d542438             lea edx, [esp + 0x38]
// 00875656  52                   push edx
// 00875657  50                   push eax
// 00875658  8bcb                 mov ecx, ebx
// 0087565a  e871bc0600           call 0x8e12d0
// 0087565f  5f                   pop edi
// 00875660  5e                   pop esi
// 00875661  5b                   pop ebx
// 00875662  83c430               add esp, 0x30
// 00875665  c20800               ret 8
// copied from an identical function in another client (function ?DrawRibbonQuickAccessButton@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPControlPopup@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp