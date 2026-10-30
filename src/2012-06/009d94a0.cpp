// from server: 100% by auto
// roc 2012-06 009d94a0  unit: CXTPPropExchangeArchive  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d94a0
//
// 009d94a0  8b442408             mov eax, dword ptr [esp + 8]
// 009d94a4  53                   push ebx
// 009d94a5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009d94a9  56                   push esi
// 009d94aa  50                   push eax
// 009d94ab  53                   push ebx
// 009d94ac  8bf1                 mov esi, ecx
// 009d94ae  e8cdfbffff           call 0x9d9080
// 009d94b3  85c0                 test eax, eax
// 009d94b5  7505                 jne 0x9d94bc
// 009d94b7  5e                   pop esi
// 009d94b8  5b                   pop ebx
// 009d94b9  c20800               ret 8
// 009d94bc  837e2800             cmp dword ptr [esi + 0x28], 0
// 009d94c0  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 009d94c3  7429                 je 0x9d94ee
// 009d94c5  e898040c00           call 0xa99962
// 009d94ca  8b4644               mov eax, dword ptr [esi + 0x44]
// 009d94cd  8b4834               mov ecx, dword ptr [eax + 0x34]
// 009d94d0  ff4034               inc dword ptr [eax + 0x34]
// 009d94d3  8b13                 mov edx, dword ptr [ebx]
// 009d94d5  8b4644               mov eax, dword ptr [esi + 0x44]
// 009d94d8  6a01                 push 1
// 009d94da  52                   push edx
// 009d94db  51                   push ecx
// 009d94dc  8b4838               mov ecx, dword ptr [eax + 0x38]
// 009d94df  e878040c00           call 0xa9995c
// 009d94e4  5e                   pop esi
// 009d94e5  b801000000           mov eax, 1
// 009d94ea  5b                   pop ebx
// 009d94eb  c20800               ret 8
// 009d94ee  57                   push edi
// 009d94ef  6a00                 push 0
// 009d94f1  e860040c00           call 0xa99956
// 009d94f6  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 009d94f9  e864040c00           call 0xa99962
// 009d94fe  8b4644               mov eax, dword ptr [esi + 0x44]
// 009d9501  8b7834               mov edi, dword ptr [eax + 0x34]
// 009d9504  ff4034               inc dword ptr [eax + 0x34]
// 009d9507  8b03                 mov eax, dword ptr [ebx]
// 009d9509  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 009d950c  8b4938               mov ecx, dword ptr [ecx + 0x38]
// 009d950f  50                   push eax
// 009d9510  e829040c00           call 0xa9993e
// 009d9515  8938                 mov dword ptr [eax], edi
// 009d9517  5f                   pop edi
// 009d9518  5e                   pop esi
// 009d9519  b801000000           mov eax, 1
// 009d951e  5b                   pop ebx
// 009d951f  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?ExchangeObjectInstance@CXTPPropExchangeArchive@@UAEHAAPAVCObject@@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
