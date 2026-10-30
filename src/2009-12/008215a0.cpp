// roc 2009-12 008215a0  unit: CXTPReportControl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008215a0
//
// 008215a0  56                   push esi
// 008215a1  8bf1                 mov esi, ecx
// 008215a3  e88828fdff           call 0x7f3e30
// 008215a8  8b06                 mov eax, dword ptr [esi]
// 008215aa  8b9014020000         mov edx, dword ptr [eax + 0x214]
// 008215b0  8bce                 mov ecx, esi
// 008215b2  ffd2                 call edx
// 008215b4  8bce                 mov ecx, esi
// 008215b6  e8c5deffff           call 0x81f480
// 008215bb  5e                   pop esi
// 008215bc  c20400               ret 4
// copied from an identical function in another client (function ?OnKillFocus@CXTPReportControl@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp