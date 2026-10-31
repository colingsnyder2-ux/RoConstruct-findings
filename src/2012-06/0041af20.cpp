// roc 2012-06 0041af20  unit: CopyVerb  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041af20
//
// 0041af20  56                   push esi
// 0041af21  57                   push edi
// 0041af22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0041af26  8bf1                 mov esi, ecx
// 0041af28  85ff                 test edi, edi
// 0041af2a  750a                 jne 0x41af36
// 0041af2c  5f                   pop edi
// 0041af2d  b803400080           mov eax, 0x80004003
// 0041af32  5e                   pop esi
// 0041af33  c20400               ret 4
// 0041af36  57                   push edi
// 0041af37  ff152c2bb200         call dword ptr [0xb22b2c]
// 0041af3d  85c0                 test eax, eax
// 0041af3f  7c1a                 jl 0x41af5b
// 0041af41  6a10                 push 0x10
// 0041af43  56                   push esi
// 0041af44  6a10                 push 0x10
// 0041af46  57                   push edi
// 0041af47  ff15fc29b200         call dword ptr [0xb229fc]
// 0041af4d  50                   push eax
// 0041af4e  e8cd90feff           call 0x404020
// 0041af53  83c414               add esp, 0x14
// 0041af56  33c0                 xor eax, eax
// 0041af58  668906               mov word ptr [esi], ax
// 0041af5b  5f                   pop edi
// 0041af5c  5e                   pop esi
// 0041af5d  c20400               ret 4
// copied from an identical function in another client (function ?Detach@CComVariant@ATL@@QAEJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: atl-9.0-dll-rtm roc_espeon_varianttypeaccessor21691409a28158c7.cpp