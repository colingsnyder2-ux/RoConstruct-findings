// from server: 100% by auto
// roc 2011-06 008f2370  unit: CXTCaptionButton  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2370
//
// 008f2370  e8a3a20d00           call 0x9cc618
// 008f2375  240f                 and al, 0xf
// 008f2377  c3                   ret 
// library xtp-15.2.1/Source\Controls\Button\XTPButton.cpp (function ?GetButtonStyle@CXTPButton@@QBEEXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Button/XTPButton.cpp
