// roc 2012-06 00a4e0c0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4e0c0
//
// 00a4e0c0  56                   push esi
// 00a4e0c1  8bf1                 mov esi, ecx
// 00a4e0c3  e818380000           call 0xa518e0
// 00a4e0c8  6a00                 push 0
// 00a4e0ca  6a06                 push 6
// 00a4e0cc  6a03                 push 3
// 00a4e0ce  6a02                 push 2
// 00a4e0d0  8d4604               lea eax, [esi + 4]
// 00a4e0d3  50                   push eax
// 00a4e0d4  c7067c31c200         mov dword ptr [esi], 0xc2317c
// 00a4e0da  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a4e0e0  c706d433c200         mov dword ptr [esi], 0xc233d4
// 00a4e0e6  8bc6                 mov eax, esi
// 00a4e0e8  5e                   pop esi
// 00a4e0e9  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPageSelected@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
