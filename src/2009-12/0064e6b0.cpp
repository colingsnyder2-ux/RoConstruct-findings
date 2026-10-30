// roc 2009-12 0064e6b0  unit: RBX::Script::W4ScriptExecutionLocation::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0064e6b0
//
// 0064e6b0  b860d1b200           mov eax, 0xb2d160
// 0064e6b5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
