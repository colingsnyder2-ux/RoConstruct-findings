// from server: 100% by auto
// roc 2011-06 0082ba60  unit: CXTPCommandBar  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082ba60
//
// 0082ba60  85c9                 test ecx, ecx
// 0082ba62  7518                 jne 0x82ba7c
// 0082ba64  68b0cb8000           push 0x80cbb0
// 0082ba69  b9e88ed100           mov ecx, 0xd18ee8
// 0082ba6e  e8510b1a00           call 0x9cc5c4
// 0082ba73  85c0                 test eax, eax
// 0082ba75  750a                 jne 0x82ba81
// 0082ba77  e98ee8fdff           jmp 0x80a30a
// 0082ba7c  e86ffcffff           call 0x82b6f0
// 0082ba81  8bc8                 mov ecx, eax
// 0082ba83  e9d84c0500           jmp 0x880760
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?ClosePopups@CXTPCommandBars@@QBEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
