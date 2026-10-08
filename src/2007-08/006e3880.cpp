// from server: 100% by auto
// roc 2007-08 006e3880  unit: CXTPDockingPaneSplitterWnd  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e3880
//
// 006e3880  83ec10               sub esp, 0x10
// 006e3883  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e3887  33d2                 xor edx, edx
// 006e3889  52                   push edx
// 006e388a  894168               mov dword ptr [ecx + 0x68], eax
// 006e388d  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e3891  52                   push edx
// 006e3892  894160               mov dword ptr [ecx + 0x60], eax
// 006e3895  89542408             mov dword ptr [esp + 8], edx
// 006e3899  8954240c             mov dword ptr [esp + 0xc], edx
// 006e389d  89542410             mov dword ptr [esp + 0x10], edx
// 006e38a1  89542414             mov dword ptr [esp + 0x14], edx
// 006e38a5  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 006e38ab  52                   push edx
// 006e38ac  8d44240c             lea eax, [esp + 0xc]
// 006e38b0  50                   push eax
// 006e38b1  6800000056           push 0x56000000
// 006e38b6  6858a27d00           push 0x7da258
// 006e38bb  68e0b37c00           push 0x7cb3e0
// 006e38c0  e815c4f4ff           call 0x62fcda
// 006e38c5  83c410               add esp, 0x10
// 006e38c8  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneManager@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
