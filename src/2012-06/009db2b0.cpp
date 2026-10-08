// from server: 100% by auto
// roc 2012-06 009db2b0  unit: CXTPPropExchangeXMLNode  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009db2b0
//
// 009db2b0  83794400             cmp dword ptr [ecx + 0x44], 0
// 009db2b4  56                   push esi
// 009db2b5  8d7144               lea esi, [ecx + 0x44]
// 009db2b8  7535                 jne 0x9db2ef
// 009db2ba  6a17                 push 0x17
// 009db2bc  6a00                 push 0
// 009db2be  688824b600           push 0xb62488
// 009db2c3  8bce                 mov ecx, esi
// 009db2c5  e8f6f2ffff           call 0x9da5c0
// 009db2ca  85c0                 test eax, eax
// 009db2cc  7d04                 jge 0x9db2d2
// 009db2ce  33c0                 xor eax, eax
// 009db2d0  5e                   pop esi
// 009db2d1  c3                   ret 
// 009db2d2  8b36                 mov esi, dword ptr [esi]
// 009db2d4  85f6                 test esi, esi
// 009db2d6  750a                 jne 0x9db2e2
// 009db2d8  6803400080           push 0x80004003
// 009db2dd  e84e8ffaff           call 0x984230
// 009db2e2  8b06                 mov eax, dword ptr [esi]
// 009db2e4  8b8820010000         mov ecx, dword ptr [eax + 0x120]
// 009db2ea  6aff                 push -1
// 009db2ec  56                   push esi
// 009db2ed  ffd1                 call ecx
// 009db2ef  b801000000           mov eax, 1
// 009db2f4  5e                   pop esi
// 009db2f5  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?CreateDocumentInstance@CXTPPropExchangeXMLNode@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
