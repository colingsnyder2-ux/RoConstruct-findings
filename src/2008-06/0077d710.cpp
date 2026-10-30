// from server: 100% by auto
// roc 2008-06 0077d710  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d710
//
// 0077d710  56                   push esi
// 0077d711  8bf1                 mov esi, ecx
// 0077d713  e8683b0000           call 0x781280
// 0077d718  6a00                 push 0
// 0077d71a  6a06                 push 6
// 0077d71c  6a03                 push 3
// 0077d71e  6a02                 push 2
// 0077d720  8d4604               lea eax, [esi + 4]
// 0077d723  50                   push eax
// 0077d724  c70644948600         mov dword ptr [esi], 0x869444
// 0077d72a  ff15102d8000         call dword ptr [0x802d10]
// 0077d730  c7462400000000       mov dword ptr [esi + 0x24], 0
// 0077d737  8bc6                 mov eax, esi
// 0077d739  5e                   pop esi
// 0077d73a  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
