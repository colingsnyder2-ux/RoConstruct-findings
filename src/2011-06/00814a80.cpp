// roc 2011-06 00814a80  unit: CXTPPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00814a80
//
// 00814a80  8b442404             mov eax, dword ptr [esp + 4]
// 00814a84  b902000000           mov ecx, 2
// 00814a89  8908                 mov dword ptr [eax], ecx
// 00814a8b  894804               mov dword ptr [eax + 4], ecx
// 00814a8e  894808               mov dword ptr [eax + 8], ecx
// 00814a91  89480c               mov dword ptr [eax + 0xc], ecx
// 00814a94  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?GetCommandBarBorders@CXTPPaintManager@@UAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
