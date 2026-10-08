// roc 2012-06 00a3f780  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3f780
//
// 00a3f780  56                   push esi
// 00a3f781  8bf1                 mov esi, ecx
// 00a3f783  837e1000             cmp dword ptr [esi + 0x10], 0
// 00a3f787  7436                 je 0xa3f7bf
// 00a3f789  56                   push esi
// 00a3f78a  8d44240c             lea eax, [esp + 0xc]
// 00a3f78e  50                   push eax
// 00a3f78f  ff15e03cb200         call dword ptr [0xb23ce0]
// 00a3f795  85c0                 test eax, eax
// 00a3f797  7526                 jne 0xa3f7bf
// 00a3f799  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a3f79d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a3f7a1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a3f7a5  890e                 mov dword ptr [esi], ecx
// 00a3f7a7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a3f7ab  895604               mov dword ptr [esi + 4], edx
// 00a3f7ae  894608               mov dword ptr [esi + 8], eax
// 00a3f7b1  894e0c               mov dword ptr [esi + 0xc], ecx
// 00a3f7b4  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00a3f7b7  8b11                 mov edx, dword ptr [ecx]
// 00a3f7b9  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00a3f7bc  56                   push esi
// 00a3f7bd  ffd0                 call eax
// 00a3f7bf  5e                   pop esi
// 00a3f7c0  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetRect@CXTPDockingPaneCaptionButton@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
