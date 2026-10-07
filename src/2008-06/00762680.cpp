// roc 2008-06 00762680  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOfficeTheme::COfficePanelColorSet  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00762680
//
// 00762680  56                   push esi
// 00762681  8bf1                 mov esi, ecx
// 00762683  e868a30300           call 0x79c9f0
// 00762688  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0076268e  e82deafaff           call 0x7110c0
// 00762693  83f806               cmp eax, 6
// 00762696  751c                 jne 0x7626b4
// 00762698  57                   push edi
// 00762699  8b3d582b8000         mov edi, dword ptr [0x802b58]
// 0076269f  6a15                 push 0x15
// 007626a1  ffd7                 call edi
// 007626a3  6a15                 push 0x15
// 007626a5  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 007626ab  ffd7                 call edi
// 007626ad  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 007626b3  5f                   pop edi
// 007626b4  5e                   pop esi
// 007626b5  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@COfficePanelColorSet@CXTPDockingPaneOfficeTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
