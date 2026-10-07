// roc 2012-06 009de2f0  unit: CXTPTabClientWnd  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009de2f0
//
// 009de2f0  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 009de2f6  85c0                 test eax, eax
// 009de2f8  7501                 jne 0x9de2fb
// 009de2fa  c3                   ret 
// 009de2fb  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 009de301  c3                   ret 
// library xtp-13.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetCommandBars@CXTPTabClientWnd@@UBEPAVCXTPCommandBars@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/CommandBars/XTPTabClientWnd.cpp
