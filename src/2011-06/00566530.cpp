// roc 2011-06 00566530  unit: G3D::Random  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00566530
//
// 00566530  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00566533  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00566536  55                   push ebp
// 00566537  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0056653b  8a1429               mov dl, byte ptr [ecx + ebp]
// 0056653e  03c1                 add eax, ecx
// 00566540  03cd                 add ecx, ebp
// 00566542  57                   push edi
// 00566543  8db802010000         lea edi, [eax + 0x102]
// 00566549  3a10                 cmp dl, byte ptr [eax]
// 0056654b  757a                 jne 0x5665c7
// 0056654d  8a5101               mov dl, byte ptr [ecx + 1]
// 00566550  3a5001               cmp dl, byte ptr [eax + 1]
// 00566553  7572                 jne 0x5665c7
// 00566555  83c002               add eax, 2
// 00566558  83c102               add ecx, 2
// 0056655b  eb03                 jmp 0x566560
// 0056655d  8d4900               lea ecx, [ecx]
// 00566560  8a5001               mov dl, byte ptr [eax + 1]
// 00566563  40                   inc eax
// 00566564  41                   inc ecx
// 00566565  3a11                 cmp dl, byte ptr [ecx]
// 00566567  7543                 jne 0x5665ac
// 00566569  8a5001               mov dl, byte ptr [eax + 1]
// 0056656c  40                   inc eax
// 0056656d  41                   inc ecx
// 0056656e  3a11                 cmp dl, byte ptr [ecx]
// 00566570  753a                 jne 0x5665ac
// 00566572  8a5001               mov dl, byte ptr [eax + 1]
// 00566575  40                   inc eax
// 00566576  41                   inc ecx
// 00566577  3a11                 cmp dl, byte ptr [ecx]
// 00566579  7531                 jne 0x5665ac
// 0056657b  8a5001               mov dl, byte ptr [eax + 1]
// 0056657e  40                   inc eax
// 0056657f  41                   inc ecx
// 00566580  3a11                 cmp dl, byte ptr [ecx]
// 00566582  7528                 jne 0x5665ac
// 00566584  8a5001               mov dl, byte ptr [eax + 1]
// 00566587  40                   inc eax
// 00566588  41                   inc ecx
// 00566589  3a11                 cmp dl, byte ptr [ecx]
// 0056658b  751f                 jne 0x5665ac
// 0056658d  8a5001               mov dl, byte ptr [eax + 1]
// 00566590  40                   inc eax
// 00566591  41                   inc ecx
// 00566592  3a11                 cmp dl, byte ptr [ecx]
// 00566594  7516                 jne 0x5665ac
// 00566596  8a5001               mov dl, byte ptr [eax + 1]
// 00566599  40                   inc eax
// 0056659a  41                   inc ecx
// 0056659b  3a11                 cmp dl, byte ptr [ecx]
// 0056659d  750d                 jne 0x5665ac
// 0056659f  8a5001               mov dl, byte ptr [eax + 1]
// 005665a2  40                   inc eax
// 005665a3  41                   inc ecx
// 005665a4  3a11                 cmp dl, byte ptr [ecx]
// 005665a6  7504                 jne 0x5665ac
// 005665a8  3bc7                 cmp eax, edi
// 005665aa  72b4                 jb 0x566560
// 005665ac  2bc7                 sub eax, edi
// 005665ae  0502010000           add eax, 0x102
// 005665b3  83f803               cmp eax, 3
// 005665b6  7c0f                 jl 0x5665c7
// 005665b8  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 005665bb  896e70               mov dword ptr [esi + 0x70], ebp
// 005665be  3bc1                 cmp eax, ecx
// 005665c0  760a                 jbe 0x5665cc
// 005665c2  5f                   pop edi
// 005665c3  8bc1                 mov eax, ecx
// 005665c5  5d                   pop ebp
// 005665c6  c3                   ret 
// 005665c7  b802000000           mov eax, 2
// 005665cc  5f                   pop edi
// 005665cd  5d                   pop ebp
// 005665ce  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
