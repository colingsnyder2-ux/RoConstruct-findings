// roc 2009-12 0072a4b0  unit: VWiniInetRequest_source::?$stream_buffer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072a4b0
//
// 0072a4b0  b824f1b400           mov eax, 0xb4f124
// 0072a4b5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
