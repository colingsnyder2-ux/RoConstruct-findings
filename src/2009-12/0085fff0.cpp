// roc 2009-12 0085fff0  unit: ATL::CRegObject  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085fff0
//
// 0085fff0  b801400080           mov eax, 0x80004001
// 0085fff5  c20c00               ret 0xc
// library mfc-8.0/atlmfc\src\mfc\ctlobj.cpp (function ?SetMoniker@XOleObject@COleControl@@UAGJKPAUIMoniker@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlobj.cpp
