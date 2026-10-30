// from server: 100% by auto
// roc 2008-06 00728620  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00728620
//
// 00728620  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00728624  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00728627  83ec10               sub esp, 0x10
// 0072862a  8bc4                 mov eax, esp
// 0072862c  8910                 mov dword ptr [eax], edx
// 0072862e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00728632  895004               mov dword ptr [eax + 4], edx
// 00728635  8b542424             mov edx, dword ptr [esp + 0x24]
// 00728639  895008               mov dword ptr [eax + 8], edx
// 0072863c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00728640  89500c               mov dword ptr [eax + 0xc], edx
// 00728643  8b442418             mov eax, dword ptr [esp + 0x18]
// 00728647  8b542414             mov edx, dword ptr [esp + 0x14]
// 0072864b  50                   push eax
// 0072864c  52                   push edx
// 0072864d  e8fe7c0500           call 0x780350
// 00728652  c21800               ret 0x18
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?DrawTabControl@CAppearanceSet@CXTPTabPaintManager@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
