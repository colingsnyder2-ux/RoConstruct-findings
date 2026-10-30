// roc 2012-06 00a708e0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a708e0
//
// 00a708e0  56                   push esi
// 00a708e1  8bf1                 mov esi, ecx
// 00a708e3  e878ffffff           call 0xa70860
// 00a708e8  85c0                 test eax, eax
// 00a708ea  750d                 jne 0xa708f9
// 00a708ec  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a708ef  85c9                 test ecx, ecx
// 00a708f1  7406                 je 0xa708f9
// 00a708f3  5e                   pop esi
// 00a708f4  e937f0faff           jmp 0xa1f930
// 00a708f9  8bce                 mov ecx, esi
// 00a708fb  e810ffffff           call 0xa70810
// 00a70900  8b80c4050000         mov eax, dword ptr [eax + 0x5c4]
// 00a70906  034640               add eax, dword ptr [esi + 0x40]
// 00a70909  5e                   pop esi
// 00a7090a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetCaptionHeight@CXTPOffice2007FrameHook@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
