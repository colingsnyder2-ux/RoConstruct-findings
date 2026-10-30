// roc 2011-06 00864100  unit: CXTPTabClientWnd::CSingleWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864100
//
// 00864100  56                   push esi
// 00864101  8b742410             mov esi, dword ptr [esp + 0x10]
// 00864105  56                   push esi
// 00864106  8b742410             mov esi, dword ptr [esp + 0x10]
// 0086410a  8bc1                 mov eax, ecx
// 0086410c  8b5058               mov edx, dword ptr [eax + 0x58]
// 0086410f  8b5250               mov edx, dword ptr [edx + 0x50]
// 00864112  56                   push esi
// 00864113  8b742410             mov esi, dword ptr [esp + 0x10]
// 00864117  8d4858               lea ecx, [eax + 0x58]
// 0086411a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0086411d  56                   push esi
// 0086411e  50                   push eax
// 0086411f  ffd2                 call edx
// 00864121  5e                   pop esi
// 00864122  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnToolHitTest@CSingleWorkspace@CXTPTabClientWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
