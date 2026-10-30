// roc 2007-03 006c7540  unit: seg_006c0000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c7540
//
// 006c7540  56                   push esi
// 006c7541  8bf1                 mov esi, ecx
// 006c7543  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006c7546  8d8600010000         lea eax, [esi + 0x100]
// 006c754c  50                   push eax
// 006c754d  51                   push ecx
// 006c754e  ff155ced7700         call dword ptr [0x77ed5c]
// 006c7554  8bce                 mov ecx, esi
// 006c7556  5e                   pop esi
// 006c7557  e95a78f5ff           jmp 0x61edb6
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnDestroy@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
