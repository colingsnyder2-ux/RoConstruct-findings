// from server: 100% by auto
// roc 2008-06 0051d0e0  unit: seg_00510000  size: 401 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051d0e0
//
// 0051d0e0  53                   push ebx
// 0051d0e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0051d0e5  85db                 test ebx, ebx
// 0051d0e7  0f846f010000         je 0x51d25c
// 0051d0ed  57                   push edi
// 0051d0ee  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051d0f2  85ff                 test edi, edi
// 0051d0f4  0f8461010000         je 0x51d25b
// 0051d0fa  55                   push ebp
// 0051d0fb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0051d0ff  8bc5                 mov eax, ebp
// 0051d101  8d5001               lea edx, [eax + 1]
// 0051d104  8a08                 mov cl, byte ptr [eax]
// 0051d106  40                   inc eax
// 0051d107  84c9                 test cl, cl
// 0051d109  75f9                 jne 0x51d104
// 0051d10b  56                   push esi
// 0051d10c  2bc2                 sub eax, edx
// 0051d10e  8d7001               lea esi, [eax + 1]
// 0051d111  56                   push esi
// 0051d112  53                   push ebx
// 0051d113  e818d40000           call 0x52a530
// 0051d118  83c408               add esp, 8
// 0051d11b  8987a0000000         mov dword ptr [edi + 0xa0], eax
// 0051d121  85c0                 test eax, eax
// 0051d123  7513                 jne 0x51d138
// 0051d125  6838928200           push 0x829238
// 0051d12a  53                   push ebx
// 0051d12b  e820c90000           call 0x529a50
// 0051d130  83c408               add esp, 8
// 0051d133  5e                   pop esi
// 0051d134  5d                   pop ebp
// 0051d135  5f                   pop edi
// 0051d136  5b                   pop ebx
// 0051d137  c3                   ret 
// 0051d138  56                   push esi
// 0051d139  55                   push ebp
// 0051d13a  50                   push eax
// 0051d13b  e8a0461800           call 0x6a17e0
// 0051d140  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0051d144  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0051d148  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0051d14c  8a542434             mov dl, byte ptr [esp + 0x34]
// 0051d150  8987a4000000         mov dword ptr [edi + 0xa4], eax
// 0051d156  8a442438             mov al, byte ptr [esp + 0x38]
// 0051d15a  8887b5000000         mov byte ptr [edi + 0xb5], al
// 0051d160  8bc5                 mov eax, ebp
// 0051d162  83c40c               add esp, 0xc
// 0051d165  898fa8000000         mov dword ptr [edi + 0xa8], ecx
// 0051d16b  8897b4000000         mov byte ptr [edi + 0xb4], dl
// 0051d171  8d7001               lea esi, [eax + 1]
// 0051d174  8a08                 mov cl, byte ptr [eax]
// 0051d176  40                   inc eax
// 0051d177  84c9                 test cl, cl
// 0051d179  75f9                 jne 0x51d174
// 0051d17b  2bc6                 sub eax, esi
// 0051d17d  8d7001               lea esi, [eax + 1]
// 0051d180  56                   push esi
// 0051d181  53                   push ebx
// 0051d182  e8a9d30000           call 0x52a530
// 0051d187  83c408               add esp, 8
// 0051d18a  8987ac000000         mov dword ptr [edi + 0xac], eax
// 0051d190  85c0                 test eax, eax
// 0051d192  7513                 jne 0x51d1a7
// 0051d194  6814928200           push 0x829214
// 0051d199  53                   push ebx
// 0051d19a  e8b1c80000           call 0x529a50
// 0051d19f  83c408               add esp, 8
// 0051d1a2  5e                   pop esi
// 0051d1a3  5d                   pop ebp
// 0051d1a4  5f                   pop edi
// 0051d1a5  5b                   pop ebx
// 0051d1a6  c3                   ret 
// 0051d1a7  56                   push esi
// 0051d1a8  55                   push ebp
// 0051d1a9  50                   push eax
// 0051d1aa  e831461800           call 0x6a17e0
// 0051d1af  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0051d1b3  8d148d04000000       lea edx, [ecx*4 + 4]
// 0051d1ba  52                   push edx
// 0051d1bb  53                   push ebx
// 0051d1bc  e86fd30000           call 0x52a530
// 0051d1c1  83c414               add esp, 0x14
// 0051d1c4  8987b0000000         mov dword ptr [edi + 0xb0], eax
// 0051d1ca  85c0                 test eax, eax
// 0051d1cc  7513                 jne 0x51d1e1
// 0051d1ce  68ec918200           push 0x8291ec
// 0051d1d3  53                   push ebx
// 0051d1d4  e877c80000           call 0x529a50
// 0051d1d9  83c408               add esp, 8
// 0051d1dc  5e                   pop esi
// 0051d1dd  5d                   pop ebp
// 0051d1de  5f                   pop edi
// 0051d1df  5b                   pop ebx
// 0051d1e0  c3                   ret 
// 0051d1e1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0051d1e5  33f6                 xor esi, esi
// 0051d1e7  c7048800000000       mov dword ptr [eax + ecx*4], 0
// 0051d1ee  85c9                 test ecx, ecx
// 0051d1f0  7e56                 jle 0x51d248
// 0051d1f2  8b442434             mov eax, dword ptr [esp + 0x34]
// 0051d1f6  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0051d1f9  8d5001               lea edx, [eax + 1]
// 0051d1fc  8d642400             lea esp, [esp]
// 0051d200  8a08                 mov cl, byte ptr [eax]
// 0051d202  40                   inc eax
// 0051d203  84c9                 test cl, cl
// 0051d205  75f9                 jne 0x51d200
// 0051d207  2bc2                 sub eax, edx
// 0051d209  8d6801               lea ebp, [eax + 1]
// 0051d20c  55                   push ebp
// 0051d20d  53                   push ebx
// 0051d20e  e81dd30000           call 0x52a530
// 0051d213  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 0051d219  8904b1               mov dword ptr [ecx + esi*4], eax
// 0051d21c  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 0051d222  8d04b2               lea eax, [edx + esi*4]
// 0051d225  83c408               add esp, 8
// 0051d228  833800               cmp dword ptr [eax], 0
// 0051d22b  7431                 je 0x51d25e
// 0051d22d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0051d231  8b14b1               mov edx, dword ptr [ecx + esi*4]
// 0051d234  8b00                 mov eax, dword ptr [eax]
// 0051d236  55                   push ebp
// 0051d237  52                   push edx
// 0051d238  50                   push eax
// 0051d239  e8a2451800           call 0x6a17e0
// 0051d23e  46                   inc esi
// 0051d23f  83c40c               add esp, 0xc
// 0051d242  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 0051d246  7caa                 jl 0x51d1f2
// 0051d248  814f0800040000       or dword ptr [edi + 8], 0x400
// 0051d24f  818fb800000080000000 or dword ptr [edi + 0xb8], 0x80
// 0051d259  5e                   pop esi
// 0051d25a  5d                   pop ebp
// 0051d25b  5f                   pop edi
// 0051d25c  5b                   pop ebx
// 0051d25d  c3                   ret 
// 0051d25e  68c4918200           push 0x8291c4
// 0051d263  53                   push ebx
// 0051d264  e8e7c70000           call 0x529a50
// 0051d269  83c408               add esp, 8
// 0051d26c  5e                   pop esi
// 0051d26d  5d                   pop ebp
// 0051d26e  5f                   pop edi
// 0051d26f  5b                   pop ebx
// 0051d270  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_pCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
