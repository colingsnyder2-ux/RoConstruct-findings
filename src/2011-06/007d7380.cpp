// from server: 100% by auto
// roc 2011-06 007d7380  unit: RBX::EquationDisplay  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d7380
//
// 007d7380  53                   push ebx
// 007d7381  55                   push ebp
// 007d7382  56                   push esi
// 007d7383  bebc000000           mov esi, 0xbc
// 007d7388  bb50ddab00           mov ebx, 0xabdd50
// 007d738d  57                   push edi
// 007d738e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007d7392  2bde                 sub ebx, esi
// 007d7394  8b0c33               mov ecx, dword ptr [ebx + esi]
// 007d7397  8bc1                 mov eax, ecx
// 007d7399  8d6801               lea ebp, [eax + 1]
// 007d739c  8d642400             lea esp, [esp]
// 007d73a0  8a10                 mov dl, byte ptr [eax]
// 007d73a2  40                   inc eax
// 007d73a3  84d2                 test dl, dl
// 007d73a5  75f9                 jne 0x7d73a0
// 007d73a7  2bc5                 sub eax, ebp
// 007d73a9  50                   push eax
// 007d73aa  51                   push ecx
// 007d73ab  57                   push edi
// 007d73ac  e86f2e0000           call 0x7da220
// 007d73b1  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 007d73b4  89040e               mov dword ptr [esi + ecx], eax
// 007d73b7  8b5710               mov edx, dword ptr [edi + 0x10]
// 007d73ba  8b0432               mov eax, dword ptr [edx + esi]
// 007d73bd  80480520             or byte ptr [eax + 5], 0x20
// 007d73c1  83c604               add esi, 4
// 007d73c4  83c40c               add esp, 0xc
// 007d73c7  81fe00010000         cmp esi, 0x100
// 007d73cd  7cc5                 jl 0x7d7394
// 007d73cf  5f                   pop edi
// 007d73d0  5e                   pop esi
// 007d73d1  5d                   pop ebp
// 007d73d2  5b                   pop ebx
// 007d73d3  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
