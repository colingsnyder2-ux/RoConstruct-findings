// from server: 100% by auto
// roc 2012-06 006491a0  unit: seg_00640000  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006491a0
//
// 006491a0  8b442404             mov eax, dword ptr [esp + 4]
// 006491a4  8a5008               mov dl, byte ptr [eax + 8]
// 006491a7  f6c202               test dl, 2
// 006491aa  0f84c3000000         je 0x649273
// 006491b0  8b08                 mov ecx, dword ptr [eax]
// 006491b2  8a4009               mov al, byte ptr [eax + 9]
// 006491b5  56                   push esi
// 006491b6  3c08                 cmp al, 8
// 006491b8  7551                 jne 0x64920b
// 006491ba  80fa02               cmp dl, 2
// 006491bd  7525                 jne 0x6491e4
// 006491bf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006491c3  85c9                 test ecx, ecx
// 006491c5  0f86a7000000         jbe 0x649272
// 006491cb  8bf1                 mov esi, ecx
// 006491cd  8d4900               lea ecx, [ecx]
// 006491d0  8a08                 mov cl, byte ptr [eax]
// 006491d2  8a5002               mov dl, byte ptr [eax + 2]
// 006491d5  8810                 mov byte ptr [eax], dl
// 006491d7  884802               mov byte ptr [eax + 2], cl
// 006491da  83c003               add eax, 3
// 006491dd  83ee01               sub esi, 1
// 006491e0  75ee                 jne 0x6491d0
// 006491e2  5e                   pop esi
// 006491e3  c3                   ret 
// 006491e4  80fa06               cmp dl, 6
// 006491e7  0f8585000000         jne 0x649272
// 006491ed  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006491f1  85c9                 test ecx, ecx
// 006491f3  767d                 jbe 0x649272
// 006491f5  8bf1                 mov esi, ecx
// 006491f7  8a08                 mov cl, byte ptr [eax]
// 006491f9  8a5002               mov dl, byte ptr [eax + 2]
// 006491fc  8810                 mov byte ptr [eax], dl
// 006491fe  884802               mov byte ptr [eax + 2], cl
// 00649201  83c004               add eax, 4
// 00649204  83ee01               sub esi, 1
// 00649207  75ee                 jne 0x6491f7
// 00649209  5e                   pop esi
// 0064920a  c3                   ret 
// 0064920b  3c10                 cmp al, 0x10
// 0064920d  7563                 jne 0x649272
// 0064920f  80fa02               cmp dl, 2
// 00649212  752e                 jne 0x649242
// 00649214  85c9                 test ecx, ecx
// 00649216  765a                 jbe 0x649272
// 00649218  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064921c  40                   inc eax
// 0064921d  8bf1                 mov esi, ecx
// 0064921f  90                   nop 
// 00649220  0fb65003             movzx edx, byte ptr [eax + 3]
// 00649224  8a48ff               mov cl, byte ptr [eax - 1]
// 00649227  8850ff               mov byte ptr [eax - 1], dl
// 0064922a  0fb65004             movzx edx, byte ptr [eax + 4]
// 0064922e  884803               mov byte ptr [eax + 3], cl
// 00649231  8a08                 mov cl, byte ptr [eax]
// 00649233  8810                 mov byte ptr [eax], dl
// 00649235  884804               mov byte ptr [eax + 4], cl
// 00649238  83c006               add eax, 6
// 0064923b  83ee01               sub esi, 1
// 0064923e  75e0                 jne 0x649220
// 00649240  5e                   pop esi
// 00649241  c3                   ret 
// 00649242  80fa06               cmp dl, 6
// 00649245  752b                 jne 0x649272
// 00649247  85c9                 test ecx, ecx
// 00649249  7627                 jbe 0x649272
// 0064924b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064924f  40                   inc eax
// 00649250  8bf1                 mov esi, ecx
// 00649252  0fb65003             movzx edx, byte ptr [eax + 3]
// 00649256  8a48ff               mov cl, byte ptr [eax - 1]
// 00649259  8850ff               mov byte ptr [eax - 1], dl
// 0064925c  0fb65004             movzx edx, byte ptr [eax + 4]
// 00649260  884803               mov byte ptr [eax + 3], cl
// 00649263  8a08                 mov cl, byte ptr [eax]
// 00649265  8810                 mov byte ptr [eax], dl
// 00649267  884804               mov byte ptr [eax + 4], cl
// 0064926a  83c008               add eax, 8
// 0064926d  83ee01               sub esi, 1
// 00649270  75e0                 jne 0x649252
// 00649272  5e                   pop esi
// 00649273  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_bgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
