// from server: 100% by auto
// roc 2012-06 00938650  unit: seg_00930000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00938650
//
// 00938650  8b4030               mov eax, dword ptr [eax + 0x30]
// 00938653  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 00938657  3bca                 cmp ecx, edx
// 00938659  7e2d                 jle 0x938688
// 0093865b  56                   push esi
// 0093865c  57                   push edi
// 0093865d  8d4900               lea ecx, [ecx]
// 00938660  fe4832               dec byte ptr [eax + 0x32]
// 00938663  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 00938667  0fb78c48ac000000     movzx ecx, word ptr [eax + ecx*2 + 0xac]
// 0093866f  8b30                 mov esi, dword ptr [eax]
// 00938671  8b7618               mov esi, dword ptr [esi + 0x18]
// 00938674  8b7818               mov edi, dword ptr [eax + 0x18]
// 00938677  8d0c49               lea ecx, [ecx + ecx*2]
// 0093867a  897c8e08             mov dword ptr [esi + ecx*4 + 8], edi
// 0093867e  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 00938682  3bca                 cmp ecx, edx
// 00938684  7fda                 jg 0x938660
// 00938686  5f                   pop edi
// 00938687  5e                   pop esi
// 00938688  c3                   ret 
// library lua-5.1.4/lparser.c (function _removevars)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
