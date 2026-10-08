// roc 2011-06 008c73b0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c73b0
//
// 008c73b0  56                   push esi
// 008c73b1  8bf1                 mov esi, ecx
// 008c73b3  837e1000             cmp dword ptr [esi + 0x10], 0
// 008c73b7  7436                 je 0x8c73ef
// 008c73b9  56                   push esi
// 008c73ba  8d44240c             lea eax, [esp + 0xc]
// 008c73be  50                   push eax
// 008c73bf  ff15001ca400         call dword ptr [0xa41c00]
// 008c73c5  85c0                 test eax, eax
// 008c73c7  7526                 jne 0x8c73ef
// 008c73c9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008c73cd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008c73d1  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c73d5  890e                 mov dword ptr [esi], ecx
// 008c73d7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c73db  895604               mov dword ptr [esi + 4], edx
// 008c73de  894608               mov dword ptr [esi + 8], eax
// 008c73e1  894e0c               mov dword ptr [esi + 0xc], ecx
// 008c73e4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008c73e7  8b11                 mov edx, dword ptr [ecx]
// 008c73e9  8b424c               mov eax, dword ptr [edx + 0x4c]
// 008c73ec  56                   push esi
// 008c73ed  ffd0                 call eax
// 008c73ef  5e                   pop esi
// 008c73f0  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetRect@CXTPDockingPaneCaptionButton@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
