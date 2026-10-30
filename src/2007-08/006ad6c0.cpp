// from server: 100% by auto
// roc 2007-08 006ad6c0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ad6c0
//
// 006ad6c0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006ad6c4  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 006ad6c7  83ec10               sub esp, 0x10
// 006ad6ca  8bc4                 mov eax, esp
// 006ad6cc  8910                 mov dword ptr [eax], edx
// 006ad6ce  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ad6d2  895004               mov dword ptr [eax + 4], edx
// 006ad6d5  8b542424             mov edx, dword ptr [esp + 0x24]
// 006ad6d9  895008               mov dword ptr [eax + 8], edx
// 006ad6dc  8b542428             mov edx, dword ptr [esp + 0x28]
// 006ad6e0  89500c               mov dword ptr [eax + 0xc], edx
// 006ad6e3  8b442418             mov eax, dword ptr [esp + 0x18]
// 006ad6e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 006ad6eb  50                   push eax
// 006ad6ec  52                   push edx
// 006ad6ed  e87e520500           call 0x702970
// 006ad6f2  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?DrawTabControl@CAppearanceSet@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
