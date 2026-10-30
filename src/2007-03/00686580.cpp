// roc 2007-03 00686580  unit: seg_00680000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686580
//
// 00686580  b801400080           mov eax, 0x80004001
// 00686585  c21400               ret 0x14
// library mfc-8.0/atlmfc\src\mfc\ctlview.cpp (function ?Freeze@XViewObject@COleControl@@UAGJKJPAXPAK@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlview.cpp
