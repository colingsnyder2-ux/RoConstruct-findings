// roc 2008-06 00759400  unit: CXTPDockingPaneWindowSelect  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00759400
//
// 00759400  56                   push esi
// 00759401  6a11                 push 0x11
// 00759403  8bf1                 mov esi, ecx
// 00759405  ff15a42d8000         call dword ptr [0x802da4]
// 0075940b  6685c0               test ax, ax
// 0075940e  7c0e                 jl 0x75941e
// 00759410  8b06                 mov eax, dword ptr [esi]
// 00759412  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00759418  6a01                 push 1
// 0075941a  8bce                 mov ecx, esi
// 0075941c  ffd2                 call edx
// 0075941e  8bce                 mov ecx, esi
// 00759420  e84378f4ff           call 0x6a0c68
// 00759425  5e                   pop esi
// 00759426  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnKeyUp@CXTPDockingPaneWindowSelect@@QAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
