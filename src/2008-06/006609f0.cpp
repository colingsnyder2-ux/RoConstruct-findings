// from server: 100% by auto
// roc 2008-06 006609f0  unit: RBX::FilterStairs  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006609f0
//
// 006609f0  8b4030               mov eax, dword ptr [eax + 0x30]
// 006609f3  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 006609f7  3bca                 cmp ecx, edx
// 006609f9  7e2d                 jle 0x660a28
// 006609fb  56                   push esi
// 006609fc  57                   push edi
// 006609fd  8d4900               lea ecx, [ecx]
// 00660a00  fe4832               dec byte ptr [eax + 0x32]
// 00660a03  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 00660a07  0fb78c48ac000000     movzx ecx, word ptr [eax + ecx*2 + 0xac]
// 00660a0f  8b30                 mov esi, dword ptr [eax]
// 00660a11  8b7618               mov esi, dword ptr [esi + 0x18]
// 00660a14  8b7818               mov edi, dword ptr [eax + 0x18]
// 00660a17  8d0c49               lea ecx, [ecx + ecx*2]
// 00660a1a  897c8e08             mov dword ptr [esi + ecx*4 + 8], edi
// 00660a1e  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 00660a22  3bca                 cmp ecx, edx
// 00660a24  7fda                 jg 0x660a00
// 00660a26  5f                   pop edi
// 00660a27  5e                   pop esi
// 00660a28  c3                   ret 
// library lua-5.1.4/lparser.c (function _removevars)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
