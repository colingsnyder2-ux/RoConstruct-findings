// roc 2011-06 004179e0  unit: PasteVerb  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004179e0
//
// 004179e0  56                   push esi
// 004179e1  57                   push edi
// 004179e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004179e6  8bf1                 mov esi, ecx
// 004179e8  85ff                 test edi, edi
// 004179ea  750a                 jne 0x4179f6
// 004179ec  5f                   pop edi
// 004179ed  b803400080           mov eax, 0x80004003
// 004179f2  5e                   pop esi
// 004179f3  c20400               ret 4
// 004179f6  57                   push edi
// 004179f7  ff15d80aa400         call dword ptr [0xa40ad8]
// 004179fd  85c0                 test eax, eax
// 004179ff  7c1a                 jl 0x417a1b
// 00417a01  6a10                 push 0x10
// 00417a03  56                   push esi
// 00417a04  6a10                 push 0x10
// 00417a06  57                   push edi
// 00417a07  ff153c0aa400         call dword ptr [0xa40a3c]
// 00417a0d  50                   push eax
// 00417a0e  e8fdb9feff           call 0x403410
// 00417a13  83c414               add esp, 0x14
// 00417a16  33c0                 xor eax, eax
// 00417a18  668906               mov word ptr [esi], ax
// 00417a1b  5f                   pop edi
// 00417a1c  5e                   pop esi
// 00417a1d  c20400               ret 4
// copied from an identical function in another client (function ?Detach@CComVariant@ATL@@QAEJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: atl-9.0-dll-rtm roc_espeon_varianttypeaccessor21691409a28158c7.cpp