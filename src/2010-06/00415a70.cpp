// roc 2010-06 00415a70  unit: PasteVerb  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00415a70
//
// 00415a70  56                   push esi
// 00415a71  57                   push edi
// 00415a72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00415a76  8bf1                 mov esi, ecx
// 00415a78  85ff                 test edi, edi
// 00415a7a  750a                 jne 0x415a86
// 00415a7c  5f                   pop edi
// 00415a7d  b803400080           mov eax, 0x80004003
// 00415a82  5e                   pop esi
// 00415a83  c20400               ret 4
// 00415a86  57                   push edi
// 00415a87  ff1564aa9e00         call dword ptr [0x9eaa64]
// 00415a8d  85c0                 test eax, eax
// 00415a8f  7c1a                 jl 0x415aab
// 00415a91  6a10                 push 0x10
// 00415a93  56                   push esi
// 00415a94  6a10                 push 0x10
// 00415a96  57                   push edi
// 00415a97  ff15c4a89e00         call dword ptr [0x9ea8c4]
// 00415a9d  50                   push eax
// 00415a9e  e89dcffeff           call 0x402a40
// 00415aa3  83c414               add esp, 0x14
// 00415aa6  33c0                 xor eax, eax
// 00415aa8  668906               mov word ptr [esi], ax
// 00415aab  5f                   pop edi
// 00415aac  5e                   pop esi
// 00415aad  c20400               ret 4
// copied from an identical function in another client (function ?Detach@CComVariant@ATL@@QAEJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: atl-9.0-dll-rtm roc_espeon_varianttypeaccessor21691409a28158c7.cpp