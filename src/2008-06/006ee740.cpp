// roc 2008-06 006ee740  unit: CXTPPopupToolBar  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee740
//
// 006ee740  56                   push esi
// 006ee741  8bf1                 mov esi, ecx
// 006ee743  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ee746  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006ee749  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006ee74c  50                   push eax
// 006ee74d  52                   push edx
// 006ee74e  ff151c2e8000         call dword ptr [0x802e1c]
// 006ee754  c7461000000000       mov dword ptr [esi + 0x10], 0
// 006ee75b  5e                   pop esi
// 006ee75c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?KillTimer@BTNSCROLL@SCROLLINFO@CXTPPopupBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
