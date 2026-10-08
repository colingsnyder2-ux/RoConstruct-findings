// from server: 100% by auto
// roc 2008-06 006a2f80  unit: MyXTPCommandBars  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2f80
//
// 006a2f80  8b4154               mov eax, dword ptr [ecx + 0x54]
// 006a2f83  85c0                 test eax, eax
// 006a2f85  7505                 jne 0x6a2f8c
// 006a2f87  e9f4de0100           jmp 0x6c0e80
// 006a2f8c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetImageManager@CXTPCommandBars@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
