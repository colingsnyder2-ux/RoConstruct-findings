// roc 2010-06 007f3f30  unit: CXTPCustomizeSheet  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f3f30
//
// 007f3f30  8b81b4010000         mov eax, dword ptr [ecx + 0x1b4]
// 007f3f36  85c0                 test eax, eax
// 007f3f38  7407                 je 0x7f3f41
// 007f3f3a  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 007f3f40  c3                   ret 
// 007f3f41  33c0                 xor eax, eax
// 007f3f43  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?GetCommandBars@CXTPCustomizeOptionsPage@@QBEPAVCXTPCommandBars@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
