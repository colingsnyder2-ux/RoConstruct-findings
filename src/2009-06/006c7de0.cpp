// roc 2009-06 006c7de0  unit: seg_006c0000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7de0
//
// 006c7de0  8b442408             mov eax, dword ptr [esp + 8]
// 006c7de4  8b4060               mov eax, dword ptr [eax + 0x60]
// 006c7de7  53                   push ebx
// 006c7de8  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006c7dec  8b5328               mov edx, dword ptr [ebx + 0x28]
// 006c7def  56                   push esi
// 006c7df0  8d0c40               lea ecx, [eax + eax*2]
// 006c7df3  57                   push edi
// 006c7df4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006c7df8  8d34ca               lea esi, [edx + ecx*8]
// 006c7dfb  e820ffffff           call 0x6c7d20
// 006c7e00  85c0                 test eax, eax
// 006c7e02  7420                 je 0x6c7e24
// 006c7e04  8b4b08               mov ecx, dword ptr [ebx + 8]
// 006c7e07  8b16                 mov edx, dword ptr [esi]
// 006c7e09  8b71f0               mov esi, dword ptr [ecx - 0x10]
// 006c7e0c  83e910               sub ecx, 0x10
// 006c7e0f  c1e704               shl edi, 4
// 006c7e12  8d5417f0             lea edx, [edi + edx - 0x10]
// 006c7e16  8932                 mov dword ptr [edx], esi
// 006c7e18  8b7104               mov esi, dword ptr [ecx + 4]
// 006c7e1b  897204               mov dword ptr [edx + 4], esi
// 006c7e1e  8b4908               mov ecx, dword ptr [ecx + 8]
// 006c7e21  894a08               mov dword ptr [edx + 8], ecx
// 006c7e24  834308f0             add dword ptr [ebx + 8], -0x10
// 006c7e28  5f                   pop edi
// 006c7e29  5e                   pop esi
// 006c7e2a  5b                   pop ebx
// 006c7e2b  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_setlocal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
