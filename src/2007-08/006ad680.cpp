// from server: 100% by auto
// roc 2007-08 006ad680  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ad680
//
// 006ad680  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006ad684  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 006ad687  83ec10               sub esp, 0x10
// 006ad68a  8bc4                 mov eax, esp
// 006ad68c  8910                 mov dword ptr [eax], edx
// 006ad68e  8b542420             mov edx, dword ptr [esp + 0x20]
// 006ad692  895004               mov dword ptr [eax + 4], edx
// 006ad695  8b542424             mov edx, dword ptr [esp + 0x24]
// 006ad699  895008               mov dword ptr [eax + 8], edx
// 006ad69c  8b542428             mov edx, dword ptr [esp + 0x28]
// 006ad6a0  89500c               mov dword ptr [eax + 0xc], edx
// 006ad6a3  8b442418             mov eax, dword ptr [esp + 0x18]
// 006ad6a7  8b542414             mov edx, dword ptr [esp + 0x14]
// 006ad6ab  50                   push eax
// 006ad6ac  52                   push edx
// 006ad6ad  e8ae360500           call 0x700d60
// 006ad6b2  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?DrawTabControl@CAppearanceSet@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
