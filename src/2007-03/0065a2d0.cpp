// roc 2007-03 0065a2d0  unit: seg_00650000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065a2d0
//
// 0065a2d0  b801000000           mov eax, 1
// 0065a2d5  c20c00               ret 0xc
// library mfc-8.0/atlmfc\src\mfc\dllmodul.cpp (function _RawDllMain@12)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dllmodul.cpp
