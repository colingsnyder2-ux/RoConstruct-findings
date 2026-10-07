// roc 2008-06 006ee760  unit: CXTPPopupToolBar  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee760
//
// 006ee760  8b442408             mov eax, dword ptr [esp + 8]
// 006ee764  56                   push esi
// 006ee765  8bf1                 mov esi, ecx
// 006ee767  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ee76b  50                   push eax
// 006ee76c  51                   push ecx
// 006ee76d  56                   push esi
// 006ee76e  ff152c2d8000         call dword ptr [0x802d2c]
// 006ee774  85c0                 test eax, eax
// 006ee776  7427                 je 0x6ee79f
// 006ee778  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ee77c  7518                 jne 0x6ee796
// 006ee77e  8b4618               mov eax, dword ptr [esi + 0x18]
// 006ee781  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006ee784  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006ee787  6a00                 push 0
// 006ee789  6a50                 push 0x50
// 006ee78b  50                   push eax
// 006ee78c  52                   push edx
// 006ee78d  ff157c2d8000         call dword ptr [0x802d7c]
// 006ee793  894610               mov dword ptr [esi + 0x10], eax
// 006ee796  b801000000           mov eax, 1
// 006ee79b  5e                   pop esi
// 006ee79c  c20800               ret 8
// 006ee79f  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ee7a2  85c0                 test eax, eax
// 006ee7a4  7415                 je 0x6ee7bb
// 006ee7a6  50                   push eax
// 006ee7a7  8b4614               mov eax, dword ptr [esi + 0x14]
// 006ee7aa  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006ee7ad  51                   push ecx
// 006ee7ae  ff151c2e8000         call dword ptr [0x802e1c]
// 006ee7b4  c7461000000000       mov dword ptr [esi + 0x10], 0
// 006ee7bb  33c0                 xor eax, eax
// 006ee7bd  5e                   pop esi
// 006ee7be  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnMouseMove@BTNSCROLL@SCROLLINFO@CXTPPopupBar@@QAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
