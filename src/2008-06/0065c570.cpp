// roc 2008-06 0065c570  unit: RBX::BallBallContact  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c570
//
// 0065c570  53                   push ebx
// 0065c571  55                   push ebp
// 0065c572  56                   push esi
// 0065c573  bebc000000           mov esi, 0xbc
// 0065c578  bb90c28400           mov ebx, 0x84c290
// 0065c57d  57                   push edi
// 0065c57e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0065c582  2bde                 sub ebx, esi
// 0065c584  8b0c33               mov ecx, dword ptr [ebx + esi]
// 0065c587  8bc1                 mov eax, ecx
// 0065c589  8d6801               lea ebp, [eax + 1]
// 0065c58c  8d642400             lea esp, [esp]
// 0065c590  8a10                 mov dl, byte ptr [eax]
// 0065c592  40                   inc eax
// 0065c593  84d2                 test dl, dl
// 0065c595  75f9                 jne 0x65c590
// 0065c597  2bc5                 sub eax, ebp
// 0065c599  50                   push eax
// 0065c59a  51                   push ecx
// 0065c59b  57                   push edi
// 0065c59c  e85f2d0000           call 0x65f300
// 0065c5a1  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0065c5a4  89040e               mov dword ptr [esi + ecx], eax
// 0065c5a7  8b5710               mov edx, dword ptr [edi + 0x10]
// 0065c5aa  8b0432               mov eax, dword ptr [edx + esi]
// 0065c5ad  80480520             or byte ptr [eax + 5], 0x20
// 0065c5b1  83c604               add esi, 4
// 0065c5b4  83c40c               add esp, 0xc
// 0065c5b7  81fe00010000         cmp esi, 0x100
// 0065c5bd  7cc5                 jl 0x65c584
// 0065c5bf  5f                   pop edi
// 0065c5c0  5e                   pop esi
// 0065c5c1  5d                   pop ebp
// 0065c5c2  5b                   pop ebx
// 0065c5c3  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
