// roc 2009-12 00875670  unit: CXTPRibbonTheme  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00875670
//
// 00875670  83ec30               sub esp, 0x30
// 00875673  53                   push ebx
// 00875674  56                   push esi
// 00875675  57                   push edi
// 00875676  68b816a000           push 0xa016b8
// 0087567b  e880960000           call 0x87ed00
// 00875680  8bd8                 mov ebx, eax
// 00875682  85db                 test ebx, ebx
// 00875684  0f84b5000000         je 0x87573f
// 0087568a  8b742444             mov esi, dword ptr [esp + 0x44]
// 0087568e  8b06                 mov eax, dword ptr [esi]
// 00875690  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00875696  8bce                 mov ecx, esi
// 00875698  ffd2                 call edx
// 0087569a  bf02000000           mov edi, 2
// 0087569f  85c0                 test eax, eax
// 008756a1  7404                 je 0x8756a7
// 008756a3  8bc7                 mov eax, edi
// 008756a5  eb0f                 jmp 0x8756b6
// 008756a7  8b06                 mov eax, dword ptr [esi]
// 008756a9  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008756ac  8bce                 mov ecx, esi
// 008756ae  ffd2                 call edx
// 008756b0  f7d8                 neg eax
// 008756b2  1bc0                 sbb eax, eax
// 008756b4  f7d8                 neg eax
// 008756b6  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 008756bc  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 008756c2  6a04                 push 4
// 008756c4  894c2420             mov dword ptr [esp + 0x20], ecx
// 008756c8  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 008756ce  50                   push eax
// 008756cf  89542428             mov dword ptr [esp + 0x28], edx
// 008756d3  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 008756d9  8d442434             lea eax, [esp + 0x34]
// 008756dd  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008756e1  50                   push eax
// 008756e2  8bcb                 mov ecx, ebx
// 008756e4  897c2418             mov dword ptr [esp + 0x18], edi
// 008756e8  897c241c             mov dword ptr [esp + 0x1c], edi
// 008756ec  897c2420             mov dword ptr [esp + 0x20], edi
// 008756f0  897c2424             mov dword ptr [esp + 0x24], edi
// 008756f4  89542434             mov dword ptr [esp + 0x34], edx
// 008756f8  e8c3b10600           call 0x8e08c0
// 008756fd  56                   push esi
// 008756fe  8bf8                 mov edi, eax
// 00875700  e8fbc6ffff           call 0x871e00
// 00875705  8b17                 mov edx, dword ptr [edi]
// 00875707  83c404               add esp, 4
// 0087570a  50                   push eax
// 0087570b  68ff00ff00           push 0xff00ff
// 00875710  8d4c2414             lea ecx, [esp + 0x14]
// 00875714  51                   push ecx
// 00875715  8b4f04               mov ecx, dword ptr [edi + 4]
// 00875718  83ec10               sub esp, 0x10
// 0087571b  8bc4                 mov eax, esp
// 0087571d  8910                 mov dword ptr [eax], edx
// 0087571f  8b5708               mov edx, dword ptr [edi + 8]
// 00875722  894804               mov dword ptr [eax + 4], ecx
// 00875725  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00875728  895008               mov dword ptr [eax + 8], edx
// 0087572b  89480c               mov dword ptr [eax + 0xc], ecx
// 0087572e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00875732  8d542438             lea edx, [esp + 0x38]
// 00875736  52                   push edx
// 00875737  50                   push eax
// 00875738  8bcb                 mov ecx, ebx
// 0087573a  e891bb0600           call 0x8e12d0
// 0087573f  5f                   pop edi
// 00875740  5e                   pop esi
// 00875741  5b                   pop ebx
// 00875742  83c430               add esp, 0x30
// 00875745  c20800               ret 8
// copied from an identical function in another client (function ?DrawRibbonQuickAccessMoreButton@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPControlPopup@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp