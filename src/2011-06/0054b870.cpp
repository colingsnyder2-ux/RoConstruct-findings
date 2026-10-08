// from server: 100% by auto
// roc 2011-06 0054b870  unit: G3D::_internal::DialogTemplate  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054b870
//
// 0054b870  53                   push ebx
// 0054b871  55                   push ebp
// 0054b872  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0054b876  56                   push esi
// 0054b877  57                   push edi
// 0054b878  8b3d040aa400         mov edi, dword ptr [0xa40a04]
// 0054b87e  686800a800           push 0xa80068
// 0054b883  8bd8                 mov ebx, eax
// 0054b885  ffd7                 call edi
// 0054b887  8b442418             mov eax, dword ptr [esp + 0x18]
// 0054b88b  50                   push eax
// 0054b88c  6844d1a700           push 0xa7d144
// 0054b891  ffd7                 call edi
// 0054b893  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054b897  51                   push ecx
// 0054b898  683456a600           push 0xa65634
// 0054b89d  ffd7                 call edi
// 0054b89f  83c414               add esp, 0x14
// 0054b8a2  83fb0a               cmp ebx, 0xa
// 0054b8a5  7e05                 jle 0x54b8ac
// 0054b8a7  bb0a000000           mov ebx, 0xa
// 0054b8ac  83ceff               or esi, 0xffffffff
// 0054b8af  83fb01               cmp ebx, 1
// 0054b8b2  7e7f                 jle 0x54b933
// 0054b8b4  687442a600           push 0xa64274
// 0054b8b9  ffd7                 call edi
// 0054b8bb  684c00a800           push 0xa8004c
// 0054b8c0  ffd7                 call edi
// 0054b8c2  83c408               add esp, 8
// 0054b8c5  85f6                 test esi, esi
// 0054b8c7  7c08                 jl 0x54b8d1
// 0054b8c9  3bf3                 cmp esi, ebx
// 0054b8cb  0f8c86000000         jl 0x54b957
// 0054b8d1  687442a600           push 0xa64274
// 0054b8d6  ffd7                 call edi
// 0054b8d8  83c404               add esp, 4
// 0054b8db  33f6                 xor esi, esi
// 0054b8dd  85db                 test ebx, ebx
// 0054b8df  7e27                 jle 0x54b908
// 0054b8e1  83fb03               cmp ebx, 3
// 0054b8e4  7f0d                 jg 0x54b8f3
// 0054b8e6  8b54b500             mov edx, dword ptr [ebp + esi*4]
// 0054b8ea  52                   push edx
// 0054b8eb  56                   push esi
// 0054b8ec  684000a800           push 0xa80040
// 0054b8f1  eb0b                 jmp 0x54b8fe
// 0054b8f3  8b44b500             mov eax, dword ptr [ebp + esi*4]
// 0054b8f7  50                   push eax
// 0054b8f8  56                   push esi
// 0054b8f9  683400a800           push 0xa80034
// 0054b8fe  ffd7                 call edi
// 0054b900  46                   inc esi
// 0054b901  83c40c               add esp, 0xc
// 0054b904  3bf3                 cmp esi, ebx
// 0054b906  7cd9                 jl 0x54b8e1
// 0054b908  683000a800           push 0xa80030
// 0054b90d  ffd7                 call edi
// 0054b90f  83c404               add esp, 4
// 0054b912  ff15e008a400         call dword ptr [0xa408e0]
// 0054b918  8bf0                 mov esi, eax
// 0054b91a  83ee30               sub esi, 0x30
// 0054b91d  780c                 js 0x54b92b
// 0054b91f  3bf3                 cmp esi, ebx
// 0054b921  7d08                 jge 0x54b92b
// 0054b923  56                   push esi
// 0054b924  681c91a600           push 0xa6911c
// 0054b929  eb95                 jmp 0x54b8c0
// 0054b92b  56                   push esi
// 0054b92c  681400a800           push 0xa80014
// 0054b931  eb8d                 jmp 0x54b8c0
// 0054b933  7510                 jne 0x54b945
// 0054b935  8b4d00               mov ecx, dword ptr [ebp]
// 0054b938  51                   push ecx
// 0054b939  68f8ffa700           push 0xa7fff8
// 0054b93e  ffd7                 call edi
// 0054b940  83c408               add esp, 8
// 0054b943  eb0a                 jmp 0x54b94f
// 0054b945  68e4ffa700           push 0xa7ffe4
// 0054b94a  ffd7                 call edi
// 0054b94c  83c404               add esp, 4
// 0054b94f  ff15e008a400         call dword ptr [0xa408e0]
// 0054b955  33f6                 xor esi, esi
// 0054b957  686800a800           push 0xa80068
// 0054b95c  ffd7                 call edi
// 0054b95e  83c404               add esp, 4
// 0054b961  5f                   pop edi
// 0054b962  8bc6                 mov eax, esi
// 0054b964  5e                   pop esi
// 0054b965  5d                   pop ebp
// 0054b966  5b                   pop ebx
// 0054b967  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?textPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
