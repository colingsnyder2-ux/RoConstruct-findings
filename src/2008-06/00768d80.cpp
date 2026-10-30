// from server: 100% by auto
// roc 2008-06 00768d80  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00768d80
//
// 00768d80  83ec10               sub esp, 0x10
// 00768d83  56                   push esi
// 00768d84  8b742418             mov esi, dword ptr [esp + 0x18]
// 00768d88  8d442404             lea eax, [esp + 4]
// 00768d8c  56                   push esi
// 00768d8d  50                   push eax
// 00768d8e  e8ed02f8ff           call 0x6e9080
// 00768d93  8bc8                 mov ecx, eax
// 00768d95  e8f6fdf7ff           call 0x6e8b90
// 00768d9a  8b442404             mov eax, dword ptr [esp + 4]
// 00768d9e  3906                 cmp dword ptr [esi], eax
// 00768da0  7d02                 jge 0x768da4
// 00768da2  8906                 mov dword ptr [esi], eax
// 00768da4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00768da8  3906                 cmp dword ptr [esi], eax
// 00768daa  7e02                 jle 0x768dae
// 00768dac  8906                 mov dword ptr [esi], eax
// 00768dae  8b442408             mov eax, dword ptr [esp + 8]
// 00768db2  394604               cmp dword ptr [esi + 4], eax
// 00768db5  7d03                 jge 0x768dba
// 00768db7  894604               mov dword ptr [esi + 4], eax
// 00768dba  8b442410             mov eax, dword ptr [esp + 0x10]
// 00768dbe  394604               cmp dword ptr [esi + 4], eax
// 00768dc1  7e03                 jle 0x768dc6
// 00768dc3  894604               mov dword ptr [esi + 4], eax
// 00768dc6  5e                   pop esi
// 00768dc7  83c410               add esp, 0x10
// 00768dca  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?AdjustCursor@CXTPDockingPaneContext@@KAXAAVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
