// from server: 100% by auto
// roc 2010-06 00722f80  unit: RBX::UniversalTool  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722f80
//
// 00722f80  56                   push esi
// 00722f81  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00722f85  57                   push edi
// 00722f86  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00722f8a  56                   push esi
// 00722f8b  57                   push edi
// 00722f8c  e8afe1ffff           call 0x721140
// 00722f91  83c408               add esp, 8
// 00722f94  85c0                 test eax, eax
// 00722f96  7f2d                 jg 0x722fc5
// 00722f98  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00722f9c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00722fa0  85ff                 test edi, edi
// 00722fa2  7430                 je 0x722fd4
// 00722fa4  85c0                 test eax, eax
// 00722fa6  7416                 je 0x722fbe
// 00722fa8  8bc8                 mov ecx, eax
// 00722faa  8d7101               lea esi, [ecx + 1]
// 00722fad  8d4900               lea ecx, [ecx]
// 00722fb0  8a11                 mov dl, byte ptr [ecx]
// 00722fb2  41                   inc ecx
// 00722fb3  84d2                 test dl, dl
// 00722fb5  75f9                 jne 0x722fb0
// 00722fb7  2bce                 sub ecx, esi
// 00722fb9  890f                 mov dword ptr [edi], ecx
// 00722fbb  5f                   pop edi
// 00722fbc  5e                   pop esi
// 00722fbd  c3                   ret 
// 00722fbe  33c9                 xor ecx, ecx
// 00722fc0  890f                 mov dword ptr [edi], ecx
// 00722fc2  5f                   pop edi
// 00722fc3  5e                   pop esi
// 00722fc4  c3                   ret 
// 00722fc5  8b442418             mov eax, dword ptr [esp + 0x18]
// 00722fc9  50                   push eax
// 00722fca  56                   push esi
// 00722fcb  57                   push edi
// 00722fcc  e84fffffff           call 0x722f20
// 00722fd1  83c40c               add esp, 0xc
// 00722fd4  5f                   pop edi
// 00722fd5  5e                   pop esi
// 00722fd6  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_optlstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
