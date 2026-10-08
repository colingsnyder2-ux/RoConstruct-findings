// from server: 100% by auto
// roc 2008-06 007a71d0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 470 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a71d0
//
// 007a71d0  51                   push ecx
// 007a71d1  53                   push ebx
// 007a71d2  56                   push esi
// 007a71d3  8b742410             mov esi, dword ptr [esp + 0x10]
// 007a71d7  8b460c               mov eax, dword ptr [esi + 0xc]
// 007a71da  83c0fb               add eax, -5
// 007a71dd  3dffff0000           cmp eax, 0xffff
// 007a71e2  57                   push edi
// 007a71e3  c744240cffff0000     mov dword ptr [esp + 0xc], 0xffff
// 007a71eb  7304                 jae 0x7a71f1
// 007a71ed  8944240c             mov dword ptr [esp + 0xc], eax
// 007a71f1  8b4674               mov eax, dword ptr [esi + 0x74]
// 007a71f4  83f801               cmp eax, 1
// 007a71f7  7710                 ja 0x7a7209
// 007a71f9  e882feffff           call 0x7a7080
// 007a71fe  8b4674               mov eax, dword ptr [esi + 0x74]
// 007a7201  85c0                 test eax, eax
// 007a7203  0f8436010000         je 0x7a733f
// 007a7209  01466c               add dword ptr [esi + 0x6c], eax
// 007a720c  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 007a720f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007a7213  8b566c               mov edx, dword ptr [esi + 0x6c]
// 007a7216  c7467400000000       mov dword ptr [esi + 0x74], 0
// 007a721d  8d0401               lea eax, [ecx + eax]
// 007a7220  7408                 je 0x7a722a
// 007a7222  3bd0                 cmp edx, eax
// 007a7224  0f8280000000         jb 0x7a72aa
// 007a722a  2bd0                 sub edx, eax
// 007a722c  85c9                 test ecx, ecx
// 007a722e  895674               mov dword ptr [esi + 0x74], edx
// 007a7231  89466c               mov dword ptr [esi + 0x6c], eax
// 007a7234  7c07                 jl 0x7a723d
// 007a7236  8b5638               mov edx, dword ptr [esi + 0x38]
// 007a7239  03d1                 add edx, ecx
// 007a723b  eb02                 jmp 0x7a723f
// 007a723d  33d2                 xor edx, edx
// 007a723f  6a00                 push 0
// 007a7241  2bc1                 sub eax, ecx
// 007a7243  50                   push eax
// 007a7244  52                   push edx
// 007a7245  56                   push esi
// 007a7246  e8b5e7ffff           call 0x7a5a00
// 007a724b  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007a724e  8b3e                 mov edi, dword ptr [esi]
// 007a7250  894e5c               mov dword ptr [esi + 0x5c], ecx
// 007a7253  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a7256  8b5814               mov ebx, dword ptr [eax + 0x14]
// 007a7259  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 007a725c  83c410               add esp, 0x10
// 007a725f  3bd9                 cmp ebx, ecx
// 007a7261  7602                 jbe 0x7a7265
// 007a7263  8bd9                 mov ebx, ecx
// 007a7265  85db                 test ebx, ebx
// 007a7267  7435                 je 0x7a729e
// 007a7269  8b5010               mov edx, dword ptr [eax + 0x10]
// 007a726c  8b470c               mov eax, dword ptr [edi + 0xc]
// 007a726f  53                   push ebx
// 007a7270  52                   push edx
// 007a7271  50                   push eax
// 007a7272  e869a5efff           call 0x6a17e0
// 007a7277  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a727a  015f0c               add dword ptr [edi + 0xc], ebx
// 007a727d  015810               add dword ptr [eax + 0x10], ebx
// 007a7280  015f14               add dword ptr [edi + 0x14], ebx
// 007a7283  295f10               sub dword ptr [edi + 0x10], ebx
// 007a7286  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a7289  295814               sub dword ptr [eax + 0x14], ebx
// 007a728c  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 007a728f  83c40c               add esp, 0xc
// 007a7292  837f1400             cmp dword ptr [edi + 0x14], 0
// 007a7296  7506                 jne 0x7a729e
// 007a7298  8b4f08               mov ecx, dword ptr [edi + 8]
// 007a729b  894f10               mov dword ptr [edi + 0x10], ecx
// 007a729e  8b16                 mov edx, dword ptr [esi]
// 007a72a0  837a1000             cmp dword ptr [edx + 0x10], 0
// 007a72a4  0f848e000000         je 0x7a7338
// 007a72aa  8b565c               mov edx, dword ptr [esi + 0x5c]
// 007a72ad  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007a72b0  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007a72b3  2bca                 sub ecx, edx
// 007a72b5  2d06010000           sub eax, 0x106
// 007a72ba  3bc8                 cmp ecx, eax
// 007a72bc  0f822fffffff         jb 0x7a71f1
// 007a72c2  85d2                 test edx, edx
// 007a72c4  7c07                 jl 0x7a72cd
// 007a72c6  8b4638               mov eax, dword ptr [esi + 0x38]
// 007a72c9  03c2                 add eax, edx
// 007a72cb  eb02                 jmp 0x7a72cf
// 007a72cd  33c0                 xor eax, eax
// 007a72cf  6a00                 push 0
// 007a72d1  51                   push ecx
// 007a72d2  50                   push eax
// 007a72d3  56                   push esi
// 007a72d4  e827e7ffff           call 0x7a5a00
// 007a72d9  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007a72dc  8b3e                 mov edi, dword ptr [esi]
// 007a72de  894e5c               mov dword ptr [esi + 0x5c], ecx
// 007a72e1  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a72e4  8b5814               mov ebx, dword ptr [eax + 0x14]
// 007a72e7  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 007a72ea  83c410               add esp, 0x10
// 007a72ed  3bd9                 cmp ebx, ecx
// 007a72ef  7602                 jbe 0x7a72f3
// 007a72f1  8bd9                 mov ebx, ecx
// 007a72f3  85db                 test ebx, ebx
// 007a72f5  7435                 je 0x7a732c
// 007a72f7  8b5010               mov edx, dword ptr [eax + 0x10]
// 007a72fa  8b470c               mov eax, dword ptr [edi + 0xc]
// 007a72fd  53                   push ebx
// 007a72fe  52                   push edx
// 007a72ff  50                   push eax
// 007a7300  e8dba4efff           call 0x6a17e0
// 007a7305  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a7308  015f0c               add dword ptr [edi + 0xc], ebx
// 007a730b  015810               add dword ptr [eax + 0x10], ebx
// 007a730e  015f14               add dword ptr [edi + 0x14], ebx
// 007a7311  295f10               sub dword ptr [edi + 0x10], ebx
// 007a7314  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a7317  295814               sub dword ptr [eax + 0x14], ebx
// 007a731a  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 007a731d  83c40c               add esp, 0xc
// 007a7320  837f1400             cmp dword ptr [edi + 0x14], 0
// 007a7324  7506                 jne 0x7a732c
// 007a7326  8b4f08               mov ecx, dword ptr [edi + 8]
// 007a7329  894f10               mov dword ptr [edi + 0x10], ecx
// 007a732c  8b16                 mov edx, dword ptr [esi]
// 007a732e  837a1000             cmp dword ptr [edx + 0x10], 0
// 007a7332  0f85b9feffff         jne 0x7a71f1
// 007a7338  5f                   pop edi
// 007a7339  5e                   pop esi
// 007a733a  33c0                 xor eax, eax
// 007a733c  5b                   pop ebx
// 007a733d  59                   pop ecx
// 007a733e  c3                   ret 
// 007a733f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007a7343  85ff                 test edi, edi
// 007a7345  74f1                 je 0x7a7338
// 007a7347  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 007a734a  85c9                 test ecx, ecx
// 007a734c  7c07                 jl 0x7a7355
// 007a734e  8b4638               mov eax, dword ptr [esi + 0x38]
// 007a7351  03c1                 add eax, ecx
// 007a7353  eb02                 jmp 0x7a7357
// 007a7355  33c0                 xor eax, eax
// 007a7357  33d2                 xor edx, edx
// 007a7359  83ff04               cmp edi, 4
// 007a735c  0f94c2               sete dl
// 007a735f  52                   push edx
// 007a7360  8b566c               mov edx, dword ptr [esi + 0x6c]
// 007a7363  2bd1                 sub edx, ecx
// 007a7365  52                   push edx
// 007a7366  50                   push eax
// 007a7367  56                   push esi
// 007a7368  e893e6ffff           call 0x7a5a00
// 007a736d  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a7370  89465c               mov dword ptr [esi + 0x5c], eax
// 007a7373  8b06                 mov eax, dword ptr [esi]
// 007a7375  83c410               add esp, 0x10
// 007a7378  e823f1ffff           call 0x7a64a0
// 007a737d  8b0e                 mov ecx, dword ptr [esi]
// 007a737f  33c0                 xor eax, eax
// 007a7381  394110               cmp dword ptr [ecx + 0x10], eax
// 007a7384  7511                 jne 0x7a7397
// 007a7386  83ff04               cmp edi, 4
// 007a7389  0f95c0               setne al
// 007a738c  5f                   pop edi
// 007a738d  5e                   pop esi
// 007a738e  5b                   pop ebx
// 007a738f  83e801               sub eax, 1
// 007a7392  83e002               and eax, 2
// 007a7395  59                   pop ecx
// 007a7396  c3                   ret 
// 007a7397  83ff04               cmp edi, 4
// 007a739a  0f94c0               sete al
// 007a739d  5f                   pop edi
// 007a739e  5e                   pop esi
// 007a739f  5b                   pop ebx
// 007a73a0  8d440001             lea eax, [eax + eax + 1]
// 007a73a4  59                   pop ecx
// 007a73a5  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_stored)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
