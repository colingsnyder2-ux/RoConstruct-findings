// from server: 100% by auto
// roc 2012-06 00a4dd90  unit: CXTPTabPaintManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4dd90
//
// 00a4dd90  56                   push esi
// 00a4dd91  8bf1                 mov esi, ecx
// 00a4dd93  e8483b0000           call 0xa518e0
// 00a4dd98  6a00                 push 0
// 00a4dd9a  6a06                 push 6
// 00a4dd9c  6a03                 push 3
// 00a4dd9e  6a02                 push 2
// 00a4dda0  8d4604               lea eax, [esi + 4]
// 00a4dda3  50                   push eax
// 00a4dda4  c706c431c200         mov dword ptr [esi], 0xc231c4
// 00a4ddaa  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a4ddb0  c7462400000000       mov dword ptr [esi + 0x24], 0
// 00a4ddb7  8bc6                 mov eax, esi
// 00a4ddb9  5e                   pop esi
// 00a4ddba  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
