// roc 2010-06 007ef380  unit: CXTPToolBar::CControlButtonExpand  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ef380
//
// 007ef380  e85bffffff           call 0x7ef2e0
// 007ef385  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007ef389  8988fc000000         mov dword ptr [eax + 0xfc], ecx
// 007ef38f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlPopup.cpp (function ?CreateControlPopup@CXTPControlPopup@@SAPAV1@W4XTPControlType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopup.cpp
