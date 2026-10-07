// roc 2007-08 0066e230  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066e230
//
// 0066e230  8d442404             lea eax, [esp + 4]
// 0066e234  50                   push eax
// 0066e235  e896310000           call 0x6713d0
// 0066e23a  85c0                 test eax, eax
// 0066e23c  740d                 je 0x66e24b
// 0066e23e  83f8ff               cmp eax, -1
// 0066e241  7408                 je 0x66e24b
// 0066e243  b857000780           mov eax, 0x80070057
// 0066e248  c21400               ret 0x14
// 0066e24b  6828b37c00           push 0x7cb328
// 0066e250  ff15f4e97700         call dword ptr [0x77e9f4]
// 0066e256  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066e25a  8901                 mov dword ptr [ecx], eax
// 0066e25c  33c0                 xor eax, eax
// 0066e25e  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleName@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
