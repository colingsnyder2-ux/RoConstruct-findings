// from server: 100% by auto
// roc 2007-08 00715a00  unit: CXTCaptionButton  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715a00
//
// 00715a00  8b442414             mov eax, dword ptr [esp + 0x14]
// 00715a04  0fb7542410           movzx edx, word ptr [esp + 0x10]
// 00715a09  50                   push eax
// 00715a0a  0fb7442410           movzx eax, word ptr [esp + 0x10]
// 00715a0f  52                   push edx
// 00715a10  8b542410             mov edx, dword ptr [esp + 0x10]
// 00715a14  50                   push eax
// 00715a15  8b442410             mov eax, dword ptr [esp + 0x10]
// 00715a19  52                   push edx
// 00715a1a  50                   push eax
// 00715a1b  e890feffff           call 0x7158b0
// 00715a20  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?SetIcon@CXTButton@@UAEHVCSize@@IIH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
