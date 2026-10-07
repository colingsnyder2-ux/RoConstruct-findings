// roc 2012-06 00a3f310  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOfficeTheme::COfficePanelColorSet  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3f310
//
// 00a3f310  56                   push esi
// 00a3f311  8bf1                 mov esi, ecx
// 00a3f313  e838e50200           call 0xa6d850
// 00a3f318  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 00a3f31e  e81d23fbff           call 0x9f1640
// 00a3f323  83f806               cmp eax, 6
// 00a3f326  751c                 jne 0xa3f344
// 00a3f328  57                   push edi
// 00a3f329  8b3dd83cb200         mov edi, dword ptr [0xb23cd8]
// 00a3f32f  6a15                 push 0x15
// 00a3f331  ffd7                 call edi
// 00a3f333  6a15                 push 0x15
// 00a3f335  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00a3f33b  ffd7                 call edi
// 00a3f33d  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00a3f343  5f                   pop edi
// 00a3f344  5e                   pop esi
// 00a3f345  c3                   ret 
// library xtp-13.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@COfficePanelColorSet@CXTPDockingPaneVisualStudio2003Theme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
