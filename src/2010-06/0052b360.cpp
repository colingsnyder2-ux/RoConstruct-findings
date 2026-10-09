// roc 2010-06 0052b360  unit: boost::bad_lexical_cast  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052b360
//
// 0052b360  6aff                 push -1
// 0052b362  68095b9800           push 0x985b09
// 0052b367  64a100000000         mov eax, dword ptr fs:[0]
// 0052b36d  50                   push eax
// 0052b36e  64892500000000       mov dword ptr fs:[0], esp
// 0052b375  83ec28               sub esp, 0x28
// 0052b378  53                   push ebx
// 0052b379  55                   push ebp
// 0052b37a  68e8eca100           push 0xa1ece8
// 0052b37f  8d4c2418             lea ecx, [esp + 0x18]
// 0052b383  ff1510a49e00         call dword ptr [0x9ea410]
// 0052b389  8d44240c             lea eax, [esp + 0xc]
// 0052b38d  50                   push eax
// 0052b38e  8d4c2418             lea ecx, [esp + 0x18]
// 0052b392  33ed                 xor ebp, ebp
// 0052b394  51                   push ecx
// 0052b395  896c2440             mov dword ptr [esp + 0x40], ebp
// 0052b399  e852432700           call 0x79f6f0
// 0052b39e  83c408               add esp, 8
// 0052b3a1  8d4c2414             lea ecx, [esp + 0x14]
// 0052b3a5  8ad8                 mov bl, al
// 0052b3a7  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0052b3af  ff1500a49e00         call dword ptr [0x9ea400]
// 0052b3b5  84db                 test bl, bl
// 0052b3b7  740f                 je 0x52b3c8
// 0052b3b9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052b3bd  3d2c010000           cmp eax, 0x12c
// 0052b3c2  0f8f91000000         jg 0x52b459
// 0052b3c8  56                   push esi
// 0052b3c9  57                   push edi
// 0052b3ca  33f6                 xor esi, esi
// 0052b3cc  33ff                 xor edi, edi
// 0052b3ce  33db                 xor ebx, ebx
// 0052b3d0  c744241002000000     mov dword ptr [esp + 0x10], 2
// 0052b3d8  eb06                 jmp 0x52b3e0
// 0052b3da  8d9b00000000         lea ebx, [ebx]
// 0052b3e0  6a32                 push 0x32
// 0052b3e2  6820b15200           push 0x52b120
// 0052b3e7  e884fcffff           call 0x52b070
// 0052b3ec  03f0                 add esi, eax
// 0052b3ee  6a32                 push 0x32
// 0052b3f0  6890b15200           push 0x52b190
// 0052b3f5  13fa                 adc edi, edx
// 0052b3f7  e874fcffff           call 0x52b070
// 0052b3fc  83c410               add esp, 0x10
// 0052b3ff  03e8                 add ebp, eax
// 0052b401  13da                 adc ebx, edx
// 0052b403  836c241001           sub dword ptr [esp + 0x10], 1
// 0052b408  75d6                 jne 0x52b3e0
// 0052b40a  6a00                 push 0
// 0052b40c  2bf5                 sub esi, ebp
// 0052b40e  6a02                 push 2
// 0052b410  1bfb                 sbb edi, ebx
// 0052b412  57                   push edi
// 0052b413  56                   push esi
// 0052b414  e8c7d82700           call 0x7a8ce0
// 0052b419  6a00                 push 0
// 0052b41b  6a32                 push 0x32
// 0052b41d  52                   push edx
// 0052b41e  50                   push eax
// 0052b41f  e8bcd82700           call 0x7a8ce0
// 0052b424  6a00                 push 0
// 0052b426  68e8030000           push 0x3e8
// 0052b42b  52                   push edx
// 0052b42c  50                   push eax
// 0052b42d  e8aed82700           call 0x7a8ce0
// 0052b432  5f                   pop edi
// 0052b433  5e                   pop esi
// 0052b434  85d2                 test edx, edx
// 0052b436  7c14                 jl 0x52b44c
// 0052b438  7f05                 jg 0x52b43f
// 0052b43a  83f864               cmp eax, 0x64
// 0052b43d  720d                 jb 0x52b44c
// 0052b43f  85d2                 test edx, edx
// 0052b441  7c16                 jl 0x52b459
// 0052b443  7f07                 jg 0x52b44c
// 0052b445  3d50c30000           cmp eax, 0xc350
// 0052b44a  760d                 jbe 0x52b459
// 0052b44c  b878050000           mov eax, 0x578
// 0052b451  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052b459  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0052b45d  5d                   pop ebp
// 0052b45e  5b                   pop ebx
// 0052b45f  64890d00000000       mov dword ptr fs:[0], ecx
// 0052b466  83c434               add esp, 0x34
// 0052b469  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ?getCPUSpeed@Render@RBX@@YAHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
