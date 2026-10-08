// from server: 100% by auto
// roc 2007-08 00689840  unit: CXTPTabClientWnd::CSingleWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689840
//
// 00689840  56                   push esi
// 00689841  8b742410             mov esi, dword ptr [esp + 0x10]
// 00689845  56                   push esi
// 00689846  8b742410             mov esi, dword ptr [esp + 0x10]
// 0068984a  8bc1                 mov eax, ecx
// 0068984c  8b5058               mov edx, dword ptr [eax + 0x58]
// 0068984f  8b5250               mov edx, dword ptr [edx + 0x50]
// 00689852  56                   push esi
// 00689853  8b742410             mov esi, dword ptr [esp + 0x10]
// 00689857  8d4858               lea ecx, [eax + 0x58]
// 0068985a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0068985d  56                   push esi
// 0068985e  50                   push eax
// 0068985f  ffd2                 call edx
// 00689861  5e                   pop esi
// 00689862  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnToolHitTest@CSingleWorkspace@CXTPTabClientWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
