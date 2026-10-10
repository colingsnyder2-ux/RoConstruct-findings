// roc 2008-06 00702d80  unit: CXTPTabClientWnd  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00702d80
//
// 00702d80  56                   push esi
// 00702d81  8bf1                 mov esi, ecx
// 00702d83  8b06                 mov eax, dword ptr [esi]
// 00702d85  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00702d8b  ffd2                 call edx
// 00702d8d  85c0                 test eax, eax
// 00702d8f  7448                 je 0x702dd9
// 00702d91  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 00702d98  751c                 jne 0x702db6
// 00702d9a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00702d9e  8b5104               mov edx, dword ptr [ecx + 4]
// 00702da1  8b06                 mov eax, dword ptr [esi]
// 00702da3  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 00702da9  6a00                 push 0
// 00702dab  52                   push edx
// 00702dac  6a0f                 push 0xf
// 00702dae  8bce                 mov ecx, esi
// 00702db0  ffd0                 call eax
// 00702db2  5e                   pop esi
// 00702db3  c21400               ret 0x14
// 00702db6  6a0c                 push 0xc
// 00702db8  8bc8                 mov ecx, eax
// 00702dba  e8a101faff           call 0x6a2f60
// 00702dbf  8bc8                 mov ecx, eax
// 00702dc1  e8aab2faff           call 0x6ae070
// 00702dc6  50                   push eax
// 00702dc7  8d4c2410             lea ecx, [esp + 0x10]
// 00702dcb  51                   push ecx
// 00702dcc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00702dd0  e889e5f9ff           call 0x6a135e
// 00702dd5  5e                   pop esi
// 00702dd6  c21400               ret 0x14
// 00702dd9  6a0c                 push 0xc
// 00702ddb  ff15582b8000         call dword ptr [0x802b58]
// 00702de1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00702de5  50                   push eax
// 00702de6  8d542410             lea edx, [esp + 0x10]
// 00702dea  52                   push edx
// 00702deb  e86ee5f9ff           call 0x6a135e
// 00702df0  5e                   pop esi
// 00702df1  c21400               ret 0x14
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnFillBackground@CXTPTabClientWnd@@UAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
