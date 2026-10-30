// from server: 100% by auto
// roc 2008-06 006b34d0  unit: CXTPPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b34d0
//
// 006b34d0  8b442404             mov eax, dword ptr [esp + 4]
// 006b34d4  b902000000           mov ecx, 2
// 006b34d9  8908                 mov dword ptr [eax], ecx
// 006b34db  894804               mov dword ptr [eax + 4], ecx
// 006b34de  894808               mov dword ptr [eax + 8], ecx
// 006b34e1  89480c               mov dword ptr [eax + 0xc], ecx
// 006b34e4  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?GetCommandBarBorders@CXTPPaintManager@@UAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
