// roc 2008-06 006c5300  unit: CXTPPrintingDialog  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c5300
//
// 006c5300  8b442404             mov eax, dword ptr [esp + 4]
// 006c5304  56                   push esi
// 006c5305  50                   push eax
// 006c5306  8bf1                 mov esi, ecx
// 006c5308  e8bdc0fdff           call 0x6a13ca
// 006c530d  8b16                 mov edx, dword ptr [esi]
// 006c530f  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 006c5315  8bce                 mov ecx, esi
// 006c5317  ffd0                 call eax
// 006c5319  85c0                 test eax, eax
// 006c531b  7403                 je 0x6c5320
// 006c531d  8b4020               mov eax, dword ptr [eax + 0x20]
// 006c5320  50                   push eax
// 006c5321  ff15502d8000         call dword ptr [0x802d50]
// 006c5327  85c0                 test eax, eax
// 006c5329  7413                 je 0x6c533e
// 006c532b  8b16                 mov edx, dword ptr [esi]
// 006c532d  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 006c5333  8bce                 mov ecx, esi
// 006c5335  ffd0                 call eax
// 006c5337  8bc8                 mov ecx, eax
// 006c5339  e8eab6fdff           call 0x6a0a28
// 006c533e  5e                   pop esi
// 006c533f  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportView.cpp (function ?OnSetFocus@CXTPReportView@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportView.cpp
