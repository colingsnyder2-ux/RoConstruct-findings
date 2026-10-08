// roc 2009-12 004cff70  unit: G3D::PBVTextureFormat::?$Table  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cff70
//
// 004cff70  6aff                 push -1
// 004cff72  68e8369500           push 0x9536e8
// 004cff77  64a100000000         mov eax, dword ptr fs:[0]
// 004cff7d  50                   push eax
// 004cff7e  64892500000000       mov dword ptr fs:[0], esp
// 004cff85  83ec18               sub esp, 0x18
// 004cff88  53                   push ebx
// 004cff89  55                   push ebp
// 004cff8a  56                   push esi
// 004cff8b  57                   push edi
// 004cff8c  33db                 xor ebx, ebx
// 004cff8e  6a01                 push 1
// 004cff90  8be9                 mov ebp, ecx
// 004cff92  6800010000           push 0x100
// 004cff97  8d4c2424             lea ecx, [esp + 0x24]
// 004cff9b  895c2428             mov dword ptr [esp + 0x28], ebx
// 004cff9f  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004cffa3  895c2424             mov dword ptr [esp + 0x24], ebx
// 004cffa7  e874abfcff           call 0x49ab20
// 004cffac  895c2430             mov dword ptr [esp + 0x30], ebx
// 004cffb0  33f6                 xor esi, esi
// 004cffb2  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cffb6  c7442418ffff0000     mov dword ptr [esp + 0x18], 0xffff
// 004cffbe  8bff                 mov edi, edi
// 004cffc0  8d7e01               lea edi, [esi + 1]
// 004cffc3  897c2410             mov dword ptr [esp + 0x10], edi
// 004cffc7  db442410             fild dword ptr [esp + 0x10]
// 004cffcb  dc4c2438             fmul qword ptr [esp + 0x38]
// 004cffcf  dc0de85a9b00         fmul qword ptr [0x9b5ae8]
// 004cffd5  dd442440             fld qword ptr [esp + 0x40]
// 004cffd9  e8d2503200           call 0x7f50b0
// 004cffde  dc0de05a9b00         fmul qword ptr [0x9b5ae0]
// 004cffe4  dc0510329b00         fadd qword ptr [0x9b3210]
// 004cffea  e8014d3200           call 0x7f4cf0
// 004cffef  89442410             mov dword ptr [esp + 0x10], eax
// 004cfff3  3bc3                 cmp eax, ebx
// 004cfff5  8d442410             lea eax, [esp + 0x10]
// 004cfff9  7f04                 jg 0x4cffff
// 004cfffb  8d442414             lea eax, [esp + 0x14]
// 004cffff  8b00                 mov eax, dword ptr [eax]
// 004d0001  89442410             mov dword ptr [esp + 0x10], eax
// 004d0005  3dffff0000           cmp eax, 0xffff
// 004d000a  8d442410             lea eax, [esp + 0x10]
// 004d000e  7c04                 jl 0x4d0014
// 004d0010  8d442418             lea eax, [esp + 0x18]
// 004d0014  8b00                 mov eax, dword ptr [eax]
// 004d0016  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d001a  66890471             mov word ptr [ecx + esi*2], ax
// 004d001e  8bf7                 mov esi, edi
// 004d0020  81fe00010000         cmp esi, 0x100
// 004d0026  7c98                 jl 0x4cffc0
// 004d0028  8b4d00               mov ecx, dword ptr [ebp]
// 004d002b  8b11                 mov edx, dword ptr [ecx]
// 004d002d  8b5224               mov edx, dword ptr [edx + 0x24]
// 004d0030  8d44241c             lea eax, [esp + 0x1c]
// 004d0034  50                   push eax
// 004d0035  ffd2                 call edx
// 004d0037  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004d003b  50                   push eax
// 004d003c  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004d0044  e897a31100           call 0x5ea3e0
// 004d0049  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004d004d  83c404               add esp, 4
// 004d0050  5f                   pop edi
// 004d0051  5e                   pop esi
// 004d0052  5d                   pop ebp
// 004d0053  5b                   pop ebx
// 004d0054  64890d00000000       mov dword ptr fs:[0], ecx
// 004d005b  83c424               add esp, 0x24
// 004d005e  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setGamma@RenderDevice@G3D@@AAEXNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
