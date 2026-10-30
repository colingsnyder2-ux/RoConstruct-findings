// from server: 100% by auto
// roc 2012-06 00a4def0  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4def0
//
// 00a4def0  53                   push ebx
// 00a4def1  56                   push esi
// 00a4def2  57                   push edi
// 00a4def3  8bf1                 mov esi, ecx
// 00a4def5  e8e6390000           call 0xa518e0
// 00a4defa  8b1d6c3bb200         mov ebx, dword ptr [0xb23b6c]
// 00a4df00  6a00                 push 0
// 00a4df02  6a04                 push 4
// 00a4df04  6a02                 push 2
// 00a4df06  6a02                 push 2
// 00a4df08  8d7e04               lea edi, [esi + 4]
// 00a4df0b  57                   push edi
// 00a4df0c  c706dcb9c100         mov dword ptr [esi], 0xc1b9dc
// 00a4df12  ffd3                 call ebx
// 00a4df14  6a00                 push 0
// 00a4df16  6a02                 push 2
// 00a4df18  6a03                 push 3
// 00a4df1a  6a02                 push 2
// 00a4df1c  57                   push edi
// 00a4df1d  c7062c33c200         mov dword ptr [esi], 0xc2332c
// 00a4df23  ffd3                 call ebx
// 00a4df25  5f                   pop edi
// 00a4df26  8bc6                 mov eax, esi
// 00a4df28  5e                   pop esi
// 00a4df29  5b                   pop ebx
// 00a4df2a  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetExcel@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
