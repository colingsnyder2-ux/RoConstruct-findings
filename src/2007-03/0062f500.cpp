// roc 2007-03 0062f500  unit: seg_00620000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f500
//
// 0062f500  b801000000           mov eax, 1
// 0062f505  c21000               ret 0x10
// library mfc-8.0/atlmfc\src\mfc\dlgdhtml.cpp (function ?TranslateAcceleratorA@CDHtmlDialog@@UAGJPAUtagMSG@@PBU_GUID@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/dlgdhtml.cpp
