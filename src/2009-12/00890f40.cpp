// roc 2009-12 00890f40  unit: ATL::CRegObject  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00890f40
//
// 00890f40  b801000000           mov eax, 1
// 00890f45  c20400               ret 4
// library mfc-8.0/atlmfc\src\mfc\cmdtarg.cpp (function ?IsInvokeAllowed@CCmdTarget@@UAEHJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/cmdtarg.cpp
