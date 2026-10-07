// roc 2011-06 008d5ad0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5ad0
//
// 008d5ad0  56                   push esi
// 008d5ad1  8bf1                 mov esi, ecx
// 008d5ad3  e8f83a0000           call 0x8d95d0
// 008d5ad8  6a00                 push 0
// 008d5ada  6a00                 push 0
// 008d5adc  6a01                 push 1
// 008d5ade  6a04                 push 4
// 008d5ae0  8d4604               lea eax, [esi + 4]
// 008d5ae3  50                   push eax
// 008d5ae4  c706747bad00         mov dword ptr [esi], 0xad7b74
// 008d5aea  ff15c81ba400         call dword ptr [0xa41bc8]
// 008d5af0  8bc6                 mov eax, esi
// 008d5af2  5e                   pop esi
// 008d5af3  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
