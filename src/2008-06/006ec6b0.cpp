// from server: 100% by auto
// roc 2008-06 006ec6b0  unit: CXTPCustomizeSheet  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ec6b0
//
// 006ec6b0  8b81b4010000         mov eax, dword ptr [ecx + 0x1b4]
// 006ec6b6  85c0                 test eax, eax
// 006ec6b8  7407                 je 0x6ec6c1
// 006ec6ba  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 006ec6c0  c3                   ret 
// 006ec6c1  33c0                 xor eax, eax
// 006ec6c3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?GetCommandBars@CXTPCustomizeOptionsPage@@QBEPAVCXTPCommandBars@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
