// roc 2007-08 00613cc0  unit: seg_00610000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613cc0
//
// 00613cc0  8b4030               mov eax, dword ptr [eax + 0x30]
// 00613cc3  005032               add byte ptr [eax + 0x32], dl
// 00613cc6  85d2                 test edx, edx
// 00613cc8  742a                 je 0x613cf4
// 00613cca  56                   push esi
// 00613ccb  57                   push edi
// 00613ccc  8d642400             lea esp, [esp]
// 00613cd0  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 00613cd4  8b30                 mov esi, dword ptr [eax]
// 00613cd6  8b7618               mov esi, dword ptr [esi + 0x18]
// 00613cd9  8b7818               mov edi, dword ptr [eax + 0x18]
// 00613cdc  2bca                 sub ecx, edx
// 00613cde  83ea01               sub edx, 1
// 00613ce1  0fb78c48ac000000     movzx ecx, word ptr [eax + ecx*2 + 0xac]
// 00613ce9  8d0c49               lea ecx, [ecx + ecx*2]
// 00613cec  897c8e04             mov dword ptr [esi + ecx*4 + 4], edi
// 00613cf0  75de                 jne 0x613cd0
// 00613cf2  5f                   pop edi
// 00613cf3  5e                   pop esi
// 00613cf4  c3                   ret 
// library lua-5.1.4/lparser.c (function _adjustlocalvars)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
