// roc 2009-12 00838840  unit: CXTPDockingPaneManager  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00838840
//
// 00838840  b801000000           mov eax, 1
// 00838845  c20c00               ret 0xc
// library mfc-8.0/atlmfc\src\mfc\dllmodul.cpp (function _RawDllMain@12)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dllmodul.cpp
