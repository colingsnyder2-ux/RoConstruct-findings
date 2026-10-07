// roc 2007-08 00513fc0  unit: G3D::_internal::DialogTemplate  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513fc0
//
// 00513fc0  57                   push edi
// 00513fc1  8b7c2408             mov edi, dword ptr [esp + 8]
// 00513fc5  85ff                 test edi, edi
// 00513fc7  0f84a2000000         je 0x51406f
// 00513fcd  56                   push esi
// 00513fce  8b742410             mov esi, dword ptr [esp + 0x10]
// 00513fd2  85f6                 test esi, esi
// 00513fd4  0f8494000000         je 0x51406e
// 00513fda  66837e1400           cmp word ptr [esi + 0x14], 0
// 00513fdf  7511                 jne 0x513ff2
// 00513fe1  68d8117a00           push 0x7a11d8
// 00513fe6  57                   push edi
// 00513fe7  e8a4a90000           call 0x51e990
// 00513fec  83c408               add esp, 8
// 00513fef  5e                   pop esi
// 00513ff0  5f                   pop edi
// 00513ff1  c3                   ret 
// 00513ff2  6a00                 push 0
// 00513ff4  6a08                 push 8
// 00513ff6  56                   push esi
// 00513ff7  57                   push edi
// 00513ff8  e8730f0000           call 0x514f70
// 00513ffd  6800020000           push 0x200
// 00514002  57                   push edi
// 00514003  e8f8ac0000           call 0x51ed00
// 00514008  83c418               add esp, 0x18
// 0051400b  85c0                 test eax, eax
// 0051400d  8987f4010000         mov dword ptr [edi + 0x1f4], eax
// 00514013  7511                 jne 0x514026
// 00514015  68ac117a00           push 0x7a11ac
// 0051401a  57                   push edi
// 0051401b  e870a90000           call 0x51e990
// 00514020  83c408               add esp, 8
// 00514023  5e                   pop esi
// 00514024  5f                   pop edi
// 00514025  c3                   ret 
// 00514026  33c0                 xor eax, eax
// 00514028  66394614             cmp word ptr [esi + 0x14], ax
// 0051402c  762c                 jbe 0x51405a
// 0051402e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00514032  53                   push ebx
// 00514033  eb0b                 jmp 0x514040
// 00514035  8da42400000000       lea esp, [esp]
// 0051403c  8d642400             lea esp, [esp]
// 00514040  8b97f4010000         mov edx, dword ptr [edi + 0x1f4]
// 00514046  668b1c41             mov bx, word ptr [ecx + eax*2]
// 0051404a  66891c42             mov word ptr [edx + eax*2], bx
// 0051404e  0fb75614             movzx edx, word ptr [esi + 0x14]
// 00514052  83c001               add eax, 1
// 00514055  3bc2                 cmp eax, edx
// 00514057  7ce7                 jl 0x514040
// 00514059  5b                   pop ebx
// 0051405a  8b87f4010000         mov eax, dword ptr [edi + 0x1f4]
// 00514060  834e0840             or dword ptr [esi + 8], 0x40
// 00514064  838eb800000008       or dword ptr [esi + 0xb8], 8
// 0051406b  89467c               mov dword ptr [esi + 0x7c], eax
// 0051406e  5e                   pop esi
// 0051406f  5f                   pop edi
// 00514070  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_hIST)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
