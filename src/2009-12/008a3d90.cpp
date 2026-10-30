// roc 2009-12 008a3d90  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3d90
//
// 008a3d90  b8285ca000           mov eax, 0xa05c28
// 008a3d95  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
