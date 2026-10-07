// roc 2007-08 00677920  unit: CXTPControlComboBoxPopupBar  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00677920
//
// 00677920  8b442408             mov eax, dword ptr [esp + 8]
// 00677924  56                   push esi
// 00677925  8bf1                 mov esi, ecx
// 00677927  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067792b  50                   push eax
// 0067792c  51                   push ecx
// 0067792d  56                   push esi
// 0067792e  ff1594ed7700         call dword ptr [0x77ed94]
// 00677934  85c0                 test eax, eax
// 00677936  7427                 je 0x67795f
// 00677938  837e1000             cmp dword ptr [esi + 0x10], 0
// 0067793c  7518                 jne 0x677956
// 0067793e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00677941  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00677944  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00677947  6a00                 push 0
// 00677949  6a50                 push 0x50
// 0067794b  50                   push eax
// 0067794c  52                   push edx
// 0067794d  ff15eced7700         call dword ptr [0x77edec]
// 00677953  894610               mov dword ptr [esi + 0x10], eax
// 00677956  b801000000           mov eax, 1
// 0067795b  5e                   pop esi
// 0067795c  c20800               ret 8
// 0067795f  8b4610               mov eax, dword ptr [esi + 0x10]
// 00677962  85c0                 test eax, eax
// 00677964  7415                 je 0x67797b
// 00677966  50                   push eax
// 00677967  8b4614               mov eax, dword ptr [esi + 0x14]
// 0067796a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0067796d  51                   push ecx
// 0067796e  ff15e0ec7700         call dword ptr [0x77ece0]
// 00677974  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0067797b  33c0                 xor eax, eax
// 0067797d  5e                   pop esi
// 0067797e  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPopupBar.cpp (function ?OnMouseMove@BTNSCROLL@SCROLLINFO@CXTPPopupBar@@QAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPopupBar.cpp
