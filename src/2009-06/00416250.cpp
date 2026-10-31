// roc 2009-06 00416250  unit: CopyVerb  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00416250
//
// 00416250  56                   push esi
// 00416251  57                   push edi
// 00416252  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00416256  8bf1                 mov esi, ecx
// 00416258  85ff                 test edi, edi
// 0041625a  750a                 jne 0x416266
// 0041625c  5f                   pop edi
// 0041625d  b803400080           mov eax, 0x80004003
// 00416262  5e                   pop esi
// 00416263  c20400               ret 4
// 00416266  57                   push edi
// 00416267  ff1528ea8900         call dword ptr [0x89ea28]
// 0041626d  85c0                 test eax, eax
// 0041626f  7c1a                 jl 0x41628b
// 00416271  6a10                 push 0x10
// 00416273  56                   push esi
// 00416274  6a10                 push 0x10
// 00416276  57                   push edi
// 00416277  ff1590e98900         call dword ptr [0x89e990]
// 0041627d  50                   push eax
// 0041627e  e89dcafeff           call 0x402d20
// 00416283  83c414               add esp, 0x14
// 00416286  33c0                 xor eax, eax
// 00416288  668906               mov word ptr [esi], ax
// 0041628b  5f                   pop edi
// 0041628c  5e                   pop esi
// 0041628d  c20400               ret 4
// copied from an identical function in another client (function ?Detach@CComVariant@ATL@@QAEJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: atl-9.0-dll-rtm roc_espeon_varianttypeaccessor21691409a28158c7.cpp