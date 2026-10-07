// roc 2011-06 008f3390  unit: CXTCaptionButton  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3390
//
// 008f3390  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f3394  0fb7542410           movzx edx, word ptr [esp + 0x10]
// 008f3399  50                   push eax
// 008f339a  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 008f339f  52                   push edx
// 008f33a0  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f33a4  50                   push eax
// 008f33a5  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f33a9  52                   push edx
// 008f33aa  50                   push eax
// 008f33ab  e870feffff           call 0x8f3220
// 008f33b0  c21400               ret 0x14
// library xtp-15.2.1/Source\Controls\Button\XTPButton.cpp (function ?SetIcon@CXTPButton@@UAEHVCSize@@IIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Button/XTPButton.cpp
