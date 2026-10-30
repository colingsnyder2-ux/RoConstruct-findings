// roc 2009-12 0062e030  unit: RBX::DebugSettings::W4ErrorReporting::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062e030
//
// 0062e030  b8e884b200           mov eax, 0xb284e8
// 0062e035  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
