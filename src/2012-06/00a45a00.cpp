// roc 2012-06 00a45a00  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a45a00
//
// 00a45a00  83ec10               sub esp, 0x10
// 00a45a03  56                   push esi
// 00a45a04  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a45a08  8d442404             lea eax, [esp + 4]
// 00a45a0c  56                   push esi
// 00a45a0d  50                   push eax
// 00a45a0e  e8bd4bf8ff           call 0x9ca5d0
// 00a45a13  8bc8                 mov ecx, eax
// 00a45a15  e8c646f8ff           call 0x9ca0e0
// 00a45a1a  8b442404             mov eax, dword ptr [esp + 4]
// 00a45a1e  3906                 cmp dword ptr [esi], eax
// 00a45a20  7d02                 jge 0xa45a24
// 00a45a22  8906                 mov dword ptr [esi], eax
// 00a45a24  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a45a28  3906                 cmp dword ptr [esi], eax
// 00a45a2a  7e02                 jle 0xa45a2e
// 00a45a2c  8906                 mov dword ptr [esi], eax
// 00a45a2e  8b442408             mov eax, dword ptr [esp + 8]
// 00a45a32  394604               cmp dword ptr [esi + 4], eax
// 00a45a35  7d03                 jge 0xa45a3a
// 00a45a37  894604               mov dword ptr [esi + 4], eax
// 00a45a3a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a45a3e  394604               cmp dword ptr [esi + 4], eax
// 00a45a41  7e03                 jle 0xa45a46
// 00a45a43  894604               mov dword ptr [esi + 4], eax
// 00a45a46  5e                   pop esi
// 00a45a47  83c410               add esp, 0x10
// 00a45a4a  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneContext.cpp (function ?AdjustCursor@CXTPDockingPaneContext@@KAXAAVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneContext.cpp
