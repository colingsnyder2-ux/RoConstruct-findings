// from server: 100% by auto
// roc 2008-06 00728590  unit: CXTPRibbonTheme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00728590
//
// 00728590  56                   push esi
// 00728591  8bf1                 mov esi, ecx
// 00728593  e8e88c0500           call 0x781280
// 00728598  6a00                 push 0
// 0072859a  6a04                 push 4
// 0072859c  6a02                 push 2
// 0072859e  6a02                 push 2
// 007285a0  8d4604               lea eax, [esi + 4]
// 007285a3  50                   push eax
// 007285a4  c706a4188600         mov dword ptr [esi], 0x8618a4
// 007285aa  ff15102d8000         call dword ptr [0x802d10]
// 007285b0  8bc6                 mov eax, esi
// 007285b2  5e                   pop esi
// 007285b3  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CAppearanceSetFlat@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
