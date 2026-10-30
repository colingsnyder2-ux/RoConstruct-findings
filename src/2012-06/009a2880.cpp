// from server: 100% by auto
// roc 2012-06 009a2880  unit: MyXTPCommandBars  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2880
//
// 009a2880  8b4154               mov eax, dword ptr [ecx + 0x54]
// 009a2883  85c0                 test eax, eax
// 009a2885  7505                 jne 0x9a288c
// 009a2887  e9b4beffff           jmp 0x99e740
// 009a288c  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?GetImageManager@CXTPCommandBars@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
