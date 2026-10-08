// from server: 100% by auto
// roc 2009-06 00584090  unit: seg_00580000  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00584090
//
// 00584090  8b442404             mov eax, dword ptr [esp + 4]
// 00584094  8a5008               mov dl, byte ptr [eax + 8]
// 00584097  f6c202               test dl, 2
// 0058409a  0f84c3000000         je 0x584163
// 005840a0  8b08                 mov ecx, dword ptr [eax]
// 005840a2  8a4009               mov al, byte ptr [eax + 9]
// 005840a5  56                   push esi
// 005840a6  3c08                 cmp al, 8
// 005840a8  7551                 jne 0x5840fb
// 005840aa  80fa02               cmp dl, 2
// 005840ad  7525                 jne 0x5840d4
// 005840af  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005840b3  85c9                 test ecx, ecx
// 005840b5  0f86a7000000         jbe 0x584162
// 005840bb  8bf1                 mov esi, ecx
// 005840bd  8d4900               lea ecx, [ecx]
// 005840c0  8a08                 mov cl, byte ptr [eax]
// 005840c2  8a5002               mov dl, byte ptr [eax + 2]
// 005840c5  8810                 mov byte ptr [eax], dl
// 005840c7  884802               mov byte ptr [eax + 2], cl
// 005840ca  83c003               add eax, 3
// 005840cd  83ee01               sub esi, 1
// 005840d0  75ee                 jne 0x5840c0
// 005840d2  5e                   pop esi
// 005840d3  c3                   ret 
// 005840d4  80fa06               cmp dl, 6
// 005840d7  0f8585000000         jne 0x584162
// 005840dd  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005840e1  85c9                 test ecx, ecx
// 005840e3  767d                 jbe 0x584162
// 005840e5  8bf1                 mov esi, ecx
// 005840e7  8a08                 mov cl, byte ptr [eax]
// 005840e9  8a5002               mov dl, byte ptr [eax + 2]
// 005840ec  8810                 mov byte ptr [eax], dl
// 005840ee  884802               mov byte ptr [eax + 2], cl
// 005840f1  83c004               add eax, 4
// 005840f4  83ee01               sub esi, 1
// 005840f7  75ee                 jne 0x5840e7
// 005840f9  5e                   pop esi
// 005840fa  c3                   ret 
// 005840fb  3c10                 cmp al, 0x10
// 005840fd  7563                 jne 0x584162
// 005840ff  80fa02               cmp dl, 2
// 00584102  752e                 jne 0x584132
// 00584104  85c9                 test ecx, ecx
// 00584106  765a                 jbe 0x584162
// 00584108  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0058410c  40                   inc eax
// 0058410d  8bf1                 mov esi, ecx
// 0058410f  90                   nop 
// 00584110  0fb65003             movzx edx, byte ptr [eax + 3]
// 00584114  8a48ff               mov cl, byte ptr [eax - 1]
// 00584117  8850ff               mov byte ptr [eax - 1], dl
// 0058411a  0fb65004             movzx edx, byte ptr [eax + 4]
// 0058411e  884803               mov byte ptr [eax + 3], cl
// 00584121  8a08                 mov cl, byte ptr [eax]
// 00584123  8810                 mov byte ptr [eax], dl
// 00584125  884804               mov byte ptr [eax + 4], cl
// 00584128  83c006               add eax, 6
// 0058412b  83ee01               sub esi, 1
// 0058412e  75e0                 jne 0x584110
// 00584130  5e                   pop esi
// 00584131  c3                   ret 
// 00584132  80fa06               cmp dl, 6
// 00584135  752b                 jne 0x584162
// 00584137  85c9                 test ecx, ecx
// 00584139  7627                 jbe 0x584162
// 0058413b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0058413f  40                   inc eax
// 00584140  8bf1                 mov esi, ecx
// 00584142  0fb65003             movzx edx, byte ptr [eax + 3]
// 00584146  8a48ff               mov cl, byte ptr [eax - 1]
// 00584149  8850ff               mov byte ptr [eax - 1], dl
// 0058414c  0fb65004             movzx edx, byte ptr [eax + 4]
// 00584150  884803               mov byte ptr [eax + 3], cl
// 00584153  8a08                 mov cl, byte ptr [eax]
// 00584155  8810                 mov byte ptr [eax], dl
// 00584157  884804               mov byte ptr [eax + 4], cl
// 0058415a  83c008               add eax, 8
// 0058415d  83ee01               sub esi, 1
// 00584160  75e0                 jne 0x584142
// 00584162  5e                   pop esi
// 00584163  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_bgr)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
