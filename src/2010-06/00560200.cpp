// from server: 100% by auto
// roc 2010-06 00560200  unit: G3D::_internal::DialogTemplate  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560200
//
// 00560200  53                   push ebx
// 00560201  55                   push ebp
// 00560202  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00560206  56                   push esi
// 00560207  57                   push edi
// 00560208  8b3d88a89e00         mov edi, dword ptr [0x9ea888]
// 0056020e  68100da200           push 0xa20d10
// 00560213  8bd8                 mov ebx, eax
// 00560215  ffd7                 call edi
// 00560217  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056021b  50                   push eax
// 0056021c  68d8c9a100           push 0xa1c9d8
// 00560221  ffd7                 call edi
// 00560223  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00560227  51                   push ecx
// 00560228  68e444a000           push 0xa044e4
// 0056022d  ffd7                 call edi
// 0056022f  83c414               add esp, 0x14
// 00560232  83fb0a               cmp ebx, 0xa
// 00560235  7e05                 jle 0x56023c
// 00560237  bb0a000000           mov ebx, 0xa
// 0056023c  83ceff               or esi, 0xffffffff
// 0056023f  83fb01               cmp ebx, 1
// 00560242  7e7f                 jle 0x5602c3
// 00560244  681ce7a000           push 0xa0e71c
// 00560249  ffd7                 call edi
// 0056024b  68f40ca200           push 0xa20cf4
// 00560250  ffd7                 call edi
// 00560252  83c408               add esp, 8
// 00560255  85f6                 test esi, esi
// 00560257  7c08                 jl 0x560261
// 00560259  3bf3                 cmp esi, ebx
// 0056025b  0f8c86000000         jl 0x5602e7
// 00560261  681ce7a000           push 0xa0e71c
// 00560266  ffd7                 call edi
// 00560268  83c404               add esp, 4
// 0056026b  33f6                 xor esi, esi
// 0056026d  85db                 test ebx, ebx
// 0056026f  7e27                 jle 0x560298
// 00560271  83fb03               cmp ebx, 3
// 00560274  7f0d                 jg 0x560283
// 00560276  8b54b500             mov edx, dword ptr [ebp + esi*4]
// 0056027a  52                   push edx
// 0056027b  56                   push esi
// 0056027c  68e80ca200           push 0xa20ce8
// 00560281  eb0b                 jmp 0x56028e
// 00560283  8b44b500             mov eax, dword ptr [ebp + esi*4]
// 00560287  50                   push eax
// 00560288  56                   push esi
// 00560289  68dc0ca200           push 0xa20cdc
// 0056028e  ffd7                 call edi
// 00560290  46                   inc esi
// 00560291  83c40c               add esp, 0xc
// 00560294  3bf3                 cmp esi, ebx
// 00560296  7cd9                 jl 0x560271
// 00560298  68d80ca200           push 0xa20cd8
// 0056029d  ffd7                 call edi
// 0056029f  83c404               add esp, 4
// 005602a2  ff15bca79e00         call dword ptr [0x9ea7bc]
// 005602a8  8bf0                 mov esi, eax
// 005602aa  83ee30               sub esi, 0x30
// 005602ad  780c                 js 0x5602bb
// 005602af  3bf3                 cmp esi, ebx
// 005602b1  7d08                 jge 0x5602bb
// 005602b3  56                   push esi
// 005602b4  687476a000           push 0xa07674
// 005602b9  eb95                 jmp 0x560250
// 005602bb  56                   push esi
// 005602bc  68bc0ca200           push 0xa20cbc
// 005602c1  eb8d                 jmp 0x560250
// 005602c3  7510                 jne 0x5602d5
// 005602c5  8b4d00               mov ecx, dword ptr [ebp]
// 005602c8  51                   push ecx
// 005602c9  68a00ca200           push 0xa20ca0
// 005602ce  ffd7                 call edi
// 005602d0  83c408               add esp, 8
// 005602d3  eb0a                 jmp 0x5602df
// 005602d5  688c0ca200           push 0xa20c8c
// 005602da  ffd7                 call edi
// 005602dc  83c404               add esp, 4
// 005602df  ff15bca79e00         call dword ptr [0x9ea7bc]
// 005602e5  33f6                 xor esi, esi
// 005602e7  68100da200           push 0xa20d10
// 005602ec  ffd7                 call edi
// 005602ee  83c404               add esp, 4
// 005602f1  5f                   pop edi
// 005602f2  8bc6                 mov eax, esi
// 005602f4  5e                   pop esi
// 005602f5  5d                   pop ebp
// 005602f6  5b                   pop ebx
// 005602f7  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?textPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
