// from server: 100% by auto
// roc 2008-06 00792340  unit: CXTCaptionButton  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792340
//
// 00792340  e8c59c0200           call 0x7bc00a
// 00792345  240f                 and al, 0xf
// 00792347  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?GetButtonStyle@CXTButton@@QBEEXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
