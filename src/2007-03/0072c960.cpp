// roc 2007-03 0072c960  unit: seg_00720000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072c960
//
// 0072c960  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072c963  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072c966  55                   push ebp
// 0072c967  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0072c96b  8a1429               mov dl, byte ptr [ecx + ebp]
// 0072c96e  03c1                 add eax, ecx
// 0072c970  03cd                 add ecx, ebp
// 0072c972  3a10                 cmp dl, byte ptr [eax]
// 0072c974  57                   push edi
// 0072c975  8db802010000         lea edi, [eax + 0x102]
// 0072c97b  0f8599000000         jne 0x72ca1a
// 0072c981  8a5101               mov dl, byte ptr [ecx + 1]
// 0072c984  3a5001               cmp dl, byte ptr [eax + 1]
// 0072c987  0f858d000000         jne 0x72ca1a
// 0072c98d  83c002               add eax, 2
// 0072c990  83c102               add ecx, 2
// 0072c993  8a5001               mov dl, byte ptr [eax + 1]
// 0072c996  83c001               add eax, 1
// 0072c999  83c101               add ecx, 1
// 0072c99c  3a11                 cmp dl, byte ptr [ecx]
// 0072c99e  755f                 jne 0x72c9ff
// 0072c9a0  8a5001               mov dl, byte ptr [eax + 1]
// 0072c9a3  83c001               add eax, 1
// 0072c9a6  83c101               add ecx, 1
// 0072c9a9  3a11                 cmp dl, byte ptr [ecx]
// 0072c9ab  7552                 jne 0x72c9ff
// 0072c9ad  8a5001               mov dl, byte ptr [eax + 1]
// 0072c9b0  83c001               add eax, 1
// 0072c9b3  83c101               add ecx, 1
// 0072c9b6  3a11                 cmp dl, byte ptr [ecx]
// 0072c9b8  7545                 jne 0x72c9ff
// 0072c9ba  8a5001               mov dl, byte ptr [eax + 1]
// 0072c9bd  83c001               add eax, 1
// 0072c9c0  83c101               add ecx, 1
// 0072c9c3  3a11                 cmp dl, byte ptr [ecx]
// 0072c9c5  7538                 jne 0x72c9ff
// 0072c9c7  8a5001               mov dl, byte ptr [eax + 1]
// 0072c9ca  83c001               add eax, 1
// 0072c9cd  83c101               add ecx, 1
// 0072c9d0  3a11                 cmp dl, byte ptr [ecx]
// 0072c9d2  752b                 jne 0x72c9ff
// 0072c9d4  8a5001               mov dl, byte ptr [eax + 1]
// 0072c9d7  83c001               add eax, 1
// 0072c9da  83c101               add ecx, 1
// 0072c9dd  3a11                 cmp dl, byte ptr [ecx]
// 0072c9df  751e                 jne 0x72c9ff
// 0072c9e1  8a5001               mov dl, byte ptr [eax + 1]
// 0072c9e4  83c001               add eax, 1
// 0072c9e7  83c101               add ecx, 1
// 0072c9ea  3a11                 cmp dl, byte ptr [ecx]
// 0072c9ec  7511                 jne 0x72c9ff
// 0072c9ee  8a5001               mov dl, byte ptr [eax + 1]
// 0072c9f1  83c001               add eax, 1
// 0072c9f4  83c101               add ecx, 1
// 0072c9f7  3a11                 cmp dl, byte ptr [ecx]
// 0072c9f9  7504                 jne 0x72c9ff
// 0072c9fb  3bc7                 cmp eax, edi
// 0072c9fd  7294                 jb 0x72c993
// 0072c9ff  2bc7                 sub eax, edi
// 0072ca01  0502010000           add eax, 0x102
// 0072ca06  83f803               cmp eax, 3
// 0072ca09  7c0f                 jl 0x72ca1a
// 0072ca0b  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0072ca0e  3bc1                 cmp eax, ecx
// 0072ca10  896e70               mov dword ptr [esi + 0x70], ebp
// 0072ca13  760a                 jbe 0x72ca1f
// 0072ca15  5f                   pop edi
// 0072ca16  8bc1                 mov eax, ecx
// 0072ca18  5d                   pop ebp
// 0072ca19  c3                   ret 
// 0072ca1a  b802000000           mov eax, 2
// 0072ca1f  5f                   pop edi
// 0072ca20  5d                   pop ebp
// 0072ca21  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match_fast)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
