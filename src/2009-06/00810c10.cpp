// roc 2009-06 00810c10  unit: CXTPScrollBase  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00810c10
//
// 00810c10  56                   push esi
// 00810c11  8bf1                 mov esi, ecx
// 00810c13  e878ffffff           call 0x810b90
// 00810c18  85c0                 test eax, eax
// 00810c1a  750d                 jne 0x810c29
// 00810c1c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00810c1f  85c9                 test ecx, ecx
// 00810c21  7406                 je 0x810c29
// 00810c23  5e                   pop esi
// 00810c24  e96783faff           jmp 0x7b8f90
// 00810c29  8bce                 mov ecx, esi
// 00810c2b  e810ffffff           call 0x810b40
// 00810c30  8b80c4050000         mov eax, dword ptr [eax + 0x5c4]
// 00810c36  034640               add eax, dword ptr [esi + 0x40]
// 00810c39  5e                   pop esi
// 00810c3a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetCaptionHeight@CXTPOffice2007FrameHook@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
