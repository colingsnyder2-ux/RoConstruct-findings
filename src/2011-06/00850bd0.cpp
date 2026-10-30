// roc 2011-06 00850bd0  unit: CXTPToolBar::CControlButtonExpand  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00850bd0
//
// 00850bd0  e85bffffff           call 0x850b30
// 00850bd5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00850bd9  8988fc000000         mov dword ptr [eax + 0xfc], ecx
// 00850bdf  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?CreateControlPopup@CXTPControlPopup@@SAPAV1@W4XTPControlType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
