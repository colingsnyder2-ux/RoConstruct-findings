// from server: 100% by auto
// roc 2008-06 0077d780  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d780
//
// 0077d780  56                   push esi
// 0077d781  8bf1                 mov esi, ecx
// 0077d783  e8f83a0000           call 0x781280
// 0077d788  6a00                 push 0
// 0077d78a  6a00                 push 0
// 0077d78c  6a01                 push 1
// 0077d78e  6a04                 push 4
// 0077d790  8d4604               lea eax, [esi + 4]
// 0077d793  50                   push eax
// 0077d794  c7068c948600         mov dword ptr [esi], 0x86948c
// 0077d79a  ff15102d8000         call dword ptr [0x802d10]
// 0077d7a0  8bc6                 mov eax, esi
// 0077d7a2  5e                   pop esi
// 0077d7a3  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
