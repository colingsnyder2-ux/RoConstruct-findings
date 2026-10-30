// roc 2010-06 00867dd0  unit: CXTPDockingPaneSplitterWnd  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00867dd0
//
// 00867dd0  83ec10               sub esp, 0x10
// 00867dd3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00867dd7  33d2                 xor edx, edx
// 00867dd9  52                   push edx
// 00867dda  894168               mov dword ptr [ecx + 0x68], eax
// 00867ddd  8b442418             mov eax, dword ptr [esp + 0x18]
// 00867de1  52                   push edx
// 00867de2  894160               mov dword ptr [ecx + 0x60], eax
// 00867de5  89542408             mov dword ptr [esp + 8], edx
// 00867de9  8954240c             mov dword ptr [esp + 0xc], edx
// 00867ded  89542410             mov dword ptr [esp + 0x10], edx
// 00867df1  89542414             mov dword ptr [esp + 0x14], edx
// 00867df5  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 00867dfb  52                   push edx
// 00867dfc  8d44240c             lea eax, [esp + 0xc]
// 00867e00  50                   push eax
// 00867e01  6800000056           push 0x56000000
// 00867e06  68b0bca600           push 0xa6bcb0
// 00867e0b  6878c3a500           push 0xa5c378
// 00867e10  e8f7fbf3ff           call 0x7a7a0c
// 00867e15  83c410               add esp, 0x10
// 00867e18  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneManager@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
