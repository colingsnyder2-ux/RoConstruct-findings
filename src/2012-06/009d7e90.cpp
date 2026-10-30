// roc 2012-06 009d7e90  unit: CXTPPropExchangeArchive  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d7e90
//
// 009d7e90  56                   push esi
// 009d7e91  8bf1                 mov esi, ecx
// 009d7e93  8b06                 mov eax, dword ptr [esi]
// 009d7e95  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 009d7e9b  ffd2                 call edx
// 009d7e9d  85c0                 test eax, eax
// 009d7e9f  7506                 jne 0x9d7ea7
// 009d7ea1  33c0                 xor eax, eax
// 009d7ea3  5e                   pop esi
// 009d7ea4  c20c00               ret 0xc
// 009d7ea7  837e2800             cmp dword ptr [esi + 0x28], 0
// 009d7eab  7518                 jne 0x9d7ec5
// 009d7ead  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009d7eb1  8b08                 mov ecx, dword ptr [eax]
// 009d7eb3  51                   push ecx
// 009d7eb4  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 009d7eb7  e8761a0c00           call 0xa99932
// 009d7ebc  b801000000           mov eax, 1
// 009d7ec1  5e                   pop esi
// 009d7ec2  c20c00               ret 0xc
// 009d7ec5  8b442410             mov eax, dword ptr [esp + 0x10]
// 009d7ec9  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 009d7ecc  6a00                 push 0
// 009d7ece  8d562c               lea edx, [esi + 0x2c]
// 009d7ed1  52                   push edx
// 009d7ed2  50                   push eax
// 009d7ed3  e8541a0c00           call 0xa9992c
// 009d7ed8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009d7edc  8901                 mov dword ptr [ecx], eax
// 009d7ede  85c0                 test eax, eax
// 009d7ee0  74bf                 je 0x9d7ea1
// 009d7ee2  b801000000           mov eax, 1
// 009d7ee7  5e                   pop esi
// 009d7ee8  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?ExchangeRuntimeClass@CXTPPropExchangeArchive@@UAEHPBDAAPAUCRuntimeClass@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
