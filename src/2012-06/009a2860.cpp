// from server: 100% by auto
// roc 2012-06 009a2860  unit: MyXTPCommandBars  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2860
//
// 009a2860  8b4150               mov eax, dword ptr [ecx + 0x50]
// 009a2863  85c0                 test eax, eax
// 009a2865  7516                 jne 0x9a287d
// 009a2867  39050893e500         cmp dword ptr [0xe59308], eax
// 009a286d  7509                 jne 0x9a2878
// 009a286f  50                   push eax
// 009a2870  e8fb5ffeff           call 0x988870
// 009a2875  83c404               add esp, 4
// 009a2878  a10893e500           mov eax, dword ptr [0xe59308]
// 009a287d  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?GetPaintManager@CXTPCommandBars@@QBEPAVCXTPPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
