// roc 2012-06 009c90a0  unit: CXTPToolBar::CControlButtonExpand  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c90a0
//
// 009c90a0  e85bffffff           call 0x9c9000
// 009c90a5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c90a9  8988fc000000         mov dword ptr [eax + 0xfc], ecx
// 009c90af  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?CreateControlPopup@CXTPControlPopup@@SAPAV1@W4XTPControlType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
