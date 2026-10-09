// roc 2007-03 006c6c80  unit: seg_006c0000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c6c80
//
// 006c6c80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c6c84  56                   push esi
// 006c6c85  8bf1                 mov esi, ecx
// 006c6c87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c6c8b  50                   push eax
// 006c6c8c  51                   push ecx
// 006c6c8d  8bce                 mov ecx, esi
// 006c6c8f  e83ceeffff           call 0x6c5ad0
// 006c6c94  85c0                 test eax, eax
// 006c6c96  7411                 je 0x6c6ca9
// 006c6c98  8bb614010000         mov esi, dword ptr [esi + 0x114]
// 006c6c9e  56                   push esi
// 006c6c9f  ff15d0ed7700         call dword ptr [0x77edd0]
// 006c6ca5  5e                   pop esi
// 006c6ca6  c20c00               ret 0xc
// 006c6ca9  8bb618010000         mov esi, dword ptr [esi + 0x118]
// 006c6caf  56                   push esi
// 006c6cb0  ff15d0ed7700         call dword ptr [0x77edd0]
// 006c6cb6  5e                   pop esi
// 006c6cb7  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnMouseMove@CXTPDockingPaneWindowSelect@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
