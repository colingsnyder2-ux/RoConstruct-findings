// roc 2011-06 008cd610  unit: XTPDockingPanePaintThemes::CXTPDockingPaneNativeXPTheme  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008cd610
//
// 008cd610  83ec10               sub esp, 0x10
// 008cd613  56                   push esi
// 008cd614  8b742418             mov esi, dword ptr [esp + 0x18]
// 008cd618  8d442404             lea eax, [esp + 4]
// 008cd61c  56                   push esi
// 008cd61d  50                   push eax
// 008cd61e  e8ed4af8ff           call 0x852110
// 008cd623  8bc8                 mov ecx, eax
// 008cd625  e8f645f8ff           call 0x851c20
// 008cd62a  8b442404             mov eax, dword ptr [esp + 4]
// 008cd62e  3906                 cmp dword ptr [esi], eax
// 008cd630  7d02                 jge 0x8cd634
// 008cd632  8906                 mov dword ptr [esi], eax
// 008cd634  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008cd638  3906                 cmp dword ptr [esi], eax
// 008cd63a  7e02                 jle 0x8cd63e
// 008cd63c  8906                 mov dword ptr [esi], eax
// 008cd63e  8b442408             mov eax, dword ptr [esp + 8]
// 008cd642  394604               cmp dword ptr [esi + 4], eax
// 008cd645  7d03                 jge 0x8cd64a
// 008cd647  894604               mov dword ptr [esi + 4], eax
// 008cd64a  8b442410             mov eax, dword ptr [esp + 0x10]
// 008cd64e  394604               cmp dword ptr [esi + 4], eax
// 008cd651  7e03                 jle 0x8cd656
// 008cd653  894604               mov dword ptr [esi + 4], eax
// 008cd656  5e                   pop esi
// 008cd657  83c410               add esp, 0x10
// 008cd65a  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneContext.cpp (function ?AdjustCursor@CXTPDockingPaneContext@@KAXAAVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneContext.cpp
