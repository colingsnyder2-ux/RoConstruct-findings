// from server: 100% by auto
// roc 2007-08 006e5560  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOfficeTheme::COfficePanelColorSet  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e5560
//
// 006e5560  56                   push esi
// 006e5561  8bf1                 mov esi, ecx
// 006e5563  e898670300           call 0x71bd00
// 006e5568  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 006e556e  e8dda40100           call 0x6ffa50
// 006e5573  83f806               cmp eax, 6
// 006e5576  751c                 jne 0x6e5594
// 006e5578  57                   push edi
// 006e5579  8b3d58ee7700         mov edi, dword ptr [0x77ee58]
// 006e557f  6a15                 push 0x15
// 006e5581  ffd7                 call edi
// 006e5583  6a15                 push 0x15
// 006e5585  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 006e558b  ffd7                 call edi
// 006e558d  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 006e5593  5f                   pop edi
// 006e5594  5e                   pop esi
// 006e5595  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@COfficePanelColorSet@CXTPDockingPaneOfficeTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
