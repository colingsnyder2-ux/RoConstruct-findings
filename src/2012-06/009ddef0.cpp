// roc 2012-06 009ddef0  unit: CXTPTabClientWnd  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ddef0
//
// 009ddef0  56                   push esi
// 009ddef1  8bf1                 mov esi, ecx
// 009ddef3  8b06                 mov eax, dword ptr [esi]
// 009ddef5  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 009ddefb  ffd2                 call edx
// 009ddefd  85c0                 test eax, eax
// 009ddeff  7448                 je 0x9ddf49
// 009ddf01  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 009ddf08  751c                 jne 0x9ddf26
// 009ddf0a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009ddf0e  8b5104               mov edx, dword ptr [ecx + 4]
// 009ddf11  8b06                 mov eax, dword ptr [esi]
// 009ddf13  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 009ddf19  6a00                 push 0
// 009ddf1b  52                   push edx
// 009ddf1c  6a0f                 push 0xf
// 009ddf1e  8bce                 mov ecx, esi
// 009ddf20  ffd0                 call eax
// 009ddf22  5e                   pop esi
// 009ddf23  c21400               ret 0x14
// 009ddf26  6a0c                 push 0xc
// 009ddf28  8bc8                 mov ecx, eax
// 009ddf2a  e83149fcff           call 0x9a2860
// 009ddf2f  8bc8                 mov ecx, eax
// 009ddf31  e85a99faff           call 0x987890
// 009ddf36  50                   push eax
// 009ddf37  8d4c2410             lea ecx, [esp + 0x10]
// 009ddf3b  51                   push ecx
// 009ddf3c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ddf40  e8674ffaff           call 0x982eac
// 009ddf45  5e                   pop esi
// 009ddf46  c21400               ret 0x14
// 009ddf49  6a0c                 push 0xc
// 009ddf4b  ff15d83cb200         call dword ptr [0xb23cd8]
// 009ddf51  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009ddf55  50                   push eax
// 009ddf56  8d542410             lea edx, [esp + 0x10]
// 009ddf5a  52                   push edx
// 009ddf5b  e84c4ffaff           call 0x982eac
// 009ddf60  5e                   pop esi
// 009ddf61  c21400               ret 0x14
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnFillBackground@CXTPTabClientWnd@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
