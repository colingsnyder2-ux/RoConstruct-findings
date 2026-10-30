// roc 2009-12 00853d30  unit: CXTPPropExchangeXMLNode::CXMLEnumerator  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00853d30
//
// 00853d30  8b442404             mov eax, dword ptr [esp + 4]
// 00853d34  56                   push esi
// 00853d35  8bf1                 mov esi, ecx
// 00853d37  8b4e04               mov ecx, dword ptr [esi + 4]
// 00853d3a  89460c               mov dword ptr [esi + 0xc], eax
// 00853d3d  85c9                 test ecx, ecx
// 00853d3f  7506                 jne 0x853d47
// 00853d41  33c0                 xor eax, eax
// 00853d43  5e                   pop esi
// 00853d44  c20800               ret 8
// 00853d47  83792800             cmp dword ptr [ecx + 0x28], 0
// 00853d4b  743c                 je 0x853d89
// 00853d4d  8b11                 mov edx, dword ptr [ecx]
// 00853d4f  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 00853d55  ffd0                 call eax
// 00853d57  85c0                 test eax, eax
// 00853d59  74e6                 je 0x853d41
// 00853d5b  6a00                 push 0
// 00853d5d  8d4c240c             lea ecx, [esp + 0xc]
// 00853d61  51                   push ecx
// 00853d62  8bce                 mov ecx, esi
// 00853d64  e897ecffff           call 0x852a00
// 00853d69  83c610               add esi, 0x10
// 00853d6c  50                   push eax
// 00853d6d  8bce                 mov ecx, esi
// 00853d6f  e85cefffff           call 0x852cd0
// 00853d74  8b442408             mov eax, dword ptr [esp + 8]
// 00853d78  85c0                 test eax, eax
// 00853d7a  7408                 je 0x853d84
// 00853d7c  8b10                 mov edx, dword ptr [eax]
// 00853d7e  50                   push eax
// 00853d7f  8b4208               mov eax, dword ptr [edx + 8]
// 00853d82  ffd0                 call eax
// 00853d84  833e00               cmp dword ptr [esi], 0
// 00853d87  74b8                 je 0x853d41
// 00853d89  b801000000           mov eax, 1
// 00853d8e  5e                   pop esi
// 00853d8f  c20800               ret 8
// copied from an identical function in another client (function ?GetPosition@CXMLEnumerator@CXTPPropExchangeXMLNode@@UAEPAU__POSITION@@KH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp