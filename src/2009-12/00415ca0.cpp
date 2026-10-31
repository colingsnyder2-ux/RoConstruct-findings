// roc 2009-12 00415ca0  unit: PasteVerb  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00415ca0
//
// 00415ca0  56                   push esi
// 00415ca1  57                   push edi
// 00415ca2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00415ca6  8bf1                 mov esi, ecx
// 00415ca8  85ff                 test edi, edi
// 00415caa  7459                 je 0x415d05
// 00415cac  8d44240c             lea eax, [esp + 0xc]
// 00415cb0  50                   push eax
// 00415cb1  57                   push edi
// 00415cb2  ff1530ba9800         call dword ptr [0x98ba30]
// 00415cb8  85c0                 test eax, eax
// 00415cba  7c27                 jl 0x415ce3
// 00415cbc  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00415cc1  7420                 je 0x415ce3
// 00415cc3  56                   push esi
// 00415cc4  57                   push edi
// 00415cc5  e896ffffff           call 0x415c60
// 00415cca  8b542414             mov edx, dword ptr [esp + 0x14]
// 00415cce  83c408               add esp, 8
// 00415cd1  b900200000           mov ecx, 0x2000
// 00415cd6  66090e               or word ptr [esi], cx
// 00415cd9  5f                   pop edi
// 00415cda  895608               mov dword ptr [esi + 8], edx
// 00415cdd  8bc6                 mov eax, esi
// 00415cdf  5e                   pop esi
// 00415ce0  c20400               ret 4
// 00415ce3  b90a000000           mov ecx, 0xa
// 00415ce8  66890e               mov word ptr [esi], cx
// 00415ceb  894608               mov dword ptr [esi + 8], eax
// 00415cee  3d0e000780           cmp eax, 0x8007000e
// 00415cf3  7506                 jne 0x415cfb
// 00415cf5  50                   push eax
// 00415cf6  e885cefeff           call 0x402b80
// 00415cfb  6857000780           push 0x80070057
// 00415d00  e87bcefeff           call 0x402b80
// 00415d05  33d2                 xor edx, edx
// 00415d07  5f                   pop edi
// 00415d08  668916               mov word ptr [esi], dx
// 00415d0b  8bc6                 mov eax, esi
// 00415d0d  5e                   pop esi
// 00415d0e  c20400               ret 4
// copied from an identical function in another client (function ??0CComVariant@ATL@@QAE@PBUtagSAFEARRAY@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: atl-9.0-dll-rtm roc_espeon_varianttypeaccessor21691409a28158c7.cpp