// roc 2007-03 006865a0  unit: seg_00680000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006865a0
//
// 006865a0  b801400080           mov eax, 0x80004001
// 006865a5  c21000               ret 0x10
// library mfc-8.0/atlmfc\src\mfc\ctlobj.cpp (function ?GetMoniker@XOleObject@COleControl@@UAGJKKPAPAUIMoniker@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlobj.cpp
