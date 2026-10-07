// roc 2007-08 006ddc60  unit: CXTPDockingPaneWindowSelect  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ddc60
//
// 006ddc60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ddc64  56                   push esi
// 006ddc65  8bf1                 mov esi, ecx
// 006ddc67  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ddc6b  50                   push eax
// 006ddc6c  51                   push ecx
// 006ddc6d  8bce                 mov ecx, esi
// 006ddc6f  e87ceeffff           call 0x6dcaf0
// 006ddc74  85c0                 test eax, eax
// 006ddc76  7411                 je 0x6ddc89
// 006ddc78  8bb614010000         mov esi, dword ptr [esi + 0x114]
// 006ddc7e  56                   push esi
// 006ddc7f  ff1560ed7700         call dword ptr [0x77ed60]
// 006ddc85  5e                   pop esi
// 006ddc86  c20c00               ret 0xc
// 006ddc89  8bb618010000         mov esi, dword ptr [esi + 0x118]
// 006ddc8f  56                   push esi
// 006ddc90  ff1560ed7700         call dword ptr [0x77ed60]
// 006ddc96  5e                   pop esi
// 006ddc97  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnMouseMove@CXTPDockingPaneWindowSelect@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
