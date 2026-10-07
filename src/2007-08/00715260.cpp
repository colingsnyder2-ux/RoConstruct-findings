// roc 2007-08 00715260  unit: CXTCaptionButton  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715260
//
// 00715260  56                   push esi
// 00715261  8bf1                 mov esi, ecx
// 00715263  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 0071526a  741c                 je 0x715288
// 0071526c  ff15d4ec7700         call dword ptr [0x77ecd4]
// 00715272  50                   push eax
// 00715273  e848aff1ff           call 0x6301c0
// 00715278  2bc6                 sub eax, esi
// 0071527a  f7d8                 neg eax
// 0071527c  1bc0                 sbb eax, eax
// 0071527e  83e0f0               and eax, 0xfffffff0
// 00715281  0510200000           add eax, 0x2010
// 00715286  5e                   pop esi
// 00715287  c3                   ret 
// 00715288  5e                   pop esi
// 00715289  e9b0aff1ff           jmp 0x63023e
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?OnGetDlgCode@CXTButton@@IAEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
