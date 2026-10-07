// roc 2008-06 006a2f60  unit: MyXTPCommandBars  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2f60
//
// 006a2f60  8b4150               mov eax, dword ptr [ecx + 0x50]
// 006a2f63  85c0                 test eax, eax
// 006a2f65  7516                 jne 0x6a2f7d
// 006a2f67  390560e09700         cmp dword ptr [0x97e060], eax
// 006a2f6d  7509                 jne 0x6a2f78
// 006a2f6f  50                   push eax
// 006a2f70  e82bc10000           call 0x6af0a0
// 006a2f75  83c404               add esp, 4
// 006a2f78  a160e09700           mov eax, dword ptr [0x97e060]
// 006a2f7d  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetPaintManager@CXTPCommandBars@@QBEPAVCXTPPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
