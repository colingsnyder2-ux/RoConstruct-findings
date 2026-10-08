// from server: 100% by auto
// roc 2008-06 00781280  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00781280
//
// 00781280  56                   push esi
// 00781281  6a00                 push 0
// 00781283  6a00                 push 0
// 00781285  8bf1                 mov esi, ecx
// 00781287  6a00                 push 0
// 00781289  6a00                 push 0
// 0078128b  8d4604               lea eax, [esi + 4]
// 0078128e  50                   push eax
// 0078128f  c70634978600         mov dword ptr [esi], 0x869734
// 00781295  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 0078129c  ff15102d8000         call dword ptr [0x802d10]
// 007812a2  c74614feffffff       mov dword ptr [esi + 0x14], 0xfffffffe
// 007812a9  c7462000000000       mov dword ptr [esi + 0x20], 0
// 007812b0  8bc6                 mov eax, esi
// 007812b2  5e                   pop esi
// 007812b3  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ??0CAppearanceSet@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
