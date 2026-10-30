// roc 2012-06 009dc4f0  unit: CXTPTabClientWnd::CSingleWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc4f0
//
// 009dc4f0  56                   push esi
// 009dc4f1  8b742410             mov esi, dword ptr [esp + 0x10]
// 009dc4f5  56                   push esi
// 009dc4f6  8b742410             mov esi, dword ptr [esp + 0x10]
// 009dc4fa  8bc1                 mov eax, ecx
// 009dc4fc  8b5058               mov edx, dword ptr [eax + 0x58]
// 009dc4ff  8b5250               mov edx, dword ptr [edx + 0x50]
// 009dc502  56                   push esi
// 009dc503  8b742410             mov esi, dword ptr [esp + 0x10]
// 009dc507  8d4858               lea ecx, [eax + 0x58]
// 009dc50a  8b4020               mov eax, dword ptr [eax + 0x20]
// 009dc50d  56                   push esi
// 009dc50e  50                   push eax
// 009dc50f  ffd2                 call edx
// 009dc511  5e                   pop esi
// 009dc512  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnToolHitTest@CSingleWorkspace@CXTPTabClientWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
