// roc 2009-12 0081f180  unit: CXTPReportControl::CReportDropTarget  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081f180
//
// 0081f180  8b442404             mov eax, dword ptr [esp + 4]
// 0081f184  50                   push eax
// 0081f185  e8e6d2ffff           call 0x81c470
// 0081f18a  50                   push eax
// 0081f18b  e8ae4afdff           call 0x7f3c3e
// 0081f190  83c408               add esp, 8
// 0081f193  85c0                 test eax, eax
// 0081f195  7419                 je 0x81f1b0
// 0081f197  56                   push esi
// 0081f198  8b30                 mov esi, dword ptr [eax]
// 0081f19a  83c9ff               or ecx, 0xffffffff
// 0081f19d  0bd1                 or edx, ecx
// 0081f19f  52                   push edx
// 0081f1a0  8b9654020000         mov edx, dword ptr [esi + 0x254]
// 0081f1a6  51                   push ecx
// 0081f1a7  6a00                 push 0
// 0081f1a9  6a00                 push 0
// 0081f1ab  8bc8                 mov ecx, eax
// 0081f1ad  ffd2                 call edx
// 0081f1af  5e                   pop esi
// 0081f1b0  c20400               ret 4
// copied from an identical function in another client (function ?OnDragLeave@CReportDropTarget@CXTPReportControl@@UAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp