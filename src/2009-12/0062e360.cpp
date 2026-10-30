// roc 2009-12 0062e360  unit: RBX::Time::W4SampleMethod::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062e360
//
// 0062e360  b8a485b200           mov eax, 0xb285a4
// 0062e365  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
