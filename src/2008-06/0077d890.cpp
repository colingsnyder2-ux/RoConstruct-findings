// roc 2008-06 0077d890  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d890
//
// 0077d890  53                   push ebx
// 0077d891  56                   push esi
// 0077d892  57                   push edi
// 0077d893  8bf1                 mov esi, ecx
// 0077d895  e8e6390000           call 0x781280
// 0077d89a  8b1d102d8000         mov ebx, dword ptr [0x802d10]
// 0077d8a0  6a00                 push 0
// 0077d8a2  6a04                 push 4
// 0077d8a4  6a02                 push 2
// 0077d8a6  6a02                 push 2
// 0077d8a8  8d7e04               lea edi, [esi + 4]
// 0077d8ab  57                   push edi
// 0077d8ac  c706a4188600         mov dword ptr [esi], 0x8618a4
// 0077d8b2  ffd3                 call ebx
// 0077d8b4  6a00                 push 0
// 0077d8b6  6a02                 push 2
// 0077d8b8  6a03                 push 3
// 0077d8ba  6a02                 push 2
// 0077d8bc  57                   push edi
// 0077d8bd  c706ac958600         mov dword ptr [esi], 0x8695ac
// 0077d8c3  ffd3                 call ebx
// 0077d8c5  5f                   pop edi
// 0077d8c6  8bc6                 mov eax, esi
// 0077d8c8  5e                   pop esi
// 0077d8c9  5b                   pop ebx
// 0077d8ca  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetExcel@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
