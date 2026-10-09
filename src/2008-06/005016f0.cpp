// roc 2008-06 005016f0  unit: boost::bad_lexical_cast  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005016f0
//
// 005016f0  6aff                 push -1
// 005016f2  6809e77c00           push 0x7ce709
// 005016f7  64a100000000         mov eax, dword ptr fs:[0]
// 005016fd  50                   push eax
// 005016fe  64892500000000       mov dword ptr fs:[0], esp
// 00501705  83ec28               sub esp, 0x28
// 00501708  53                   push ebx
// 00501709  55                   push ebp
// 0050170a  68a0738200           push 0x8273a0
// 0050170f  8d4c2418             lea ecx, [esp + 0x18]
// 00501713  ff1558248000         call dword ptr [0x802458]
// 00501719  8d44240c             lea eax, [esp + 0xc]
// 0050171d  50                   push eax
// 0050171e  8d4c2418             lea ecx, [esp + 0x18]
// 00501722  33ed                 xor ebp, ebp
// 00501724  51                   push ecx
// 00501725  896c2440             mov dword ptr [esp + 0x40], ebp
// 00501729  e8b2280100           call 0x513fe0
// 0050172e  83c408               add esp, 8
// 00501731  8d4c2414             lea ecx, [esp + 0x14]
// 00501735  8ad8                 mov bl, al
// 00501737  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0050173f  ff1568248000         call dword ptr [0x802468]
// 00501745  84db                 test bl, bl
// 00501747  740f                 je 0x501758
// 00501749  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050174d  3d2c010000           cmp eax, 0x12c
// 00501752  0f8f91000000         jg 0x5017e9
// 00501758  56                   push esi
// 00501759  57                   push edi
// 0050175a  33f6                 xor esi, esi
// 0050175c  33ff                 xor edi, edi
// 0050175e  33db                 xor ebx, ebx
// 00501760  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00501768  eb06                 jmp 0x501770
// 0050176a  8d9b00000000         lea ebx, [ebx]
// 00501770  6a32                 push 0x32
// 00501772  68b0145000           push 0x5014b0
// 00501777  e884fcffff           call 0x501400
// 0050177c  03f0                 add esi, eax
// 0050177e  6a32                 push 0x32
// 00501780  6820155000           push 0x501520
// 00501785  13fa                 adc edi, edx
// 00501787  e874fcffff           call 0x501400
// 0050178c  83c410               add esp, 0x10
// 0050178f  03e8                 add ebp, eax
// 00501791  13da                 adc ebx, edx
// 00501793  836c241001           sub dword ptr [esp + 0x10], 1
// 00501798  75d6                 jne 0x501770
// 0050179a  6a00                 push 0
// 0050179c  2bf5                 sub esi, ebp
// 0050179e  6a02                 push 2
// 005017a0  1bfb                 sbb edi, ebx
// 005017a2  57                   push edi
// 005017a3  56                   push esi
// 005017a4  e887041a00           call 0x6a1c30
// 005017a9  6a00                 push 0
// 005017ab  6a32                 push 0x32
// 005017ad  52                   push edx
// 005017ae  50                   push eax
// 005017af  e87c041a00           call 0x6a1c30
// 005017b4  6a00                 push 0
// 005017b6  68e8030000           push 0x3e8
// 005017bb  52                   push edx
// 005017bc  50                   push eax
// 005017bd  e86e041a00           call 0x6a1c30
// 005017c2  5f                   pop edi
// 005017c3  5e                   pop esi
// 005017c4  85d2                 test edx, edx
// 005017c6  7c14                 jl 0x5017dc
// 005017c8  7f05                 jg 0x5017cf
// 005017ca  83f864               cmp eax, 0x64
// 005017cd  720d                 jb 0x5017dc
// 005017cf  85d2                 test edx, edx
// 005017d1  7c16                 jl 0x5017e9
// 005017d3  7f07                 jg 0x5017dc
// 005017d5  3d50c30000           cmp eax, 0xc350
// 005017da  760d                 jbe 0x5017e9
// 005017dc  b878050000           mov eax, 0x578
// 005017e1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005017e9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005017ed  5d                   pop ebp
// 005017ee  5b                   pop ebx
// 005017ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005017f6  83c434               add esp, 0x34
// 005017f9  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ?getCPUSpeed@Render@RBX@@YAHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
