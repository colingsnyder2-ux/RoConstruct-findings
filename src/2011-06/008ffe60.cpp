// from server: 100% by auto
// roc 2011-06 008ffe60  unit: CXTPRibbonSystemPopupBar  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ffe60
//
// 008ffe60  56                   push esi
// 008ffe61  57                   push edi
// 008ffe62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008ffe66  8b470c               mov eax, dword ptr [edi + 0xc]
// 008ffe69  beffff0000           mov esi, 0xffff
// 008ffe6e  83c0fb               add eax, -5
// 008ffe71  3bc6                 cmp eax, esi
// 008ffe73  7302                 jae 0x8ffe77
// 008ffe75  8bf0                 mov esi, eax
// 008ffe77  8b4774               mov eax, dword ptr [edi + 0x74]
// 008ffe7a  83f801               cmp eax, 1
// 008ffe7d  7710                 ja 0x8ffe8f
// 008ffe7f  e8fcfeffff           call 0x8ffd80
// 008ffe84  8b4774               mov eax, dword ptr [edi + 0x74]
// 008ffe87  85c0                 test eax, eax
// 008ffe89  0f849e000000         je 0x8fff2d
// 008ffe8f  01476c               add dword ptr [edi + 0x6c], eax
// 008ffe92  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 008ffe95  8b576c               mov edx, dword ptr [edi + 0x6c]
// 008ffe98  c7477400000000       mov dword ptr [edi + 0x74], 0
// 008ffe9f  8d0431               lea eax, [ecx + esi]
// 008ffea2  7404                 je 0x8ffea8
// 008ffea4  3bd0                 cmp edx, eax
// 008ffea6  7239                 jb 0x8ffee1
// 008ffea8  2bd0                 sub edx, eax
// 008ffeaa  895774               mov dword ptr [edi + 0x74], edx
// 008ffead  89476c               mov dword ptr [edi + 0x6c], eax
// 008ffeb0  85c9                 test ecx, ecx
// 008ffeb2  7c07                 jl 0x8ffebb
// 008ffeb4  8b5738               mov edx, dword ptr [edi + 0x38]
// 008ffeb7  03d1                 add edx, ecx
// 008ffeb9  eb02                 jmp 0x8ffebd
// 008ffebb  33d2                 xor edx, edx
// 008ffebd  6a00                 push 0
// 008ffebf  2bc1                 sub eax, ecx
// 008ffec1  50                   push eax
// 008ffec2  52                   push edx
// 008ffec3  57                   push edi
// 008ffec4  e89746c7ff           call 0x574560
// 008ffec9  8b476c               mov eax, dword ptr [edi + 0x6c]
// 008ffecc  89475c               mov dword ptr [edi + 0x5c], eax
// 008ffecf  8b07                 mov eax, dword ptr [edi]
// 008ffed1  83c410               add esp, 0x10
// 008ffed4  e887fcffff           call 0x8ffb60
// 008ffed9  8b0f                 mov ecx, dword ptr [edi]
// 008ffedb  83791000             cmp dword ptr [ecx + 0x10], 0
// 008ffedf  7447                 je 0x8fff28
// 008ffee1  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 008ffee4  8b576c               mov edx, dword ptr [edi + 0x6c]
// 008ffee7  8b472c               mov eax, dword ptr [edi + 0x2c]
// 008ffeea  2bd1                 sub edx, ecx
// 008ffeec  2d06010000           sub eax, 0x106
// 008ffef1  3bd0                 cmp edx, eax
// 008ffef3  7282                 jb 0x8ffe77
// 008ffef5  85c9                 test ecx, ecx
// 008ffef7  7c07                 jl 0x8fff00
// 008ffef9  8b4738               mov eax, dword ptr [edi + 0x38]
// 008ffefc  03c1                 add eax, ecx
// 008ffefe  eb02                 jmp 0x8fff02
// 008fff00  33c0                 xor eax, eax
// 008fff02  6a00                 push 0
// 008fff04  52                   push edx
// 008fff05  50                   push eax
// 008fff06  57                   push edi
// 008fff07  e85446c7ff           call 0x574560
// 008fff0c  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 008fff0f  8b07                 mov eax, dword ptr [edi]
// 008fff11  83c410               add esp, 0x10
// 008fff14  894f5c               mov dword ptr [edi + 0x5c], ecx
// 008fff17  e844fcffff           call 0x8ffb60
// 008fff1c  8b17                 mov edx, dword ptr [edi]
// 008fff1e  837a1000             cmp dword ptr [edx + 0x10], 0
// 008fff22  0f854fffffff         jne 0x8ffe77
// 008fff28  5f                   pop edi
// 008fff29  33c0                 xor eax, eax
// 008fff2b  5e                   pop esi
// 008fff2c  c3                   ret 
// 008fff2d  8b742410             mov esi, dword ptr [esp + 0x10]
// 008fff31  85f6                 test esi, esi
// 008fff33  74f3                 je 0x8fff28
// 008fff35  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 008fff38  85c9                 test ecx, ecx
// 008fff3a  7c07                 jl 0x8fff43
// 008fff3c  8b4738               mov eax, dword ptr [edi + 0x38]
// 008fff3f  03c1                 add eax, ecx
// 008fff41  eb02                 jmp 0x8fff45
// 008fff43  33c0                 xor eax, eax
// 008fff45  33d2                 xor edx, edx
// 008fff47  83fe04               cmp esi, 4
// 008fff4a  0f94c2               sete dl
// 008fff4d  52                   push edx
// 008fff4e  8b576c               mov edx, dword ptr [edi + 0x6c]
// 008fff51  2bd1                 sub edx, ecx
// 008fff53  52                   push edx
// 008fff54  50                   push eax
// 008fff55  57                   push edi
// 008fff56  e80546c7ff           call 0x574560
// 008fff5b  8b476c               mov eax, dword ptr [edi + 0x6c]
// 008fff5e  89475c               mov dword ptr [edi + 0x5c], eax
// 008fff61  8b07                 mov eax, dword ptr [edi]
// 008fff63  83c410               add esp, 0x10
// 008fff66  e8f5fbffff           call 0x8ffb60
// 008fff6b  8b0f                 mov ecx, dword ptr [edi]
// 008fff6d  33c0                 xor eax, eax
// 008fff6f  394110               cmp dword ptr [ecx + 0x10], eax
// 008fff72  750d                 jne 0x8fff81
// 008fff74  83fe04               cmp esi, 4
// 008fff77  0f95c0               setne al
// 008fff7a  5f                   pop edi
// 008fff7b  5e                   pop esi
// 008fff7c  48                   dec eax
// 008fff7d  83e002               and eax, 2
// 008fff80  c3                   ret 
// 008fff81  83fe04               cmp esi, 4
// 008fff84  0f94c0               sete al
// 008fff87  5f                   pop edi
// 008fff88  5e                   pop esi
// 008fff89  8d440001             lea eax, [eax + eax + 1]
// 008fff8d  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_stored)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
