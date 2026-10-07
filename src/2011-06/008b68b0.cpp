// roc 2011-06 008b68b0  unit: CXTPReportInplaceList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b68b0
//
// 008b68b0  8b442404             mov eax, dword ptr [esp + 4]
// 008b68b4  83f828               cmp eax, 0x28
// 008b68b7  740d                 je 0x8b68c6
// 008b68b9  83f826               cmp eax, 0x26
// 008b68bc  7408                 je 0x8b68c6
// 008b68be  e86b3df5ff           call 0x80a62e
// 008b68c3  c20c00               ret 0xc
// 008b68c6  e8f5fdffff           call 0x8b66c0
// 008b68cb  c20c00               ret 0xc
// library xtp-15.2.1/Source\ReportControl\XTPReportInplaceControls.cpp (function ?OnSysKeyDown@CXTPReportInplaceList@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportInplaceControls.cpp
