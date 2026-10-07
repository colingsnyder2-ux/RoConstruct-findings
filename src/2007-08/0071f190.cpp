// roc 2007-08 0071f190  unit: CXTPDialogBar  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071f190
//
// 0071f190  56                   push esi
// 0071f191  57                   push edi
// 0071f192  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0071f196  8b470c               mov eax, dword ptr [edi + 0xc]
// 0071f199  beffff0000           mov esi, 0xffff
// 0071f19e  83c0fb               add eax, -5
// 0071f1a1  3bc6                 cmp eax, esi
// 0071f1a3  7302                 jae 0x71f1a7
// 0071f1a5  8bf0                 mov esi, eax
// 0071f1a7  8b4774               mov eax, dword ptr [edi + 0x74]
// 0071f1aa  83f801               cmp eax, 1
// 0071f1ad  7710                 ja 0x71f1bf
// 0071f1af  e8fcfeffff           call 0x71f0b0
// 0071f1b4  8b4774               mov eax, dword ptr [edi + 0x74]
// 0071f1b7  85c0                 test eax, eax
// 0071f1b9  0f849e000000         je 0x71f25d
// 0071f1bf  01476c               add dword ptr [edi + 0x6c], eax
// 0071f1c2  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0071f1c5  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0071f1c8  c7477400000000       mov dword ptr [edi + 0x74], 0
// 0071f1cf  8d0431               lea eax, [ecx + esi]
// 0071f1d2  7404                 je 0x71f1d8
// 0071f1d4  3bd0                 cmp edx, eax
// 0071f1d6  7239                 jb 0x71f211
// 0071f1d8  2bd0                 sub edx, eax
// 0071f1da  85c9                 test ecx, ecx
// 0071f1dc  895774               mov dword ptr [edi + 0x74], edx
// 0071f1df  89476c               mov dword ptr [edi + 0x6c], eax
// 0071f1e2  7c07                 jl 0x71f1eb
// 0071f1e4  8b5738               mov edx, dword ptr [edi + 0x38]
// 0071f1e7  03d1                 add edx, ecx
// 0071f1e9  eb02                 jmp 0x71f1ed
// 0071f1eb  33d2                 xor edx, edx
// 0071f1ed  6a00                 push 0
// 0071f1ef  2bc1                 sub eax, ecx
// 0071f1f1  50                   push eax
// 0071f1f2  52                   push edx
// 0071f1f3  57                   push edi
// 0071f1f4  e897590000           call 0x724b90
// 0071f1f9  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0071f1fc  89475c               mov dword ptr [edi + 0x5c], eax
// 0071f1ff  8b07                 mov eax, dword ptr [edi]
// 0071f201  83c410               add esp, 0x10
// 0071f204  e897fbffff           call 0x71eda0
// 0071f209  8b0f                 mov ecx, dword ptr [edi]
// 0071f20b  83791000             cmp dword ptr [ecx + 0x10], 0
// 0071f20f  7447                 je 0x71f258
// 0071f211  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0071f214  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0071f217  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0071f21a  2bd1                 sub edx, ecx
// 0071f21c  2d06010000           sub eax, 0x106
// 0071f221  3bd0                 cmp edx, eax
// 0071f223  7282                 jb 0x71f1a7
// 0071f225  85c9                 test ecx, ecx
// 0071f227  7c07                 jl 0x71f230
// 0071f229  8b4738               mov eax, dword ptr [edi + 0x38]
// 0071f22c  03c1                 add eax, ecx
// 0071f22e  eb02                 jmp 0x71f232
// 0071f230  33c0                 xor eax, eax
// 0071f232  6a00                 push 0
// 0071f234  52                   push edx
// 0071f235  50                   push eax
// 0071f236  57                   push edi
// 0071f237  e854590000           call 0x724b90
// 0071f23c  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 0071f23f  8b07                 mov eax, dword ptr [edi]
// 0071f241  83c410               add esp, 0x10
// 0071f244  894f5c               mov dword ptr [edi + 0x5c], ecx
// 0071f247  e854fbffff           call 0x71eda0
// 0071f24c  8b17                 mov edx, dword ptr [edi]
// 0071f24e  837a1000             cmp dword ptr [edx + 0x10], 0
// 0071f252  0f854fffffff         jne 0x71f1a7
// 0071f258  5f                   pop edi
// 0071f259  33c0                 xor eax, eax
// 0071f25b  5e                   pop esi
// 0071f25c  c3                   ret 
// 0071f25d  8b742410             mov esi, dword ptr [esp + 0x10]
// 0071f261  85f6                 test esi, esi
// 0071f263  74f3                 je 0x71f258
// 0071f265  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 0071f268  85c9                 test ecx, ecx
// 0071f26a  7c07                 jl 0x71f273
// 0071f26c  8b4738               mov eax, dword ptr [edi + 0x38]
// 0071f26f  03c1                 add eax, ecx
// 0071f271  eb02                 jmp 0x71f275
// 0071f273  33c0                 xor eax, eax
// 0071f275  33d2                 xor edx, edx
// 0071f277  83fe04               cmp esi, 4
// 0071f27a  0f94c2               sete dl
// 0071f27d  52                   push edx
// 0071f27e  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0071f281  2bd1                 sub edx, ecx
// 0071f283  52                   push edx
// 0071f284  50                   push eax
// 0071f285  57                   push edi
// 0071f286  e805590000           call 0x724b90
// 0071f28b  8b476c               mov eax, dword ptr [edi + 0x6c]
// 0071f28e  89475c               mov dword ptr [edi + 0x5c], eax
// 0071f291  8b07                 mov eax, dword ptr [edi]
// 0071f293  83c410               add esp, 0x10
// 0071f296  e805fbffff           call 0x71eda0
// 0071f29b  8b0f                 mov ecx, dword ptr [edi]
// 0071f29d  33c0                 xor eax, eax
// 0071f29f  394110               cmp dword ptr [ecx + 0x10], eax
// 0071f2a2  750f                 jne 0x71f2b3
// 0071f2a4  83fe04               cmp esi, 4
// 0071f2a7  0f95c0               setne al
// 0071f2aa  5f                   pop edi
// 0071f2ab  5e                   pop esi
// 0071f2ac  83e801               sub eax, 1
// 0071f2af  83e002               and eax, 2
// 0071f2b2  c3                   ret 
// 0071f2b3  83fe04               cmp esi, 4
// 0071f2b6  0f94c0               sete al
// 0071f2b9  5f                   pop edi
// 0071f2ba  5e                   pop esi
// 0071f2bb  8d440001             lea eax, [eax + eax + 1]
// 0071f2bf  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_stored)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
