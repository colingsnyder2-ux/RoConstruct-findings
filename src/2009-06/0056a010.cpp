// roc 2009-06 0056a010  unit: RBX::RbxG3D::RenderScene  size: 464 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056a010
//
// 0056a010  55                   push ebp
// 0056a011  8bec                 mov ebp, esp
// 0056a013  83e4f8               and esp, 0xfffffff8
// 0056a016  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0056a019  83ec64               sub esp, 0x64
// 0056a01c  53                   push ebx
// 0056a01d  56                   push esi
// 0056a01e  57                   push edi
// 0056a01f  8b7d08               mov edi, dword ptr [ebp + 8]
// 0056a022  3bf8                 cmp edi, eax
// 0056a024  0f84af010000         je 0x56a1d9
// 0056a02a  83c750               add edi, 0x50
// 0056a02d  897c2414             mov dword ptr [esp + 0x14], edi
// 0056a031  3bf8                 cmp edi, eax
// 0056a033  0f84a0010000         je 0x56a1d9
// 0056a039  8d5fb0               lea ebx, [edi - 0x50]
// 0056a03c  895c2410             mov dword ptr [esp + 0x10], ebx
// 0056a040  57                   push edi
// 0056a041  8d4c2424             lea ecx, [esp + 0x24]
// 0056a045  8bf7                 mov esi, edi
// 0056a047  e87452f3ff           call 0x49f2c0
// 0056a04c  8b4508               mov eax, dword ptr [ebp + 8]
// 0056a04f  50                   push eax
// 0056a050  8d4c2424             lea ecx, [esp + 0x24]
// 0056a054  51                   push ecx
// 0056a055  ff5510               call dword ptr [ebp + 0x10]
// 0056a058  83c408               add esp, 8
// 0056a05b  84c0                 test al, al
// 0056a05d  743e                 je 0x56a09d
// 0056a05f  8b7508               mov esi, dword ptr [ebp + 8]
// 0056a062  c644241800           mov byte ptr [esp + 0x18], 0
// 0056a067  8b542418             mov edx, dword ptr [esp + 0x18]
// 0056a06b  52                   push edx
// 0056a06c  c644242000           mov byte ptr [esp + 0x20], 0
// 0056a071  8b442420             mov eax, dword ptr [esp + 0x20]
// 0056a075  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056a079  50                   push eax
// 0056a07a  51                   push ecx
// 0056a07b  8d93a0000000         lea edx, [ebx + 0xa0]
// 0056a081  52                   push edx
// 0056a082  57                   push edi
// 0056a083  56                   push esi
// 0056a084  e817f1ffff           call 0x5691a0
// 0056a089  83c418               add esp, 0x18
// 0056a08c  8d442420             lea eax, [esp + 0x20]
// 0056a090  50                   push eax
// 0056a091  8bce                 mov ecx, esi
// 0056a093  e8783ff3ff           call 0x49e010
// 0056a098  e925010000           jmp 0x56a1c2
// 0056a09d  8d4c2420             lea ecx, [esp + 0x20]
// 0056a0a1  53                   push ebx
// 0056a0a2  51                   push ecx
// 0056a0a3  ff5510               call dword ptr [ebp + 0x10]
// 0056a0a6  83c408               add esp, 8
// 0056a0a9  84c0                 test al, al
// 0056a0ab  0f8497000000         je 0x56a148
// 0056a0b1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056a0b5  83c718               add edi, 0x18
// 0056a0b8  d903                 fld dword ptr [ebx]
// 0056a0ba  83ef50               sub edi, 0x50
// 0056a0bd  d91e                 fstp dword ptr [esi]
// 0056a0bf  d9473c               fld dword ptr [edi + 0x3c]
// 0056a0c2  d95e04               fstp dword ptr [esi + 4]
// 0056a0c5  d94740               fld dword ptr [edi + 0x40]
// 0056a0c8  d95e08               fstp dword ptr [esi + 8]
// 0056a0cb  d94744               fld dword ptr [edi + 0x44]
// 0056a0ce  d95e0c               fstp dword ptr [esi + 0xc]
// 0056a0d1  d94748               fld dword ptr [edi + 0x48]
// 0056a0d4  d95e10               fstp dword ptr [esi + 0x10]
// 0056a0d7  d9474c               fld dword ptr [edi + 0x4c]
// 0056a0da  d95e14               fstp dword ptr [esi + 0x14]
// 0056a0dd  d94750               fld dword ptr [edi + 0x50]
// 0056a0e0  d95e18               fstp dword ptr [esi + 0x18]
// 0056a0e3  dd4758               fld qword ptr [edi + 0x58]
// 0056a0e6  dd5e20               fstp qword ptr [esi + 0x20]
// 0056a0e9  dd4760               fld qword ptr [edi + 0x60]
// 0056a0ec  dd5e28               fstp qword ptr [esi + 0x28]
// 0056a0ef  dd4768               fld qword ptr [edi + 0x68]
// 0056a0f2  dd5e30               fstp qword ptr [esi + 0x30]
// 0056a0f5  dd4770               fld qword ptr [edi + 0x70]
// 0056a0f8  dd5e38               fstp qword ptr [esi + 0x38]
// 0056a0fb  d94778               fld dword ptr [edi + 0x78]
// 0056a0fe  d95e40               fstp dword ptr [esi + 0x40]
// 0056a101  d9477c               fld dword ptr [edi + 0x7c]
// 0056a104  d95e44               fstp dword ptr [esi + 0x44]
// 0056a107  d98780000000         fld dword ptr [edi + 0x80]
// 0056a10d  d95e48               fstp dword ptr [esi + 0x48]
// 0056a110  8a9784000000         mov dl, byte ptr [edi + 0x84]
// 0056a116  88564c               mov byte ptr [esi + 0x4c], dl
// 0056a119  8a8785000000         mov al, byte ptr [edi + 0x85]
// 0056a11f  88464d               mov byte ptr [esi + 0x4d], al
// 0056a122  8a8f86000000         mov cl, byte ptr [edi + 0x86]
// 0056a128  884e4e               mov byte ptr [esi + 0x4e], cl
// 0056a12b  8bf3                 mov esi, ebx
// 0056a12d  83eb50               sub ebx, 0x50
// 0056a130  8d542420             lea edx, [esp + 0x20]
// 0056a134  53                   push ebx
// 0056a135  52                   push edx
// 0056a136  ff5510               call dword ptr [ebp + 0x10]
// 0056a139  83c408               add esp, 8
// 0056a13c  84c0                 test al, al
// 0056a13e  0f8574ffffff         jne 0x56a0b8
// 0056a144  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0056a148  d9442420             fld dword ptr [esp + 0x20]
// 0056a14c  8a44246c             mov al, byte ptr [esp + 0x6c]
// 0056a150  d91e                 fstp dword ptr [esi]
// 0056a152  8a4c246d             mov cl, byte ptr [esp + 0x6d]
// 0056a156  d9442424             fld dword ptr [esp + 0x24]
// 0056a15a  8a54246e             mov dl, byte ptr [esp + 0x6e]
// 0056a15e  d95e04               fstp dword ptr [esi + 4]
// 0056a161  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0056a165  d9442428             fld dword ptr [esp + 0x28]
// 0056a169  d95e08               fstp dword ptr [esi + 8]
// 0056a16c  d944242c             fld dword ptr [esp + 0x2c]
// 0056a170  d95e0c               fstp dword ptr [esi + 0xc]
// 0056a173  d9442430             fld dword ptr [esp + 0x30]
// 0056a177  d95e10               fstp dword ptr [esi + 0x10]
// 0056a17a  d9442434             fld dword ptr [esp + 0x34]
// 0056a17e  d95e14               fstp dword ptr [esi + 0x14]
// 0056a181  d9442438             fld dword ptr [esp + 0x38]
// 0056a185  d95e18               fstp dword ptr [esi + 0x18]
// 0056a188  dd442440             fld qword ptr [esp + 0x40]
// 0056a18c  dd5e20               fstp qword ptr [esi + 0x20]
// 0056a18f  dd442448             fld qword ptr [esp + 0x48]
// 0056a193  dd5e28               fstp qword ptr [esi + 0x28]
// 0056a196  dd442450             fld qword ptr [esp + 0x50]
// 0056a19a  dd5e30               fstp qword ptr [esi + 0x30]
// 0056a19d  dd442458             fld qword ptr [esp + 0x58]
// 0056a1a1  dd5e38               fstp qword ptr [esi + 0x38]
// 0056a1a4  d9442460             fld dword ptr [esp + 0x60]
// 0056a1a8  d95e40               fstp dword ptr [esi + 0x40]
// 0056a1ab  d9442464             fld dword ptr [esp + 0x64]
// 0056a1af  d95e44               fstp dword ptr [esi + 0x44]
// 0056a1b2  d9442468             fld dword ptr [esp + 0x68]
// 0056a1b6  d95e48               fstp dword ptr [esi + 0x48]
// 0056a1b9  88464c               mov byte ptr [esi + 0x4c], al
// 0056a1bc  884e4d               mov byte ptr [esi + 0x4d], cl
// 0056a1bf  88564e               mov byte ptr [esi + 0x4e], dl
// 0056a1c2  83c750               add edi, 0x50
// 0056a1c5  83c350               add ebx, 0x50
// 0056a1c8  897c2414             mov dword ptr [esp + 0x14], edi
// 0056a1cc  895c2410             mov dword ptr [esp + 0x10], ebx
// 0056a1d0  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 0056a1d3  0f8567feffff         jne 0x56a040
// 0056a1d9  5f                   pop edi
// 0056a1da  5e                   pop esi
// 0056a1db  5b                   pop ebx
// 0056a1dc  8be5                 mov esp, ebp
// 0056a1de  5d                   pop ebp
// 0056a1df  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Insertion_sort1@PAVGLight@G3D@@P6A_NABV12@0@ZV12@@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@Z0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
