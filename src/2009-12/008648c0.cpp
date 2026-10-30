// roc 2009-12 008648c0  unit: CXTPPropertyGridItem  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008648c0
//
// 008648c0  8b81d4000000         mov eax, dword ptr [ecx + 0xd4]
// 008648c6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\ctlprop.cpp (function ?GetReadyState@COleControl@@QAEJXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlprop.cpp
