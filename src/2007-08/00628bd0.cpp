// roc 2007-08 00628bd0  unit: RBX::AssemblyStage  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628bd0
//
// 00628bd0  83ec10               sub esp, 0x10
// 00628bd3  833e05               cmp dword ptr [esi], 5
// 00628bd6  756c                 jne 0x628c44
// 00628bd8  83c9ff               or ecx, 0xffffffff
// 00628bdb  394e10               cmp dword ptr [esi + 0x10], ecx
// 00628bde  7564                 jne 0x628c44
// 00628be0  394e14               cmp dword ptr [esi + 0x14], ecx
// 00628be3  755f                 jne 0x628c44
// 00628be5  833805               cmp dword ptr [eax], 5
// 00628be8  755a                 jne 0x628c44
// 00628bea  394810               cmp dword ptr [eax + 0x10], ecx
// 00628bed  7555                 jne 0x628c44
// 00628bef  394814               cmp dword ptr [eax + 0x14], ecx
// 00628bf2  7550                 jne 0x628c44
// 00628bf4  dd4608               fld qword ptr [esi + 8]
// 00628bf7  dd542408             fst qword ptr [esp + 8]
// 00628bfb  dd4008               fld qword ptr [eax + 8]
// 00628bfe  8b442414             mov eax, dword ptr [esp + 0x14]
// 00628c02  83c0f4               add eax, -0xc
// 00628c05  dd1424               fst qword ptr [esp]
// 00628c08  83f808               cmp eax, 8
// 00628c0b  7773                 ja 0x628c80
// 00628c0d  ff2485948c6200       jmp dword ptr [eax*4 + 0x628c94]
// 00628c14  dec1                 faddp st(1)
// 00628c16  d9c0                 fld st(0)
// 00628c18  dde9                 fucomp st(1)
// 00628c1a  dfe0                 fnstsw ax
// 00628c1c  f6c444               test ah, 0x44
// 00628c1f  7a21                 jp 0x628c42
// 00628c21  dd5e08               fstp qword ptr [esi + 8]
// 00628c24  b801000000           mov eax, 1
// 00628c29  83c410               add esp, 0x10
// 00628c2c  c3                   ret 
// 00628c2d  dee9                 fsubp st(1)
// 00628c2f  ebe5                 jmp 0x628c16
// 00628c31  dec9                 fmulp st(1)
// 00628c33  ebe1                 jmp 0x628c16
// 00628c35  d9ee                 fldz 
// 00628c37  dde9                 fucomp st(1)
// 00628c39  dfe0                 fnstsw ax
// 00628c3b  f6c444               test ah, 0x44
// 00628c3e  7a0a                 jp 0x628c4a
// 00628c40  ddd8                 fstp st(0)
// 00628c42  ddd8                 fstp st(0)
// 00628c44  33c0                 xor eax, eax
// 00628c46  83c410               add esp, 0x10
// 00628c49  c3                   ret 
// 00628c4a  def9                 fdivp st(1)
// 00628c4c  ebc8                 jmp 0x628c16
// 00628c4e  d9ee                 fldz 
// 00628c50  dde9                 fucomp st(1)
// 00628c52  dfe0                 fnstsw ax
// 00628c54  f6c444               test ah, 0x44
// 00628c57  7be7                 jnp 0x628c40
// 00628c59  def9                 fdivp st(1)
// 00628c5b  83ec08               sub esp, 8
// 00628c5e  dd1c24               fstp qword ptr [esp]
// 00628c61  e8c2840000           call 0x631128
// 00628c66  dc4c2408             fmul qword ptr [esp + 8]
// 00628c6a  83c408               add esp, 8
// 00628c6d  dc6c2408             fsubr qword ptr [esp + 8]
// 00628c71  eba3                 jmp 0x628c16
// 00628c73  e826850000           call 0x63119e
// 00628c78  eb9c                 jmp 0x628c16
// 00628c7a  ddd8                 fstp st(0)
// 00628c7c  d9e0                 fchs 
// 00628c7e  eb96                 jmp 0x628c16
// 00628c80  ddd8                 fstp st(0)
// 00628c82  b801000000           mov eax, 1
// 00628c87  ddd8                 fstp st(0)
// 00628c89  d9ee                 fldz 
// 00628c8b  dd5e08               fstp qword ptr [esi + 8]
// 00628c8e  83c410               add esp, 0x10
// 00628c91  c3                   ret 
// 00628c92  8bff                 mov edi, edi
// 00628c94  148c                 adc al, 0x8c
// 00628c96  6200                 bound eax, qword ptr [eax]
// 00628c98  2d8c620031           sub eax, 0x3100628c
// 00628c9d  8c6200               mov word ptr [edx], fs
// 00628ca0  358c62004e           xor eax, 0x4e00628c
// 00628ca5  8c6200               mov word ptr [edx], fs
// 00628ca8  738c                 jae 0x628c36
// 00628caa  6200                 bound eax, qword ptr [eax]
// 00628cac  7a8c                 jp 0x628c3a
// 00628cae  6200                 bound eax, qword ptr [eax]
// 00628cb0  808c6200408c6200     or byte ptr [edx + 0x628c4000], 0
// library lua-5.1.4/lcode.c (function _constfolding)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
