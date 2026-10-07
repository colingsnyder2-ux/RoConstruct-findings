// roc 2008-06 007627d0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007627d0
//
// 007627d0  56                   push esi
// 007627d1  8bf1                 mov esi, ecx
// 007627d3  e8e8feffff           call 0x7626c0
// 007627d8  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 007627e2  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 007627ec  e84fd5f7ff           call 0x6dfd40
// 007627f1  8bc8                 mov ecx, eax
// 007627f3  e848d3f7ff           call 0x6dfb40
// 007627f8  48                   dec eax
// 007627f9  83f802               cmp eax, 2
// 007627fc  771a                 ja 0x762818
// 007627fe  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 00762805  b8716f6400           mov eax, 0x646f71
// 0076280a  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00762810  7506                 jne 0x762818
// 00762812  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00762818  5e                   pop esi
// 00762819  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CColorSetVisualStudio2005@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
