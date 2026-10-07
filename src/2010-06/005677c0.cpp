// roc 2010-06 005677c0  unit: seg_00560000  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005677c0
//
// 005677c0  8b442404             mov eax, dword ptr [esp + 4]
// 005677c4  8a5008               mov dl, byte ptr [eax + 8]
// 005677c7  f6c202               test dl, 2
// 005677ca  0f84c3000000         je 0x567893
// 005677d0  8b08                 mov ecx, dword ptr [eax]
// 005677d2  8a4009               mov al, byte ptr [eax + 9]
// 005677d5  56                   push esi
// 005677d6  3c08                 cmp al, 8
// 005677d8  7551                 jne 0x56782b
// 005677da  80fa02               cmp dl, 2
// 005677dd  7525                 jne 0x567804
// 005677df  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005677e3  85c9                 test ecx, ecx
// 005677e5  0f86a7000000         jbe 0x567892
// 005677eb  8bf1                 mov esi, ecx
// 005677ed  8d4900               lea ecx, [ecx]
// 005677f0  8a08                 mov cl, byte ptr [eax]
// 005677f2  8a5002               mov dl, byte ptr [eax + 2]
// 005677f5  8810                 mov byte ptr [eax], dl
// 005677f7  884802               mov byte ptr [eax + 2], cl
// 005677fa  83c003               add eax, 3
// 005677fd  83ee01               sub esi, 1
// 00567800  75ee                 jne 0x5677f0
// 00567802  5e                   pop esi
// 00567803  c3                   ret 
// 00567804  80fa06               cmp dl, 6
// 00567807  0f8585000000         jne 0x567892
// 0056780d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00567811  85c9                 test ecx, ecx
// 00567813  767d                 jbe 0x567892
// 00567815  8bf1                 mov esi, ecx
// 00567817  8a08                 mov cl, byte ptr [eax]
// 00567819  8a5002               mov dl, byte ptr [eax + 2]
// 0056781c  8810                 mov byte ptr [eax], dl
// 0056781e  884802               mov byte ptr [eax + 2], cl
// 00567821  83c004               add eax, 4
// 00567824  83ee01               sub esi, 1
// 00567827  75ee                 jne 0x567817
// 00567829  5e                   pop esi
// 0056782a  c3                   ret 
// 0056782b  3c10                 cmp al, 0x10
// 0056782d  7563                 jne 0x567892
// 0056782f  80fa02               cmp dl, 2
// 00567832  752e                 jne 0x567862
// 00567834  85c9                 test ecx, ecx
// 00567836  765a                 jbe 0x567892
// 00567838  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056783c  40                   inc eax
// 0056783d  8bf1                 mov esi, ecx
// 0056783f  90                   nop 
// 00567840  0fb65003             movzx edx, byte ptr [eax + 3]
// 00567844  8a48ff               mov cl, byte ptr [eax - 1]
// 00567847  8850ff               mov byte ptr [eax - 1], dl
// 0056784a  0fb65004             movzx edx, byte ptr [eax + 4]
// 0056784e  884803               mov byte ptr [eax + 3], cl
// 00567851  8a08                 mov cl, byte ptr [eax]
// 00567853  8810                 mov byte ptr [eax], dl
// 00567855  884804               mov byte ptr [eax + 4], cl
// 00567858  83c006               add eax, 6
// 0056785b  83ee01               sub esi, 1
// 0056785e  75e0                 jne 0x567840
// 00567860  5e                   pop esi
// 00567861  c3                   ret 
// 00567862  80fa06               cmp dl, 6
// 00567865  752b                 jne 0x567892
// 00567867  85c9                 test ecx, ecx
// 00567869  7627                 jbe 0x567892
// 0056786b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056786f  40                   inc eax
// 00567870  8bf1                 mov esi, ecx
// 00567872  0fb65003             movzx edx, byte ptr [eax + 3]
// 00567876  8a48ff               mov cl, byte ptr [eax - 1]
// 00567879  8850ff               mov byte ptr [eax - 1], dl
// 0056787c  0fb65004             movzx edx, byte ptr [eax + 4]
// 00567880  884803               mov byte ptr [eax + 3], cl
// 00567883  8a08                 mov cl, byte ptr [eax]
// 00567885  8810                 mov byte ptr [eax], dl
// 00567887  884804               mov byte ptr [eax + 4], cl
// 0056788a  83c008               add eax, 8
// 0056788d  83ee01               sub esi, 1
// 00567890  75e0                 jne 0x567872
// 00567892  5e                   pop esi
// 00567893  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_bgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
