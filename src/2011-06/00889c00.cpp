// roc 2011-06 00889c00  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00889c00
//
// 00889c00  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00889c04  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00889c07  83ec10               sub esp, 0x10
// 00889c0a  8bc4                 mov eax, esp
// 00889c0c  8910                 mov dword ptr [eax], edx
// 00889c0e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00889c12  895004               mov dword ptr [eax + 4], edx
// 00889c15  8b542424             mov edx, dword ptr [esp + 0x24]
// 00889c19  895008               mov dword ptr [eax + 8], edx
// 00889c1c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00889c20  89500c               mov dword ptr [eax + 0xc], edx
// 00889c23  8b442418             mov eax, dword ptr [esp + 0x18]
// 00889c27  8b542414             mov edx, dword ptr [esp + 0x14]
// 00889c2b  50                   push eax
// 00889c2c  52                   push edx
// 00889c2d  e86eea0400           call 0x8d86a0
// 00889c32  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawTabControl@CXTPTabPaintManagerAppearanceSet@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
