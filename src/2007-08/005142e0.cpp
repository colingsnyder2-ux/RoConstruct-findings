// from server: 100% by auto
// roc 2007-08 005142e0  unit: G3D::_internal::DialogTemplate  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005142e0
//
// 005142e0  53                   push ebx
// 005142e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005142e5  85db                 test ebx, ebx
// 005142e7  0f8473010000         je 0x514460
// 005142ed  57                   push edi
// 005142ee  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005142f2  85ff                 test edi, edi
// 005142f4  0f8465010000         je 0x51445f
// 005142fa  55                   push ebp
// 005142fb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005142ff  8bc5                 mov eax, ebp
// 00514301  8d5001               lea edx, [eax + 1]
// 00514304  8a08                 mov cl, byte ptr [eax]
// 00514306  83c001               add eax, 1
// 00514309  84c9                 test cl, cl
// 0051430b  75f7                 jne 0x514304
// 0051430d  56                   push esi
// 0051430e  2bc2                 sub eax, edx
// 00514310  8d7001               lea esi, [eax + 1]
// 00514313  56                   push esi
// 00514314  53                   push ebx
// 00514315  e8e6a90000           call 0x51ed00
// 0051431a  83c408               add esp, 8
// 0051431d  85c0                 test eax, eax
// 0051431f  8987a0000000         mov dword ptr [edi + 0xa0], eax
// 00514325  7513                 jne 0x51433a
// 00514327  6808147a00           push 0x7a1408
// 0051432c  53                   push ebx
// 0051432d  e85ea60000           call 0x51e990
// 00514332  83c408               add esp, 8
// 00514335  5e                   pop esi
// 00514336  5d                   pop ebp
// 00514337  5f                   pop edi
// 00514338  5b                   pop ebx
// 00514339  c3                   ret 
// 0051433a  56                   push esi
// 0051433b  55                   push ebp
// 0051433c  50                   push eax
// 0051433d  e80aca1100           call 0x630d4c
// 00514342  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00514346  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0051434a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0051434e  8a542434             mov dl, byte ptr [esp + 0x34]
// 00514352  8987a4000000         mov dword ptr [edi + 0xa4], eax
// 00514358  8a442438             mov al, byte ptr [esp + 0x38]
// 0051435c  8887b5000000         mov byte ptr [edi + 0xb5], al
// 00514362  8bc5                 mov eax, ebp
// 00514364  83c40c               add esp, 0xc
// 00514367  898fa8000000         mov dword ptr [edi + 0xa8], ecx
// 0051436d  8897b4000000         mov byte ptr [edi + 0xb4], dl
// 00514373  8d7001               lea esi, [eax + 1]
// 00514376  8a08                 mov cl, byte ptr [eax]
// 00514378  83c001               add eax, 1
// 0051437b  84c9                 test cl, cl
// 0051437d  75f7                 jne 0x514376
// 0051437f  2bc6                 sub eax, esi
// 00514381  8d7001               lea esi, [eax + 1]
// 00514384  56                   push esi
// 00514385  53                   push ebx
// 00514386  e875a90000           call 0x51ed00
// 0051438b  83c408               add esp, 8
// 0051438e  85c0                 test eax, eax
// 00514390  8987ac000000         mov dword ptr [edi + 0xac], eax
// 00514396  7513                 jne 0x5143ab
// 00514398  68e4137a00           push 0x7a13e4
// 0051439d  53                   push ebx
// 0051439e  e8eda50000           call 0x51e990
// 005143a3  83c408               add esp, 8
// 005143a6  5e                   pop esi
// 005143a7  5d                   pop ebp
// 005143a8  5f                   pop edi
// 005143a9  5b                   pop ebx
// 005143aa  c3                   ret 
// 005143ab  56                   push esi
// 005143ac  55                   push ebp
// 005143ad  50                   push eax
// 005143ae  e899c91100           call 0x630d4c
// 005143b3  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005143b7  8d148d04000000       lea edx, [ecx*4 + 4]
// 005143be  52                   push edx
// 005143bf  53                   push ebx
// 005143c0  e83ba90000           call 0x51ed00
// 005143c5  83c414               add esp, 0x14
// 005143c8  85c0                 test eax, eax
// 005143ca  8987b0000000         mov dword ptr [edi + 0xb0], eax
// 005143d0  7513                 jne 0x5143e5
// 005143d2  68bc137a00           push 0x7a13bc
// 005143d7  53                   push ebx
// 005143d8  e8b3a50000           call 0x51e990
// 005143dd  83c408               add esp, 8
// 005143e0  5e                   pop esi
// 005143e1  5d                   pop ebp
// 005143e2  5f                   pop edi
// 005143e3  5b                   pop ebx
// 005143e4  c3                   ret 
// 005143e5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005143e9  33f6                 xor esi, esi
// 005143eb  85c9                 test ecx, ecx
// 005143ed  c7048800000000       mov dword ptr [eax + ecx*4], 0
// 005143f4  7e56                 jle 0x51444c
// 005143f6  8b442434             mov eax, dword ptr [esp + 0x34]
// 005143fa  8b04b0               mov eax, dword ptr [eax + esi*4]
// 005143fd  8d5001               lea edx, [eax + 1]
// 00514400  8a08                 mov cl, byte ptr [eax]
// 00514402  83c001               add eax, 1
// 00514405  84c9                 test cl, cl
// 00514407  75f7                 jne 0x514400
// 00514409  2bc2                 sub eax, edx
// 0051440b  8d6801               lea ebp, [eax + 1]
// 0051440e  55                   push ebp
// 0051440f  53                   push ebx
// 00514410  e8eba80000           call 0x51ed00
// 00514415  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 0051441b  8904b1               mov dword ptr [ecx + esi*4], eax
// 0051441e  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 00514424  8d04b2               lea eax, [edx + esi*4]
// 00514427  83c408               add esp, 8
// 0051442a  833800               cmp dword ptr [eax], 0
// 0051442d  7433                 je 0x514462
// 0051442f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00514433  8b14b1               mov edx, dword ptr [ecx + esi*4]
// 00514436  8b00                 mov eax, dword ptr [eax]
// 00514438  55                   push ebp
// 00514439  52                   push edx
// 0051443a  50                   push eax
// 0051443b  e80cc91100           call 0x630d4c
// 00514440  83c601               add esi, 1
// 00514443  83c40c               add esp, 0xc
// 00514446  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 0051444a  7caa                 jl 0x5143f6
// 0051444c  814f0800040000       or dword ptr [edi + 8], 0x400
// 00514453  818fb800000080000000 or dword ptr [edi + 0xb8], 0x80
// 0051445d  5e                   pop esi
// 0051445e  5d                   pop ebp
// 0051445f  5f                   pop edi
// 00514460  5b                   pop ebx
// 00514461  c3                   ret 
// 00514462  6894137a00           push 0x7a1394
// 00514467  53                   push ebx
// 00514468  e823a50000           call 0x51e990
// 0051446d  83c408               add esp, 8
// 00514470  5e                   pop esi
// 00514471  5d                   pop ebp
// 00514472  5f                   pop edi
// 00514473  5b                   pop ebx
// 00514474  c3                   ret 
// library libpng-1.2.5/pngset.c (function _png_set_pCAL)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngset.c
