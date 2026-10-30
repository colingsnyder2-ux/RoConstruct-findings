// roc 2009-12 0081f1c0  unit: CXTPReportControl::CReportDropTarget  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081f1c0
//
// 0081f1c0  8b442404             mov eax, dword ptr [esp + 4]
// 0081f1c4  50                   push eax
// 0081f1c5  e8a6d2ffff           call 0x81c470
// 0081f1ca  50                   push eax
// 0081f1cb  e86e4afdff           call 0x7f3c3e
// 0081f1d0  83c408               add esp, 8
// 0081f1d3  85c0                 test eax, eax
// 0081f1d5  7423                 je 0x81f1fa
// 0081f1d7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081f1db  8b10                 mov edx, dword ptr [eax]
// 0081f1dd  8b9258020000         mov edx, dword ptr [edx + 0x258]
// 0081f1e3  51                   push ecx
// 0081f1e4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081f1e8  51                   push ecx
// 0081f1e9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081f1ed  51                   push ecx
// 0081f1ee  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081f1f2  51                   push ecx
// 0081f1f3  8bc8                 mov ecx, eax
// 0081f1f5  ffd2                 call edx
// 0081f1f7  c21400               ret 0x14
// 0081f1fa  33c0                 xor eax, eax
// 0081f1fc  c21400               ret 0x14
// copied from an identical function in another client (function ?OnDrop@CReportDropTarget@CXTPReportControl@@UAEHPAVCWnd@@PAVCOleDataObject@@KVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp