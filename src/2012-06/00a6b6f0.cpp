// roc 2012-06 00a6b6f0  unit: CXTCaptionButton  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6b6f0
//
// 00a6b6f0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a6b6f4  0fb7542410           movzx edx, word ptr [esp + 0x10]
// 00a6b6f9  50                   push eax
// 00a6b6fa  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 00a6b6ff  52                   push edx
// 00a6b700  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a6b704  50                   push eax
// 00a6b705  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a6b709  52                   push edx
// 00a6b70a  50                   push eax
// 00a6b70b  e870feffff           call 0xa6b580
// 00a6b710  c21400               ret 0x14
// library xtp-15.2.1/Source\Controls\Button\XTPButton.cpp (function ?SetIcon@CXTPButton@@UAEHVCSize@@IIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Button/XTPButton.cpp
