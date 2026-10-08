// from server: 100% by auto
// roc 2008-06 00701500  unit: CXTPTabClientWnd::CSingleWorkspace  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701500
//
// 00701500  56                   push esi
// 00701501  8b742410             mov esi, dword ptr [esp + 0x10]
// 00701505  56                   push esi
// 00701506  8b742410             mov esi, dword ptr [esp + 0x10]
// 0070150a  8bc1                 mov eax, ecx
// 0070150c  8b5058               mov edx, dword ptr [eax + 0x58]
// 0070150f  8b5250               mov edx, dword ptr [edx + 0x50]
// 00701512  56                   push esi
// 00701513  8b742410             mov esi, dword ptr [esp + 0x10]
// 00701517  8d4858               lea ecx, [eax + 0x58]
// 0070151a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0070151d  56                   push esi
// 0070151e  50                   push eax
// 0070151f  ffd2                 call edx
// 00701521  5e                   pop esi
// 00701522  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnToolHitTest@CSingleWorkspace@CXTPTabClientWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
