// from server: 100% by auto
// roc 2008-06 0077d7c0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d7c0
//
// 0077d7c0  56                   push esi
// 0077d7c1  8bf1                 mov esi, ecx
// 0077d7c3  e8b83a0000           call 0x781280
// 0077d7c8  6a02                 push 2
// 0077d7ca  6a04                 push 4
// 0077d7cc  6a02                 push 2
// 0077d7ce  6a02                 push 2
// 0077d7d0  8d4604               lea eax, [esi + 4]
// 0077d7d3  50                   push eax
// 0077d7d4  c706d4948600         mov dword ptr [esi], 0x8694d4
// 0077d7da  ff15102d8000         call dword ptr [0x802d10]
// 0077d7e0  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0077d7e7  8bc6                 mov eax, esi
// 0077d7e9  5e                   pop esi
// 0077d7ea  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetStateButtons@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
