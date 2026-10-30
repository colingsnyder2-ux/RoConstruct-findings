// roc 2009-12 008eb7b0  unit: CXTPScrollBase  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eb7b0
//
// 008eb7b0  56                   push esi
// 008eb7b1  8bf1                 mov esi, ecx
// 008eb7b3  e878ffffff           call 0x8eb730
// 008eb7b8  85c0                 test eax, eax
// 008eb7ba  750d                 jne 0x8eb7c9
// 008eb7bc  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 008eb7bf  85c9                 test ecx, ecx
// 008eb7c1  7406                 je 0x8eb7c9
// 008eb7c3  5e                   pop esi
// 008eb7c4  e9e7a9faff           jmp 0x8961b0
// 008eb7c9  8bce                 mov ecx, esi
// 008eb7cb  e810ffffff           call 0x8eb6e0
// 008eb7d0  8b80c4050000         mov eax, dword ptr [eax + 0x5c4]
// 008eb7d6  034640               add eax, dword ptr [esi + 0x40]
// 008eb7d9  5e                   pop esi
// 008eb7da  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetCaptionHeight@CXTPOffice2007FrameHook@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
