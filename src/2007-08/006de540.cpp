// roc 2007-08 006de540  unit: CXTPDockingPaneMiniWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006de540
//
// 006de540  56                   push esi
// 006de541  8bf1                 mov esi, ecx
// 006de543  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006de546  8d8600010000         lea eax, [esi + 0x100]
// 006de54c  50                   push eax
// 006de54d  51                   push ecx
// 006de54e  ff15d4ed7700         call dword ptr [0x77edd4]
// 006de554  8bce                 mov ecx, esi
// 006de556  5e                   pop esi
// 006de557  e9f023f5ff           jmp 0x63094c
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnDestroy@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
