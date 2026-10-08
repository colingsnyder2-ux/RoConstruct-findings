// roc 2012-06 00a3d650  unit: CXTPDockingPaneSplitterWnd  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3d650
//
// 00a3d650  83ec10               sub esp, 0x10
// 00a3d653  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3d657  33d2                 xor edx, edx
// 00a3d659  52                   push edx
// 00a3d65a  894168               mov dword ptr [ecx + 0x68], eax
// 00a3d65d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3d661  52                   push edx
// 00a3d662  894160               mov dword ptr [ecx + 0x60], eax
// 00a3d665  89542408             mov dword ptr [esp + 8], edx
// 00a3d669  8954240c             mov dword ptr [esp + 0xc], edx
// 00a3d66d  89542410             mov dword ptr [esp + 0x10], edx
// 00a3d671  89542414             mov dword ptr [esp + 0x14], edx
// 00a3d675  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 00a3d67b  52                   push edx
// 00a3d67c  8d44240c             lea eax, [esp + 0xc]
// 00a3d680  50                   push eax
// 00a3d681  6800000056           push 0x56000000
// 00a3d686  68581dc200           push 0xc21d58
// 00a3d68b  68b836c100           push 0xc136b8
// 00a3d690  e8f14af4ff           call 0x982186
// 00a3d695  83c410               add esp, 0x10
// 00a3d698  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneManager@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
