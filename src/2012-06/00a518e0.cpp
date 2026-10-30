// from server: 100% by auto
// roc 2012-06 00a518e0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a518e0
//
// 00a518e0  56                   push esi
// 00a518e1  6a00                 push 0
// 00a518e3  6a00                 push 0
// 00a518e5  8bf1                 mov esi, ecx
// 00a518e7  6a00                 push 0
// 00a518e9  6a00                 push 0
// 00a518eb  8d4604               lea eax, [esi + 4]
// 00a518ee  50                   push eax
// 00a518ef  c706b434c200         mov dword ptr [esi], 0xc234b4
// 00a518f5  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00a518fc  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a51902  c74614feffffff       mov dword ptr [esi + 0x14], 0xfffffffe
// 00a51909  c7462000000000       mov dword ptr [esi + 0x20], 0
// 00a51910  8bc6                 mov eax, esi
// 00a51912  5e                   pop esi
// 00a51913  c3                   ret 
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ??0CXTPTabPaintManagerAppearanceSet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
