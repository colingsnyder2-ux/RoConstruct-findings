// roc 2007-08 006321f0  unit: MyXTPCommandBars  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006321f0
//
// 006321f0  8b4154               mov eax, dword ptr [ecx + 0x54]
// 006321f3  85c0                 test eax, eax
// 006321f5  7505                 jne 0x6321fc
// 006321f7  e9d4bd0100           jmp 0x64dfd0
// 006321fc  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?GetImageManager@CXTPCommandBars@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
