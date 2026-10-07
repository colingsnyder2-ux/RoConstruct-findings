// roc 2007-08 00511840  unit: G3D::_internal::DialogTemplate  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511840
//
// 00511840  53                   push ebx
// 00511841  55                   push ebp
// 00511842  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00511846  56                   push esi
// 00511847  57                   push edi
// 00511848  8b3d20e97700         mov edi, dword ptr [0x77e920]
// 0051184e  68940f7a00           push 0x7a0f94
// 00511853  8bd8                 mov ebx, eax
// 00511855  ffd7                 call edi
// 00511857  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051185b  50                   push eax
// 0051185c  68b8fe7900           push 0x79feb8
// 00511861  ffd7                 call edi
// 00511863  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00511867  51                   push ecx
// 00511868  685ca07800           push 0x78a05c
// 0051186d  ffd7                 call edi
// 0051186f  83c414               add esp, 0x14
// 00511872  83fb0a               cmp ebx, 0xa
// 00511875  7e05                 jle 0x51187c
// 00511877  bb0a000000           mov ebx, 0xa
// 0051187c  83ceff               or esi, 0xffffffff
// 0051187f  83fb01               cmp ebx, 1
// 00511882  0f8e81000000         jle 0x511909
// 00511888  68588e7900           push 0x798e58
// 0051188d  ffd7                 call edi
// 0051188f  68780f7a00           push 0x7a0f78
// 00511894  ffd7                 call edi
// 00511896  83c408               add esp, 8
// 00511899  85f6                 test esi, esi
// 0051189b  7c08                 jl 0x5118a5
// 0051189d  3bf3                 cmp esi, ebx
// 0051189f  0f8c88000000         jl 0x51192d
// 005118a5  68588e7900           push 0x798e58
// 005118aa  ffd7                 call edi
// 005118ac  83c404               add esp, 4
// 005118af  33f6                 xor esi, esi
// 005118b1  85db                 test ebx, ebx
// 005118b3  7e29                 jle 0x5118de
// 005118b5  83fb03               cmp ebx, 3
// 005118b8  7f0d                 jg 0x5118c7
// 005118ba  8b54b500             mov edx, dword ptr [ebp + esi*4]
// 005118be  52                   push edx
// 005118bf  56                   push esi
// 005118c0  686c0f7a00           push 0x7a0f6c
// 005118c5  eb0b                 jmp 0x5118d2
// 005118c7  8b44b500             mov eax, dword ptr [ebp + esi*4]
// 005118cb  50                   push eax
// 005118cc  56                   push esi
// 005118cd  68600f7a00           push 0x7a0f60
// 005118d2  ffd7                 call edi
// 005118d4  83c601               add esi, 1
// 005118d7  83c40c               add esp, 0xc
// 005118da  3bf3                 cmp esi, ebx
// 005118dc  7cd7                 jl 0x5118b5
// 005118de  685c0f7a00           push 0x7a0f5c
// 005118e3  ffd7                 call edi
// 005118e5  83c404               add esp, 4
// 005118e8  ff15e4e87700         call dword ptr [0x77e8e4]
// 005118ee  8bf0                 mov esi, eax
// 005118f0  83ee30               sub esi, 0x30
// 005118f3  780c                 js 0x511901
// 005118f5  3bf3                 cmp esi, ebx
// 005118f7  7d08                 jge 0x511901
// 005118f9  56                   push esi
// 005118fa  68a0d37800           push 0x78d3a0
// 005118ff  eb93                 jmp 0x511894
// 00511901  56                   push esi
// 00511902  68400f7a00           push 0x7a0f40
// 00511907  eb8b                 jmp 0x511894
// 00511909  7510                 jne 0x51191b
// 0051190b  8b4d00               mov ecx, dword ptr [ebp]
// 0051190e  51                   push ecx
// 0051190f  68240f7a00           push 0x7a0f24
// 00511914  ffd7                 call edi
// 00511916  83c408               add esp, 8
// 00511919  eb0a                 jmp 0x511925
// 0051191b  68100f7a00           push 0x7a0f10
// 00511920  ffd7                 call edi
// 00511922  83c404               add esp, 4
// 00511925  ff15e4e87700         call dword ptr [0x77e8e4]
// 0051192b  33f6                 xor esi, esi
// 0051192d  68940f7a00           push 0x7a0f94
// 00511932  ffd7                 call edi
// 00511934  83c404               add esp, 4
// 00511937  5f                   pop edi
// 00511938  8bc6                 mov eax, esi
// 0051193a  5e                   pop esi
// 0051193b  5d                   pop ebp
// 0051193c  5b                   pop ebx
// 0051193d  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?textPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
