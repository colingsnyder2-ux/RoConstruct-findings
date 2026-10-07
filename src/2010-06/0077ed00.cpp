// roc 2010-06 0077ed00  unit: seg_00770000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077ed00
//
// 0077ed00  8b4030               mov eax, dword ptr [eax + 0x30]
// 0077ed03  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 0077ed07  3bca                 cmp ecx, edx
// 0077ed09  7e2d                 jle 0x77ed38
// 0077ed0b  56                   push esi
// 0077ed0c  57                   push edi
// 0077ed0d  8d4900               lea ecx, [ecx]
// 0077ed10  fe4832               dec byte ptr [eax + 0x32]
// 0077ed13  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 0077ed17  0fb78c48ac000000     movzx ecx, word ptr [eax + ecx*2 + 0xac]
// 0077ed1f  8b30                 mov esi, dword ptr [eax]
// 0077ed21  8b7618               mov esi, dword ptr [esi + 0x18]
// 0077ed24  8b7818               mov edi, dword ptr [eax + 0x18]
// 0077ed27  8d0c49               lea ecx, [ecx + ecx*2]
// 0077ed2a  897c8e08             mov dword ptr [esi + ecx*4 + 8], edi
// 0077ed2e  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 0077ed32  3bca                 cmp ecx, edx
// 0077ed34  7fda                 jg 0x77ed10
// 0077ed36  5f                   pop edi
// 0077ed37  5e                   pop esi
// 0077ed38  c3                   ret 
// library lua-5.1.4/lparser.c (function _removevars)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
