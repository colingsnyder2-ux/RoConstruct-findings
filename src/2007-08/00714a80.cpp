// from server: 100% by auto
// roc 2007-08 00714a80  unit: CXTCaptionButton  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714a80
//
// 00714a80  e88d390200           call 0x738412
// 00714a85  240f                 and al, 0xf
// 00714a87  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?GetButtonStyle@CXTButton@@QBEEXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
