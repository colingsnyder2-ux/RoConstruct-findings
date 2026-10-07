// roc 2012-06 00a4de00  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4de00
//
// 00a4de00  56                   push esi
// 00a4de01  8bf1                 mov esi, ecx
// 00a4de03  e8d83a0000           call 0xa518e0
// 00a4de08  6a00                 push 0
// 00a4de0a  6a00                 push 0
// 00a4de0c  6a01                 push 1
// 00a4de0e  6a04                 push 4
// 00a4de10  8d4604               lea eax, [esi + 4]
// 00a4de13  50                   push eax
// 00a4de14  c7060c32c200         mov dword ptr [esi], 0xc2320c
// 00a4de1a  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a4de20  8bc6                 mov eax, esi
// 00a4de22  5e                   pop esi
// 00a4de23  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
