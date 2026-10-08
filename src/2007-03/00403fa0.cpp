// roc 2007-03 00403fa0  unit: seg_00400000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00403fa0
//
// 00403fa0  b801400080           mov eax, 0x80004001
// 00403fa5  c20c00               ret 0xc
// library mfc-8.0/atlmfc\src\mfc\ctlobj.cpp (function ?SetMoniker@XOleObject@COleControl@@UAGJKPAUIMoniker@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlobj.cpp
