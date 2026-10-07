// roc 2012-06 0098cd70  unit: CXTPPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098cd70
//
// 0098cd70  8b442404             mov eax, dword ptr [esp + 4]
// 0098cd74  b902000000           mov ecx, 2
// 0098cd79  8908                 mov dword ptr [eax], ecx
// 0098cd7b  894804               mov dword ptr [eax + 4], ecx
// 0098cd7e  894808               mov dword ptr [eax + 8], ecx
// 0098cd81  89480c               mov dword ptr [eax + 0xc], ecx
// 0098cd84  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ?GetCommandBarBorders@CXTPPaintManager@@UAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
