// roc 2009-12 0044b050  unit: CRobloxControlColorSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044b050
//
// 0044b050  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 0044b056  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\dlgprop.cpp (function ?IsModeless@CPropertySheet@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dlgprop.cpp
