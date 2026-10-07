// roc 2008-06 0051cdd0  unit: G3D::_internal::DialogTemplate  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051cdd0
//
// 0051cdd0  57                   push edi
// 0051cdd1  8b7c2408             mov edi, dword ptr [esp + 8]
// 0051cdd5  85ff                 test edi, edi
// 0051cdd7  0f84a0000000         je 0x51ce7d
// 0051cddd  56                   push esi
// 0051cdde  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051cde2  85f6                 test esi, esi
// 0051cde4  0f8492000000         je 0x51ce7c
// 0051cdea  66837e1400           cmp word ptr [esi + 0x14], 0
// 0051cdef  7511                 jne 0x51ce02
// 0051cdf1  6808908200           push 0x829008
// 0051cdf6  57                   push edi
// 0051cdf7  e854cc0000           call 0x529a50
// 0051cdfc  83c408               add esp, 8
// 0051cdff  5e                   pop esi
// 0051ce00  5f                   pop edi
// 0051ce01  c3                   ret 
// 0051ce02  6a00                 push 0
// 0051ce04  6a08                 push 8
// 0051ce06  56                   push esi
// 0051ce07  57                   push edi
// 0051ce08  e8c30f0000           call 0x51ddd0
// 0051ce0d  6800020000           push 0x200
// 0051ce12  57                   push edi
// 0051ce13  e818d70000           call 0x52a530
// 0051ce18  83c418               add esp, 0x18
// 0051ce1b  8987f4010000         mov dword ptr [edi + 0x1f4], eax
// 0051ce21  85c0                 test eax, eax
// 0051ce23  7511                 jne 0x51ce36
// 0051ce25  68dc8f8200           push 0x828fdc
// 0051ce2a  57                   push edi
// 0051ce2b  e820cc0000           call 0x529a50
// 0051ce30  83c408               add esp, 8
// 0051ce33  5e                   pop esi
// 0051ce34  5f                   pop edi
// 0051ce35  c3                   ret 
// 0051ce36  33c9                 xor ecx, ecx
// 0051ce38  33c0                 xor eax, eax
// 0051ce3a  663b4e14             cmp cx, word ptr [esi + 0x14]
// 0051ce3e  7328                 jae 0x51ce68
// 0051ce40  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0051ce44  53                   push ebx
// 0051ce45  eb09                 jmp 0x51ce50
// 0051ce47  8da42400000000       lea esp, [esp]
// 0051ce4e  8bff                 mov edi, edi
// 0051ce50  8b97f4010000         mov edx, dword ptr [edi + 0x1f4]
// 0051ce56  668b1c41             mov bx, word ptr [ecx + eax*2]
// 0051ce5a  66891c42             mov word ptr [edx + eax*2], bx
// 0051ce5e  0fb75614             movzx edx, word ptr [esi + 0x14]
// 0051ce62  40                   inc eax
// 0051ce63  3bc2                 cmp eax, edx
// 0051ce65  7ce9                 jl 0x51ce50
// 0051ce67  5b                   pop ebx
// 0051ce68  8b87f4010000         mov eax, dword ptr [edi + 0x1f4]
// 0051ce6e  834e0840             or dword ptr [esi + 8], 0x40
// 0051ce72  838eb800000008       or dword ptr [esi + 0xb8], 8
// 0051ce79  89467c               mov dword ptr [esi + 0x7c], eax
// 0051ce7c  5e                   pop esi
// 0051ce7d  5f                   pop edi
// 0051ce7e  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_hIST)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
