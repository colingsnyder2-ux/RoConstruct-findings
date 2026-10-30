// from server: 100% by auto
// roc 2008-06 007002a0  unit: CXTPPropExchangeXMLNode  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007002a0
//
// 007002a0  83794400             cmp dword ptr [ecx + 0x44], 0
// 007002a4  56                   push esi
// 007002a5  8d7144               lea esi, [ecx + 0x44]
// 007002a8  7535                 jne 0x7002df
// 007002aa  6a17                 push 0x17
// 007002ac  6a00                 push 0
// 007002ae  6844c38100           push 0x81c344
// 007002b3  8bce                 mov ecx, esi
// 007002b5  e8f6f2ffff           call 0x6ff5b0
// 007002ba  85c0                 test eax, eax
// 007002bc  7d04                 jge 0x7002c2
// 007002be  33c0                 xor eax, eax
// 007002c0  5e                   pop esi
// 007002c1  c3                   ret 
// 007002c2  8b36                 mov esi, dword ptr [esi]
// 007002c4  85f6                 test esi, esi
// 007002c6  750a                 jne 0x7002d2
// 007002c8  6803400080           push 0x80004003
// 007002cd  e87e22faff           call 0x6a2550
// 007002d2  8b06                 mov eax, dword ptr [esi]
// 007002d4  8b8820010000         mov ecx, dword ptr [eax + 0x120]
// 007002da  6aff                 push -1
// 007002dc  56                   push esi
// 007002dd  ffd1                 call ecx
// 007002df  b801000000           mov eax, 1
// 007002e4  5e                   pop esi
// 007002e5  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ?CreateDocumentInstance@CXTPPropExchangeXMLNode@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
