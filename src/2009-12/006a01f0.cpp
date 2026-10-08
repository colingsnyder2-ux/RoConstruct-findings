// roc 2009-12 006a01f0  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a01f0
//
// 006a01f0  b8c096b300           mov eax, 0xb396c0
// 006a01f5  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
