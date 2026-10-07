// roc 2008-06 00794340  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00794340
//
// 00794340  56                   push esi
// 00794341  8bf1                 mov esi, ecx
// 00794343  e878ffffff           call 0x7942c0
// 00794348  85c0                 test eax, eax
// 0079434a  750d                 jne 0x794359
// 0079434c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0079434f  85c9                 test ecx, ecx
// 00794351  7406                 je 0x794359
// 00794353  5e                   pop esi
// 00794354  e9a7f2f8ff           jmp 0x723600
// 00794359  8bce                 mov ecx, esi
// 0079435b  e810ffffff           call 0x794270
// 00794360  8b80c4050000         mov eax, dword ptr [eax + 0x5c4]
// 00794366  034640               add eax, dword ptr [esi + 0x40]
// 00794369  5e                   pop esi
// 0079436a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007FrameHook.cpp (function ?GetCaptionHeight@CXTPOffice2007FrameHook@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007FrameHook.cpp
