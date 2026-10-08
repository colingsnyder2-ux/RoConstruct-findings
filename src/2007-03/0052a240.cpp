// roc 2007-03 0052a240  unit: seg_00520000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052a240
//
// 0052a240  836c241401           sub dword ptr [esp + 0x14], 1
// 0052a245  8b442404             mov eax, dword ptr [esp + 4]
// 0052a249  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0052a24c  57                   push edi
// 0052a24d  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0052a250  786c                 js 0x52a2be
// 0052a252  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052a256  53                   push ebx
// 0052a257  8d0c8500000000       lea ecx, [eax*4]
// 0052a25e  55                   push ebp
// 0052a25f  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052a263  b804000000           mov eax, 4
// 0052a268  56                   push esi
// 0052a269  8da42400000000       lea esp, [esp]
// 0052a270  33ed                 xor ebp, ebp
// 0052a272  85d2                 test edx, edx
// 0052a274  7e36                 jle 0x52a2ac
// 0052a276  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052a27a  8b08                 mov ecx, dword ptr [eax]
// 0052a27c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052a280  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 0052a283  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052a287  8b3406               mov esi, dword ptr [esi + eax]
// 0052a28a  33c0                 xor eax, eax
// 0052a28c  85ff                 test edi, edi
// 0052a28e  7610                 jbe 0x52a2a0
// 0052a290  03cd                 add ecx, ebp
// 0052a292  8a19                 mov bl, byte ptr [ecx]
// 0052a294  881c30               mov byte ptr [eax + esi], bl
// 0052a297  83c001               add eax, 1
// 0052a29a  03ca                 add ecx, edx
// 0052a29c  3bc7                 cmp eax, edi
// 0052a29e  72f2                 jb 0x52a292
// 0052a2a0  83c501               add ebp, 1
// 0052a2a3  3bea                 cmp ebp, edx
// 0052a2a5  7ccf                 jl 0x52a276
// 0052a2a7  b804000000           mov eax, 4
// 0052a2ac  01442418             add dword ptr [esp + 0x18], eax
// 0052a2b0  01442414             add dword ptr [esp + 0x14], eax
// 0052a2b4  836c242401           sub dword ptr [esp + 0x24], 1
// 0052a2b9  79b5                 jns 0x52a270
// 0052a2bb  5e                   pop esi
// 0052a2bc  5d                   pop ebp
// 0052a2bd  5b                   pop ebx
// 0052a2be  5f                   pop edi
// 0052a2bf  c3                   ret 
// library jpeg-6b/jccolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
