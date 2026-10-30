// from server: 100% by auto
// roc 2011-06 00862ec0  unit: CXTPPropExchangeXMLNode  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00862ec0
//
// 00862ec0  83794400             cmp dword ptr [ecx + 0x44], 0
// 00862ec4  56                   push esi
// 00862ec5  8d7144               lea esi, [ecx + 0x44]
// 00862ec8  7535                 jne 0x862eff
// 00862eca  6a17                 push 0x17
// 00862ecc  6a00                 push 0
// 00862ece  688458a700           push 0xa75884
// 00862ed3  8bce                 mov ecx, esi
// 00862ed5  e8f6f2ffff           call 0x8621d0
// 00862eda  85c0                 test eax, eax
// 00862edc  7d04                 jge 0x862ee2
// 00862ede  33c0                 xor eax, eax
// 00862ee0  5e                   pop esi
// 00862ee1  c3                   ret 
// 00862ee2  8b36                 mov esi, dword ptr [esi]
// 00862ee4  85f6                 test esi, esi
// 00862ee6  750a                 jne 0x862ef2
// 00862ee8  6803400080           push 0x80004003
// 00862eed  e83e92faff           call 0x80c130
// 00862ef2  8b06                 mov eax, dword ptr [esi]
// 00862ef4  8b8820010000         mov ecx, dword ptr [eax + 0x120]
// 00862efa  6aff                 push -1
// 00862efc  56                   push esi
// 00862efd  ffd1                 call ecx
// 00862eff  b801000000           mov eax, 1
// 00862f04  5e                   pop esi
// 00862f05  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?CreateDocumentInstance@CXTPPropExchangeXMLNode@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
