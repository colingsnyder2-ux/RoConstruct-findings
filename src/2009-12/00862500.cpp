// roc 2009-12 00862500  unit: CXTPToolTipContext::CHTMLToolTip::XOleClientSite  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00862500
//
// 00862500  b801400080           mov eax, 0x80004001
// 00862505  c20800               ret 8
// library mfc-8.0/atlmfc\src\mfc\ctlinplc.cpp (function ?ContextSensitiveHelp@XOleInPlaceObject@COleControl@@UAGJH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlinplc.cpp
