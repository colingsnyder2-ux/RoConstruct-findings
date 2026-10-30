// from server: 100% by auto
// roc 2008-06 006fe4d0  unit: CXTPPropExchangeArchive  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fe4d0
//
// 006fe4d0  8b442408             mov eax, dword ptr [esp + 8]
// 006fe4d4  53                   push ebx
// 006fe4d5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006fe4d9  56                   push esi
// 006fe4da  50                   push eax
// 006fe4db  53                   push ebx
// 006fe4dc  8bf1                 mov esi, ecx
// 006fe4de  e8edfbffff           call 0x6fe0d0
// 006fe4e3  85c0                 test eax, eax
// 006fe4e5  7505                 jne 0x6fe4ec
// 006fe4e7  5e                   pop esi
// 006fe4e8  5b                   pop ebx
// 006fe4e9  c20800               ret 8
// 006fe4ec  837e2800             cmp dword ptr [esi + 0x28], 0
// 006fe4f0  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 006fe4f3  7429                 je 0x6fe51e
// 006fe4f5  e86ae10b00           call 0x7bc664
// 006fe4fa  8b4644               mov eax, dword ptr [esi + 0x44]
// 006fe4fd  8b4834               mov ecx, dword ptr [eax + 0x34]
// 006fe500  ff4034               inc dword ptr [eax + 0x34]
// 006fe503  8b13                 mov edx, dword ptr [ebx]
// 006fe505  8b4644               mov eax, dword ptr [esi + 0x44]
// 006fe508  6a01                 push 1
// 006fe50a  52                   push edx
// 006fe50b  51                   push ecx
// 006fe50c  8b4838               mov ecx, dword ptr [eax + 0x38]
// 006fe50f  e84ae10b00           call 0x7bc65e
// 006fe514  5e                   pop esi
// 006fe515  b801000000           mov eax, 1
// 006fe51a  5b                   pop ebx
// 006fe51b  c20800               ret 8
// 006fe51e  57                   push edi
// 006fe51f  6a00                 push 0
// 006fe521  e832e10b00           call 0x7bc658
// 006fe526  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 006fe529  e836e10b00           call 0x7bc664
// 006fe52e  8b4644               mov eax, dword ptr [esi + 0x44]
// 006fe531  8b7834               mov edi, dword ptr [eax + 0x34]
// 006fe534  ff4034               inc dword ptr [eax + 0x34]
// 006fe537  8b03                 mov eax, dword ptr [ebx]
// 006fe539  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 006fe53c  8b4938               mov ecx, dword ptr [ecx + 0x38]
// 006fe53f  50                   push eax
// 006fe540  e8f5e00b00           call 0x7bc63a
// 006fe545  8938                 mov dword ptr [eax], edi
// 006fe547  5f                   pop edi
// 006fe548  5e                   pop esi
// 006fe549  b801000000           mov eax, 1
// 006fe54e  5b                   pop ebx
// 006fe54f  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ?ExchangeObjectInstance@CXTPPropExchangeArchive@@UAEHAAPAVCObject@@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
