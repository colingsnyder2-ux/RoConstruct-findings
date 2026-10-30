// roc 2012-06 00a36120  unit: CXTPDockingPaneWindowSelect  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a36120
//
// 00a36120  56                   push esi
// 00a36121  6a11                 push 0x11
// 00a36123  8bf1                 mov esi, ecx
// 00a36125  ff15843ab200         call dword ptr [0xb23a84]
// 00a3612b  6685c0               test ax, ax
// 00a3612e  7c0e                 jl 0xa3613e
// 00a36130  8b06                 mov eax, dword ptr [esi]
// 00a36132  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00a36138  6a01                 push 1
// 00a3613a  8bce                 mov ecx, esi
// 00a3613c  ffd2                 call edx
// 00a3613e  8bce                 mov ecx, esi
// 00a36140  e899c5f4ff           call 0x9826de
// 00a36145  5e                   pop esi
// 00a36146  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnKeyUp@CXTPDockingPaneWindowSelect@@QAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
