// roc 2009-12 00635850  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00635850
//
// 00635850  b8b8a0b200           mov eax, 0xb2a0b8
// 00635855  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
