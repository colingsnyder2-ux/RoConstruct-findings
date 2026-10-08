// from server: 100% by auto
// roc 2010-06 00496aa0  unit: seg_00490000  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00496aa0
//
// 00496aa0  6aff                 push -1
// 00496aa2  68e8829a00           push 0x9a82e8
// 00496aa7  64a100000000         mov eax, dword ptr fs:[0]
// 00496aad  50                   push eax
// 00496aae  64892500000000       mov dword ptr fs:[0], esp
// 00496ab5  83ec18               sub esp, 0x18
// 00496ab8  53                   push ebx
// 00496ab9  55                   push ebp
// 00496aba  56                   push esi
// 00496abb  57                   push edi
// 00496abc  33db                 xor ebx, ebx
// 00496abe  6a01                 push 1
// 00496ac0  8be9                 mov ebp, ecx
// 00496ac2  6800010000           push 0x100
// 00496ac7  8d4c2424             lea ecx, [esp + 0x24]
// 00496acb  895c2428             mov dword ptr [esp + 0x28], ebx
// 00496acf  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00496ad3  895c2424             mov dword ptr [esp + 0x24], ebx
// 00496ad7  e8d4c8ffff           call 0x4933b0
// 00496adc  895c2430             mov dword ptr [esp + 0x30], ebx
// 00496ae0  33f6                 xor esi, esi
// 00496ae2  895c2414             mov dword ptr [esp + 0x14], ebx
// 00496ae6  c7442418ffff0000     mov dword ptr [esp + 0x18], 0xffff
// 00496aee  8bff                 mov edi, edi
// 00496af0  8d7e01               lea edi, [esi + 1]
// 00496af3  897c2410             mov dword ptr [esp + 0x10], edi
// 00496af7  db442410             fild dword ptr [esp + 0x10]
// 00496afb  dc4c2438             fmul qword ptr [esp + 0x38]
// 00496aff  dc0dc06aa100         fmul qword ptr [0xa16ac0]
// 00496b05  dd442440             fld qword ptr [esp + 0x40]
// 00496b09  e852273100           call 0x7a9260
// 00496b0e  dc0db86aa100         fmul qword ptr [0xa16ab8]
// 00496b14  dc057850a100         fadd qword ptr [0xa15078]
// 00496b1a  e811233100           call 0x7a8e30
// 00496b1f  89442410             mov dword ptr [esp + 0x10], eax
// 00496b23  3bc3                 cmp eax, ebx
// 00496b25  8d442410             lea eax, [esp + 0x10]
// 00496b29  7f04                 jg 0x496b2f
// 00496b2b  8d442414             lea eax, [esp + 0x14]
// 00496b2f  8b00                 mov eax, dword ptr [eax]
// 00496b31  89442410             mov dword ptr [esp + 0x10], eax
// 00496b35  3dffff0000           cmp eax, 0xffff
// 00496b3a  8d442410             lea eax, [esp + 0x10]
// 00496b3e  7c04                 jl 0x496b44
// 00496b40  8d442418             lea eax, [esp + 0x18]
// 00496b44  8b00                 mov eax, dword ptr [eax]
// 00496b46  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00496b4a  66890471             mov word ptr [ecx + esi*2], ax
// 00496b4e  8bf7                 mov esi, edi
// 00496b50  81fe00010000         cmp esi, 0x100
// 00496b56  7c98                 jl 0x496af0
// 00496b58  8b4d00               mov ecx, dword ptr [ebp]
// 00496b5b  8b11                 mov edx, dword ptr [ecx]
// 00496b5d  8b5224               mov edx, dword ptr [edx + 0x24]
// 00496b60  8d44241c             lea eax, [esp + 0x1c]
// 00496b64  50                   push eax
// 00496b65  ffd2                 call edx
// 00496b67  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00496b6b  50                   push eax
// 00496b6c  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00496b74  e8476e0b00           call 0x54d9c0
// 00496b79  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00496b7d  83c404               add esp, 4
// 00496b80  5f                   pop edi
// 00496b81  5e                   pop esi
// 00496b82  5d                   pop ebp
// 00496b83  5b                   pop ebx
// 00496b84  64890d00000000       mov dword ptr fs:[0], ecx
// 00496b8b  83c424               add esp, 0x24
// 00496b8e  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setGamma@RenderDevice@G3D@@AAEXNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
