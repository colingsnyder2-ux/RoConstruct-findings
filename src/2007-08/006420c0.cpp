// from server: 100% by auto
// roc 2007-08 006420c0  unit: CXTPPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006420c0
//
// 006420c0  8b442404             mov eax, dword ptr [esp + 4]
// 006420c4  b902000000           mov ecx, 2
// 006420c9  8908                 mov dword ptr [eax], ecx
// 006420cb  894804               mov dword ptr [eax + 4], ecx
// 006420ce  894808               mov dword ptr [eax + 8], ecx
// 006420d1  89480c               mov dword ptr [eax + 0xc], ecx
// 006420d4  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?GetCommandBarBorders@CXTPPaintManager@@UAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
