// from server: 100% by auto
// roc 2011-06 0082a230  unit: MyXTPCommandBars  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082a230
//
// 0082a230  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0082a233  85c0                 test eax, eax
// 0082a235  7516                 jne 0x82a24d
// 0082a237  39059881d100         cmp dword ptr [0xd18198], eax
// 0082a23d  7509                 jne 0x82a248
// 0082a23f  50                   push eax
// 0082a240  e83b63feff           call 0x810580
// 0082a245  83c404               add esp, 4
// 0082a248  a19881d100           mov eax, dword ptr [0xd18198]
// 0082a24d  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?GetPaintManager@CXTPCommandBars@@QBEPAVCXTPPaintManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
