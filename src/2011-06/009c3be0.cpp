// roc 2011-06 009c3be0  unit: seg_009c0000  size: 266 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009c3be0
//
// 009c3be0  6aff                 push -1
// 009c3be2  68d9bc9d00           push 0x9dbcd9
// 009c3be7  64a100000000         mov eax, dword ptr fs:[0]
// 009c3bed  50                   push eax
// 009c3bee  64892500000000       mov dword ptr fs:[0], esp
// 009c3bf5  83ec28               sub esp, 0x28
// 009c3bf8  53                   push ebx
// 009c3bf9  55                   push ebp
// 009c3bfa  68188daf00           push 0xaf8d18
// 009c3bff  8d4c2418             lea ecx, [esp + 0x18]
// 009c3c03  ff15c404a400         call dword ptr [0xa404c4]
// 009c3c09  8d44240c             lea eax, [esp + 0xc]
// 009c3c0d  50                   push eax
// 009c3c0e  8d4c2418             lea ecx, [esp + 0x18]
// 009c3c12  33ed                 xor ebp, ebp
// 009c3c14  51                   push ecx
// 009c3c15  896c2440             mov dword ptr [esp + 0x40], ebp
// 009c3c19  e822dce3ff           call 0x801840
// 009c3c1e  83c408               add esp, 8
// 009c3c21  8d4c2414             lea ecx, [esp + 0x14]
// 009c3c25  8ad8                 mov bl, al
// 009c3c27  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 009c3c2f  ff15d004a400         call dword ptr [0xa404d0]
// 009c3c35  84db                 test bl, bl
// 009c3c37  740f                 je 0x9c3c48
// 009c3c39  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009c3c3d  3d2c010000           cmp eax, 0x12c
// 009c3c42  0f8f91000000         jg 0x9c3cd9
// 009c3c48  56                   push esi
// 009c3c49  57                   push edi
// 009c3c4a  33f6                 xor esi, esi
// 009c3c4c  33ff                 xor edi, edi
// 009c3c4e  33db                 xor ebx, ebx
// 009c3c50  c744241002000000     mov dword ptr [esp + 0x10], 2
// 009c3c58  eb06                 jmp 0x9c3c60
// 009c3c5a  8d9b00000000         lea ebx, [ebx]
// 009c3c60  6a32                 push 0x32
// 009c3c62  68a0399c00           push 0x9c39a0
// 009c3c67  e884fcffff           call 0x9c38f0
// 009c3c6c  03f0                 add esi, eax
// 009c3c6e  6a32                 push 0x32
// 009c3c70  68103a9c00           push 0x9c3a10
// 009c3c75  13fa                 adc edi, edx
// 009c3c77  e874fcffff           call 0x9c38f0
// 009c3c7c  83c410               add esp, 0x10
// 009c3c7f  03e8                 add ebp, eax
// 009c3c81  13da                 adc ebx, edx
// 009c3c83  836c241001           sub dword ptr [esp + 0x10], 1
// 009c3c88  75d6                 jne 0x9c3c60
// 009c3c8a  6a00                 push 0
// 009c3c8c  2bf5                 sub esi, ebp
// 009c3c8e  6a02                 push 2
// 009c3c90  1bfb                 sbb edi, ebx
// 009c3c92  57                   push edi
// 009c3c93  56                   push esi
// 009c3c94  e84777e4ff           call 0x80b3e0
// 009c3c99  6a00                 push 0
// 009c3c9b  6a32                 push 0x32
// 009c3c9d  52                   push edx
// 009c3c9e  50                   push eax
// 009c3c9f  e83c77e4ff           call 0x80b3e0
// 009c3ca4  6a00                 push 0
// 009c3ca6  68e8030000           push 0x3e8
// 009c3cab  52                   push edx
// 009c3cac  50                   push eax
// 009c3cad  e82e77e4ff           call 0x80b3e0
// 009c3cb2  5f                   pop edi
// 009c3cb3  5e                   pop esi
// 009c3cb4  85d2                 test edx, edx
// 009c3cb6  7c14                 jl 0x9c3ccc
// 009c3cb8  7f05                 jg 0x9c3cbf
// 009c3cba  83f864               cmp eax, 0x64
// 009c3cbd  720d                 jb 0x9c3ccc
// 009c3cbf  85d2                 test edx, edx
// 009c3cc1  7c16                 jl 0x9c3cd9
// 009c3cc3  7f07                 jg 0x9c3ccc
// 009c3cc5  3d50c30000           cmp eax, 0xc350
// 009c3cca  760d                 jbe 0x9c3cd9
// 009c3ccc  b878050000           mov eax, 0x578
// 009c3cd1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 009c3cd9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009c3cdd  5d                   pop ebp
// 009c3cde  5b                   pop ebx
// 009c3cdf  64890d00000000       mov dword ptr fs:[0], ecx
// 009c3ce6  83c434               add esp, 0x34
// 009c3ce9  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ?getCPUSpeed@Render@RBX@@YAHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
