// roc 2009-12 00415d20  unit: PasteVerb  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00415d20
//
// 00415d20  56                   push esi
// 00415d21  57                   push edi
// 00415d22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00415d26  8bf1                 mov esi, ecx
// 00415d28  85ff                 test edi, edi
// 00415d2a  750a                 jne 0x415d36
// 00415d2c  5f                   pop edi
// 00415d2d  b803400080           mov eax, 0x80004003
// 00415d32  5e                   pop esi
// 00415d33  c20400               ret 4
// 00415d36  57                   push edi
// 00415d37  ff1534ba9800         call dword ptr [0x98ba34]
// 00415d3d  85c0                 test eax, eax
// 00415d3f  7c1a                 jl 0x415d5b
// 00415d41  6a10                 push 0x10
// 00415d43  56                   push esi
// 00415d44  6a10                 push 0x10
// 00415d46  57                   push edi
// 00415d47  ff157cb79800         call dword ptr [0x98b77c]
// 00415d4d  50                   push eax
// 00415d4e  e89dccfeff           call 0x4029f0
// 00415d53  83c414               add esp, 0x14
// 00415d56  33c0                 xor eax, eax
// 00415d58  668906               mov word ptr [esi], ax
// 00415d5b  5f                   pop edi
// 00415d5c  5e                   pop esi
// 00415d5d  c20400               ret 4
// copied from an identical function in another client (function ?Detach@CComVariant@ATL@@QAEJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: atl-9.0-dll-rtm roc_espeon_varianttypeaccessor21691409a28158c7.cpp