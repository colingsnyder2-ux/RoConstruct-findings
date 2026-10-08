// roc 2011-06 00866060  unit: CXTPTabClientWnd::CWorkspace  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00866060
//
// 00866060  56                   push esi
// 00866061  8bf1                 mov esi, ecx
// 00866063  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00866067  85c9                 test ecx, ecx
// 00866069  7472                 je 0x8660dd
// 0086606b  57                   push edi
// 0086606c  e84f5e0000           call 0x86bec0
// 00866071  50                   push eax
// 00866072  e8b142faff           call 0x80a328
// 00866077  8bf8                 mov edi, eax
// 00866079  85ff                 test edi, edi
// 0086607b  745f                 je 0x8660dc
// 0086607d  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 00866083  57                   push edi
// 00866084  e8a7f3ffff           call 0x865430
// 00866089  ff15f819a400         call dword ptr [0xa419f8]
// 0086608f  50                   push eax
// 00866090  e89342faff           call 0x80a328
// 00866095  8bf0                 mov esi, eax
// 00866097  85f6                 test esi, esi
// 00866099  743a                 je 0x8660d5
// 0086609b  837e2000             cmp dword ptr [esi + 0x20], 0
// 0086609f  7434                 je 0x8660d5
// 008660a1  3bf7                 cmp esi, edi
// 008660a3  7437                 je 0x8660dc
// 008660a5  56                   push esi
// 008660a6  8bcf                 mov ecx, edi
// 008660a8  e8d3e8ffff           call 0x864980
// 008660ad  85c0                 test eax, eax
// 008660af  752b                 jne 0x8660dc
// 008660b1  8bce                 mov ecx, esi
// 008660b3  e80868fbff           call 0x81c8c0
// 008660b8  85c0                 test eax, eax
// 008660ba  7419                 je 0x8660d5
// 008660bc  83782000             cmp dword ptr [eax + 0x20], 0
// 008660c0  7413                 je 0x8660d5
// 008660c2  8bce                 mov ecx, esi
// 008660c4  e8f767fbff           call 0x81c8c0
// 008660c9  50                   push eax
// 008660ca  8bcf                 mov ecx, edi
// 008660cc  e8afe8ffff           call 0x864980
// 008660d1  85c0                 test eax, eax
// 008660d3  7507                 jne 0x8660dc
// 008660d5  8bcf                 mov ecx, edi
// 008660d7  e82443faff           call 0x80a400
// 008660dc  5f                   pop edi
// 008660dd  5e                   pop esi
// 008660de  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnItemClick@CWorkspace@CXTPTabClientWnd@@MAEXPAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
