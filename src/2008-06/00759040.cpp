// roc 2008-06 00759040  unit: CXTPDockingPaneWindowSelect  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00759040
//
// 00759040  8b81f8000000         mov eax, dword ptr [ecx + 0xf8]
// 00759046  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 0075904c  50                   push eax
// 0075904d  e8822f0600           call 0x7bbfd4
// 00759052  50                   push eax
// 00759053  e8ce7bf4ff           call 0x6a0c26
// 00759058  83c408               add esp, 8
// 0075905b  85c0                 test eax, eax
// 0075905d  7407                 je 0x759066
// 0075905f  8b80e8000000         mov eax, dword ptr [eax + 0xe8]
// 00759065  c3                   ret 
// 00759066  33c0                 xor eax, eax
// 00759068  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?GetMDIClient@CXTPDockingPaneWindowSelect@@ABEPAUHWND__@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
