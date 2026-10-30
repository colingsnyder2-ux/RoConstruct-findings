// from server: 100% by auto
// roc 2011-06 007db140  unit: seg_007d0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007db140
//
// 007db140  8b4030               mov eax, dword ptr [eax + 0x30]
// 007db143  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 007db147  3bca                 cmp ecx, edx
// 007db149  7e2d                 jle 0x7db178
// 007db14b  56                   push esi
// 007db14c  57                   push edi
// 007db14d  8d4900               lea ecx, [ecx]
// 007db150  fe4832               dec byte ptr [eax + 0x32]
// 007db153  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 007db157  0fb78c48ac000000     movzx ecx, word ptr [eax + ecx*2 + 0xac]
// 007db15f  8b30                 mov esi, dword ptr [eax]
// 007db161  8b7618               mov esi, dword ptr [esi + 0x18]
// 007db164  8b7818               mov edi, dword ptr [eax + 0x18]
// 007db167  8d0c49               lea ecx, [ecx + ecx*2]
// 007db16a  897c8e08             mov dword ptr [esi + ecx*4 + 8], edi
// 007db16e  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 007db172  3bca                 cmp ecx, edx
// 007db174  7fda                 jg 0x7db150
// 007db176  5f                   pop edi
// 007db177  5e                   pop esi
// 007db178  c3                   ret 
// library lua-5.1.4/lparser.c (function _removevars)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
