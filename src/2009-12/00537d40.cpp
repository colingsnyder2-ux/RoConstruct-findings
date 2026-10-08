// roc 2009-12 00537d40  unit: G3D::VColor3::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00537d40
//
// 00537d40  b8fcd7b100           mov eax, 0xb1d7fc
// 00537d45  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
