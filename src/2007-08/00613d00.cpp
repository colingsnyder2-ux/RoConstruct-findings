// roc 2007-08 00613d00  unit: seg_00610000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613d00
//
// 00613d00  8b4030               mov eax, dword ptr [eax + 0x30]
// 00613d03  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 00613d07  3bca                 cmp ecx, edx
// 00613d09  7e2e                 jle 0x613d39
// 00613d0b  56                   push esi
// 00613d0c  57                   push edi
// 00613d0d  8d4900               lea ecx, [ecx]
// 00613d10  804032ff             add byte ptr [eax + 0x32], 0xff
// 00613d14  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 00613d18  0fb78c48ac000000     movzx ecx, word ptr [eax + ecx*2 + 0xac]
// 00613d20  8b30                 mov esi, dword ptr [eax]
// 00613d22  8b7618               mov esi, dword ptr [esi + 0x18]
// 00613d25  8b7818               mov edi, dword ptr [eax + 0x18]
// 00613d28  8d0c49               lea ecx, [ecx + ecx*2]
// 00613d2b  897c8e08             mov dword ptr [esi + ecx*4 + 8], edi
// 00613d2f  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 00613d33  3bca                 cmp ecx, edx
// 00613d35  7fd9                 jg 0x613d10
// 00613d37  5f                   pop edi
// 00613d38  5e                   pop esi
// 00613d39  c3                   ret 
// library lua-5.1.4/lparser.c (function _removevars)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
