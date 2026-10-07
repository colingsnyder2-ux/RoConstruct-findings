// roc 2008-06 006609b0  unit: RBX::FilterStairs  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006609b0
//
// 006609b0  8b4030               mov eax, dword ptr [eax + 0x30]
// 006609b3  005032               add byte ptr [eax + 0x32], dl
// 006609b6  85d2                 test edx, edx
// 006609b8  742a                 je 0x6609e4
// 006609ba  56                   push esi
// 006609bb  57                   push edi
// 006609bc  8d642400             lea esp, [esp]
// 006609c0  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 006609c4  8b30                 mov esi, dword ptr [eax]
// 006609c6  8b7618               mov esi, dword ptr [esi + 0x18]
// 006609c9  8b7818               mov edi, dword ptr [eax + 0x18]
// 006609cc  2bca                 sub ecx, edx
// 006609ce  83ea01               sub edx, 1
// 006609d1  0fb78c48ac000000     movzx ecx, word ptr [eax + ecx*2 + 0xac]
// 006609d9  8d0c49               lea ecx, [ecx + ecx*2]
// 006609dc  897c8e04             mov dword ptr [esi + ecx*4 + 4], edi
// 006609e0  75de                 jne 0x6609c0
// 006609e2  5f                   pop edi
// 006609e3  5e                   pop esi
// 006609e4  c3                   ret 
// library lua-5.1.4/lparser.c (function _adjustlocalvars)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
