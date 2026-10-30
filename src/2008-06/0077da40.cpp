// from server: 100% by auto
// roc 2008-06 0077da40  unit: CXTPTabPaintManager::CColorSetWinXP  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077da40
//
// 0077da40  56                   push esi
// 0077da41  8bf1                 mov esi, ecx
// 0077da43  e838380000           call 0x781280
// 0077da48  6a00                 push 0
// 0077da4a  6a06                 push 6
// 0077da4c  6a03                 push 3
// 0077da4e  6a02                 push 2
// 0077da50  8d4604               lea eax, [esi + 4]
// 0077da53  50                   push eax
// 0077da54  c706fc938600         mov dword ptr [esi], 0x8693fc
// 0077da5a  ff15102d8000         call dword ptr [0x802d10]
// 0077da60  c70654968600         mov dword ptr [esi], 0x869654
// 0077da66  8bc6                 mov eax, esi
// 0077da68  5e                   pop esi
// 0077da69  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPageSelected@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
