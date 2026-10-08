// roc 2009-06 007d91b0  unit: CXTPDockingPaneSplitterWnd  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d91b0
//
// 007d91b0  83ec10               sub esp, 0x10
// 007d91b3  8b442418             mov eax, dword ptr [esp + 0x18]
// 007d91b7  33d2                 xor edx, edx
// 007d91b9  52                   push edx
// 007d91ba  894168               mov dword ptr [ecx + 0x68], eax
// 007d91bd  8b442418             mov eax, dword ptr [esp + 0x18]
// 007d91c1  52                   push edx
// 007d91c2  894160               mov dword ptr [ecx + 0x60], eax
// 007d91c5  89542408             mov dword ptr [esp + 8], edx
// 007d91c9  8954240c             mov dword ptr [esp + 0xc], edx
// 007d91cd  89542410             mov dword ptr [esp + 0x10], edx
// 007d91d1  89542414             mov dword ptr [esp + 0x14], edx
// 007d91d5  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 007d91db  52                   push edx
// 007d91dc  8d44240c             lea eax, [esp + 0xc]
// 007d91e0  50                   push eax
// 007d91e1  6800000056           push 0x56000000
// 007d91e6  6858759000           push 0x907558
// 007d91eb  68107c8f00           push 0x8f7c10
// 007d91f0  e8aff8f3ff           call 0x718aa4
// 007d91f5  83c410               add esp, 0x10
// 007d91f8  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneManager@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
