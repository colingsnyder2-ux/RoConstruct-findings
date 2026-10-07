// roc 2009-06 006e9da0  unit: RBX::PartDropTool  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9da0
//
// 006e9da0  53                   push ebx
// 006e9da1  55                   push ebp
// 006e9da2  56                   push esi
// 006e9da3  bebc000000           mov esi, 0xbc
// 006e9da8  bbb8db8e00           mov ebx, 0x8edbb8
// 006e9dad  57                   push edi
// 006e9dae  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006e9db2  2bde                 sub ebx, esi
// 006e9db4  8b0c33               mov ecx, dword ptr [ebx + esi]
// 006e9db7  8bc1                 mov eax, ecx
// 006e9db9  8d6801               lea ebp, [eax + 1]
// 006e9dbc  8d642400             lea esp, [esp]
// 006e9dc0  8a10                 mov dl, byte ptr [eax]
// 006e9dc2  40                   inc eax
// 006e9dc3  84d2                 test dl, dl
// 006e9dc5  75f9                 jne 0x6e9dc0
// 006e9dc7  2bc5                 sub eax, ebp
// 006e9dc9  50                   push eax
// 006e9dca  51                   push ecx
// 006e9dcb  57                   push edi
// 006e9dcc  e86f2d0000           call 0x6ecb40
// 006e9dd1  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 006e9dd4  89040e               mov dword ptr [esi + ecx], eax
// 006e9dd7  8b5710               mov edx, dword ptr [edi + 0x10]
// 006e9dda  8b0432               mov eax, dword ptr [edx + esi]
// 006e9ddd  80480520             or byte ptr [eax + 5], 0x20
// 006e9de1  83c604               add esi, 4
// 006e9de4  83c40c               add esp, 0xc
// 006e9de7  81fe00010000         cmp esi, 0x100
// 006e9ded  7cc5                 jl 0x6e9db4
// 006e9def  5f                   pop edi
// 006e9df0  5e                   pop esi
// 006e9df1  5d                   pop ebp
// 006e9df2  5b                   pop ebx
// 006e9df3  c3                   ret 
// library lua-5.1.4/ltm.c (function _luaT_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltm.c
