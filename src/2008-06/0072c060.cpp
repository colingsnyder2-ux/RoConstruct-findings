// roc 2008-06 0072c060  unit: CXTPRibbonTheme  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072c060
//
// 0072c060  83ec30               sub esp, 0x30
// 0072c063  53                   push ebx
// 0072c064  56                   push esi
// 0072c065  57                   push edi
// 0072c066  68981f8600           push 0x861f98
// 0072c06b  e880960000           call 0x7356f0
// 0072c070  8bd8                 mov ebx, eax
// 0072c072  85db                 test ebx, ebx
// 0072c074  0f84b5000000         je 0x72c12f
// 0072c07a  8b742444             mov esi, dword ptr [esp + 0x44]
// 0072c07e  8b06                 mov eax, dword ptr [esi]
// 0072c080  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0072c086  8bce                 mov ecx, esi
// 0072c088  ffd2                 call edx
// 0072c08a  bf02000000           mov edi, 2
// 0072c08f  85c0                 test eax, eax
// 0072c091  7404                 je 0x72c097
// 0072c093  8bc7                 mov eax, edi
// 0072c095  eb0f                 jmp 0x72c0a6
// 0072c097  8b06                 mov eax, dword ptr [esi]
// 0072c099  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0072c09c  8bce                 mov ecx, esi
// 0072c09e  ffd2                 call edx
// 0072c0a0  f7d8                 neg eax
// 0072c0a2  1bc0                 sbb eax, eax
// 0072c0a4  f7d8                 neg eax
// 0072c0a6  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0072c0ac  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0072c0b2  6a04                 push 4
// 0072c0b4  894c2420             mov dword ptr [esp + 0x20], ecx
// 0072c0b8  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 0072c0be  50                   push eax
// 0072c0bf  89542428             mov dword ptr [esp + 0x28], edx
// 0072c0c3  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 0072c0c9  8d442434             lea eax, [esp + 0x34]
// 0072c0cd  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0072c0d1  50                   push eax
// 0072c0d2  8bcb                 mov ecx, ebx
// 0072c0d4  897c2418             mov dword ptr [esp + 0x18], edi
// 0072c0d8  897c241c             mov dword ptr [esp + 0x1c], edi
// 0072c0dc  897c2420             mov dword ptr [esp + 0x20], edi
// 0072c0e0  897c2424             mov dword ptr [esp + 0x24], edi
// 0072c0e4  89542434             mov dword ptr [esp + 0x34], edx
// 0072c0e8  e843160600           call 0x78d730
// 0072c0ed  56                   push esi
// 0072c0ee  8bf8                 mov edi, eax
// 0072c0f0  e8fbc6ffff           call 0x7287f0
// 0072c0f5  8b17                 mov edx, dword ptr [edi]
// 0072c0f7  83c404               add esp, 4
// 0072c0fa  50                   push eax
// 0072c0fb  68ff00ff00           push 0xff00ff
// 0072c100  8d4c2414             lea ecx, [esp + 0x14]
// 0072c104  51                   push ecx
// 0072c105  8b4f04               mov ecx, dword ptr [edi + 4]
// 0072c108  83ec10               sub esp, 0x10
// 0072c10b  8bc4                 mov eax, esp
// 0072c10d  8910                 mov dword ptr [eax], edx
// 0072c10f  8b5708               mov edx, dword ptr [edi + 8]
// 0072c112  894804               mov dword ptr [eax + 4], ecx
// 0072c115  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0072c118  895008               mov dword ptr [eax + 8], edx
// 0072c11b  89480c               mov dword ptr [eax + 0xc], ecx
// 0072c11e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0072c122  8d542438             lea edx, [esp + 0x38]
// 0072c126  52                   push edx
// 0072c127  50                   push eax
// 0072c128  8bcb                 mov ecx, ebx
// 0072c12a  e811200600           call 0x78e140
// 0072c12f  5f                   pop edi
// 0072c130  5e                   pop esi
// 0072c131  5b                   pop ebx
// 0072c132  83c430               add esp, 0x30
// 0072c135  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawRibbonQuickAccessMoreButton@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPControlPopup@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp
