// from server: 100% by auto
// roc 2012-06 00a021d0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a021d0
//
// 00a021d0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a021d4  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00a021d7  83ec10               sub esp, 0x10
// 00a021da  8bc4                 mov eax, esp
// 00a021dc  8910                 mov dword ptr [eax], edx
// 00a021de  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a021e2  895004               mov dword ptr [eax + 4], edx
// 00a021e5  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a021e9  895008               mov dword ptr [eax + 8], edx
// 00a021ec  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a021f0  89500c               mov dword ptr [eax + 0xc], edx
// 00a021f3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a021f7  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a021fb  50                   push eax
// 00a021fc  52                   push edx
// 00a021fd  e8aee70400           call 0xa509b0
// 00a02202  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawTabControl@CXTPTabPaintManagerAppearanceSet@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
