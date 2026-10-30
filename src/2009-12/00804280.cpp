// roc 2009-12 00804280  unit: CXTPCommandBar::CCommandBarCmdUI  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804280
//
// 00804280  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00804283  85c9                 test ecx, ecx
// 00804285  7405                 je 0x80428c
// 00804287  e9a424ffff           jmp 0x7f6730
// 0080428c  c20400               ret 4
// copied from an identical function in another client (function ?SetText@CCommandBarCmdUI@CXTPCommandBar@@UAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp