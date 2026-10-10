// roc 2008-06 00753080  unit: CXTPReportTip  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00753080
//
// 00753080  57                   push edi
// 00753081  8bf9                 mov edi, ecx
// 00753083  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00753086  85c9                 test ecx, ecx
// 00753088  7454                 je 0x7530de
// 0075308a  8b811c010000         mov eax, dword ptr [ecx + 0x11c]
// 00753090  56                   push esi
// 00753091  8bf0                 mov esi, eax
// 00753093  46                   inc esi
// 00753094  f7de                 neg esi
// 00753096  1bf6                 sbb esi, esi
// 00753098  23f0                 and esi, eax
// 0075309a  6a00                 push 0
// 0075309c  56                   push esi
// 0075309d  e82e72f7ff           call 0x6ca2d0
// 007530a2  8bce                 mov ecx, esi
// 007530a4  2bc8                 sub ecx, eax
// 007530a6  7904                 jns 0x7530ac
// 007530a8  33f6                 xor esi, esi
// 007530aa  eb0d                 jmp 0x7530b9
// 007530ac  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 007530af  6a00                 push 0
// 007530b1  56                   push esi
// 007530b2  e81972f7ff           call 0x6ca2d0
// 007530b7  2bf0                 sub esi, eax
// 007530b9  8b5720               mov edx, dword ptr [edi + 0x20]
// 007530bc  8b8ae0000000         mov ecx, dword ptr [edx + 0xe0]
// 007530c2  8b442410             mov eax, dword ptr [esp + 0x10]
// 007530c6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007530ca  50                   push eax
// 007530cb  8b01                 mov eax, dword ptr [ecx]
// 007530cd  52                   push edx
// 007530ce  8b505c               mov edx, dword ptr [eax + 0x5c]
// 007530d1  56                   push esi
// 007530d2  ffd2                 call edx
// 007530d4  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 007530d7  50                   push eax
// 007530d8  e8d3f4f7ff           call 0x6d25b0
// 007530dd  5e                   pop esi
// 007530de  5f                   pop edi
// 007530df  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportNavigator.cpp (function ?MovePageUp@CXTPReportNavigator@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportNavigator.cpp
