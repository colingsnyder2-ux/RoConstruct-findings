// from server: 100% by auto
// roc 2012-06 009e6c40  unit: CXTThemeManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6c40
//
// 009e6c40  68d06b9e00           push 0x9e6bd0
// 009e6c45  b9f49be500           mov ecx, 0xe59bf4
// 009e6c4a  e8cb2c0b00           call 0xa9991a
// 009e6c4f  85c0                 test eax, eax
// 009e6c51  7505                 jne 0x9e6c58
// 009e6c53  e968b7f9ff           jmp 0x9823c0
// 009e6c58  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?XTPKeyboardManager@@YAPAVCXTPKeyboardManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
