// roc 2011-06 00889b70  unit: CXTPRibbonTheme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00889b70
//
// 00889b70  56                   push esi
// 00889b71  8bf1                 mov esi, ecx
// 00889b73  e858fa0400           call 0x8d95d0
// 00889b78  6a00                 push 0
// 00889b7a  6a04                 push 4
// 00889b7c  6a02                 push 2
// 00889b7e  6a02                 push 2
// 00889b80  8d4604               lea eax, [esi + 4]
// 00889b83  50                   push eax
// 00889b84  c7062403ad00         mov dword ptr [esi], 0xad0324
// 00889b8a  ff15c81ba400         call dword ptr [0xa41bc8]
// 00889b90  8bc6                 mov eax, esi
// 00889b92  5e                   pop esi
// 00889b93  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ??0CAppearanceSetFlat@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
