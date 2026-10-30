// roc 2009-12 0083baa0  unit: CPatchedControlComboBox  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083baa0
//
// 0083baa0  b801400080           mov eax, 0x80004001
// 0083baa5  c21800               ret 0x18
// library mfc-8.0/atlmfc\src\mfc\dlgdhtml.cpp (function ?GetIDsOfNames@CDHtmlEventSink@@UAGJABU_GUID@@PAPA_WIKPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dlgdhtml.cpp
