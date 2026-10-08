// from server: 100% by auto
// roc 2011-06 0057f540  unit: seg_00570000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057f540
//
// 0057f540  836c241401           sub dword ptr [esp + 0x14], 1
// 0057f545  8b442404             mov eax, dword ptr [esp + 4]
// 0057f549  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0057f54c  57                   push edi
// 0057f54d  8b781c               mov edi, dword ptr [eax + 0x1c]
// 0057f550  7868                 js 0x57f5ba
// 0057f552  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057f556  53                   push ebx
// 0057f557  8d0c8500000000       lea ecx, [eax*4]
// 0057f55e  55                   push ebp
// 0057f55f  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057f563  b804000000           mov eax, 4
// 0057f568  56                   push esi
// 0057f569  8da42400000000       lea esp, [esp]
// 0057f570  33ed                 xor ebp, ebp
// 0057f572  85d2                 test edx, edx
// 0057f574  7e32                 jle 0x57f5a8
// 0057f576  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057f57a  8b08                 mov ecx, dword ptr [eax]
// 0057f57c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057f580  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 0057f583  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057f587  8b3406               mov esi, dword ptr [esi + eax]
// 0057f58a  33c0                 xor eax, eax
// 0057f58c  85ff                 test edi, edi
// 0057f58e  760e                 jbe 0x57f59e
// 0057f590  03cd                 add ecx, ebp
// 0057f592  8a19                 mov bl, byte ptr [ecx]
// 0057f594  881c30               mov byte ptr [eax + esi], bl
// 0057f597  40                   inc eax
// 0057f598  03ca                 add ecx, edx
// 0057f59a  3bc7                 cmp eax, edi
// 0057f59c  72f4                 jb 0x57f592
// 0057f59e  45                   inc ebp
// 0057f59f  3bea                 cmp ebp, edx
// 0057f5a1  7cd3                 jl 0x57f576
// 0057f5a3  b804000000           mov eax, 4
// 0057f5a8  01442418             add dword ptr [esp + 0x18], eax
// 0057f5ac  01442414             add dword ptr [esp + 0x14], eax
// 0057f5b0  836c242401           sub dword ptr [esp + 0x24], 1
// 0057f5b5  79b9                 jns 0x57f570
// 0057f5b7  5e                   pop esi
// 0057f5b8  5d                   pop ebp
// 0057f5b9  5b                   pop ebx
// 0057f5ba  5f                   pop edi
// 0057f5bb  c3                   ret 
// library jpeg-6b/jccolor.c (function _null_convert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
