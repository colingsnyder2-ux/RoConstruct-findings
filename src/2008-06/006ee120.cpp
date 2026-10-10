// roc 2008-06 006ee120  unit: CXTPCustomizeCommandsPage  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee120
//
// 006ee120  838160010000ff       add dword ptr [ecx + 0x160], -1
// 006ee127  7517                 jne 0x6ee140
// 006ee129  f681e800000002       test byte ptr [ecx + 0xe8], 2
// 006ee130  740e                 je 0x6ee140
// 006ee132  8b01                 mov eax, dword ptr [ecx]
// 006ee134  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 006ee13a  6a01                 push 1
// 006ee13c  6a00                 push 0
// 006ee13e  ffd2                 call edx
// 006ee140  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPPopupBar.cpp (function ?UnlockRedraw@CXTPCommandBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp
