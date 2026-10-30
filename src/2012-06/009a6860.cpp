// roc 2012-06 009a6860  unit: CXTPPrintingDialog  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a6860
//
// 009a6860  8b442404             mov eax, dword ptr [esp + 4]
// 009a6864  56                   push esi
// 009a6865  50                   push eax
// 009a6866  8bf1                 mov esi, ecx
// 009a6868  e8c3c6fdff           call 0x982f30
// 009a686d  8b16                 mov edx, dword ptr [esi]
// 009a686f  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 009a6875  8bce                 mov ecx, esi
// 009a6877  ffd0                 call eax
// 009a6879  85c0                 test eax, eax
// 009a687b  7403                 je 0x9a6880
// 009a687d  8b4020               mov eax, dword ptr [eax + 0x20]
// 009a6880  50                   push eax
// 009a6881  ff15143bb200         call dword ptr [0xb23b14]
// 009a6887  85c0                 test eax, eax
// 009a6889  7413                 je 0x9a689e
// 009a688b  8b16                 mov edx, dword ptr [esi]
// 009a688d  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 009a6893  8bce                 mov ecx, esi
// 009a6895  ffd0                 call eax
// 009a6897  8bc8                 mov ecx, eax
// 009a6899  e806bcfdff           call 0x9824a4
// 009a689e  5e                   pop esi
// 009a689f  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?OnSetFocus@CXTPReportView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/ReportControl/XTPReportView.cpp
