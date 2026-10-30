// from server: 100% by auto
// roc 2012-06 00938610  unit: seg_00930000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00938610
//
// 00938610  8b4030               mov eax, dword ptr [eax + 0x30]
// 00938613  005032               add byte ptr [eax + 0x32], dl
// 00938616  85d2                 test edx, edx
// 00938618  742a                 je 0x938644
// 0093861a  56                   push esi
// 0093861b  57                   push edi
// 0093861c  8d642400             lea esp, [esp]
// 00938620  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 00938624  8b30                 mov esi, dword ptr [eax]
// 00938626  8b7618               mov esi, dword ptr [esi + 0x18]
// 00938629  8b7818               mov edi, dword ptr [eax + 0x18]
// 0093862c  2bca                 sub ecx, edx
// 0093862e  83ea01               sub edx, 1
// 00938631  0fb78c48ac000000     movzx ecx, word ptr [eax + ecx*2 + 0xac]
// 00938639  8d0c49               lea ecx, [ecx + ecx*2]
// 0093863c  897c8e04             mov dword ptr [esi + ecx*4 + 4], edi
// 00938640  75de                 jne 0x938620
// 00938642  5f                   pop edi
// 00938643  5e                   pop esi
// 00938644  c3                   ret 
// library lua-5.1.4/lparser.c (function _adjustlocalvars)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
