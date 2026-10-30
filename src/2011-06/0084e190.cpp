// from server: 100% by auto
// roc 2011-06 0084e190  unit: CXTPDockingPaneManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084e190
//
// 0084e190  8d442404             lea eax, [esp + 4]
// 0084e194  50                   push eax
// 0084e195  e896310000           call 0x851330
// 0084e19a  85c0                 test eax, eax
// 0084e19c  740d                 je 0x84e1ab
// 0084e19e  83f8ff               cmp eax, -1
// 0084e1a1  7408                 je 0x84e1ab
// 0084e1a3  b857000780           mov eax, 0x80070057
// 0084e1a8  c21400               ret 0x14
// 0084e1ab  68087fac00           push 0xac7f08
// 0084e1b0  ff15bc0aa400         call dword ptr [0xa40abc]
// 0084e1b6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084e1ba  8901                 mov dword ptr [ecx], eax
// 0084e1bc  33c0                 xor eax, eax
// 0084e1be  c21400               ret 0x14
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleName@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
