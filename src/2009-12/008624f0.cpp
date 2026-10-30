// roc 2009-12 008624f0  unit: CXTPToolTipContext::CHTMLToolTip::XOleClientSite  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008624f0
//
// 008624f0  b801400080           mov eax, 0x80004001
// 008624f5  c20400               ret 4
// library mfc-8.0/atlmfc\src\mfc\ctlinplc.cpp (function ?ReactivateAndUndo@XOleInPlaceObject@COleControl@@UAGJXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlinplc.cpp
