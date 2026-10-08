// from server: 100% by auto
// roc 2012-06 00a78080  unit: CXTPRibbonSystemPopupBar  size: 302 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a78080
//
// 00a78080  56                   push esi
// 00a78081  57                   push edi
// 00a78082  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a78086  8b470c               mov eax, dword ptr [edi + 0xc]
// 00a78089  beffff0000           mov esi, 0xffff
// 00a7808e  83c0fb               add eax, -5
// 00a78091  3bc6                 cmp eax, esi
// 00a78093  7302                 jae 0xa78097
// 00a78095  8bf0                 mov esi, eax
// 00a78097  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a7809a  83f801               cmp eax, 1
// 00a7809d  7710                 ja 0xa780af
// 00a7809f  e8fcfeffff           call 0xa77fa0
// 00a780a4  8b4774               mov eax, dword ptr [edi + 0x74]
// 00a780a7  85c0                 test eax, eax
// 00a780a9  0f849e000000         je 0xa7814d
// 00a780af  01476c               add dword ptr [edi + 0x6c], eax
// 00a780b2  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 00a780b5  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a780b8  c7477400000000       mov dword ptr [edi + 0x74], 0
// 00a780bf  8d0431               lea eax, [ecx + esi]
// 00a780c2  7404                 je 0xa780c8
// 00a780c4  3bd0                 cmp edx, eax
// 00a780c6  7239                 jb 0xa78101
// 00a780c8  2bd0                 sub edx, eax
// 00a780ca  895774               mov dword ptr [edi + 0x74], edx
// 00a780cd  89476c               mov dword ptr [edi + 0x6c], eax
// 00a780d0  85c9                 test ecx, ecx
// 00a780d2  7c07                 jl 0xa780db
// 00a780d4  8b5738               mov edx, dword ptr [edi + 0x38]
// 00a780d7  03d1                 add edx, ecx
// 00a780d9  eb02                 jmp 0xa780dd
// 00a780db  33d2                 xor edx, edx
// 00a780dd  6a00                 push 0
// 00a780df  2bc1                 sub eax, ecx
// 00a780e1  50                   push eax
// 00a780e2  52                   push edx
// 00a780e3  57                   push edi
// 00a780e4  e8777bbeff           call 0x65fc60
// 00a780e9  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a780ec  89475c               mov dword ptr [edi + 0x5c], eax
// 00a780ef  8b07                 mov eax, dword ptr [edi]
// 00a780f1  83c410               add esp, 0x10
// 00a780f4  e8e7fdffff           call 0xa77ee0
// 00a780f9  8b0f                 mov ecx, dword ptr [edi]
// 00a780fb  83791000             cmp dword ptr [ecx + 0x10], 0
// 00a780ff  7447                 je 0xa78148
// 00a78101  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 00a78104  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a78107  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00a7810a  2bd1                 sub edx, ecx
// 00a7810c  2d06010000           sub eax, 0x106
// 00a78111  3bd0                 cmp edx, eax
// 00a78113  7282                 jb 0xa78097
// 00a78115  85c9                 test ecx, ecx
// 00a78117  7c07                 jl 0xa78120
// 00a78119  8b4738               mov eax, dword ptr [edi + 0x38]
// 00a7811c  03c1                 add eax, ecx
// 00a7811e  eb02                 jmp 0xa78122
// 00a78120  33c0                 xor eax, eax
// 00a78122  6a00                 push 0
// 00a78124  52                   push edx
// 00a78125  50                   push eax
// 00a78126  57                   push edi
// 00a78127  e8347bbeff           call 0x65fc60
// 00a7812c  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00a7812f  8b07                 mov eax, dword ptr [edi]
// 00a78131  83c410               add esp, 0x10
// 00a78134  894f5c               mov dword ptr [edi + 0x5c], ecx
// 00a78137  e8a4fdffff           call 0xa77ee0
// 00a7813c  8b17                 mov edx, dword ptr [edi]
// 00a7813e  837a1000             cmp dword ptr [edx + 0x10], 0
// 00a78142  0f854fffffff         jne 0xa78097
// 00a78148  5f                   pop edi
// 00a78149  33c0                 xor eax, eax
// 00a7814b  5e                   pop esi
// 00a7814c  c3                   ret 
// 00a7814d  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a78151  85f6                 test esi, esi
// 00a78153  74f3                 je 0xa78148
// 00a78155  8b4f5c               mov ecx, dword ptr [edi + 0x5c]
// 00a78158  85c9                 test ecx, ecx
// 00a7815a  7c07                 jl 0xa78163
// 00a7815c  8b4738               mov eax, dword ptr [edi + 0x38]
// 00a7815f  03c1                 add eax, ecx
// 00a78161  eb02                 jmp 0xa78165
// 00a78163  33c0                 xor eax, eax
// 00a78165  33d2                 xor edx, edx
// 00a78167  83fe04               cmp esi, 4
// 00a7816a  0f94c2               sete dl
// 00a7816d  52                   push edx
// 00a7816e  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00a78171  2bd1                 sub edx, ecx
// 00a78173  52                   push edx
// 00a78174  50                   push eax
// 00a78175  57                   push edi
// 00a78176  e8e57abeff           call 0x65fc60
// 00a7817b  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00a7817e  89475c               mov dword ptr [edi + 0x5c], eax
// 00a78181  8b07                 mov eax, dword ptr [edi]
// 00a78183  83c410               add esp, 0x10
// 00a78186  e855fdffff           call 0xa77ee0
// 00a7818b  8b0f                 mov ecx, dword ptr [edi]
// 00a7818d  33c0                 xor eax, eax
// 00a7818f  394110               cmp dword ptr [ecx + 0x10], eax
// 00a78192  750d                 jne 0xa781a1
// 00a78194  83fe04               cmp esi, 4
// 00a78197  0f95c0               setne al
// 00a7819a  5f                   pop edi
// 00a7819b  5e                   pop esi
// 00a7819c  48                   dec eax
// 00a7819d  83e002               and eax, 2
// 00a781a0  c3                   ret 
// 00a781a1  83fe04               cmp esi, 4
// 00a781a4  0f94c0               sete al
// 00a781a7  5f                   pop edi
// 00a781a8  5e                   pop esi
// 00a781a9  8d440001             lea eax, [eax + eax + 1]
// 00a781ad  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_stored)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
