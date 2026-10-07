// roc 2011-06 008d5a30  unit: CXTSplitterWnd  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5a30
//
// 008d5a30  56                   push esi
// 008d5a31  8bf1                 mov esi, ecx
// 008d5a33  e8983b0000           call 0x8d95d0
// 008d5a38  6a00                 push 0
// 008d5a3a  6a06                 push 6
// 008d5a3c  6a03                 push 3
// 008d5a3e  6a02                 push 2
// 008d5a40  8d4604               lea eax, [esi + 4]
// 008d5a43  50                   push eax
// 008d5a44  c706e47aad00         mov dword ptr [esi], 0xad7ae4
// 008d5a4a  ff15c81ba400         call dword ptr [0xa41bc8]
// 008d5a50  8bc6                 mov eax, esi
// 008d5a52  5e                   pop esi
// 008d5a53  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPage@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
