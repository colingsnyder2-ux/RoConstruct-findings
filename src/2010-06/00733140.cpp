// roc 2010-06 00733140  unit: lua_exception  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733140
//
// 00733140  8b442408             mov eax, dword ptr [esp + 8]
// 00733144  8b4060               mov eax, dword ptr [eax + 0x60]
// 00733147  53                   push ebx
// 00733148  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0073314c  8b5328               mov edx, dword ptr [ebx + 0x28]
// 0073314f  56                   push esi
// 00733150  8d0c40               lea ecx, [eax + eax*2]
// 00733153  57                   push edi
// 00733154  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00733158  8d34ca               lea esi, [edx + ecx*8]
// 0073315b  e820ffffff           call 0x733080
// 00733160  85c0                 test eax, eax
// 00733162  7420                 je 0x733184
// 00733164  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00733167  8b16                 mov edx, dword ptr [esi]
// 00733169  8b71f0               mov esi, dword ptr [ecx - 0x10]
// 0073316c  83e910               sub ecx, 0x10
// 0073316f  c1e704               shl edi, 4
// 00733172  8d5417f0             lea edx, [edi + edx - 0x10]
// 00733176  8932                 mov dword ptr [edx], esi
// 00733178  8b7104               mov esi, dword ptr [ecx + 4]
// 0073317b  897204               mov dword ptr [edx + 4], esi
// 0073317e  8b4908               mov ecx, dword ptr [ecx + 8]
// 00733181  894a08               mov dword ptr [edx + 8], ecx
// 00733184  834308f0             add dword ptr [ebx + 8], -0x10
// 00733188  5f                   pop edi
// 00733189  5e                   pop esi
// 0073318a  5b                   pop ebx
// 0073318b  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_setlocal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
