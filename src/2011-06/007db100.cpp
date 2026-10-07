// roc 2011-06 007db100  unit: seg_007d0000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007db100
//
// 007db100  8b4030               mov eax, dword ptr [eax + 0x30]
// 007db103  005032               add byte ptr [eax + 0x32], dl
// 007db106  85d2                 test edx, edx
// 007db108  742a                 je 0x7db134
// 007db10a  56                   push esi
// 007db10b  57                   push edi
// 007db10c  8d642400             lea esp, [esp]
// 007db110  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 007db114  8b30                 mov esi, dword ptr [eax]
// 007db116  8b7618               mov esi, dword ptr [esi + 0x18]
// 007db119  8b7818               mov edi, dword ptr [eax + 0x18]
// 007db11c  2bca                 sub ecx, edx
// 007db11e  83ea01               sub edx, 1
// 007db121  0fb78c48ac000000     movzx ecx, word ptr [eax + ecx*2 + 0xac]
// 007db129  8d0c49               lea ecx, [ecx + ecx*2]
// 007db12c  897c8e04             mov dword ptr [esi + ecx*4 + 4], edi
// 007db130  75de                 jne 0x7db110
// 007db132  5f                   pop edi
// 007db133  5e                   pop esi
// 007db134  c3                   ret 
// library lua-5.1.4/lparser.c (function _adjustlocalvars)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
