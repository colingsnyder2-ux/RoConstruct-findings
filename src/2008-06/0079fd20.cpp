// roc 2008-06 0079fd20  unit: CXTPDialogBar  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079fd20
//
// 0079fd20  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0079fd23  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0079fd26  55                   push ebp
// 0079fd27  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0079fd2b  8a1429               mov dl, byte ptr [ecx + ebp]
// 0079fd2e  03c1                 add eax, ecx
// 0079fd30  03cd                 add ecx, ebp
// 0079fd32  57                   push edi
// 0079fd33  8db802010000         lea edi, [eax + 0x102]
// 0079fd39  3a10                 cmp dl, byte ptr [eax]
// 0079fd3b  757a                 jne 0x79fdb7
// 0079fd3d  8a5101               mov dl, byte ptr [ecx + 1]
// 0079fd40  3a5001               cmp dl, byte ptr [eax + 1]
// 0079fd43  7572                 jne 0x79fdb7
// 0079fd45  83c002               add eax, 2
// 0079fd48  83c102               add ecx, 2
// 0079fd4b  eb03                 jmp 0x79fd50
// 0079fd4d  8d4900               lea ecx, [ecx]
// 0079fd50  8a5001               mov dl, byte ptr [eax + 1]
// 0079fd53  40                   inc eax
// 0079fd54  41                   inc ecx
// 0079fd55  3a11                 cmp dl, byte ptr [ecx]
// 0079fd57  7543                 jne 0x79fd9c
// 0079fd59  8a5001               mov dl, byte ptr [eax + 1]
// 0079fd5c  40                   inc eax
// 0079fd5d  41                   inc ecx
// 0079fd5e  3a11                 cmp dl, byte ptr [ecx]
// 0079fd60  753a                 jne 0x79fd9c
// 0079fd62  8a5001               mov dl, byte ptr [eax + 1]
// 0079fd65  40                   inc eax
// 0079fd66  41                   inc ecx
// 0079fd67  3a11                 cmp dl, byte ptr [ecx]
// 0079fd69  7531                 jne 0x79fd9c
// 0079fd6b  8a5001               mov dl, byte ptr [eax + 1]
// 0079fd6e  40                   inc eax
// 0079fd6f  41                   inc ecx
// 0079fd70  3a11                 cmp dl, byte ptr [ecx]
// 0079fd72  7528                 jne 0x79fd9c
// 0079fd74  8a5001               mov dl, byte ptr [eax + 1]
// 0079fd77  40                   inc eax
// 0079fd78  41                   inc ecx
// 0079fd79  3a11                 cmp dl, byte ptr [ecx]
// 0079fd7b  751f                 jne 0x79fd9c
// 0079fd7d  8a5001               mov dl, byte ptr [eax + 1]
// 0079fd80  40                   inc eax
// 0079fd81  41                   inc ecx
// 0079fd82  3a11                 cmp dl, byte ptr [ecx]
// 0079fd84  7516                 jne 0x79fd9c
// 0079fd86  8a5001               mov dl, byte ptr [eax + 1]
// 0079fd89  40                   inc eax
// 0079fd8a  41                   inc ecx
// 0079fd8b  3a11                 cmp dl, byte ptr [ecx]
// 0079fd8d  750d                 jne 0x79fd9c
// 0079fd8f  8a5001               mov dl, byte ptr [eax + 1]
// 0079fd92  40                   inc eax
// 0079fd93  41                   inc ecx
// 0079fd94  3a11                 cmp dl, byte ptr [ecx]
// 0079fd96  7504                 jne 0x79fd9c
// 0079fd98  3bc7                 cmp eax, edi
// 0079fd9a  72b4                 jb 0x79fd50
// 0079fd9c  2bc7                 sub eax, edi
// 0079fd9e  0502010000           add eax, 0x102
// 0079fda3  83f803               cmp eax, 3
// 0079fda6  7c0f                 jl 0x79fdb7
// 0079fda8  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0079fdab  896e70               mov dword ptr [esi + 0x70], ebp
// 0079fdae  3bc1                 cmp eax, ecx
// 0079fdb0  760a                 jbe 0x79fdbc
// 0079fdb2  5f                   pop edi
// 0079fdb3  8bc1                 mov eax, ecx
// 0079fdb5  5d                   pop ebp
// 0079fdb6  c3                   ret 
// 0079fdb7  b802000000           mov eax, 2
// 0079fdbc  5f                   pop edi
// 0079fdbd  5d                   pop ebp
// 0079fdbe  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
