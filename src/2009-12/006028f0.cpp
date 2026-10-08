// roc 2009-12 006028f0  unit: seg_00600000  size: 401 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006028f0
//
// 006028f0  53                   push ebx
// 006028f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006028f5  85db                 test ebx, ebx
// 006028f7  0f846f010000         je 0x602a6c
// 006028fd  57                   push edi
// 006028fe  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00602902  85ff                 test edi, edi
// 00602904  0f8461010000         je 0x602a6b
// 0060290a  55                   push ebp
// 0060290b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0060290f  8bc5                 mov eax, ebp
// 00602911  8d5001               lea edx, [eax + 1]
// 00602914  8a08                 mov cl, byte ptr [eax]
// 00602916  40                   inc eax
// 00602917  84c9                 test cl, cl
// 00602919  75f9                 jne 0x602914
// 0060291b  56                   push esi
// 0060291c  2bc2                 sub eax, edx
// 0060291e  8d7001               lea esi, [eax + 1]
// 00602921  56                   push esi
// 00602922  53                   push ebx
// 00602923  e8e8e30000           call 0x610d10
// 00602928  83c408               add esp, 8
// 0060292b  8987a0000000         mov dword ptr [edi + 0xa0], eax
// 00602931  85c0                 test eax, eax
// 00602933  7513                 jne 0x602948
// 00602935  680c369c00           push 0x9c360c
// 0060293a  53                   push ebx
// 0060293b  e800d90000           call 0x610240
// 00602940  83c408               add esp, 8
// 00602943  5e                   pop esi
// 00602944  5d                   pop ebp
// 00602945  5f                   pop edi
// 00602946  5b                   pop ebx
// 00602947  c3                   ret 
// 00602948  56                   push esi
// 00602949  55                   push ebp
// 0060294a  50                   push eax
// 0060294b  e896231f00           call 0x7f4ce6
// 00602950  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00602954  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00602958  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0060295c  8a542434             mov dl, byte ptr [esp + 0x34]
// 00602960  8987a4000000         mov dword ptr [edi + 0xa4], eax
// 00602966  8a442438             mov al, byte ptr [esp + 0x38]
// 0060296a  8887b5000000         mov byte ptr [edi + 0xb5], al
// 00602970  8bc5                 mov eax, ebp
// 00602972  83c40c               add esp, 0xc
// 00602975  898fa8000000         mov dword ptr [edi + 0xa8], ecx
// 0060297b  8897b4000000         mov byte ptr [edi + 0xb4], dl
// 00602981  8d7001               lea esi, [eax + 1]
// 00602984  8a08                 mov cl, byte ptr [eax]
// 00602986  40                   inc eax
// 00602987  84c9                 test cl, cl
// 00602989  75f9                 jne 0x602984
// 0060298b  2bc6                 sub eax, esi
// 0060298d  8d7001               lea esi, [eax + 1]
// 00602990  56                   push esi
// 00602991  53                   push ebx
// 00602992  e879e30000           call 0x610d10
// 00602997  83c408               add esp, 8
// 0060299a  8987ac000000         mov dword ptr [edi + 0xac], eax
// 006029a0  85c0                 test eax, eax
// 006029a2  7513                 jne 0x6029b7
// 006029a4  68e8359c00           push 0x9c35e8
// 006029a9  53                   push ebx
// 006029aa  e891d80000           call 0x610240
// 006029af  83c408               add esp, 8
// 006029b2  5e                   pop esi
// 006029b3  5d                   pop ebp
// 006029b4  5f                   pop edi
// 006029b5  5b                   pop ebx
// 006029b6  c3                   ret 
// 006029b7  56                   push esi
// 006029b8  55                   push ebp
// 006029b9  50                   push eax
// 006029ba  e827231f00           call 0x7f4ce6
// 006029bf  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006029c3  8d148d04000000       lea edx, [ecx*4 + 4]
// 006029ca  52                   push edx
// 006029cb  53                   push ebx
// 006029cc  e83fe30000           call 0x610d10
// 006029d1  83c414               add esp, 0x14
// 006029d4  8987b0000000         mov dword ptr [edi + 0xb0], eax
// 006029da  85c0                 test eax, eax
// 006029dc  7513                 jne 0x6029f1
// 006029de  68c0359c00           push 0x9c35c0
// 006029e3  53                   push ebx
// 006029e4  e857d80000           call 0x610240
// 006029e9  83c408               add esp, 8
// 006029ec  5e                   pop esi
// 006029ed  5d                   pop ebp
// 006029ee  5f                   pop edi
// 006029ef  5b                   pop ebx
// 006029f0  c3                   ret 
// 006029f1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006029f5  33f6                 xor esi, esi
// 006029f7  c7048800000000       mov dword ptr [eax + ecx*4], 0
// 006029fe  85c9                 test ecx, ecx
// 00602a00  7e56                 jle 0x602a58
// 00602a02  8b442434             mov eax, dword ptr [esp + 0x34]
// 00602a06  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00602a09  8d5001               lea edx, [eax + 1]
// 00602a0c  8d642400             lea esp, [esp]
// 00602a10  8a08                 mov cl, byte ptr [eax]
// 00602a12  40                   inc eax
// 00602a13  84c9                 test cl, cl
// 00602a15  75f9                 jne 0x602a10
// 00602a17  2bc2                 sub eax, edx
// 00602a19  8d6801               lea ebp, [eax + 1]
// 00602a1c  55                   push ebp
// 00602a1d  53                   push ebx
// 00602a1e  e8ede20000           call 0x610d10
// 00602a23  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 00602a29  8904b1               mov dword ptr [ecx + esi*4], eax
// 00602a2c  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 00602a32  8d04b2               lea eax, [edx + esi*4]
// 00602a35  83c408               add esp, 8
// 00602a38  833800               cmp dword ptr [eax], 0
// 00602a3b  7431                 je 0x602a6e
// 00602a3d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00602a41  8b14b1               mov edx, dword ptr [ecx + esi*4]
// 00602a44  8b00                 mov eax, dword ptr [eax]
// 00602a46  55                   push ebp
// 00602a47  52                   push edx
// 00602a48  50                   push eax
// 00602a49  e898221f00           call 0x7f4ce6
// 00602a4e  46                   inc esi
// 00602a4f  83c40c               add esp, 0xc
// 00602a52  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 00602a56  7caa                 jl 0x602a02
// 00602a58  814f0800040000       or dword ptr [edi + 8], 0x400
// 00602a5f  818fb800000080000000 or dword ptr [edi + 0xb8], 0x80
// 00602a69  5e                   pop esi
// 00602a6a  5d                   pop ebp
// 00602a6b  5f                   pop edi
// 00602a6c  5b                   pop ebx
// 00602a6d  c3                   ret 
// 00602a6e  6898359c00           push 0x9c3598
// 00602a73  53                   push ebx
// 00602a74  e8c7d70000           call 0x610240
// 00602a79  83c408               add esp, 8
// 00602a7c  5e                   pop esi
// 00602a7d  5d                   pop ebp
// 00602a7e  5f                   pop edi
// 00602a7f  5b                   pop ebx
// 00602a80  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_pCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
