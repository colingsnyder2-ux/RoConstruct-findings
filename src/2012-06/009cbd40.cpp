// roc 2012-06 009cbd40  unit: CXTPControlComboBoxPopupBar  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cbd40
//
// 009cbd40  8b442408             mov eax, dword ptr [esp + 8]
// 009cbd44  56                   push esi
// 009cbd45  8bf1                 mov esi, ecx
// 009cbd47  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009cbd4b  50                   push eax
// 009cbd4c  51                   push ecx
// 009cbd4d  56                   push esi
// 009cbd4e  ff15483bb200         call dword ptr [0xb23b48]
// 009cbd54  85c0                 test eax, eax
// 009cbd56  7427                 je 0x9cbd7f
// 009cbd58  837e1000             cmp dword ptr [esi + 0x10], 0
// 009cbd5c  7518                 jne 0x9cbd76
// 009cbd5e  8b4618               mov eax, dword ptr [esi + 0x18]
// 009cbd61  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 009cbd64  8b5120               mov edx, dword ptr [ecx + 0x20]
// 009cbd67  6a00                 push 0
// 009cbd69  6a50                 push 0x50
// 009cbd6b  50                   push eax
// 009cbd6c  52                   push edx
// 009cbd6d  ff15e03ab200         call dword ptr [0xb23ae0]
// 009cbd73  894610               mov dword ptr [esi + 0x10], eax
// 009cbd76  b801000000           mov eax, 1
// 009cbd7b  5e                   pop esi
// 009cbd7c  c20800               ret 8
// 009cbd7f  8b4610               mov eax, dword ptr [esi + 0x10]
// 009cbd82  85c0                 test eax, eax
// 009cbd84  7415                 je 0x9cbd9b
// 009cbd86  50                   push eax
// 009cbd87  8b4614               mov eax, dword ptr [esi + 0x14]
// 009cbd8a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009cbd8d  51                   push ecx
// 009cbd8e  ff15083cb200         call dword ptr [0xb23c08]
// 009cbd94  c7461000000000       mov dword ptr [esi + 0x10], 0
// 009cbd9b  33c0                 xor eax, eax
// 009cbd9d  5e                   pop esi
// 009cbd9e  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?OnMouseMove@BTNSCROLL@SCROLLINFO@CXTPPopupBar@@QAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
