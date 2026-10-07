// roc 2012-06 00a4dd60  unit: CXTPTabPaintManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4dd60
//
// 00a4dd60  56                   push esi
// 00a4dd61  8bf1                 mov esi, ecx
// 00a4dd63  e8783b0000           call 0xa518e0
// 00a4dd68  6a00                 push 0
// 00a4dd6a  6a06                 push 6
// 00a4dd6c  6a03                 push 3
// 00a4dd6e  6a02                 push 2
// 00a4dd70  8d4604               lea eax, [esi + 4]
// 00a4dd73  50                   push eax
// 00a4dd74  c7067c31c200         mov dword ptr [esi], 0xc2317c
// 00a4dd7a  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a4dd80  8bc6                 mov eax, esi
// 00a4dd82  5e                   pop esi
// 00a4dd83  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPage@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
