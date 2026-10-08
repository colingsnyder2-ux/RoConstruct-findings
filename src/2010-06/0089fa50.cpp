// roc 2010-06 0089fa50  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089fa50
//
// 0089fa50  56                   push esi
// 0089fa51  8bf1                 mov esi, ecx
// 0089fa53  e878ffffff           call 0x89f9d0
// 0089fa58  85c0                 test eax, eax
// 0089fa5a  750d                 jne 0x89fa69
// 0089fa5c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0089fa5f  85c9                 test ecx, ecx
// 0089fa61  7406                 je 0x89fa69
// 0089fa63  5e                   pop esi
// 0089fa64  e9d7a8faff           jmp 0x84a340
// 0089fa69  8bce                 mov ecx, esi
// 0089fa6b  e810ffffff           call 0x89f980
// 0089fa70  8b80c4050000         mov eax, dword ptr [eax + 0x5c4]
// 0089fa76  034640               add eax, dword ptr [esi + 0x40]
// 0089fa79  5e                   pop esi
// 0089fa7a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetCaptionHeight@CXTPOffice2007FrameHook@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
