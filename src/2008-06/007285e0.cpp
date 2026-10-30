// from server: 100% by auto
// roc 2008-06 007285e0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007285e0
//
// 007285e0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007285e4  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 007285e7  83ec10               sub esp, 0x10
// 007285ea  8bc4                 mov eax, esp
// 007285ec  8910                 mov dword ptr [eax], edx
// 007285ee  8b542420             mov edx, dword ptr [esp + 0x20]
// 007285f2  895004               mov dword ptr [eax + 4], edx
// 007285f5  8b542424             mov edx, dword ptr [esp + 0x24]
// 007285f9  895008               mov dword ptr [eax + 8], edx
// 007285fc  8b542428             mov edx, dword ptr [esp + 0x28]
// 00728600  89500c               mov dword ptr [eax + 0xc], edx
// 00728603  8b442418             mov eax, dword ptr [esp + 0x18]
// 00728607  8b542414             mov edx, dword ptr [esp + 0x14]
// 0072860b  50                   push eax
// 0072860c  52                   push edx
// 0072860d  e85e620500           call 0x77e870
// 00728612  c21800               ret 0x18
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?DrawTabControl@CAppearanceSet@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
