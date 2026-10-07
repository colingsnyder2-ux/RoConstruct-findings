// roc 2009-06 00580b40  unit: seg_00580000  size: 401 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00580b40
//
// 00580b40  53                   push ebx
// 00580b41  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00580b45  85db                 test ebx, ebx
// 00580b47  0f846f010000         je 0x580cbc
// 00580b4d  57                   push edi
// 00580b4e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00580b52  85ff                 test edi, edi
// 00580b54  0f8461010000         je 0x580cbb
// 00580b5a  55                   push ebp
// 00580b5b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00580b5f  8bc5                 mov eax, ebp
// 00580b61  8d5001               lea edx, [eax + 1]
// 00580b64  8a08                 mov cl, byte ptr [eax]
// 00580b66  40                   inc eax
// 00580b67  84c9                 test cl, cl
// 00580b69  75f9                 jne 0x580b64
// 00580b6b  56                   push esi
// 00580b6c  2bc2                 sub eax, edx
// 00580b6e  8d7001               lea esi, [eax + 1]
// 00580b71  56                   push esi
// 00580b72  53                   push ebx
// 00580b73  e868e10000           call 0x58ece0
// 00580b78  83c408               add esp, 8
// 00580b7b  8987a0000000         mov dword ptr [edi + 0xa0], eax
// 00580b81  85c0                 test eax, eax
// 00580b83  7513                 jne 0x580b98
// 00580b85  686cc78c00           push 0x8cc76c
// 00580b8a  53                   push ebx
// 00580b8b  e880d60000           call 0x58e210
// 00580b90  83c408               add esp, 8
// 00580b93  5e                   pop esi
// 00580b94  5d                   pop ebp
// 00580b95  5f                   pop edi
// 00580b96  5b                   pop ebx
// 00580b97  c3                   ret 
// 00580b98  56                   push esi
// 00580b99  55                   push ebp
// 00580b9a  50                   push eax
// 00580b9b  e816931900           call 0x719eb6
// 00580ba0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00580ba4  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00580ba8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00580bac  8a542434             mov dl, byte ptr [esp + 0x34]
// 00580bb0  8987a4000000         mov dword ptr [edi + 0xa4], eax
// 00580bb6  8a442438             mov al, byte ptr [esp + 0x38]
// 00580bba  8887b5000000         mov byte ptr [edi + 0xb5], al
// 00580bc0  8bc5                 mov eax, ebp
// 00580bc2  83c40c               add esp, 0xc
// 00580bc5  898fa8000000         mov dword ptr [edi + 0xa8], ecx
// 00580bcb  8897b4000000         mov byte ptr [edi + 0xb4], dl
// 00580bd1  8d7001               lea esi, [eax + 1]
// 00580bd4  8a08                 mov cl, byte ptr [eax]
// 00580bd6  40                   inc eax
// 00580bd7  84c9                 test cl, cl
// 00580bd9  75f9                 jne 0x580bd4
// 00580bdb  2bc6                 sub eax, esi
// 00580bdd  8d7001               lea esi, [eax + 1]
// 00580be0  56                   push esi
// 00580be1  53                   push ebx
// 00580be2  e8f9e00000           call 0x58ece0
// 00580be7  83c408               add esp, 8
// 00580bea  8987ac000000         mov dword ptr [edi + 0xac], eax
// 00580bf0  85c0                 test eax, eax
// 00580bf2  7513                 jne 0x580c07
// 00580bf4  6848c78c00           push 0x8cc748
// 00580bf9  53                   push ebx
// 00580bfa  e811d60000           call 0x58e210
// 00580bff  83c408               add esp, 8
// 00580c02  5e                   pop esi
// 00580c03  5d                   pop ebp
// 00580c04  5f                   pop edi
// 00580c05  5b                   pop ebx
// 00580c06  c3                   ret 
// 00580c07  56                   push esi
// 00580c08  55                   push ebp
// 00580c09  50                   push eax
// 00580c0a  e8a7921900           call 0x719eb6
// 00580c0f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00580c13  8d148d04000000       lea edx, [ecx*4 + 4]
// 00580c1a  52                   push edx
// 00580c1b  53                   push ebx
// 00580c1c  e8bfe00000           call 0x58ece0
// 00580c21  83c414               add esp, 0x14
// 00580c24  8987b0000000         mov dword ptr [edi + 0xb0], eax
// 00580c2a  85c0                 test eax, eax
// 00580c2c  7513                 jne 0x580c41
// 00580c2e  6820c78c00           push 0x8cc720
// 00580c33  53                   push ebx
// 00580c34  e8d7d50000           call 0x58e210
// 00580c39  83c408               add esp, 8
// 00580c3c  5e                   pop esi
// 00580c3d  5d                   pop ebp
// 00580c3e  5f                   pop edi
// 00580c3f  5b                   pop ebx
// 00580c40  c3                   ret 
// 00580c41  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00580c45  33f6                 xor esi, esi
// 00580c47  c7048800000000       mov dword ptr [eax + ecx*4], 0
// 00580c4e  85c9                 test ecx, ecx
// 00580c50  7e56                 jle 0x580ca8
// 00580c52  8b442434             mov eax, dword ptr [esp + 0x34]
// 00580c56  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00580c59  8d5001               lea edx, [eax + 1]
// 00580c5c  8d642400             lea esp, [esp]
// 00580c60  8a08                 mov cl, byte ptr [eax]
// 00580c62  40                   inc eax
// 00580c63  84c9                 test cl, cl
// 00580c65  75f9                 jne 0x580c60
// 00580c67  2bc2                 sub eax, edx
// 00580c69  8d6801               lea ebp, [eax + 1]
// 00580c6c  55                   push ebp
// 00580c6d  53                   push ebx
// 00580c6e  e86de00000           call 0x58ece0
// 00580c73  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 00580c79  8904b1               mov dword ptr [ecx + esi*4], eax
// 00580c7c  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 00580c82  8d04b2               lea eax, [edx + esi*4]
// 00580c85  83c408               add esp, 8
// 00580c88  833800               cmp dword ptr [eax], 0
// 00580c8b  7431                 je 0x580cbe
// 00580c8d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00580c91  8b14b1               mov edx, dword ptr [ecx + esi*4]
// 00580c94  8b00                 mov eax, dword ptr [eax]
// 00580c96  55                   push ebp
// 00580c97  52                   push edx
// 00580c98  50                   push eax
// 00580c99  e818921900           call 0x719eb6
// 00580c9e  46                   inc esi
// 00580c9f  83c40c               add esp, 0xc
// 00580ca2  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 00580ca6  7caa                 jl 0x580c52
// 00580ca8  814f0800040000       or dword ptr [edi + 8], 0x400
// 00580caf  818fb800000080000000 or dword ptr [edi + 0xb8], 0x80
// 00580cb9  5e                   pop esi
// 00580cba  5d                   pop ebp
// 00580cbb  5f                   pop edi
// 00580cbc  5b                   pop ebx
// 00580cbd  c3                   ret 
// 00580cbe  68f8c68c00           push 0x8cc6f8
// 00580cc3  53                   push ebx
// 00580cc4  e847d50000           call 0x58e210
// 00580cc9  83c408               add esp, 8
// 00580ccc  5e                   pop esi
// 00580ccd  5d                   pop ebp
// 00580cce  5f                   pop edi
// 00580ccf  5b                   pop ebx
// 00580cd0  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_pCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
