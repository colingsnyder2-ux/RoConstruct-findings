// roc 2010-06 0077b040  unit: RBX::PartDropTool  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077b040
//
// 0077b040  53                   push ebx
// 0077b041  55                   push ebp
// 0077b042  56                   push esi
// 0077b043  bebc000000           mov esi, 0xbc
// 0077b048  bb382ea500           mov ebx, 0xa52e38
// 0077b04d  57                   push edi
// 0077b04e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0077b052  2bde                 sub ebx, esi
// 0077b054  8b0c33               mov ecx, dword ptr [ebx + esi]
// 0077b057  8bc1                 mov eax, ecx
// 0077b059  8d6801               lea ebp, [eax + 1]
// 0077b05c  8d642400             lea esp, [esp]
// 0077b060  8a10                 mov dl, byte ptr [eax]
// 0077b062  40                   inc eax
// 0077b063  84d2                 test dl, dl
// 0077b065  75f9                 jne 0x77b060
// 0077b067  2bc5                 sub eax, ebp
// 0077b069  50                   push eax
// 0077b06a  51                   push ecx
// 0077b06b  57                   push edi
// 0077b06c  e86f2d0000           call 0x77dde0
// 0077b071  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0077b074  89040e               mov dword ptr [esi + ecx], eax
// 0077b077  8b5710               mov edx, dword ptr [edi + 0x10]
// 0077b07a  8b0432               mov eax, dword ptr [edx + esi]
// 0077b07d  80480520             or byte ptr [eax + 5], 0x20
// 0077b081  83c604               add esi, 4
// 0077b084  83c40c               add esp, 0xc
// 0077b087  81fe00010000         cmp esi, 0x100
// 0077b08d  7cc5                 jl 0x77b054
// 0077b08f  5f                   pop edi
// 0077b090  5e                   pop esi
// 0077b091  5d                   pop ebp
// 0077b092  5b                   pop ebx
// 0077b093  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
