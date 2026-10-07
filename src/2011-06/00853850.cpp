// roc 2011-06 00853850  unit: CXTPPopupToolBar  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00853850
//
// 00853850  8b442408             mov eax, dword ptr [esp + 8]
// 00853854  56                   push esi
// 00853855  8bf1                 mov esi, ecx
// 00853857  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085385b  50                   push eax
// 0085385c  51                   push ecx
// 0085385d  56                   push esi
// 0085385e  ff15101ca400         call dword ptr [0xa41c10]
// 00853864  85c0                 test eax, eax
// 00853866  7427                 je 0x85388f
// 00853868  837e1000             cmp dword ptr [esi + 0x10], 0
// 0085386c  7518                 jne 0x853886
// 0085386e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00853871  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00853874  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00853877  6a00                 push 0
// 00853879  6a50                 push 0x50
// 0085387b  50                   push eax
// 0085387c  52                   push edx
// 0085387d  ff15741ca400         call dword ptr [0xa41c74]
// 00853883  894610               mov dword ptr [esi + 0x10], eax
// 00853886  b801000000           mov eax, 1
// 0085388b  5e                   pop esi
// 0085388c  c20800               ret 8
// 0085388f  8b4610               mov eax, dword ptr [esi + 0x10]
// 00853892  85c0                 test eax, eax
// 00853894  7415                 je 0x8538ab
// 00853896  50                   push eax
// 00853897  8b4614               mov eax, dword ptr [esi + 0x14]
// 0085389a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0085389d  51                   push ecx
// 0085389e  ff15d019a400         call dword ptr [0xa419d0]
// 008538a4  c7461000000000       mov dword ptr [esi + 0x10], 0
// 008538ab  33c0                 xor eax, eax
// 008538ad  5e                   pop esi
// 008538ae  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPPopupBar.cpp (function ?OnMouseMove@BTNSCROLL@SCROLLINFO@CXTPPopupBar@@QAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPopupBar.cpp
