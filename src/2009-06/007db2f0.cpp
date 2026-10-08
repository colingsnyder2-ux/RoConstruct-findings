// roc 2009-06 007db2f0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007db2f0
//
// 007db2f0  56                   push esi
// 007db2f1  8bf1                 mov esi, ecx
// 007db2f3  837e1000             cmp dword ptr [esi + 0x10], 0
// 007db2f7  7436                 je 0x7db32f
// 007db2f9  56                   push esi
// 007db2fa  8d44240c             lea eax, [esp + 0xc]
// 007db2fe  50                   push eax
// 007db2ff  ff15acee8900         call dword ptr [0x89eeac]
// 007db305  85c0                 test eax, eax
// 007db307  7526                 jne 0x7db32f
// 007db309  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007db30d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007db311  8b442410             mov eax, dword ptr [esp + 0x10]
// 007db315  890e                 mov dword ptr [esi], ecx
// 007db317  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007db31b  895604               mov dword ptr [esi + 4], edx
// 007db31e  894608               mov dword ptr [esi + 8], eax
// 007db321  894e0c               mov dword ptr [esi + 0xc], ecx
// 007db324  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007db327  8b11                 mov edx, dword ptr [ecx]
// 007db329  8b424c               mov eax, dword ptr [edx + 0x4c]
// 007db32c  56                   push esi
// 007db32d  ffd0                 call eax
// 007db32f  5e                   pop esi
// 007db330  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetRect@CXTPDockingPaneCaptionButton@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
