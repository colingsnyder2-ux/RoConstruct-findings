// from server: 100% by auto
// roc 2009-06 006f0400  unit: seg_006f0000  size: 324 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f0400
//
// 006f0400  53                   push ebx
// 006f0401  56                   push esi
// 006f0402  8bf0                 mov esi, eax
// 006f0404  8b4610               mov eax, dword ptr [esi + 0x10]
// 006f0407  05fefeffff           add eax, 0xfffffefe
// 006f040c  57                   push edi
// 006f040d  8b7e04               mov edi, dword ptr [esi + 4]
// 006f0410  83f813               cmp eax, 0x13
// 006f0413  0f87e2000000         ja 0x6f04fb
// 006f0419  0fb68030056f00       movzx eax, byte ptr [eax + 0x6f0530]
// 006f0420  ff248508056f00       jmp dword ptr [eax*4 + 0x6f0508]
// 006f0427  57                   push edi
// 006f0428  8bc6                 mov eax, esi
// 006f042a  e841faffff           call 0x6efe70
// 006f042f  83c404               add esp, 4
// 006f0432  5f                   pop edi
// 006f0433  5e                   pop esi
// 006f0434  33c0                 xor eax, eax
// 006f0436  5b                   pop ebx
// 006f0437  c3                   ret 
// 006f0438  57                   push edi
// 006f0439  8bc6                 mov eax, esi
// 006f043b  e8d0efffff           call 0x6ef410
// 006f0440  83c404               add esp, 4
// 006f0443  5f                   pop edi
// 006f0444  5e                   pop esi
// 006f0445  33c0                 xor eax, eax
// 006f0447  5b                   pop ebx
// 006f0448  c3                   ret 
// 006f0449  56                   push esi
// 006f044a  e891220000           call 0x6f26e0
// 006f044f  8bc6                 mov eax, esi
// 006f0451  e81aedffff           call 0x6ef170
// 006f0456  8bc7                 mov eax, edi
// 006f0458  6803010000           push 0x103
// 006f045d  bf06010000           mov edi, 0x106
// 006f0462  e829d4ffff           call 0x6ed890
// 006f0467  83c408               add esp, 8
// 006f046a  5f                   pop edi
// 006f046b  5e                   pop esi
// 006f046c  33c0                 xor eax, eax
// 006f046e  5b                   pop ebx
// 006f046f  c3                   ret 
// 006f0470  57                   push edi
// 006f0471  8bc6                 mov eax, esi
// 006f0473  e858f8ffff           call 0x6efcd0
// 006f0478  83c404               add esp, 4
// 006f047b  5f                   pop edi
// 006f047c  5e                   pop esi
// 006f047d  33c0                 xor eax, eax
// 006f047f  5b                   pop ebx
// 006f0480  c3                   ret 
// 006f0481  57                   push edi
// 006f0482  8bde                 mov ebx, esi
// 006f0484  e8b7f0ffff           call 0x6ef540
// 006f0489  83c404               add esp, 4
// 006f048c  5f                   pop edi
// 006f048d  5e                   pop esi
// 006f048e  33c0                 xor eax, eax
// 006f0490  5b                   pop ebx
// 006f0491  c3                   ret 
// 006f0492  e899fdffff           call 0x6f0230
// 006f0497  5f                   pop edi
// 006f0498  5e                   pop esi
// 006f0499  33c0                 xor eax, eax
// 006f049b  5b                   pop ebx
// 006f049c  c3                   ret 
// 006f049d  56                   push esi
// 006f049e  e83d220000           call 0x6f26e0
// 006f04a3  83c404               add esp, 4
// 006f04a6  817e1009010000       cmp dword ptr [esi + 0x10], 0x109
// 006f04ad  7516                 jne 0x6f04c5
// 006f04af  56                   push esi
// 006f04b0  e82b220000           call 0x6f26e0
// 006f04b5  83c404               add esp, 4
// 006f04b8  8bde                 mov ebx, esi
// 006f04ba  e871faffff           call 0x6eff30
// 006f04bf  5f                   pop edi
// 006f04c0  5e                   pop esi
// 006f04c1  33c0                 xor eax, eax
// 006f04c3  5b                   pop ebx
// 006f04c4  c3                   ret 
// 006f04c5  8bc6                 mov eax, esi
// 006f04c7  e864fbffff           call 0x6f0030
// 006f04cc  5f                   pop edi
// 006f04cd  5e                   pop esi
// 006f04ce  33c0                 xor eax, eax
// 006f04d0  5b                   pop ebx
// 006f04d1  c3                   ret 
// 006f04d2  8bc6                 mov eax, esi
// 006f04d4  e807feffff           call 0x6f02e0
// 006f04d9  5f                   pop edi
// 006f04da  5e                   pop esi
// 006f04db  b801000000           mov eax, 1
// 006f04e0  5b                   pop ebx
// 006f04e1  c3                   ret 
// 006f04e2  56                   push esi
// 006f04e3  e8f8210000           call 0x6f26e0
// 006f04e8  83c404               add esp, 4
// 006f04eb  8bc6                 mov eax, esi
// 006f04ed  e8beeeffff           call 0x6ef3b0
// 006f04f2  5f                   pop edi
// 006f04f3  5e                   pop esi
// 006f04f4  b801000000           mov eax, 1
// 006f04f9  5b                   pop ebx
// 006f04fa  c3                   ret 
// 006f04fb  8bc6                 mov eax, esi
// 006f04fd  e87efdffff           call 0x6f0280
// 006f0502  5f                   pop edi
// 006f0503  5e                   pop esi
// 006f0504  33c0                 xor eax, eax
// 006f0506  5b                   pop ebx
// 006f0507  c3                   ret 
// 006f0508  e204                 loop 0x6f050e
// 006f050a  6f                   outsd dx, dword ptr [esi]
// 006f050b  004904               add byte ptr [ecx + 4], cl
// 006f050e  6f                   outsd dx, dword ptr [esi]
// 006f050f  007004               add byte ptr [eax + 4], dh
// 006f0512  6f                   outsd dx, dword ptr [esi]
// 006f0513  0092046f0027         add byte ptr [edx + 0x27006f04], dl
// 006f0519  046f                 add al, 0x6f
// 006f051b  009d046f0081         add byte ptr [ebp - 0x7eff90fc], bl
// 006f0521  046f                 add al, 0x6f
// 006f0523  00d2                 add dl, dl
// 006f0525  046f                 add al, 0x6f
// 006f0527  0038                 add byte ptr [eax], bh
// 006f0529  046f                 add al, 0x6f
// 006f052b  00fb                 add bl, bh
// 006f052d  046f                 add al, 0x6f
// 006f052f  0000                 add byte ptr [eax], al
// 006f0531  0109                 add dword ptr [ecx], ecx
// 006f0533  0909                 or dword ptr [ecx], ecx
// 006f0535  0902                 or dword ptr [edx], eax
// 006f0537  030409               add eax, dword ptr [ecx + ecx]
// 006f053a  0509090906           add eax, 0x6090909
// 006f053f  07                   pop es
// 006f0540  0909                 or dword ptr [ecx], ecx
// 006f0542  0908                 or dword ptr [eax], ecx
// library lua-5.1.4/lparser.c (function _statement)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
