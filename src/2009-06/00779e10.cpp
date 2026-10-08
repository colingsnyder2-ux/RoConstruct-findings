// roc 2009-06 00779e10  unit: CXTPTabClientWnd::CSingleWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00779e10
//
// 00779e10  56                   push esi
// 00779e11  8b742410             mov esi, dword ptr [esp + 0x10]
// 00779e15  56                   push esi
// 00779e16  8b742410             mov esi, dword ptr [esp + 0x10]
// 00779e1a  8bc1                 mov eax, ecx
// 00779e1c  8b5058               mov edx, dword ptr [eax + 0x58]
// 00779e1f  8b5250               mov edx, dword ptr [edx + 0x50]
// 00779e22  56                   push esi
// 00779e23  8b742410             mov esi, dword ptr [esp + 0x10]
// 00779e27  8d4858               lea ecx, [eax + 0x58]
// 00779e2a  8b4020               mov eax, dword ptr [eax + 0x20]
// 00779e2d  56                   push esi
// 00779e2e  50                   push eax
// 00779e2f  ffd2                 call edx
// 00779e31  5e                   pop esi
// 00779e32  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnToolHitTest@CSingleWorkspace@CXTPTabClientWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
