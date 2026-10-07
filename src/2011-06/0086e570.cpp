// roc 2011-06 0086e570  unit: CXTPDockingPane  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e570
//
// 0086e570  8d442404             lea eax, [esp + 4]
// 0086e574  50                   push eax
// 0086e575  e8b62dfeff           call 0x851330
// 0086e57a  85c0                 test eax, eax
// 0086e57c  7408                 je 0x86e586
// 0086e57e  b857000780           mov eax, 0x80070057
// 0086e583  c21400               ret 0x14
// 0086e586  6874c3ac00           push 0xacc374
// 0086e58b  ff15bc0aa400         call dword ptr [0xa40abc]
// 0086e591  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0086e595  8901                 mov dword ptr [ecx], eax
// 0086e597  33c0                 xor eax, eax
// 0086e599  c21400               ret 0x14
// library xtp-15.2.1/Source\DockingPane\XTPDockingPane.cpp (function ?GetAccessibleDefaultAction@CXTPDockingPane@@MAEJUtagVARIANT@@PAPA_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPane.cpp
