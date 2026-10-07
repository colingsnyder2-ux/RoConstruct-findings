// roc 2012-06 00a6a6e0  unit: CXTCaptionButton  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6a6e0
//
// 00a6a6e0  e8edee0200           call 0xa995d2
// 00a6a6e5  240f                 and al, 0xf
// 00a6a6e7  c3                   ret 
// library xtp-15.2.1/Source\Controls\Button\XTPButton.cpp (function ?GetButtonStyle@CXTPButton@@QBEEXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Button/XTPButton.cpp
