// roc 2009-06 005649c0  unit: boost::bad_lexical_cast  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005649c0
//
// 005649c0  6aff                 push -1
// 005649c2  68d9b88500           push 0x85b8d9
// 005649c7  64a100000000         mov eax, dword ptr fs:[0]
// 005649cd  50                   push eax
// 005649ce  64892500000000       mov dword ptr fs:[0], esp
// 005649d5  83ec28               sub esp, 0x28
// 005649d8  53                   push ebx
// 005649d9  55                   push ebp
// 005649da  6830a98c00           push 0x8ca930
// 005649df  8d4c2418             lea ecx, [esp + 0x18]
// 005649e3  ff15b4e48900         call dword ptr [0x89e4b4]
// 005649e9  8d44240c             lea eax, [esp + 0xc]
// 005649ed  50                   push eax
// 005649ee  8d4c2418             lea ecx, [esp + 0x18]
// 005649f2  33ed                 xor ebp, ebp
// 005649f4  51                   push ecx
// 005649f5  896c2440             mov dword ptr [esp + 0x40], ebp
// 005649f9  e882b61a00           call 0x710080
// 005649fe  83c408               add esp, 8
// 00564a01  8d4c2414             lea ecx, [esp + 0x14]
// 00564a05  8ad8                 mov bl, al
// 00564a07  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00564a0f  ff15c4e48900         call dword ptr [0x89e4c4]
// 00564a15  84db                 test bl, bl
// 00564a17  740f                 je 0x564a28
// 00564a19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00564a1d  3d2c010000           cmp eax, 0x12c
// 00564a22  0f8f91000000         jg 0x564ab9
// 00564a28  56                   push esi
// 00564a29  57                   push edi
// 00564a2a  33f6                 xor esi, esi
// 00564a2c  33ff                 xor edi, edi
// 00564a2e  33db                 xor ebx, ebx
// 00564a30  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00564a38  eb06                 jmp 0x564a40
// 00564a3a  8d9b00000000         lea ebx, [ebx]
// 00564a40  6a32                 push 0x32
// 00564a42  6880475600           push 0x564780
// 00564a47  e884fcffff           call 0x5646d0
// 00564a4c  03f0                 add esi, eax
// 00564a4e  6a32                 push 0x32
// 00564a50  68f0475600           push 0x5647f0
// 00564a55  13fa                 adc edi, edx
// 00564a57  e874fcffff           call 0x5646d0
// 00564a5c  83c410               add esp, 0x10
// 00564a5f  03e8                 add ebp, eax
// 00564a61  13da                 adc ebx, edx
// 00564a63  836c241001           sub dword ptr [esp + 0x10], 1
// 00564a68  75d6                 jne 0x564a40
// 00564a6a  6a00                 push 0
// 00564a6c  2bf5                 sub esi, ebp
// 00564a6e  6a02                 push 2
// 00564a70  1bfb                 sbb edi, ebx
// 00564a72  57                   push edi
// 00564a73  56                   push esi
// 00564a74  e8f7521b00           call 0x719d70
// 00564a79  6a00                 push 0
// 00564a7b  6a32                 push 0x32
// 00564a7d  52                   push edx
// 00564a7e  50                   push eax
// 00564a7f  e8ec521b00           call 0x719d70
// 00564a84  6a00                 push 0
// 00564a86  68e8030000           push 0x3e8
// 00564a8b  52                   push edx
// 00564a8c  50                   push eax
// 00564a8d  e8de521b00           call 0x719d70
// 00564a92  5f                   pop edi
// 00564a93  5e                   pop esi
// 00564a94  85d2                 test edx, edx
// 00564a96  7c14                 jl 0x564aac
// 00564a98  7f05                 jg 0x564a9f
// 00564a9a  83f864               cmp eax, 0x64
// 00564a9d  720d                 jb 0x564aac
// 00564a9f  85d2                 test edx, edx
// 00564aa1  7c16                 jl 0x564ab9
// 00564aa3  7f07                 jg 0x564aac
// 00564aa5  3d50c30000           cmp eax, 0xc350
// 00564aaa  760d                 jbe 0x564ab9
// 00564aac  b878050000           mov eax, 0x578
// 00564ab1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00564ab9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00564abd  5d                   pop ebp
// 00564abe  5b                   pop ebx
// 00564abf  64890d00000000       mov dword ptr fs:[0], ecx
// 00564ac6  83c434               add esp, 0x34
// 00564ac9  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ?getCPUSpeed@Render@RBX@@YAHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
