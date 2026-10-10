// roc 2008-06 0075aa80  unit: CXTPDockingPaneWindowSelect  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075aa80
//
// 0075aa80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0075aa84  56                   push esi
// 0075aa85  8bf1                 mov esi, ecx
// 0075aa87  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075aa8b  50                   push eax
// 0075aa8c  51                   push ecx
// 0075aa8d  8bce                 mov ecx, esi
// 0075aa8f  e83ceeffff           call 0x7598d0
// 0075aa94  85c0                 test eax, eax
// 0075aa96  7414                 je 0x75aaac
// 0075aa98  8b16                 mov edx, dword ptr [esi]
// 0075aa9a  898624010000         mov dword ptr [esi + 0x124], eax
// 0075aaa0  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 0075aaa6  6a01                 push 1
// 0075aaa8  8bce                 mov ecx, esi
// 0075aaaa  ffd0                 call eax
// 0075aaac  8bce                 mov ecx, esi
// 0075aaae  e8b561f4ff           call 0x6a0c68
// 0075aab3  5e                   pop esi
// 0075aab4  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnLButtonUp@CXTPDockingPaneWindowSelect@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
