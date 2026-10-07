// roc 2012-06 00986370  unit: IIHH::?$CMap  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00986370
//
// 00986370  68704e9800           push 0x984e70
// 00986375  b958a0e500           mov ecx, 0xe5a058
// 0098637a  e8ff311100           call 0xa9957e
// 0098637f  85c0                 test eax, eax
// 00986381  7505                 jne 0x986388
// 00986383  e938c0ffff           jmp 0x9823c0
// 00986388  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?XTPKeyboardManager@@YAPAVCXTPKeyboardManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
