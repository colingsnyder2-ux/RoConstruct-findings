// roc 2008-06 006fce70  unit: CXTPPropExchangeArchive  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fce70
//
// 006fce70  56                   push esi
// 006fce71  8bf1                 mov esi, ecx
// 006fce73  8b06                 mov eax, dword ptr [esi]
// 006fce75  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 006fce7b  ffd2                 call edx
// 006fce7d  85c0                 test eax, eax
// 006fce7f  7506                 jne 0x6fce87
// 006fce81  33c0                 xor eax, eax
// 006fce83  5e                   pop esi
// 006fce84  c20c00               ret 0xc
// 006fce87  837e2800             cmp dword ptr [esi + 0x28], 0
// 006fce8b  7518                 jne 0x6fcea5
// 006fce8d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006fce91  8b08                 mov ecx, dword ptr [eax]
// 006fce93  51                   push ecx
// 006fce94  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 006fce97  e892f70b00           call 0x7bc62e
// 006fce9c  b801000000           mov eax, 1
// 006fcea1  5e                   pop esi
// 006fcea2  c20c00               ret 0xc
// 006fcea5  8b442410             mov eax, dword ptr [esp + 0x10]
// 006fcea9  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 006fceac  6a00                 push 0
// 006fceae  8d562c               lea edx, [esi + 0x2c]
// 006fceb1  52                   push edx
// 006fceb2  50                   push eax
// 006fceb3  e870f70b00           call 0x7bc628
// 006fceb8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006fcebc  8901                 mov dword ptr [ecx], eax
// 006fcebe  85c0                 test eax, eax
// 006fcec0  74bf                 je 0x6fce81
// 006fcec2  b801000000           mov eax, 1
// 006fcec7  5e                   pop esi
// 006fcec8  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?ExchangeRuntimeClass@CXTPPropExchangeArchive@@UAEHPBDAAPAUCRuntimeClass@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
