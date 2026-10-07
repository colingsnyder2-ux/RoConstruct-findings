// roc 2012-06 00933490  unit: RBX::BallCellContact  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00933490
//
// 00933490  53                   push ebx
// 00933491  55                   push ebp
// 00933492  56                   push esi
// 00933493  bebc000000           mov esi, 0xbc
// 00933498  bb58f5bf00           mov ebx, 0xbff558
// 0093349d  57                   push edi
// 0093349e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009334a2  2bde                 sub ebx, esi
// 009334a4  8b0c33               mov ecx, dword ptr [ebx + esi]
// 009334a7  8bc1                 mov eax, ecx
// 009334a9  8d6801               lea ebp, [eax + 1]
// 009334ac  8d642400             lea esp, [esp]
// 009334b0  8a10                 mov dl, byte ptr [eax]
// 009334b2  40                   inc eax
// 009334b3  84d2                 test dl, dl
// 009334b5  75f9                 jne 0x9334b0
// 009334b7  2bc5                 sub eax, ebp
// 009334b9  50                   push eax
// 009334ba  51                   push ecx
// 009334bb  57                   push edi
// 009334bc  e86f2e0000           call 0x936330
// 009334c1  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 009334c4  89040e               mov dword ptr [esi + ecx], eax
// 009334c7  8b5710               mov edx, dword ptr [edi + 0x10]
// 009334ca  8b0432               mov eax, dword ptr [edx + esi]
// 009334cd  80480520             or byte ptr [eax + 5], 0x20
// 009334d1  83c604               add esi, 4
// 009334d4  83c40c               add esp, 0xc
// 009334d7  81fe00010000         cmp esi, 0x100
// 009334dd  7cc5                 jl 0x9334a4
// 009334df  5f                   pop edi
// 009334e0  5e                   pop esi
// 009334e1  5d                   pop ebp
// 009334e2  5b                   pop ebx
// 009334e3  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
