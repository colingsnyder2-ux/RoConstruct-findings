// roc 2009-12 0052ba90  unit: RBX::Network::VClient::?$FactoryProduct  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052ba90
//
// 0052ba90  b801000000           mov eax, 1
// 0052ba95  c20800               ret 8
// library mfc-8.0/atlmfc\src\mfc\bartool.cpp (function ?OnNcHitTest@CToolBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/bartool.cpp
