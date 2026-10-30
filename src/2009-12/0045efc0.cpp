// roc 2009-12 0045efc0  unit: CRobloxReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0045efc0
//
// 0045efc0  b818db9a00           mov eax, 0x9adb18
// 0045efc5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
