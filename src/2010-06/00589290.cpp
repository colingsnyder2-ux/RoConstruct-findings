// roc 2010-06 00589290  unit: seg_00580000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00589290
//
// 00589290  836c241401           sub dword ptr [esp + 0x14], 1
// 00589295  8b442404             mov eax, dword ptr [esp + 4]
// 00589299  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0058929c  57                   push edi
// 0058929d  8b781c               mov edi, dword ptr [eax + 0x1c]
// 005892a0  7868                 js 0x58930a
// 005892a2  8b442414             mov eax, dword ptr [esp + 0x14]
// 005892a6  53                   push ebx
// 005892a7  8d0c8500000000       lea ecx, [eax*4]
// 005892ae  55                   push ebp
// 005892af  894c2410             mov dword ptr [esp + 0x10], ecx
// 005892b3  b804000000           mov eax, 4
// 005892b8  56                   push esi
// 005892b9  8da42400000000       lea esp, [esp]
// 005892c0  33ed                 xor ebp, ebp
// 005892c2  85d2                 test edx, edx
// 005892c4  7e32                 jle 0x5892f8
// 005892c6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005892ca  8b08                 mov ecx, dword ptr [eax]
// 005892cc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005892d0  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 005892d3  8b742414             mov esi, dword ptr [esp + 0x14]
// 005892d7  8b3406               mov esi, dword ptr [esi + eax]
// 005892da  33c0                 xor eax, eax
// 005892dc  85ff                 test edi, edi
// 005892de  760e                 jbe 0x5892ee
// 005892e0  03cd                 add ecx, ebp
// 005892e2  8a19                 mov bl, byte ptr [ecx]
// 005892e4  881c30               mov byte ptr [eax + esi], bl
// 005892e7  40                   inc eax
// 005892e8  03ca                 add ecx, edx
// 005892ea  3bc7                 cmp eax, edi
// 005892ec  72f4                 jb 0x5892e2
// 005892ee  45                   inc ebp
// 005892ef  3bea                 cmp ebp, edx
// 005892f1  7cd3                 jl 0x5892c6
// 005892f3  b804000000           mov eax, 4
// 005892f8  01442418             add dword ptr [esp + 0x18], eax
// 005892fc  01442414             add dword ptr [esp + 0x14], eax
// 00589300  836c242401           sub dword ptr [esp + 0x24], 1
// 00589305  79b9                 jns 0x5892c0
// 00589307  5e                   pop esi
// 00589308  5d                   pop ebp
// 00589309  5b                   pop ebx
// 0058930a  5f                   pop edi
// 0058930b  c3                   ret 
// library jpeg-6b/jccolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
