// roc 2008-06 00762af0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00762af0
//
// 00762af0  56                   push esi
// 00762af1  8bf1                 mov esi, ecx
// 00762af3  837e1000             cmp dword ptr [esi + 0x10], 0
// 00762af7  7436                 je 0x762b2f
// 00762af9  56                   push esi
// 00762afa  8d44240c             lea eax, [esp + 0xc]
// 00762afe  50                   push eax
// 00762aff  ff15682c8000         call dword ptr [0x802c68]
// 00762b05  85c0                 test eax, eax
// 00762b07  7526                 jne 0x762b2f
// 00762b09  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00762b0d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00762b11  8b442410             mov eax, dword ptr [esp + 0x10]
// 00762b15  890e                 mov dword ptr [esi], ecx
// 00762b17  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00762b1b  895604               mov dword ptr [esi + 4], edx
// 00762b1e  894608               mov dword ptr [esi + 8], eax
// 00762b21  894e0c               mov dword ptr [esi + 0xc], ecx
// 00762b24  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00762b27  8b11                 mov edx, dword ptr [ecx]
// 00762b29  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00762b2c  56                   push esi
// 00762b2d  ffd0                 call eax
// 00762b2f  5e                   pop esi
// 00762b30  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetRect@CXTPDockingPaneCaptionButton@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
