// roc 2009-06 0077d330  unit: CXTPTabClientWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077d330
//
// 0077d330  56                   push esi
// 0077d331  57                   push edi
// 0077d332  6a01                 push 1
// 0077d334  8bf1                 mov esi, ecx
// 0077d336  e895e6ffff           call 0x77b9d0
// 0077d33b  ff15e8ec8900         call dword ptr [0x89ece8]
// 0077d341  50                   push eax
// 0077d342  e8bbb9f9ff           call 0x718d02
// 0077d347  6a00                 push 0
// 0077d349  8bf8                 mov edi, eax
// 0077d34b  ff15d4ee8900         call dword ptr [0x89eed4]
// 0077d351  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0077d357  85c0                 test eax, eax
// 0077d359  7418                 je 0x77d373
// 0077d35b  8b4004               mov eax, dword ptr [eax + 4]
// 0077d35e  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0077d361  50                   push eax
// 0077d362  51                   push ecx
// 0077d363  ff1540ed8900         call dword ptr [0x89ed40]
// 0077d369  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 0077d373  5f                   pop edi
// 0077d374  5e                   pop esi
// 0077d375  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?CancelLoop@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
