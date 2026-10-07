// roc 2008-06 0075aac0  unit: CXTPDockingPaneWindowSelect  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075aac0
//
// 0075aac0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0075aac4  56                   push esi
// 0075aac5  8bf1                 mov esi, ecx
// 0075aac7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075aacb  50                   push eax
// 0075aacc  51                   push ecx
// 0075aacd  8bce                 mov ecx, esi
// 0075aacf  e8fcedffff           call 0x7598d0
// 0075aad4  85c0                 test eax, eax
// 0075aad6  7411                 je 0x75aae9
// 0075aad8  8bb628010000         mov esi, dword ptr [esi + 0x128]
// 0075aade  56                   push esi
// 0075aadf  ff15042d8000         call dword ptr [0x802d04]
// 0075aae5  5e                   pop esi
// 0075aae6  c20c00               ret 0xc
// 0075aae9  8bb62c010000         mov esi, dword ptr [esi + 0x12c]
// 0075aaef  56                   push esi
// 0075aaf0  ff15042d8000         call dword ptr [0x802d04]
// 0075aaf6  5e                   pop esi
// 0075aaf7  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnMouseMove@CXTPDockingPaneWindowSelect@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
