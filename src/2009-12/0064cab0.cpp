// roc 2009-12 0064cab0  unit: G3D::Vector3::W4Axis::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064cab0
//
// 0064cab0  b80ccbb200           mov eax, 0xb2cb0c
// 0064cab5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
