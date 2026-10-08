// from server: 100% by auto
// roc 2010-06 0077ecc0  unit: seg_00770000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077ecc0
//
// 0077ecc0  8b4030               mov eax, dword ptr [eax + 0x30]
// 0077ecc3  005032               add byte ptr [eax + 0x32], dl
// 0077ecc6  85d2                 test edx, edx
// 0077ecc8  742a                 je 0x77ecf4
// 0077ecca  56                   push esi
// 0077eccb  57                   push edi
// 0077eccc  8d642400             lea esp, [esp]
// 0077ecd0  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 0077ecd4  8b30                 mov esi, dword ptr [eax]
// 0077ecd6  8b7618               mov esi, dword ptr [esi + 0x18]
// 0077ecd9  8b7818               mov edi, dword ptr [eax + 0x18]
// 0077ecdc  2bca                 sub ecx, edx
// 0077ecde  83ea01               sub edx, 1
// 0077ece1  0fb78c48ac000000     movzx ecx, word ptr [eax + ecx*2 + 0xac]
// 0077ece9  8d0c49               lea ecx, [ecx + ecx*2]
// 0077ecec  897c8e04             mov dword ptr [esi + ecx*4 + 4], edi
// 0077ecf0  75de                 jne 0x77ecd0
// 0077ecf2  5f                   pop edi
// 0077ecf3  5e                   pop esi
// 0077ecf4  c3                   ret 
// library lua-5.1.4/lparser.c (function _adjustlocalvars)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
