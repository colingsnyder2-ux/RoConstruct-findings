// roc 2009-12 0046cef0  unit: Scintilla::CScintillaView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046cef0
//
// 0046cef0  b8c4fd9a00           mov eax, 0x9afdc4
// 0046cef5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
