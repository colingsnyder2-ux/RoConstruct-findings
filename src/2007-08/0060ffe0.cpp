// from server: 100% by auto
// roc 2007-08 0060ffe0  unit: RBX::Ball  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060ffe0
//
// 0060ffe0  53                   push ebx
// 0060ffe1  55                   push ebp
// 0060ffe2  56                   push esi
// 0060ffe3  bebc000000           mov esi, 0xbc
// 0060ffe8  bb78317c00           mov ebx, 0x7c3178
// 0060ffed  57                   push edi
// 0060ffee  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0060fff2  2bde                 sub ebx, esi
// 0060fff4  8b0c33               mov ecx, dword ptr [ebx + esi]
// 0060fff7  8bc1                 mov eax, ecx
// 0060fff9  8d6801               lea ebp, [eax + 1]
// 0060fffc  8d642400             lea esp, [esp]
// 00610000  8a10                 mov dl, byte ptr [eax]
// 00610002  83c001               add eax, 1
// 00610005  84d2                 test dl, dl
// 00610007  75f7                 jne 0x610000
// 00610009  2bc5                 sub eax, ebp
// 0061000b  50                   push eax
// 0061000c  51                   push ecx
// 0061000d  57                   push edi
// 0061000e  e85d2d0000           call 0x612d70
// 00610013  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00610016  89040e               mov dword ptr [esi + ecx], eax
// 00610019  8b5710               mov edx, dword ptr [edi + 0x10]
// 0061001c  8b0432               mov eax, dword ptr [edx + esi]
// 0061001f  80480520             or byte ptr [eax + 5], 0x20
// 00610023  83c604               add esi, 4
// 00610026  83c40c               add esp, 0xc
// 00610029  81fe00010000         cmp esi, 0x100
// 0061002f  7cc3                 jl 0x60fff4
// 00610031  5f                   pop edi
// 00610032  5e                   pop esi
// 00610033  5d                   pop ebp
// 00610034  5b                   pop ebx
// 00610035  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_init)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
