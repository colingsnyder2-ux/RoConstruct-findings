// from server: 100% by auto
// roc 2008-06 007609b0  unit: CXTPDockingPaneSplitterWnd  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007609b0
//
// 007609b0  83ec10               sub esp, 0x10
// 007609b3  8b442418             mov eax, dword ptr [esp + 0x18]
// 007609b7  33d2                 xor edx, edx
// 007609b9  52                   push edx
// 007609ba  894168               mov dword ptr [ecx + 0x68], eax
// 007609bd  8b442418             mov eax, dword ptr [esp + 0x18]
// 007609c1  52                   push edx
// 007609c2  894160               mov dword ptr [ecx + 0x60], eax
// 007609c5  89542408             mov dword ptr [esp + 8], edx
// 007609c9  8954240c             mov dword ptr [esp + 0xc], edx
// 007609cd  89542410             mov dword ptr [esp + 0x10], edx
// 007609d1  89542414             mov dword ptr [esp + 0x14], edx
// 007609d5  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 007609db  52                   push edx
// 007609dc  8d44240c             lea eax, [esp + 0xc]
// 007609e0  50                   push eax
// 007609e1  6800000056           push 0x56000000
// 007609e6  6820658600           push 0x866520
// 007609eb  68b86b8500           push 0x856bb8
// 007609f0  e8fdfcf3ff           call 0x6a06f2
// 007609f5  83c410               add esp, 0x10
// 007609f8  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneManager@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
