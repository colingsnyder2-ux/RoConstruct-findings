// roc 2009-12 008506c0  unit: CXTPPropExchangeXMLNode  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008506c0
//
// 008506c0  b824c39f00           mov eax, 0x9fc324
// 008506c5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
