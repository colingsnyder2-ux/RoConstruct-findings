// roc 2007-03 00624ff0  unit: seg_00620000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624ff0
//
// 00624ff0  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 00624ff6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\ctlprop.cpp (function ?GetBackColor@COleControl@@QAEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlprop.cpp
