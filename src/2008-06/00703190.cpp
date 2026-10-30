// from server: 100% by auto
// roc 2008-06 00703190  unit: CXTPTabClientWnd  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00703190
//
// 00703190  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 00703196  85c0                 test eax, eax
// 00703198  7501                 jne 0x70319b
// 0070319a  c3                   ret 
// 0070319b  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 007031a1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetCommandBars@CXTPTabClientWnd@@UBEPAVCXTPCommandBars@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
