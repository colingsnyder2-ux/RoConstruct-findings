// roc 2011-06 008c1c80  unit: CXTPDockingPane  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1c80
//
// 008c1c80  56                   push esi
// 008c1c81  8bf1                 mov esi, ecx
// 008c1c83  8b06                 mov eax, dword ptr [esi]
// 008c1c85  8b5020               mov edx, dword ptr [eax + 0x20]
// 008c1c88  ffd2                 call edx
// 008c1c8a  85c0                 test eax, eax
// 008c1c8c  7414                 je 0x8c1ca2
// 008c1c8e  8b06                 mov eax, dword ptr [esi]
// 008c1c90  8b5020               mov edx, dword ptr [eax + 0x20]
// 008c1c93  6a00                 push 0
// 008c1c95  6a00                 push 0
// 008c1c97  8bce                 mov ecx, esi
// 008c1c99  ffd2                 call edx
// 008c1c9b  50                   push eax
// 008c1c9c  ff15ec19a400         call dword ptr [0xa419ec]
// 008c1ca2  5e                   pop esi
// 008c1ca3  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBase.cpp (function ?RedrawPane@CXTPDockingPaneBase@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBase.cpp
