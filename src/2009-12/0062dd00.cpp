// roc 2009-12 0062dd00  unit: RBX::TaskScheduler::Job::W4SleepAdjustMethod::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062dd00
//
// 0062dd00  b80c84b200           mov eax, 0xb2840c
// 0062dd05  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
