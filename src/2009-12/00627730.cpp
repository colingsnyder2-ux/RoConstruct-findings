// roc 2009-12 00627730  unit: seg_00620000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00627730
//
// 00627730  836c241401           sub dword ptr [esp + 0x14], 1
// 00627735  8b442404             mov eax, dword ptr [esp + 4]
// 00627739  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0062773c  57                   push edi
// 0062773d  8b781c               mov edi, dword ptr [eax + 0x1c]
// 00627740  7868                 js 0x6277aa
// 00627742  8b442414             mov eax, dword ptr [esp + 0x14]
// 00627746  53                   push ebx
// 00627747  8d0c8500000000       lea ecx, [eax*4]
// 0062774e  55                   push ebp
// 0062774f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00627753  b804000000           mov eax, 4
// 00627758  56                   push esi
// 00627759  8da42400000000       lea esp, [esp]
// 00627760  33ed                 xor ebp, ebp
// 00627762  85d2                 test edx, edx
// 00627764  7e32                 jle 0x627798
// 00627766  8b442418             mov eax, dword ptr [esp + 0x18]
// 0062776a  8b08                 mov ecx, dword ptr [eax]
// 0062776c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00627770  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 00627773  8b742414             mov esi, dword ptr [esp + 0x14]
// 00627777  8b3406               mov esi, dword ptr [esi + eax]
// 0062777a  33c0                 xor eax, eax
// 0062777c  85ff                 test edi, edi
// 0062777e  760e                 jbe 0x62778e
// 00627780  03cd                 add ecx, ebp
// 00627782  8a19                 mov bl, byte ptr [ecx]
// 00627784  881c30               mov byte ptr [eax + esi], bl
// 00627787  40                   inc eax
// 00627788  03ca                 add ecx, edx
// 0062778a  3bc7                 cmp eax, edi
// 0062778c  72f4                 jb 0x627782
// 0062778e  45                   inc ebp
// 0062778f  3bea                 cmp ebp, edx
// 00627791  7cd3                 jl 0x627766
// 00627793  b804000000           mov eax, 4
// 00627798  01442418             add dword ptr [esp + 0x18], eax
// 0062779c  01442414             add dword ptr [esp + 0x14], eax
// 006277a0  836c242401           sub dword ptr [esp + 0x24], 1
// 006277a5  79b9                 jns 0x627760
// 006277a7  5e                   pop esi
// 006277a8  5d                   pop ebp
// 006277a9  5b                   pop ebx
// 006277aa  5f                   pop edi
// 006277ab  c3                   ret 
// library jpeg-6b/jccolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
