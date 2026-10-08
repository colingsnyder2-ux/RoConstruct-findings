// from server: 100% by auto
// roc 2012-06 00a4dc00  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4dc00
//
// 00a4dc00  83ec20               sub esp, 0x20
// 00a4dc03  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a4dc07  c704248aa8e400       mov dword ptr [esp], 0xe4a88a
// 00a4dc0e  c7442404ffdb7500     mov dword ptr [esp + 4], 0x75dbff
// 00a4dc16  c7442408bdcd9f00     mov dword ptr [esp + 8], 0x9fcdbd
// 00a4dc1e  c744240cf09e9f00     mov dword ptr [esp + 0xc], 0x9f9ef0
// 00a4dc26  c7442410baa6e100     mov dword ptr [esp + 0x10], 0xe1a6ba
// 00a4dc2e  c74424149abfb400     mov dword ptr [esp + 0x14], 0xb4bf9a
// 00a4dc36  c7442418f7b68300     mov dword ptr [esp + 0x18], 0x83b6f7
// 00a4dc3e  c744241cd8abc000     mov dword ptr [esp + 0x1c], 0xc0abd8
// 00a4dc46  8b8484000000fc       mov eax, dword ptr [esp + eax*4 - 0x4000000]
// 00a4dc4d  83c420               add esp, 0x20
// 00a4dc50  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ?GetOneNoteColor@CXTPTabPaintManager@@SAKW4XTPTabOneNoteColor@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
