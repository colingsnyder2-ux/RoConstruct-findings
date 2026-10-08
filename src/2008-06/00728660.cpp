// from server: 100% by auto
// roc 2008-06 00728660  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00728660
//
// 00728660  56                   push esi
// 00728661  8bf1                 mov esi, ecx
// 00728663  e8188c0500           call 0x781280
// 00728668  6a00                 push 0
// 0072866a  6a04                 push 4
// 0072866c  6a02                 push 2
// 0072866e  6a02                 push 2
// 00728670  8d4604               lea eax, [esi + 4]
// 00728673  50                   push eax
// 00728674  c706a4188600         mov dword ptr [esi], 0x8618a4
// 0072867a  ff15102d8000         call dword ptr [0x802d10]
// 00728680  c706ec188600         mov dword ptr [esi], 0x8618ec
// 00728686  c7462401000000       mov dword ptr [esi + 0x24], 1
// 0072868d  c7462800000000       mov dword ptr [esi + 0x28], 0
// 00728694  8bc6                 mov eax, esi
// 00728696  5e                   pop esi
// 00728697  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CAppearanceSetPropertyPageFlat@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
