// from server: 100% by auto
// roc 2012-06 00a02190  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a02190
//
// 00a02190  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a02194  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00a02197  83ec10               sub esp, 0x10
// 00a0219a  8bc4                 mov eax, esp
// 00a0219c  8910                 mov dword ptr [eax], edx
// 00a0219e  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a021a2  895004               mov dword ptr [eax + 4], edx
// 00a021a5  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a021a9  895008               mov dword ptr [eax + 8], edx
// 00a021ac  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a021b0  89500c               mov dword ptr [eax + 0xc], edx
// 00a021b3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a021b7  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a021bb  50                   push eax
// 00a021bc  52                   push edx
// 00a021bd  e80ecd0400           call 0xa4eed0
// 00a021c2  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?DrawTabControl@CXTPTabPaintManagerAppearanceSet@@UAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
