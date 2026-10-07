// roc 2008-06 0077d6d0  unit: CXTPTabPaintManager  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d6d0
//
// 0077d6d0  56                   push esi
// 0077d6d1  8bf1                 mov esi, ecx
// 0077d6d3  e8a83b0000           call 0x781280
// 0077d6d8  6a00                 push 0
// 0077d6da  6a06                 push 6
// 0077d6dc  6a03                 push 3
// 0077d6de  6a02                 push 2
// 0077d6e0  8d4604               lea eax, [esi + 4]
// 0077d6e3  50                   push eax
// 0077d6e4  c706fc938600         mov dword ptr [esi], 0x8693fc
// 0077d6ea  ff15102d8000         call dword ptr [0x802d10]
// 0077d6f0  8bc6                 mov eax, esi
// 0077d6f2  5e                   pop esi
// 0077d6f3  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPage@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
