// roc 2012-06 00a2ed80  unit: CXTPReportInplaceList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2ed80
//
// 00a2ed80  8b442404             mov eax, dword ptr [esp + 4]
// 00a2ed84  83f828               cmp eax, 0x28
// 00a2ed87  740d                 je 0xa2ed96
// 00a2ed89  83f826               cmp eax, 0x26
// 00a2ed8c  7408                 je 0xa2ed96
// 00a2ed8e  e84b39f5ff           call 0x9826de
// 00a2ed93  c20c00               ret 0xc
// 00a2ed96  e8f5fdffff           call 0xa2eb90
// 00a2ed9b  c20c00               ret 0xc
// library xtp-15.2.1/Source\ReportControl\XTPReportInplaceControls.cpp (function ?OnSysKeyDown@CXTPReportInplaceList@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportInplaceControls.cpp
