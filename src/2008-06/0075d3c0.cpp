// roc 2008-06 0075d3c0  unit: CXTPDockingPane  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d3c0
//
// 0075d3c0  56                   push esi
// 0075d3c1  8bf1                 mov esi, ecx
// 0075d3c3  8b06                 mov eax, dword ptr [esi]
// 0075d3c5  8b5020               mov edx, dword ptr [eax + 0x20]
// 0075d3c8  ffd2                 call edx
// 0075d3ca  85c0                 test eax, eax
// 0075d3cc  7414                 je 0x75d3e2
// 0075d3ce  8b06                 mov eax, dword ptr [esi]
// 0075d3d0  8b5020               mov edx, dword ptr [eax + 0x20]
// 0075d3d3  6a00                 push 0
// 0075d3d5  6a00                 push 0
// 0075d3d7  8bce                 mov ecx, esi
// 0075d3d9  ffd2                 call edx
// 0075d3db  50                   push eax
// 0075d3dc  ff15182e8000         call dword ptr [0x802e18]
// 0075d3e2  5e                   pop esi
// 0075d3e3  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?RedrawPane@CXTPDockingPaneBase@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
