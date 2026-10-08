// from server: 100% by auto
// roc 2009-06 006eda60  unit: seg_006e0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006eda60
//
// 006eda60  8b4030               mov eax, dword ptr [eax + 0x30]
// 006eda63  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 006eda67  3bca                 cmp ecx, edx
// 006eda69  7e2d                 jle 0x6eda98
// 006eda6b  56                   push esi
// 006eda6c  57                   push edi
// 006eda6d  8d4900               lea ecx, [ecx]
// 006eda70  fe4832               dec byte ptr [eax + 0x32]
// 006eda73  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 006eda77  0fb78c48ac000000     movzx ecx, word ptr [eax + ecx*2 + 0xac]
// 006eda7f  8b30                 mov esi, dword ptr [eax]
// 006eda81  8b7618               mov esi, dword ptr [esi + 0x18]
// 006eda84  8b7818               mov edi, dword ptr [eax + 0x18]
// 006eda87  8d0c49               lea ecx, [ecx + ecx*2]
// 006eda8a  897c8e08             mov dword ptr [esi + ecx*4 + 8], edi
// 006eda8e  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 006eda92  3bca                 cmp ecx, edx
// 006eda94  7fda                 jg 0x6eda70
// 006eda96  5f                   pop edi
// 006eda97  5e                   pop esi
// 006eda98  c3                   ret 
// library lua-5.1.4/lparser.c (function _removevars)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
