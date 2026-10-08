// roc 2009-12 006b35b0  unit: RBX::DropperTool  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b35b0
//
// 006b35b0  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 006b35b6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\ctlprop.cpp (function ?GetEnabled@COleControl@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlprop.cpp
