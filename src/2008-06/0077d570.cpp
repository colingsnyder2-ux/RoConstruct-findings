// from server: 100% by auto
// roc 2008-06 0077d570  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d570
//
// 0077d570  83ec20               sub esp, 0x20
// 0077d573  8b442424             mov eax, dword ptr [esp + 0x24]
// 0077d577  c704248aa8e400       mov dword ptr [esp], 0xe4a88a
// 0077d57e  c7442404ffdb7500     mov dword ptr [esp + 4], 0x75dbff
// 0077d586  c7442408bdcd9f00     mov dword ptr [esp + 8], 0x9fcdbd
// 0077d58e  c744240cf09e9f00     mov dword ptr [esp + 0xc], 0x9f9ef0
// 0077d596  c7442410baa6e100     mov dword ptr [esp + 0x10], 0xe1a6ba
// 0077d59e  c74424149abfb400     mov dword ptr [esp + 0x14], 0xb4bf9a
// 0077d5a6  c7442418f7b68300     mov dword ptr [esp + 0x18], 0x83b6f7
// 0077d5ae  c744241cd8abc000     mov dword ptr [esp + 0x1c], 0xc0abd8
// 0077d5b6  8b8484000000fc       mov eax, dword ptr [esp + eax*4 - 0x4000000]
// 0077d5bd  83c420               add esp, 0x20
// 0077d5c0  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?GetOneNoteColor@CXTPTabPaintManager@@SAKW4XTPTabOneNoteColor@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
