// roc 2012-06 00a43970  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a43970
//
// 00a43970  83b91c02000000       cmp dword ptr [ecx + 0x21c], 0
// 00a43977  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a4397b  7417                 je 0xa43994
// 00a4397d  83b92002000000       cmp dword ptr [ecx + 0x220], 0
// 00a43984  7408                 je 0xa4398e
// 00a43986  8b5060               mov edx, dword ptr [eax + 0x60]
// 00a43989  394204               cmp dword ptr [edx + 4], eax
// 00a4398c  7406                 je 0xa43994
// 00a4398e  83c8ff               or eax, 0xffffffff
// 00a43991  c21800               ret 0x18
// 00a43994  8b542408             mov edx, dword ptr [esp + 8]
// 00a43998  50                   push eax
// 00a43999  83ec10               sub esp, 0x10
// 00a4399c  83b91802000000       cmp dword ptr [ecx + 0x218], 0
// 00a439a3  8bc4                 mov eax, esp
// 00a439a5  8910                 mov dword ptr [eax], edx
// 00a439a7  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a439ab  895004               mov dword ptr [eax + 4], edx
// 00a439ae  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a439b2  895008               mov dword ptr [eax + 8], edx
// 00a439b5  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a439b9  89500c               mov dword ptr [eax + 0xc], edx
// 00a439bc  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a439c0  50                   push eax
// 00a439c1  7408                 je 0xa439cb
// 00a439c3  e878a60200           call 0xa6e040
// 00a439c8  c21800               ret 0x18
// 00a439cb  e8809a0200           call 0xa6d450
// 00a439d0  c21800               ret 0x18
// library xtp-13.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?FillPropertyButton@CColorSetVisualStudio2005@CXTPDockingPaneVisualStudio2005Beta1Theme@XTPDockingPanePaintThemes@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
