// roc 2012-06 00a02210  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a02210
//
// 00a02210  56                   push esi
// 00a02211  8bf1                 mov esi, ecx
// 00a02213  e8c8f60400           call 0xa518e0
// 00a02218  6a00                 push 0
// 00a0221a  6a04                 push 4
// 00a0221c  6a02                 push 2
// 00a0221e  6a02                 push 2
// 00a02220  8d4604               lea eax, [esi + 4]
// 00a02223  50                   push eax
// 00a02224  c706dcb9c100         mov dword ptr [esi], 0xc1b9dc
// 00a0222a  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a02230  c70624bac100         mov dword ptr [esi], 0xc1ba24
// 00a02236  c7462401000000       mov dword ptr [esi + 0x24], 1
// 00a0223d  c7462800000000       mov dword ptr [esi + 0x28], 0
// 00a02244  8bc6                 mov eax, esi
// 00a02246  5e                   pop esi
// 00a02247  c3                   ret 
// library xtp-13.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CAppearanceSetPropertyPageFlat@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
