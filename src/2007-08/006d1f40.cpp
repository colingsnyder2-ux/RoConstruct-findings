// roc 2007-08 006d1f40  unit: CXTPReportInplaceList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d1f40
//
// 006d1f40  8b442404             mov eax, dword ptr [esp + 4]
// 006d1f44  83f828               cmp eax, 0x28
// 006d1f47  740d                 je 0x6d1f56
// 006d1f49  83f826               cmp eax, 0x26
// 006d1f4c  7408                 je 0x6d1f56
// 006d1f4e  e8ebe2f5ff           call 0x63023e
// 006d1f53  c20c00               ret 0xc
// 006d1f56  e8a5feffff           call 0x6d1e00
// 006d1f5b  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportInplaceControls.cpp (function ?OnSysKeyDown@CXTPReportInplaceList@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportInplaceControls.cpp
