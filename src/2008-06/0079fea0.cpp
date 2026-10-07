// roc 2008-06 0079fea0  unit: CXTPDialogBar  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079fea0
//
// 0079fea0  56                   push esi
// 0079fea1  57                   push edi
// 0079fea2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0079fea6  8b470c               mov eax, dword ptr [edi + 0xc]
// 0079fea9  beffff0000           mov esi, 0xffff
// 0079feae  83c0fb               add eax, -5
// 0079feb1  3bc6                 cmp eax, esi
// 0079feb3  7302                 jae 0x79feb7
// 0079feb5  8bf0                 mov esi, eax
// 0079feb7  8b4774               mov eax, dword ptr [edi + 0x74]
// 0079feba  83f801               cmp eax, 1
// 0079febd  7710                 ja 0x79fecf
// 0079febf  e8fcfeffff           call 0x79fdc0
// 0079fec4  8b4774               mov eax, dword ptr [edi + 0x74]
// 0079fec7  85c0                 test eax, eax
// 0079fec9  0f849e000000         je 0x79ff6d
// 0079fecf  01476c               add dword ptr [edi + 0x6c], eax
// 0079fed2  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0079fed5  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0079fed8  c7477400000000       mov dword ptr [edi + 0x74], 0
// 0079fedf  8d0431               lea eax, [ecx + esi]
// 0079fee2  7404                 je 0x79fee8
// 0079fee4  3bd0                 cmp edx, eax
// 0079fee6  7239                 jb 0x79ff21
// 0079fee8  2bd0                 sub edx, eax
// 0079feea  895774               mov dword ptr [edi + 0x74], edx
// 0079feed  89476c               mov dword ptr [edi + 0x6c], eax
// 0079fef0  85c9                 test ecx, ecx
// 0079fef2  7c07                 jl 0x79fefb
// 0079fef4  8b5738               mov edx, dword ptr [edi + 0x38]
// 0079fef7  03d1                 add edx, ecx
// 0079fef9  eb02                 jmp 0x79fefd
// 0079fefb  33d2                 xor edx, edx
// 0079fefd  6a00                 push 0
// 0079feff  2bc1                 sub eax, ecx
// 0079ff01  50                   push eax
// 0079ff02  52                   push edx
// 0079ff03  57                   push edi
// 0079ff04  e8f75a0000           call 0x7a5a00
// 0079ff09  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0079ff0c  89475c               mov dword ptr [edi + 0x5c], eax
// 0079ff0f  8b07                 mov eax, dword ptr [edi]
// 0079ff11  83c410               add esp, 0x10
// 0079ff14  e887650000           call 0x7a64a0
// 0079ff19  8b0f                 mov ecx, dword ptr [edi]
// 0079ff1b  83791000             cmp dword ptr [ecx + 0x10], 0
// 0079ff1f  7447                 je 0x79ff68
// 0079ff21  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0079ff24  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0079ff27  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0079ff2a  2bd1                 sub edx, ecx
// 0079ff2c  2d06010000           sub eax, 0x106
// 0079ff31  3bd0                 cmp edx, eax
// 0079ff33  7282                 jb 0x79feb7
// 0079ff35  85c9                 test ecx, ecx
// 0079ff37  7c07                 jl 0x79ff40
// 0079ff39  8b4738               mov eax, dword ptr [edi + 0x38]
// 0079ff3c  03c1                 add eax, ecx
// 0079ff3e  eb02                 jmp 0x79ff42
// 0079ff40  33c0                 xor eax, eax
// 0079ff42  6a00                 push 0
// 0079ff44  52                   push edx
// 0079ff45  50                   push eax
// 0079ff46  57                   push edi
// 0079ff47  e8b45a0000           call 0x7a5a00
// 0079ff4c  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 0079ff4f  8b07                 mov eax, dword ptr [edi]
// 0079ff51  83c410               add esp, 0x10
// 0079ff54  894f5c               mov dword ptr [edi + 0x5c], ecx
// 0079ff57  e844650000           call 0x7a64a0
// 0079ff5c  8b17                 mov edx, dword ptr [edi]
// 0079ff5e  837a1000             cmp dword ptr [edx + 0x10], 0
// 0079ff62  0f854fffffff         jne 0x79feb7
// 0079ff68  5f                   pop edi
// 0079ff69  33c0                 xor eax, eax
// 0079ff6b  5e                   pop esi
// 0079ff6c  c3                   ret 
// 0079ff6d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0079ff71  85f6                 test esi, esi
// 0079ff73  74f3                 je 0x79ff68
// 0079ff75  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0079ff78  85c9                 test ecx, ecx
// 0079ff7a  7c07                 jl 0x79ff83
// 0079ff7c  8b4738               mov eax, dword ptr [edi + 0x38]
// 0079ff7f  03c1                 add eax, ecx
// 0079ff81  eb02                 jmp 0x79ff85
// 0079ff83  33c0                 xor eax, eax
// 0079ff85  33d2                 xor edx, edx
// 0079ff87  83fe04               cmp esi, 4
// 0079ff8a  0f94c2               sete dl
// 0079ff8d  52                   push edx
// 0079ff8e  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0079ff91  2bd1                 sub edx, ecx
// 0079ff93  52                   push edx
// 0079ff94  50                   push eax
// 0079ff95  57                   push edi
// 0079ff96  e8655a0000           call 0x7a5a00
// 0079ff9b  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0079ff9e  89475c               mov dword ptr [edi + 0x5c], eax
// 0079ffa1  8b07                 mov eax, dword ptr [edi]
// 0079ffa3  83c410               add esp, 0x10
// 0079ffa6  e8f5640000           call 0x7a64a0
// 0079ffab  8b0f                 mov ecx, dword ptr [edi]
// 0079ffad  33c0                 xor eax, eax
// 0079ffaf  394110               cmp dword ptr [ecx + 0x10], eax
// 0079ffb2  750d                 jne 0x79ffc1
// 0079ffb4  83fe04               cmp esi, 4
// 0079ffb7  0f95c0               setne al
// 0079ffba  5f                   pop edi
// 0079ffbb  5e                   pop esi
// 0079ffbc  48                   dec eax
// 0079ffbd  83e002               and eax, 2
// 0079ffc0  c3                   ret 
// 0079ffc1  83fe04               cmp esi, 4
// 0079ffc4  0f94c0               sete al
// 0079ffc7  5f                   pop edi
// 0079ffc8  5e                   pop esi
// 0079ffc9  8d440001             lea eax, [eax + eax + 1]
// 0079ffcd  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_stored)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
