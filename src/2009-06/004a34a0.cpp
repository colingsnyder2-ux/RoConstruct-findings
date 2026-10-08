// from server: 100% by auto
// roc 2009-06 004a34a0  unit: G3D::PBVTextureFormat::?$Table  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a34a0
//
// 004a34a0  6aff                 push -1
// 004a34a2  6848098600           push 0x860948
// 004a34a7  64a100000000         mov eax, dword ptr fs:[0]
// 004a34ad  50                   push eax
// 004a34ae  64892500000000       mov dword ptr fs:[0], esp
// 004a34b5  83ec18               sub esp, 0x18
// 004a34b8  53                   push ebx
// 004a34b9  55                   push ebp
// 004a34ba  56                   push esi
// 004a34bb  57                   push edi
// 004a34bc  33db                 xor ebx, ebx
// 004a34be  6a01                 push 1
// 004a34c0  8be9                 mov ebp, ecx
// 004a34c2  6800010000           push 0x100
// 004a34c7  8d4c2424             lea ecx, [esp + 0x24]
// 004a34cb  895c2428             mov dword ptr [esp + 0x28], ebx
// 004a34cf  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004a34d3  895c2424             mov dword ptr [esp + 0x24], ebx
// 004a34d7  e8641dfeff           call 0x485240
// 004a34dc  895c2430             mov dword ptr [esp + 0x30], ebx
// 004a34e0  33f6                 xor esi, esi
// 004a34e2  895c2414             mov dword ptr [esp + 0x14], ebx
// 004a34e6  c7442418ffff0000     mov dword ptr [esp + 0x18], 0xffff
// 004a34ee  8bff                 mov edi, edi
// 004a34f0  8d7e01               lea edi, [esi + 1]
// 004a34f3  897c2410             mov dword ptr [esp + 0x10], edi
// 004a34f7  db442410             fild dword ptr [esp + 0x10]
// 004a34fb  dc4c2438             fmul qword ptr [esp + 0x38]
// 004a34ff  dc0d08028c00         fmul qword ptr [0x8c0208]
// 004a3505  dd442440             fld qword ptr [esp + 0x40]
// 004a3509  e8e26d2700           call 0x71a2f0
// 004a350e  dc0d00028c00         fmul qword ptr [0x8c0200]
// 004a3514  dc05f8018c00         fadd qword ptr [0x8c01f8]
// 004a351a  e8a1692700           call 0x719ec0
// 004a351f  89442410             mov dword ptr [esp + 0x10], eax
// 004a3523  3bc3                 cmp eax, ebx
// 004a3525  8d442410             lea eax, [esp + 0x10]
// 004a3529  7f04                 jg 0x4a352f
// 004a352b  8d442414             lea eax, [esp + 0x14]
// 004a352f  8b00                 mov eax, dword ptr [eax]
// 004a3531  89442410             mov dword ptr [esp + 0x10], eax
// 004a3535  3dffff0000           cmp eax, 0xffff
// 004a353a  8d442410             lea eax, [esp + 0x10]
// 004a353e  7c04                 jl 0x4a3544
// 004a3540  8d442418             lea eax, [esp + 0x18]
// 004a3544  8b00                 mov eax, dword ptr [eax]
// 004a3546  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004a354a  66890471             mov word ptr [ecx + esi*2], ax
// 004a354e  8bf7                 mov esi, edi
// 004a3550  81fe00010000         cmp esi, 0x100
// 004a3556  7c98                 jl 0x4a34f0
// 004a3558  8b4d00               mov ecx, dword ptr [ebp]
// 004a355b  8b11                 mov edx, dword ptr [ecx]
// 004a355d  8b5224               mov edx, dword ptr [edx + 0x24]
// 004a3560  8d44241c             lea eax, [esp + 0x1c]
// 004a3564  50                   push eax
// 004a3565  ffd2                 call edx
// 004a3567  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a356b  50                   push eax
// 004a356c  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004a3574  e8177d0c00           call 0x56b290
// 004a3579  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004a357d  83c404               add esp, 4
// 004a3580  5f                   pop edi
// 004a3581  5e                   pop esi
// 004a3582  5d                   pop ebp
// 004a3583  5b                   pop ebx
// 004a3584  64890d00000000       mov dword ptr fs:[0], ecx
// 004a358b  83c424               add esp, 0x24
// 004a358e  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setGamma@RenderDevice@G3D@@AAEXNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
