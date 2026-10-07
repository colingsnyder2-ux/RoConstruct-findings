// roc 2008-06 00622e20  unit: lua_exception  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622e20
//
// 00622e20  8b442408             mov eax, dword ptr [esp + 8]
// 00622e24  8b4060               mov eax, dword ptr [eax + 0x60]
// 00622e27  53                   push ebx
// 00622e28  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00622e2c  8b5328               mov edx, dword ptr [ebx + 0x28]
// 00622e2f  56                   push esi
// 00622e30  8d0c40               lea ecx, [eax + eax*2]
// 00622e33  57                   push edi
// 00622e34  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00622e38  8d34ca               lea esi, [edx + ecx*8]
// 00622e3b  e820ffffff           call 0x622d60
// 00622e40  85c0                 test eax, eax
// 00622e42  7420                 je 0x622e64
// 00622e44  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00622e47  8b16                 mov edx, dword ptr [esi]
// 00622e49  8b71f0               mov esi, dword ptr [ecx - 0x10]
// 00622e4c  83e910               sub ecx, 0x10
// 00622e4f  c1e704               shl edi, 4
// 00622e52  8d5417f0             lea edx, [edi + edx - 0x10]
// 00622e56  8932                 mov dword ptr [edx], esi
// 00622e58  8b7104               mov esi, dword ptr [ecx + 4]
// 00622e5b  897204               mov dword ptr [edx + 4], esi
// 00622e5e  8b4908               mov ecx, dword ptr [ecx + 8]
// 00622e61  894a08               mov dword ptr [edx + 8], ecx
// 00622e64  834308f0             add dword ptr [ebx + 8], -0x10
// 00622e68  5f                   pop edi
// 00622e69  5e                   pop esi
// 00622e6a  5b                   pop ebx
// 00622e6b  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_setlocal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
