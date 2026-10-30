// roc 2007-03 006cc7c0  unit: seg_006c0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cc7c0
//
// 006cc7c0  83ec10               sub esp, 0x10
// 006cc7c3  8b442418             mov eax, dword ptr [esp + 0x18]
// 006cc7c7  33d2                 xor edx, edx
// 006cc7c9  52                   push edx
// 006cc7ca  894168               mov dword ptr [ecx + 0x68], eax
// 006cc7cd  8b442418             mov eax, dword ptr [esp + 0x18]
// 006cc7d1  52                   push edx
// 006cc7d2  894160               mov dword ptr [ecx + 0x60], eax
// 006cc7d5  89542408             mov dword ptr [esp + 8], edx
// 006cc7d9  8954240c             mov dword ptr [esp + 0xc], edx
// 006cc7dd  89542410             mov dword ptr [esp + 0x10], edx
// 006cc7e1  89542414             mov dword ptr [esp + 0x14], edx
// 006cc7e5  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 006cc7eb  52                   push edx
// 006cc7ec  8d44240c             lea eax, [esp + 0xc]
// 006cc7f0  50                   push eax
// 006cc7f1  6800000056           push 0x56000000
// 006cc7f6  68586f7d00           push 0x7d6f58
// 006cc7fb  6828847c00           push 0x7c8428
// 006cc800  e86919f5ff           call 0x61e16e
// 006cc805  83c410               add esp, 0x10
// 006cc808  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneManager@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
