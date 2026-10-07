// roc 2011-06 00889bc0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00889bc0
//
// 00889bc0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00889bc4  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00889bc7  83ec10               sub esp, 0x10
// 00889bca  8bc4                 mov eax, esp
// 00889bcc  8910                 mov dword ptr [eax], edx
// 00889bce  8b542420             mov edx, dword ptr [esp + 0x20]
// 00889bd2  895004               mov dword ptr [eax + 4], edx
// 00889bd5  8b542424             mov edx, dword ptr [esp + 0x24]
// 00889bd9  895008               mov dword ptr [eax + 8], edx
// 00889bdc  8b542428             mov edx, dword ptr [esp + 0x28]
// 00889be0  89500c               mov dword ptr [eax + 0xc], edx
// 00889be3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00889be7  8b542414             mov edx, dword ptr [esp + 0x14]
// 00889beb  50                   push eax
// 00889bec  52                   push edx
// 00889bed  e8cecf0400           call 0x8d6bc0
// 00889bf2  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawTabControl@CXTPTabPaintManagerAppearanceSet@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
