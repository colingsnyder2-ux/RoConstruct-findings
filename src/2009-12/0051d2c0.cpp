// roc 2009-12 0051d2c0  unit: RBX::VInstance::V?$shared_ptr::$$CBV?$vector::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0051d2c0
//
// 0051d2c0  b8209bb100           mov eax, 0xb19b20
// 0051d2c5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
