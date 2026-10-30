// roc 2009-12 0062eb40  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062eb40
//
// 0062eb40  b85c86b200           mov eax, 0xb2865c
// 0062eb45  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\appcore.cpp (function ?GetThisMessageMap@CWinApp@@KGPBUAFX_MSGMAP@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appcore.cpp
