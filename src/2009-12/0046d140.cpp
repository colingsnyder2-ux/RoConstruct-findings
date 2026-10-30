// roc 2009-12 0046d140  unit: CScriptDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046d140
//
// 0046d140  b85c019b00           mov eax, 0x9b015c
// 0046d145  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
