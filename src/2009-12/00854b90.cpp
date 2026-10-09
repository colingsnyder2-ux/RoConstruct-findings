// roc 2009-12 00854b90  unit: CXTPTabClientWnd::CSingleWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854b90
//
// 00854b90  56                   push esi
// 00854b91  8b742410             mov esi, dword ptr [esp + 0x10]
// 00854b95  56                   push esi
// 00854b96  8b742410             mov esi, dword ptr [esp + 0x10]
// 00854b9a  8bc1                 mov eax, ecx
// 00854b9c  8b5058               mov edx, dword ptr [eax + 0x58]
// 00854b9f  8b5250               mov edx, dword ptr [edx + 0x50]
// 00854ba2  56                   push esi
// 00854ba3  8b742410             mov esi, dword ptr [esp + 0x10]
// 00854ba7  8d4858               lea ecx, [eax + 0x58]
// 00854baa  8b4020               mov eax, dword ptr [eax + 0x20]
// 00854bad  56                   push esi
// 00854bae  50                   push eax
// 00854baf  ffd2                 call edx
// 00854bb1  5e                   pop esi
// 00854bb2  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnToolHitTest@CSingleWorkspace@CXTPTabClientWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
