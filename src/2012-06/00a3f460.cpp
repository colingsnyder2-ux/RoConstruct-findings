// roc 2012-06 00a3f460  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3f460
//
// 00a3f460  56                   push esi
// 00a3f461  8bf1                 mov esi, ecx
// 00a3f463  e8e8feffff           call 0xa3f350
// 00a3f468  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 00a3f472  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 00a3f47c  e8dfe3f7ff           call 0x9bd860
// 00a3f481  8bc8                 mov ecx, eax
// 00a3f483  e888e1f7ff           call 0x9bd610
// 00a3f488  48                   dec eax
// 00a3f489  83f802               cmp eax, 2
// 00a3f48c  771a                 ja 0xa3f4a8
// 00a3f48e  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 00a3f495  b8716f6400           mov eax, 0x646f71
// 00a3f49a  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00a3f4a0  7506                 jne 0xa3f4a8
// 00a3f4a2  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00a3f4a8  5e                   pop esi
// 00a3f4a9  c3                   ret 
// library xtp-13.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CColorSetVisualStudio2003@CXTPDockingPaneVisualStudio2005Beta1Theme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
