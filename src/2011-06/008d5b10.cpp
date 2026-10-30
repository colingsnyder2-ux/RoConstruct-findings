// from server: 100% by auto
// roc 2011-06 008d5b10  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5b10
//
// 008d5b10  56                   push esi
// 008d5b11  8bf1                 mov esi, ecx
// 008d5b13  e8b83a0000           call 0x8d95d0
// 008d5b18  6a02                 push 2
// 008d5b1a  6a04                 push 4
// 008d5b1c  6a02                 push 2
// 008d5b1e  6a02                 push 2
// 008d5b20  8d4604               lea eax, [esi + 4]
// 008d5b23  50                   push eax
// 008d5b24  c706bc7bad00         mov dword ptr [esi], 0xad7bbc
// 008d5b2a  ff15c81ba400         call dword ptr [0xa41bc8]
// 008d5b30  c7461400000000       mov dword ptr [esi + 0x14], 0
// 008d5b37  8bc6                 mov eax, esi
// 008d5b39  5e                   pop esi
// 008d5b3a  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetStateButtons@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManager.cpp
