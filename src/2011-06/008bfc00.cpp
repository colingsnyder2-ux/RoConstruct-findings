// roc 2011-06 008bfc00  unit: CXTPDockingPaneMiniWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bfc00
//
// 008bfc00  56                   push esi
// 008bfc01  8bf1                 mov esi, ecx
// 008bfc03  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008bfc06  8d8614010000         lea eax, [esi + 0x114]
// 008bfc0c  50                   push eax
// 008bfc0d  51                   push ecx
// 008bfc0e  ff155c1ca400         call dword ptr [0xa41c5c]
// 008bfc14  8bce                 mov ecx, esi
// 008bfc16  5e                   pop esi
// 008bfc17  e904aff4ff           jmp 0x80ab20
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnDestroy@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
