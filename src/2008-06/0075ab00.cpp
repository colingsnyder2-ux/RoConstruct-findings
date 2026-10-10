// roc 2008-06 0075ab00  unit: CXTPDockingPaneWindowSelect  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075ab00
//
// 0075ab00  56                   push esi
// 0075ab01  8bf1                 mov esi, ecx
// 0075ab03  6a0a                 push 0xa
// 0075ab05  8d4e08               lea ecx, [esi + 8]
// 0075ab08  c70684588600         mov dword ptr [esi], 0x865884
// 0075ab0e  e8bde9ffff           call 0x7594d0
// 0075ab13  33c0                 xor eax, eax
// 0075ab15  894628               mov dword ptr [esi + 0x28], eax
// 0075ab18  894604               mov dword ptr [esi + 4], eax
// 0075ab1b  894624               mov dword ptr [esi + 0x24], eax
// 0075ab1e  8bc6                 mov eax, esi
// 0075ab20  5e                   pop esi
// 0075ab21  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ??0CXTPDockingPaneKeyboardHook@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
