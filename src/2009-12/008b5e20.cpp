// roc 2009-12 008b5e20  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b5e20
//
// 008b5e20  56                   push esi
// 008b5e21  8bf1                 mov esi, ecx
// 008b5e23  837e1000             cmp dword ptr [esi + 0x10], 0
// 008b5e27  7436                 je 0x8b5e5f
// 008b5e29  56                   push esi
// 008b5e2a  8d44240c             lea eax, [esp + 0xc]
// 008b5e2e  50                   push eax
// 008b5e2f  ff15bcca9800         call dword ptr [0x98cabc]
// 008b5e35  85c0                 test eax, eax
// 008b5e37  7526                 jne 0x8b5e5f
// 008b5e39  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008b5e3d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008b5e41  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b5e45  890e                 mov dword ptr [esi], ecx
// 008b5e47  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008b5e4b  895604               mov dword ptr [esi + 4], edx
// 008b5e4e  894608               mov dword ptr [esi + 8], eax
// 008b5e51  894e0c               mov dword ptr [esi + 0xc], ecx
// 008b5e54  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008b5e57  8b11                 mov edx, dword ptr [ecx]
// 008b5e59  8b424c               mov eax, dword ptr [edx + 0x4c]
// 008b5e5c  56                   push esi
// 008b5e5d  ffd0                 call eax
// 008b5e5f  5e                   pop esi
// 008b5e60  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetRect@CXTPDockingPaneCaptionButton@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
