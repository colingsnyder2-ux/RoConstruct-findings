// roc 2010-06 00808c10  unit: CXTPTabClientWnd::CSingleWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808c10
//
// 00808c10  56                   push esi
// 00808c11  8b742410             mov esi, dword ptr [esp + 0x10]
// 00808c15  56                   push esi
// 00808c16  8b742410             mov esi, dword ptr [esp + 0x10]
// 00808c1a  8bc1                 mov eax, ecx
// 00808c1c  8b5058               mov edx, dword ptr [eax + 0x58]
// 00808c1f  8b5250               mov edx, dword ptr [edx + 0x50]
// 00808c22  56                   push esi
// 00808c23  8b742410             mov esi, dword ptr [esp + 0x10]
// 00808c27  8d4858               lea ecx, [eax + 0x58]
// 00808c2a  8b4020               mov eax, dword ptr [eax + 0x20]
// 00808c2d  56                   push esi
// 00808c2e  50                   push eax
// 00808c2f  ffd2                 call edx
// 00808c31  5e                   pop esi
// 00808c32  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnToolHitTest@CSingleWorkspace@CXTPTabClientWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
