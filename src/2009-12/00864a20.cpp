// roc 2009-12 00864a20  unit: CXTCaptionButton  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00864a20
//
// 00864a20  8b8180000000         mov eax, dword ptr [ecx + 0x80]
// 00864a26  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\bardock.cpp (function ?GetBarStyle@CControlBar@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/bardock.cpp
