// from server: 100% by auto
// roc 2011-06 00853830  unit: CXTPPopupToolBar  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00853830
//
// 00853830  56                   push esi
// 00853831  8bf1                 mov esi, ecx
// 00853833  8b4610               mov eax, dword ptr [esi + 0x10]
// 00853836  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00853839  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0085383c  50                   push eax
// 0085383d  52                   push edx
// 0085383e  ff15d019a400         call dword ptr [0xa419d0]
// 00853844  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0085384b  5e                   pop esi
// 0085384c  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?KillTimer@BTNSCROLL@SCROLLINFO@CXTPPopupBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
