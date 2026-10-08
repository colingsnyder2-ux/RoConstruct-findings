// roc 2009-12 0083ba90  unit: CXTPToolTipContext::CHTMLToolTip::XOleClientSite  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ba90
//
// 0083ba90  b801400080           mov eax, 0x80004001
// 0083ba95  c21000               ret 0x10
// library mfc-8.0/atlmfc\src\mfc\ctlobj.cpp (function ?GetMoniker@XOleObject@COleControl@@UAGJKKPAPAUIMoniker@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlobj.cpp
