// roc 2007-03 00686090  unit: seg_00680000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686090
//
// 00686090  b801400080           mov eax, 0x80004001
// 00686095  c20800               ret 8
// library mfc-8.0/atlmfc\src\mfc\ctlinplc.cpp (function ?ContextSensitiveHelp@XOleInPlaceObject@COleControl@@UAGJH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlinplc.cpp
