// from server: 100% by auto
// roc 2008-06 0051d490  unit: seg_00510000  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051d490
//
// 0051d490  57                   push edi
// 0051d491  8b7c2408             mov edi, dword ptr [esp + 8]
// 0051d495  85ff                 test edi, edi
// 0051d497  0f84ea000000         je 0x51d587
// 0051d49d  56                   push esi
// 0051d49e  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051d4a2  85f6                 test esi, esi
// 0051d4a4  0f84dc000000         je 0x51d586
// 0051d4aa  53                   push ebx
// 0051d4ab  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0051d4af  85db                 test ebx, ebx
// 0051d4b1  0f84ce000000         je 0x51d585
// 0051d4b7  837c242000           cmp dword ptr [esp + 0x20], 0
// 0051d4bc  0f84c3000000         je 0x51d585
// 0051d4c2  8bc3                 mov eax, ebx
// 0051d4c4  8d5001               lea edx, [eax + 1]
// 0051d4c7  8a08                 mov cl, byte ptr [eax]
// 0051d4c9  40                   inc eax
// 0051d4ca  84c9                 test cl, cl
// 0051d4cc  75f9                 jne 0x51d4c7
// 0051d4ce  2bc2                 sub eax, edx
// 0051d4d0  55                   push ebp
// 0051d4d1  40                   inc eax
// 0051d4d2  50                   push eax
// 0051d4d3  57                   push edi
// 0051d4d4  e857d00000           call 0x52a530
// 0051d4d9  8be8                 mov ebp, eax
// 0051d4db  83c408               add esp, 8
// 0051d4de  85ed                 test ebp, ebp
// 0051d4e0  7513                 jne 0x51d4f5
// 0051d4e2  68d0928200           push 0x8292d0
// 0051d4e7  57                   push edi
// 0051d4e8  e863c50000           call 0x529a50
// 0051d4ed  83c408               add esp, 8
// 0051d4f0  5d                   pop ebp
// 0051d4f1  5b                   pop ebx
// 0051d4f2  5e                   pop esi
// 0051d4f3  5f                   pop edi
// 0051d4f4  c3                   ret 
// 0051d4f5  8bd5                 mov edx, ebp
// 0051d4f7  8bc3                 mov eax, ebx
// 0051d4f9  2bd3                 sub edx, ebx
// 0051d4fb  eb03                 jmp 0x51d500
// 0051d4fd  8d4900               lea ecx, [ecx]
// 0051d500  8a08                 mov cl, byte ptr [eax]
// 0051d502  880c02               mov byte ptr [edx + eax], cl
// 0051d505  40                   inc eax
// 0051d506  84c9                 test cl, cl
// 0051d508  75f6                 jne 0x51d500
// 0051d50a  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0051d50e  53                   push ebx
// 0051d50f  57                   push edi
// 0051d510  e81bd00000           call 0x52a530
// 0051d515  8bf8                 mov edi, eax
// 0051d517  83c408               add esp, 8
// 0051d51a  85ff                 test edi, edi
// 0051d51c  751e                 jne 0x51d53c
// 0051d51e  8b742414             mov esi, dword ptr [esp + 0x14]
// 0051d522  55                   push ebp
// 0051d523  56                   push esi
// 0051d524  e8d7cf0000           call 0x52a500
// 0051d529  68a0928200           push 0x8292a0
// 0051d52e  56                   push esi
// 0051d52f  e81cc50000           call 0x529a50
// 0051d534  83c410               add esp, 0x10
// 0051d537  5d                   pop ebp
// 0051d538  5b                   pop ebx
// 0051d539  5e                   pop esi
// 0051d53a  5f                   pop edi
// 0051d53b  c3                   ret 
// 0051d53c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051d540  53                   push ebx
// 0051d541  50                   push eax
// 0051d542  57                   push edi
// 0051d543  e898421800           call 0x6a17e0
// 0051d548  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0051d54c  6a00                 push 0
// 0051d54e  6a10                 push 0x10
// 0051d550  56                   push esi
// 0051d551  51                   push ecx
// 0051d552  e879080000           call 0x51ddd0
// 0051d557  8a54243c             mov dl, byte ptr [esp + 0x3c]
// 0051d55b  838eb800000010       or dword ptr [esi + 0xb8], 0x10
// 0051d562  83c41c               add esp, 0x1c
// 0051d565  814e0800100000       or dword ptr [esi + 8], 0x1000
// 0051d56c  89aec4000000         mov dword ptr [esi + 0xc4], ebp
// 0051d572  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0051d578  89bec8000000         mov dword ptr [esi + 0xc8], edi
// 0051d57e  8896d0000000         mov byte ptr [esi + 0xd0], dl
// 0051d584  5d                   pop ebp
// 0051d585  5b                   pop ebx
// 0051d586  5e                   pop esi
// 0051d587  5f                   pop edi
// 0051d588  c3                   ret 
// library libpng-1.2.6/pngset.c (function _png_set_iCCP)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngset.c
