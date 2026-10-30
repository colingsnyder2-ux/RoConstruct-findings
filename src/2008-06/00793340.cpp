// from server: 100% by auto
// roc 2008-06 00793340  unit: CXTCaptionButton  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793340
//
// 00793340  8b442414             mov eax, dword ptr [esp + 0x14]
// 00793344  0fb7542410           movzx edx, word ptr [esp + 0x10]
// 00793349  50                   push eax
// 0079334a  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 0079334f  52                   push edx
// 00793350  8b542410             mov edx, dword ptr [esp + 0x10]
// 00793354  50                   push eax
// 00793355  8b442410             mov eax, dword ptr [esp + 0x10]
// 00793359  52                   push edx
// 0079335a  50                   push eax
// 0079335b  e870feffff           call 0x7931d0
// 00793360  c21400               ret 0x14
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?SetIcon@CXTButton@@UAEHVCSize@@IIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
