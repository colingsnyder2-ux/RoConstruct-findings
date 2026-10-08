// from server: 100% by auto
// roc 2007-08 00677900  unit: CXTPControlComboBoxPopupBar  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00677900
//
// 00677900  56                   push esi
// 00677901  8bf1                 mov esi, ecx
// 00677903  8b4610               mov eax, dword ptr [esi + 0x10]
// 00677906  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00677909  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0067790c  50                   push eax
// 0067790d  52                   push edx
// 0067790e  ff15e0ec7700         call dword ptr [0x77ece0]
// 00677914  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0067791b  5e                   pop esi
// 0067791c  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPopupBar.cpp (function ?KillTimer@BTNSCROLL@SCROLLINFO@CXTPPopupBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPopupBar.cpp
