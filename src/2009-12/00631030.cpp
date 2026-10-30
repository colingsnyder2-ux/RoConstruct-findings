// roc 2009-12 00631030  unit: RBX::Reflection::$$CBUTuple::V?$shared_ptr::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00631030
//
// 00631030  b8b48eb200           mov eax, 0xb28eb4
// 00631035  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
