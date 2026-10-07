// roc 2007-08 006e0460  unit: CXTPDockingPane  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0460
//
// 006e0460  56                   push esi
// 006e0461  8bf1                 mov esi, ecx
// 006e0463  8b06                 mov eax, dword ptr [esi]
// 006e0465  8b5020               mov edx, dword ptr [eax + 0x20]
// 006e0468  ffd2                 call edx
// 006e046a  85c0                 test eax, eax
// 006e046c  7414                 je 0x6e0482
// 006e046e  8b06                 mov eax, dword ptr [esi]
// 006e0470  8b5020               mov edx, dword ptr [eax + 0x20]
// 006e0473  6a00                 push 0
// 006e0475  6a00                 push 0
// 006e0477  8bce                 mov ecx, esi
// 006e0479  ffd2                 call edx
// 006e047b  50                   push eax
// 006e047c  ff15dcec7700         call dword ptr [0x77ecdc]
// 006e0482  5e                   pop esi
// 006e0483  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBase.cpp (function ?RedrawPane@CXTPDockingPaneBase@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBase.cpp
