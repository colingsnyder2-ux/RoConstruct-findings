// roc 2012-06 009f84f0  unit: CXTPResourceManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f84f0
//
// 009f84f0  6860849f00           push 0x9f8460
// 009f84f5  b954a0e500           mov ecx, 0xe5a054
// 009f84fa  e81b140a00           call 0xa9991a
// 009f84ff  85c0                 test eax, eax
// 009f8501  7505                 jne 0x9f8508
// 009f8503  e9b89ef8ff           jmp 0x9823c0
// 009f8508  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?XTPKeyboardManager@@YAPAVCXTPKeyboardManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
