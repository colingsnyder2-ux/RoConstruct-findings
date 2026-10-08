// roc 2009-12 004ca210  unit: G3D::VARArea  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ca210
//
// 004ca210  55                   push ebp
// 004ca211  33ed                 xor ebp, ebp
// 004ca213  392d34d0b700         cmp dword ptr [0xb7d034], ebp
// 004ca219  0f8eb6000000         jle 0x4ca2d5
// 004ca21f  53                   push ebx
// 004ca220  56                   push esi
// 004ca221  57                   push edi
// 004ca222  a130d0b700           mov eax, dword ptr [0xb7d030]
// 004ca227  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 004ca22a  8b4804               mov ecx, dword ptr [eax + 4]
// 004ca22d  83c004               add eax, 4
// 004ca230  83f901               cmp ecx, 1
// 004ca233  0f858c000000         jne 0x4ca2c5
// 004ca239  a130d0b700           mov eax, dword ptr [0xb7d030]
// 004ca23e  8b1534d0b700         mov edx, dword ptr [0xb7d034]
// 004ca244  8b5c90fc             mov ebx, dword ptr [eax + edx*4 - 4]
// 004ca248  8d3ca8               lea edi, [eax + ebp*4]
// 004ca24b  8b07                 mov eax, dword ptr [edi]
// 004ca24d  3bd8                 cmp ebx, eax
// 004ca24f  745e                 je 0x4ca2af
// 004ca251  85c0                 test eax, eax
// 004ca253  744a                 je 0x4ca29f
// 004ca255  83c004               add eax, 4
// 004ca258  50                   push eax
// 004ca259  ff1508b29800         call dword ptr [0x98b208]
// 004ca25f  85c0                 test eax, eax
// 004ca261  7536                 jne 0x4ca299
// 004ca263  8b07                 mov eax, dword ptr [edi]
// 004ca265  8b7008               mov esi, dword ptr [eax + 8]
// 004ca268  85f6                 test esi, esi
// 004ca26a  741f                 je 0x4ca28b
// 004ca26c  8d642400             lea esp, [esp]
// 004ca270  8b0e                 mov ecx, dword ptr [esi]
// 004ca272  8b11                 mov edx, dword ptr [ecx]
// 004ca274  8b4204               mov eax, dword ptr [edx + 4]
// 004ca277  ffd0                 call eax
// 004ca279  8bc6                 mov eax, esi
// 004ca27b  8b7604               mov esi, dword ptr [esi + 4]
// 004ca27e  50                   push eax
// 004ca27f  e8d6953200           call 0x7f385a
// 004ca284  83c404               add esp, 4
// 004ca287  85f6                 test esi, esi
// 004ca289  75e5                 jne 0x4ca270
// 004ca28b  8b0f                 mov ecx, dword ptr [edi]
// 004ca28d  85c9                 test ecx, ecx
// 004ca28f  7408                 je 0x4ca299
// 004ca291  8b11                 mov edx, dword ptr [ecx]
// 004ca293  8b02                 mov eax, dword ptr [edx]
// 004ca295  6a01                 push 1
// 004ca297  ffd0                 call eax
// 004ca299  c70700000000         mov dword ptr [edi], 0
// 004ca29f  85db                 test ebx, ebx
// 004ca2a1  740c                 je 0x4ca2af
// 004ca2a3  891f                 mov dword ptr [edi], ebx
// 004ca2a5  83c304               add ebx, 4
// 004ca2a8  53                   push ebx
// 004ca2a9  ff150cb29800         call dword ptr [0x98b20c]
// 004ca2af  8b0d34d0b700         mov ecx, dword ptr [0xb7d034]
// 004ca2b5  49                   dec ecx
// 004ca2b6  6a01                 push 1
// 004ca2b8  51                   push ecx
// 004ca2b9  b930d0b700           mov ecx, 0xb7d030
// 004ca2be  e89dfcffff           call 0x4c9f60
// 004ca2c3  eb01                 jmp 0x4ca2c6
// 004ca2c5  45                   inc ebp
// 004ca2c6  3b2d34d0b700         cmp ebp, dword ptr [0xb7d034]
// 004ca2cc  0f8c50ffffff         jl 0x4ca222
// 004ca2d2  5f                   pop edi
// 004ca2d3  5e                   pop esi
// 004ca2d4  5b                   pop ebx
// 004ca2d5  5d                   pop ebp
// 004ca2d6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?cleanCache@VARArea@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
