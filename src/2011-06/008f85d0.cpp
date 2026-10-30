// roc 2011-06 008f85d0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f85d0
//
// 008f85d0  56                   push esi
// 008f85d1  8bf1                 mov esi, ecx
// 008f85d3  e878ffffff           call 0x8f8550
// 008f85d8  85c0                 test eax, eax
// 008f85da  750d                 jne 0x8f85e9
// 008f85dc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008f85df  85c9                 test ecx, ecx
// 008f85e1  7406                 je 0x8f85e9
// 008f85e3  5e                   pop esi
// 008f85e4  e997eefaff           jmp 0x8a7480
// 008f85e9  8bce                 mov ecx, esi
// 008f85eb  e810ffffff           call 0x8f8500
// 008f85f0  8b80c4050000         mov eax, dword ptr [eax + 0x5c4]
// 008f85f6  034640               add eax, dword ptr [esi + 0x40]
// 008f85f9  5e                   pop esi
// 008f85fa  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetCaptionHeight@CXTPOffice2007FrameHook@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
