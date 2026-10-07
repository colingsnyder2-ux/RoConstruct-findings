// roc 2011-06 008d5a60  unit: CXTSplitterWnd  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5a60
//
// 008d5a60  56                   push esi
// 008d5a61  8bf1                 mov esi, ecx
// 008d5a63  e8683b0000           call 0x8d95d0
// 008d5a68  6a00                 push 0
// 008d5a6a  6a06                 push 6
// 008d5a6c  6a03                 push 3
// 008d5a6e  6a02                 push 2
// 008d5a70  8d4604               lea eax, [esi + 4]
// 008d5a73  50                   push eax
// 008d5a74  c7062c7bad00         mov dword ptr [esi], 0xad7b2c
// 008d5a7a  ff15c81ba400         call dword ptr [0xa41bc8]
// 008d5a80  c7462400000000       mov dword ptr [esi + 0x24], 0
// 008d5a87  8bc6                 mov eax, esi
// 008d5a89  5e                   pop esi
// 008d5a8a  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
