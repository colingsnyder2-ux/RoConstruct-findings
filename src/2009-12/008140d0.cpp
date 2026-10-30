// roc 2009-12 008140d0  unit: CXTPCommandBars  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008140d0
//
// 008140d0  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 008140d6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\ctlprop.cpp (function ?GetForeColor@COleControl@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlprop.cpp
