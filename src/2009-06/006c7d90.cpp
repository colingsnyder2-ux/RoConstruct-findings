// from server: 100% by auto
// roc 2009-06 006c7d90  unit: seg_006c0000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7d90
//
// 006c7d90  8b442408             mov eax, dword ptr [esp + 8]
// 006c7d94  8b4060               mov eax, dword ptr [eax + 0x60]
// 006c7d97  53                   push ebx
// 006c7d98  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006c7d9c  8b5328               mov edx, dword ptr [ebx + 0x28]
// 006c7d9f  55                   push ebp
// 006c7da0  56                   push esi
// 006c7da1  8d0c40               lea ecx, [eax + eax*2]
// 006c7da4  57                   push edi
// 006c7da5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006c7da9  8d34ca               lea esi, [edx + ecx*8]
// 006c7dac  e86fffffff           call 0x6c7d20
// 006c7db1  8be8                 mov ebp, eax
// 006c7db3  85ed                 test ebp, ebp
// 006c7db5  7415                 je 0x6c7dcc
// 006c7db7  8b06                 mov eax, dword ptr [esi]
// 006c7db9  c1e704               shl edi, 4
// 006c7dbc  8d4c07f0             lea ecx, [edi + eax - 0x10]
// 006c7dc0  51                   push ecx
// 006c7dc1  53                   push ebx
// 006c7dc2  e8890effff           call 0x6b8c50
// 006c7dc7  83c408               add esp, 8
// 006c7dca  8bc5                 mov eax, ebp
// 006c7dcc  5f                   pop edi
// 006c7dcd  5e                   pop esi
// 006c7dce  5d                   pop ebp
// 006c7dcf  5b                   pop ebx
// 006c7dd0  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_getlocal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
