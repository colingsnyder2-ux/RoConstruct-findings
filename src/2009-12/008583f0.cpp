// roc 2009-12 008583f0  unit: CXTPTabClientWnd  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008583f0
//
// 008583f0  56                   push esi
// 008583f1  57                   push edi
// 008583f2  6a01                 push 1
// 008583f4  8bf1                 mov esi, ecx
// 008583f6  e835e6ffff           call 0x856a30
// 008583fb  ff15e4cb9800         call dword ptr [0x98cbe4]
// 00858401  50                   push eax
// 00858402  e823b7f9ff           call 0x7f3b2a
// 00858407  6a00                 push 0
// 00858409  8bf8                 mov edi, eax
// 0085840b  ff15acca9800         call dword ptr [0x98caac]
// 00858411  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00858417  85c0                 test eax, eax
// 00858419  7418                 je 0x858433
// 0085841b  8b4004               mov eax, dword ptr [eax + 4]
// 0085841e  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00858421  50                   push eax
// 00858422  51                   push ecx
// 00858423  ff15d8cb9800         call dword ptr [0x98cbd8]
// 00858429  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 00858433  5f                   pop edi
// 00858434  5e                   pop esi
// 00858435  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?CancelLoop@CXTPTabClientWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
