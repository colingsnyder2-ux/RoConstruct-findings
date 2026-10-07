// roc 2007-08 006e59a0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e59a0
//
// 006e59a0  56                   push esi
// 006e59a1  8bf1                 mov esi, ecx
// 006e59a3  837e1000             cmp dword ptr [esi + 0x10], 0
// 006e59a7  7436                 je 0x6e59df
// 006e59a9  56                   push esi
// 006e59aa  8d44240c             lea eax, [esp + 0xc]
// 006e59ae  50                   push eax
// 006e59af  ff1528ee7700         call dword ptr [0x77ee28]
// 006e59b5  85c0                 test eax, eax
// 006e59b7  7526                 jne 0x6e59df
// 006e59b9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e59bd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006e59c1  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e59c5  890e                 mov dword ptr [esi], ecx
// 006e59c7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006e59cb  895604               mov dword ptr [esi + 4], edx
// 006e59ce  894608               mov dword ptr [esi + 8], eax
// 006e59d1  894e0c               mov dword ptr [esi + 0xc], ecx
// 006e59d4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006e59d7  8b11                 mov edx, dword ptr [ecx]
// 006e59d9  8b424c               mov eax, dword ptr [edx + 0x4c]
// 006e59dc  56                   push esi
// 006e59dd  ffd0                 call eax
// 006e59df  5e                   pop esi
// 006e59e0  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetRect@CXTPDockingPaneCaptionButton@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
