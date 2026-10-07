// roc 2008-06 00519110  unit: G3D::_internal::DialogTemplate  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00519110
//
// 00519110  53                   push ebx
// 00519111  55                   push ebp
// 00519112  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00519116  56                   push esi
// 00519117  57                   push edi
// 00519118  8b3ddc278000         mov edi, dword ptr [0x8027dc]
// 0051911e  68308c8200           push 0x828c30
// 00519123  8bd8                 mov ebx, eax
// 00519125  ffd7                 call edi
// 00519127  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051912b  50                   push eax
// 0051912c  68b47a8200           push 0x827ab4
// 00519131  ffd7                 call edi
// 00519133  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00519137  51                   push ecx
// 00519138  68ac038100           push 0x8103ac
// 0051913d  ffd7                 call edi
// 0051913f  83c414               add esp, 0x14
// 00519142  83fb0a               cmp ebx, 0xa
// 00519145  7e05                 jle 0x51914c
// 00519147  bb0a000000           mov ebx, 0xa
// 0051914c  83ceff               or esi, 0xffffffff
// 0051914f  83fb01               cmp ebx, 1
// 00519152  7e7f                 jle 0x5191d3
// 00519154  6844878100           push 0x818744
// 00519159  ffd7                 call edi
// 0051915b  68148c8200           push 0x828c14
// 00519160  ffd7                 call edi
// 00519162  83c408               add esp, 8
// 00519165  85f6                 test esi, esi
// 00519167  7c08                 jl 0x519171
// 00519169  3bf3                 cmp esi, ebx
// 0051916b  0f8c86000000         jl 0x5191f7
// 00519171  6844878100           push 0x818744
// 00519176  ffd7                 call edi
// 00519178  83c404               add esp, 4
// 0051917b  33f6                 xor esi, esi
// 0051917d  85db                 test ebx, ebx
// 0051917f  7e27                 jle 0x5191a8
// 00519181  83fb03               cmp ebx, 3
// 00519184  7f0d                 jg 0x519193
// 00519186  8b54b500             mov edx, dword ptr [ebp + esi*4]
// 0051918a  52                   push edx
// 0051918b  56                   push esi
// 0051918c  68088c8200           push 0x828c08
// 00519191  eb0b                 jmp 0x51919e
// 00519193  8b44b500             mov eax, dword ptr [ebp + esi*4]
// 00519197  50                   push eax
// 00519198  56                   push esi
// 00519199  68fc8b8200           push 0x828bfc
// 0051919e  ffd7                 call edi
// 005191a0  46                   inc esi
// 005191a1  83c40c               add esp, 0xc
// 005191a4  3bf3                 cmp esi, ebx
// 005191a6  7cd9                 jl 0x519181
// 005191a8  68f88b8200           push 0x828bf8
// 005191ad  ffd7                 call edi
// 005191af  83c404               add esp, 4
// 005191b2  ff15a8278000         call dword ptr [0x8027a8]
// 005191b8  8bf0                 mov esi, eax
// 005191ba  83ee30               sub esi, 0x30
// 005191bd  780c                 js 0x5191cb
// 005191bf  3bf3                 cmp esi, ebx
// 005191c1  7d08                 jge 0x5191cb
// 005191c3  56                   push esi
// 005191c4  68d0358100           push 0x8135d0
// 005191c9  eb95                 jmp 0x519160
// 005191cb  56                   push esi
// 005191cc  68dc8b8200           push 0x828bdc
// 005191d1  eb8d                 jmp 0x519160
// 005191d3  7510                 jne 0x5191e5
// 005191d5  8b4d00               mov ecx, dword ptr [ebp]
// 005191d8  51                   push ecx
// 005191d9  68c08b8200           push 0x828bc0
// 005191de  ffd7                 call edi
// 005191e0  83c408               add esp, 8
// 005191e3  eb0a                 jmp 0x5191ef
// 005191e5  68ac8b8200           push 0x828bac
// 005191ea  ffd7                 call edi
// 005191ec  83c404               add esp, 4
// 005191ef  ff15a8278000         call dword ptr [0x8027a8]
// 005191f5  33f6                 xor esi, esi
// 005191f7  68308c8200           push 0x828c30
// 005191fc  ffd7                 call edi
// 005191fe  83c404               add esp, 4
// 00519201  5f                   pop edi
// 00519202  8bc6                 mov eax, esi
// 00519204  5e                   pop esi
// 00519205  5d                   pop ebp
// 00519206  5b                   pop ebx
// 00519207  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?textPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
