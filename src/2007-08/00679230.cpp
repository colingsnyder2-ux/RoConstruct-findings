// roc 2007-08 00679230  unit: CXTPPopupBar  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00679230
//
// 00679230  51                   push ecx
// 00679231  57                   push edi
// 00679232  8bf9                 mov edi, ecx
// 00679234  85ff                 test edi, edi
// 00679236  897c2404             mov dword ptr [esp + 4], edi
// 0067923a  7407                 je 0x679243
// 0067923c  8b4720               mov eax, dword ptr [edi + 0x20]
// 0067923f  85c0                 test eax, eax
// 00679241  7509                 jne 0x67924c
// 00679243  5f                   pop edi
// 00679244  83c404               add esp, 4
// 00679247  e9a06afbff           jmp 0x62fcec
// 0067924c  55                   push ebp
// 0067924d  8b2df4eb7700         mov ebp, dword ptr [0x77ebf4]
// 00679253  56                   push esi
// 00679254  6a05                 push 5
// 00679256  50                   push eax
// 00679257  ffd5                 call ebp
// 00679259  50                   push eax
// 0067925a  e8616ffbff           call 0x6301c0
// 0067925f  8bf0                 mov esi, eax
// 00679261  85f6                 test esi, esi
// 00679263  8bcf                 mov ecx, edi
// 00679265  750b                 jne 0x679272
// 00679267  5e                   pop esi
// 00679268  5d                   pop ebp
// 00679269  5f                   pop edi
// 0067926a  83c404               add esp, 4
// 0067926d  e97a6afbff           jmp 0x62fcec
// 00679272  53                   push ebx
// 00679273  e8f8d2fcff           call 0x646570
// 00679278  8bd8                 mov ebx, eax
// 0067927a  8d9b00000000         lea ebx, [ebx]
// 00679280  8b4620               mov eax, dword ptr [esi + 0x20]
// 00679283  6a02                 push 2
// 00679285  50                   push eax
// 00679286  ffd5                 call ebp
// 00679288  50                   push eax
// 00679289  e8326ffbff           call 0x6301c0
// 0067928e  6a00                 push 0
// 00679290  8bce                 mov ecx, esi
// 00679292  8bf8                 mov edi, eax
// 00679294  e8b16cfbff           call 0x62ff4a
// 00679299  85db                 test ebx, ebx
// 0067929b  7504                 jne 0x6792a1
// 0067929d  33c0                 xor eax, eax
// 0067929f  eb03                 jmp 0x6792a4
// 006792a1  8b4320               mov eax, dword ptr [ebx + 0x20]
// 006792a4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006792a7  50                   push eax
// 006792a8  51                   push ecx
// 006792a9  ff15acee7700         call dword ptr [0x77eeac]
// 006792af  50                   push eax
// 006792b0  e80b6ffbff           call 0x6301c0
// 006792b5  85ff                 test edi, edi
// 006792b7  8bf7                 mov esi, edi
// 006792b9  75c5                 jne 0x679280
// 006792bb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006792bf  5b                   pop ebx
// 006792c0  5e                   pop esi
// 006792c1  5d                   pop ebp
// 006792c2  5f                   pop edi
// 006792c3  83c404               add esp, 4
// 006792c6  e9216afbff           jmp 0x62fcec
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPopupBar.cpp (function ?DestroyWindow@CXTPPopupBar@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPopupBar.cpp
