// roc 2009-06 007650a0  unit: CXTPCustomizeSheet  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007650a0
//
// 007650a0  8b81b4010000         mov eax, dword ptr [ecx + 0x1b4]
// 007650a6  85c0                 test eax, eax
// 007650a8  7407                 je 0x7650b1
// 007650aa  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 007650b0  c3                   ret 
// 007650b1  33c0                 xor eax, eax
// 007650b3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?GetCommandBars@CXTPCustomizeOptionsPage@@QBEPAVCXTPCommandBars@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
