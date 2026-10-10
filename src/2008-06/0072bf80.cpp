// roc 2008-06 0072bf80  unit: CXTPRibbonTheme  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072bf80
//
// 0072bf80  83ec30               sub esp, 0x30
// 0072bf83  53                   push ebx
// 0072bf84  56                   push esi
// 0072bf85  57                   push edi
// 0072bf86  68801f8600           push 0x861f80
// 0072bf8b  e860970000           call 0x7356f0
// 0072bf90  8bd8                 mov ebx, eax
// 0072bf92  85db                 test ebx, ebx
// 0072bf94  0f84b5000000         je 0x72c04f
// 0072bf9a  8b742444             mov esi, dword ptr [esp + 0x44]
// 0072bf9e  8b06                 mov eax, dword ptr [esi]
// 0072bfa0  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0072bfa6  8bce                 mov ecx, esi
// 0072bfa8  ffd2                 call edx
// 0072bfaa  bf02000000           mov edi, 2
// 0072bfaf  85c0                 test eax, eax
// 0072bfb1  7404                 je 0x72bfb7
// 0072bfb3  8bc7                 mov eax, edi
// 0072bfb5  eb0f                 jmp 0x72bfc6
// 0072bfb7  8b06                 mov eax, dword ptr [esi]
// 0072bfb9  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0072bfbc  8bce                 mov ecx, esi
// 0072bfbe  ffd2                 call edx
// 0072bfc0  f7d8                 neg eax
// 0072bfc2  1bc0                 sbb eax, eax
// 0072bfc4  f7d8                 neg eax
// 0072bfc6  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0072bfcc  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0072bfd2  6a04                 push 4
// 0072bfd4  894c2420             mov dword ptr [esp + 0x20], ecx
// 0072bfd8  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 0072bfde  50                   push eax
// 0072bfdf  89542428             mov dword ptr [esp + 0x28], edx
// 0072bfe3  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 0072bfe9  8d442434             lea eax, [esp + 0x34]
// 0072bfed  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0072bff1  50                   push eax
// 0072bff2  8bcb                 mov ecx, ebx
// 0072bff4  897c2418             mov dword ptr [esp + 0x18], edi
// 0072bff8  897c241c             mov dword ptr [esp + 0x1c], edi
// 0072bffc  897c2420             mov dword ptr [esp + 0x20], edi
// 0072c000  897c2424             mov dword ptr [esp + 0x24], edi
// 0072c004  89542434             mov dword ptr [esp + 0x34], edx
// 0072c008  e823170600           call 0x78d730
// 0072c00d  56                   push esi
// 0072c00e  8bf8                 mov edi, eax
// 0072c010  e8dbc7ffff           call 0x7287f0
// 0072c015  8b17                 mov edx, dword ptr [edi]
// 0072c017  83c404               add esp, 4
// 0072c01a  50                   push eax
// 0072c01b  68ff00ff00           push 0xff00ff
// 0072c020  8d4c2414             lea ecx, [esp + 0x14]
// 0072c024  51                   push ecx
// 0072c025  8b4f04               mov ecx, dword ptr [edi + 4]
// 0072c028  83ec10               sub esp, 0x10
// 0072c02b  8bc4                 mov eax, esp
// 0072c02d  8910                 mov dword ptr [eax], edx
// 0072c02f  8b5708               mov edx, dword ptr [edi + 8]
// 0072c032  894804               mov dword ptr [eax + 4], ecx
// 0072c035  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0072c038  895008               mov dword ptr [eax + 8], edx
// 0072c03b  89480c               mov dword ptr [eax + 0xc], ecx
// 0072c03e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0072c042  8d542438             lea edx, [esp + 0x38]
// 0072c046  52                   push edx
// 0072c047  50                   push eax
// 0072c048  8bcb                 mov ecx, ebx
// 0072c04a  e8f1200600           call 0x78e140
// 0072c04f  5f                   pop edi
// 0072c050  5e                   pop esi
// 0072c051  5b                   pop ebx
// 0072c052  83c430               add esp, 0x30
// 0072c055  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawRibbonQuickAccessButton@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPControlPopup@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp
