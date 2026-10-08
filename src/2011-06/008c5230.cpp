// roc 2011-06 008c5230  unit: CXTPDockingPaneSplitterWnd  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c5230
//
// 008c5230  83ec10               sub esp, 0x10
// 008c5233  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c5237  33d2                 xor edx, edx
// 008c5239  52                   push edx
// 008c523a  894168               mov dword ptr [ecx + 0x68], eax
// 008c523d  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c5241  52                   push edx
// 008c5242  894160               mov dword ptr [ecx + 0x60], eax
// 008c5245  89542408             mov dword ptr [esp + 8], edx
// 008c5249  8954240c             mov dword ptr [esp + 0xc], edx
// 008c524d  89542410             mov dword ptr [esp + 0x10], edx
// 008c5251  89542414             mov dword ptr [esp + 0x14], edx
// 008c5255  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 008c525b  52                   push edx
// 008c525c  8d44240c             lea eax, [esp + 0xc]
// 008c5260  50                   push eax
// 008c5261  6800000056           push 0x56000000
// 008c5266  68c066ad00           push 0xad66c0
// 008c526b  68c07fac00           push 0xac7fc0
// 008c5270  e8554ef4ff           call 0x80a0ca
// 008c5275  83c410               add esp, 0x10
// 008c5278  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?Create@CXTPDockingPaneSplitterWnd@@QAEXPAVCXTPDockingPaneManager@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
