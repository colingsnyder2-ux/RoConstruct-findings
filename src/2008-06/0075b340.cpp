// roc 2008-06 0075b340  unit: CXTPDockingPaneMiniWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075b340
//
// 0075b340  56                   push esi
// 0075b341  8bf1                 mov esi, ecx
// 0075b343  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075b346  8d8614010000         lea eax, [esi + 0x114]
// 0075b34c  50                   push eax
// 0075b34d  51                   push ecx
// 0075b34e  ff15342e8000         call dword ptr [0x802e34]
// 0075b354  8bce                 mov ecx, esi
// 0075b356  5e                   pop esi
// 0075b357  e9205df4ff           jmp 0x6a107c
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnDestroy@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
