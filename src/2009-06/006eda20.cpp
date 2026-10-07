// roc 2009-06 006eda20  unit: seg_006e0000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006eda20
//
// 006eda20  8b4030               mov eax, dword ptr [eax + 0x30]
// 006eda23  005032               add byte ptr [eax + 0x32], dl
// 006eda26  85d2                 test edx, edx
// 006eda28  742a                 je 0x6eda54
// 006eda2a  56                   push esi
// 006eda2b  57                   push edi
// 006eda2c  8d642400             lea esp, [esp]
// 006eda30  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 006eda34  8b30                 mov esi, dword ptr [eax]
// 006eda36  8b7618               mov esi, dword ptr [esi + 0x18]
// 006eda39  8b7818               mov edi, dword ptr [eax + 0x18]
// 006eda3c  2bca                 sub ecx, edx
// 006eda3e  83ea01               sub edx, 1
// 006eda41  0fb78c48ac000000     movzx ecx, word ptr [eax + ecx*2 + 0xac]
// 006eda49  8d0c49               lea ecx, [ecx + ecx*2]
// 006eda4c  897c8e04             mov dword ptr [esi + ecx*4 + 4], edi
// 006eda50  75de                 jne 0x6eda30
// 006eda52  5f                   pop edi
// 006eda53  5e                   pop esi
// 006eda54  c3                   ret 
// library lua-5.1.4/lparser.c (function _adjustlocalvars)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
