// roc 2009-12 0081f140  unit: CXTPReportControl::CReportDropTarget  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081f140
//
// 0081f140  8b442404             mov eax, dword ptr [esp + 4]
// 0081f144  50                   push eax
// 0081f145  e826d3ffff           call 0x81c470
// 0081f14a  50                   push eax
// 0081f14b  e8ee4afdff           call 0x7f3c3e
// 0081f150  83c408               add esp, 8
// 0081f153  85c0                 test eax, eax
// 0081f155  7503                 jne 0x81f15a
// 0081f157  c21400               ret 0x14
// 0081f15a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081f15e  8b10                 mov edx, dword ptr [eax]
// 0081f160  8b9254020000         mov edx, dword ptr [edx + 0x254]
// 0081f166  51                   push ecx
// 0081f167  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081f16b  51                   push ecx
// 0081f16c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081f170  51                   push ecx
// 0081f171  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081f175  51                   push ecx
// 0081f176  8bc8                 mov ecx, eax
// 0081f178  ffd2                 call edx
// 0081f17a  c21400               ret 0x14
// copied from an identical function in another client (function ?OnDragOver@CReportDropTarget@CXTPReportControl@@UAEKPAVCWnd@@PAVCOleDataObject@@KVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp