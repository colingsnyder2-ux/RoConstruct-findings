// roc 2009-12 0045f0a0  unit: CRobloxReportPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0045f0a0
//
// 0045f0a0  b880db9a00           mov eax, 0x9adb80
// 0045f0a5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
