// roc 2010-06 00869f10  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00869f10
//
// 00869f10  56                   push esi
// 00869f11  8bf1                 mov esi, ecx
// 00869f13  837e1000             cmp dword ptr [esi + 0x10], 0
// 00869f17  7436                 je 0x869f4f
// 00869f19  56                   push esi
// 00869f1a  8d44240c             lea eax, [esp + 0xc]
// 00869f1e  50                   push eax
// 00869f1f  ff1518ba9e00         call dword ptr [0x9eba18]
// 00869f25  85c0                 test eax, eax
// 00869f27  7526                 jne 0x869f4f
// 00869f29  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00869f2d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00869f31  8b442410             mov eax, dword ptr [esp + 0x10]
// 00869f35  890e                 mov dword ptr [esi], ecx
// 00869f37  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00869f3b  895604               mov dword ptr [esi + 4], edx
// 00869f3e  894608               mov dword ptr [esi + 8], eax
// 00869f41  894e0c               mov dword ptr [esi + 0xc], ecx
// 00869f44  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00869f47  8b11                 mov edx, dword ptr [ecx]
// 00869f49  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00869f4c  56                   push esi
// 00869f4d  ffd0                 call eax
// 00869f4f  5e                   pop esi
// 00869f50  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetRect@CXTPDockingPaneCaptionButton@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
