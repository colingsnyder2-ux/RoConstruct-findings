// roc 2009-12 007ff0e0  unit: CXTPPaintManager  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ff0e0
//
// 007ff0e0  8b542418             mov edx, dword ptr [esp + 0x18]
// 007ff0e4  8b01                 mov eax, dword ptr [ecx]
// 007ff0e6  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 007ff0ec  53                   push ebx
// 007ff0ed  56                   push esi
// 007ff0ee  57                   push edi
// 007ff0ef  6a00                 push 0
// 007ff0f1  6a01                 push 1
// 007ff0f3  52                   push edx
// 007ff0f4  8b542434             mov edx, dword ptr [esp + 0x34]
// 007ff0f8  6a00                 push 0
// 007ff0fa  52                   push edx
// 007ff0fb  8b542434             mov edx, dword ptr [esp + 0x34]
// 007ff0ff  6a00                 push 0
// 007ff101  52                   push edx
// 007ff102  ffd0                 call eax
// 007ff104  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 007ff109  50                   push eax
// 007ff10a  742a                 je 0x7ff136
// 007ff10c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007ff110  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007ff114  51                   push ecx
// 007ff115  56                   push esi
// 007ff116  8d7902               lea edi, [ecx + 2]
// 007ff119  57                   push edi
// 007ff11a  8d5602               lea edx, [esi + 2]
// 007ff11d  52                   push edx
// 007ff11e  8d59fe               lea ebx, [ecx - 2]
// 007ff121  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007ff125  53                   push ebx
// 007ff126  52                   push edx
// 007ff127  51                   push ecx
// 007ff128  e863f5ffff           call 0x7fe690
// 007ff12d  83c420               add esp, 0x20
// 007ff130  5f                   pop edi
// 007ff131  5e                   pop esi
// 007ff132  5b                   pop ebx
// 007ff133  c22000               ret 0x20
// 007ff136  8b542420             mov edx, dword ptr [esp + 0x20]
// 007ff13a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007ff13e  8d7201               lea esi, [edx + 1]
// 007ff141  56                   push esi
// 007ff142  51                   push ecx
// 007ff143  4a                   dec edx
// 007ff144  52                   push edx
// 007ff145  8d7902               lea edi, [ecx + 2]
// 007ff148  57                   push edi
// 007ff149  52                   push edx
// 007ff14a  8b542428             mov edx, dword ptr [esp + 0x28]
// 007ff14e  8d59fe               lea ebx, [ecx - 2]
// 007ff151  53                   push ebx
// 007ff152  52                   push edx
// 007ff153  e838f5ffff           call 0x7fe690
// 007ff158  83c420               add esp, 0x20
// 007ff15b  5f                   pop edi
// 007ff15c  5e                   pop esi
// 007ff15d  5b                   pop ebx
// 007ff15e  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawDropDownGlyph@CXTPPaintManager@@UAEXPAVCDC@@PAVCXTPControl@@VCPoint@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp