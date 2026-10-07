// roc 2011-06 0082a250  unit: MyXTPCommandBars  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082a250
//
// 0082a250  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0082a253  85c0                 test eax, eax
// 0082a255  7505                 jne 0x82a25c
// 0082a257  e9b4beffff           jmp 0x826110
// 0082a25c  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?GetImageManager@CXTPCommandBars@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
