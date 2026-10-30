// roc 2009-12 00826f40  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00826f40
//
// 00826f40  b8b8549f00           mov eax, 0x9f54b8
// 00826f45  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
