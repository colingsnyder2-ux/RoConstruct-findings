// roc 2007-03 0066e0c0  unit: seg_00660000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066e0c0
//
// 0066e0c0  56                   push esi
// 0066e0c1  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066e0c5  56                   push esi
// 0066e0c6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066e0ca  8bc1                 mov eax, ecx
// 0066e0cc  8b5058               mov edx, dword ptr [eax + 0x58]
// 0066e0cf  8b5250               mov edx, dword ptr [edx + 0x50]
// 0066e0d2  56                   push esi
// 0066e0d3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0066e0d7  8d4858               lea ecx, [eax + 0x58]
// 0066e0da  8b4020               mov eax, dword ptr [eax + 0x20]
// 0066e0dd  56                   push esi
// 0066e0de  50                   push eax
// 0066e0df  ffd2                 call edx
// 0066e0e1  5e                   pop esi
// 0066e0e2  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnToolHitTest@CSingleWorkspace@CXTPTabClientWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
