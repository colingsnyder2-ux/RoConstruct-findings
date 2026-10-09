// roc 2009-12 0083fe70  unit: CXTPCustomizeSheet  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083fe70
//
// 0083fe70  8b81b4010000         mov eax, dword ptr [ecx + 0x1b4]
// 0083fe76  85c0                 test eax, eax
// 0083fe78  7407                 je 0x83fe81
// 0083fe7a  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 0083fe80  c3                   ret 
// 0083fe81  33c0                 xor eax, eax
// 0083fe83  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?GetCommandBars@CXTPCustomizeOptionsPage@@QBEPAVCXTPCommandBars@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
