// roc 2011-06 008610a0  unit: CXTPPropExchangeArchive  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008610a0
//
// 008610a0  8b442408             mov eax, dword ptr [esp + 8]
// 008610a4  53                   push ebx
// 008610a5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008610a9  56                   push esi
// 008610aa  50                   push eax
// 008610ab  53                   push ebx
// 008610ac  8bf1                 mov esi, ecx
// 008610ae  e8edfbffff           call 0x860ca0
// 008610b3  85c0                 test eax, eax
// 008610b5  7505                 jne 0x8610bc
// 008610b7  5e                   pop esi
// 008610b8  5b                   pop ebx
// 008610b9  c20800               ret 8
// 008610bc  837e2800             cmp dword ptr [esi + 0x28], 0
// 008610c0  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 008610c3  7429                 je 0x8610ee
// 008610c5  e8eab81600           call 0x9cc9b4
// 008610ca  8b4644               mov eax, dword ptr [esi + 0x44]
// 008610cd  8b4834               mov ecx, dword ptr [eax + 0x34]
// 008610d0  ff4034               inc dword ptr [eax + 0x34]
// 008610d3  8b13                 mov edx, dword ptr [ebx]
// 008610d5  8b4644               mov eax, dword ptr [esi + 0x44]
// 008610d8  6a01                 push 1
// 008610da  52                   push edx
// 008610db  51                   push ecx
// 008610dc  8b4838               mov ecx, dword ptr [eax + 0x38]
// 008610df  e8cab81600           call 0x9cc9ae
// 008610e4  5e                   pop esi
// 008610e5  b801000000           mov eax, 1
// 008610ea  5b                   pop ebx
// 008610eb  c20800               ret 8
// 008610ee  57                   push edi
// 008610ef  6a00                 push 0
// 008610f1  e8b2b81600           call 0x9cc9a8
// 008610f6  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 008610f9  e8b6b81600           call 0x9cc9b4
// 008610fe  8b4644               mov eax, dword ptr [esi + 0x44]
// 00861101  8b7834               mov edi, dword ptr [eax + 0x34]
// 00861104  ff4034               inc dword ptr [eax + 0x34]
// 00861107  8b03                 mov eax, dword ptr [ebx]
// 00861109  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0086110c  8b4938               mov ecx, dword ptr [ecx + 0x38]
// 0086110f  50                   push eax
// 00861110  e87bb81600           call 0x9cc990
// 00861115  8938                 mov dword ptr [eax], edi
// 00861117  5f                   pop edi
// 00861118  5e                   pop esi
// 00861119  b801000000           mov eax, 1
// 0086111e  5b                   pop ebx
// 0086111f  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?ExchangeObjectInstance@CXTPPropExchangeArchive@@UAEHAAPAVCObject@@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
