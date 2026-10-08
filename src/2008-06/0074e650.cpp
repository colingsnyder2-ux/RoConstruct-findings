// from server: 100% by auto
// roc 2008-06 0074e650  unit: CXTPReportInplaceList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074e650
//
// 0074e650  8b442404             mov eax, dword ptr [esp + 4]
// 0074e654  83f828               cmp eax, 0x28
// 0074e657  740d                 je 0x74e666
// 0074e659  83f826               cmp eax, 0x26
// 0074e65c  7408                 je 0x74e666
// 0074e65e  e80526f5ff           call 0x6a0c68
// 0074e663  c20c00               ret 0xc
// 0074e666  e8f5fdffff           call 0x74e460
// 0074e66b  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportInplaceControls.cpp (function ?OnSysKeyDown@CXTPReportInplaceList@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportInplaceControls.cpp
