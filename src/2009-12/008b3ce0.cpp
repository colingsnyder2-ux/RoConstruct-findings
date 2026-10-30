// roc 2009-12 008b3ce0  unit: CXTPDockingPaneSplitterWnd  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b3ce0
//
// 008b3ce0  83ec10               sub esp, 0x10
// 008b3ce3  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b3ce7  33d2                 xor edx, edx
// 008b3ce9  52                   push edx
// 008b3cea  894168               mov dword ptr [ecx + 0x68], eax
// 008b3ced  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b3cf1  52                   push edx
// 008b3cf2  894160               mov dword ptr [ecx + 0x60], eax
// 008b3cf5  89542408             mov dword ptr [esp + 8], edx
// 008b3cf9  8954240c             mov dword ptr [esp + 0xc], edx
// 008b3cfd  89542410             mov dword ptr [esp + 0x10], edx
// 008b3d01  89542414             mov dword ptr [esp + 0x14], edx
// 008b3d05  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 008b3d0b  52                   push edx
// 008b3d0c  8d44240c             lea eax, [esp + 0xc]
// 008b3d10  50                   push eax
// 008b3d11  6800000056           push 0x56000000
// 008b3d16  68c879a000           push 0xa079c8
// 008b3d1b  68b8809f00           push 0x9f80b8
// 008b3d20  e8a7fbf3ff           call 0x7f38cc
// 008b3d25  83c410               add esp, 0x10
// 008b3d28  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneManager@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
