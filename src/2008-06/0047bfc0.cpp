// from server: 100% by auto
// roc 2008-06 0047bfc0  unit: CInstanceRecord::CNameItem  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047bfc0
//
// 0047bfc0  6aff                 push -1
// 0047bfc2  68a88d7d00           push 0x7d8da8
// 0047bfc7  64a100000000         mov eax, dword ptr fs:[0]
// 0047bfcd  50                   push eax
// 0047bfce  64892500000000       mov dword ptr fs:[0], esp
// 0047bfd5  83ec18               sub esp, 0x18
// 0047bfd8  53                   push ebx
// 0047bfd9  55                   push ebp
// 0047bfda  56                   push esi
// 0047bfdb  57                   push edi
// 0047bfdc  33db                 xor ebx, ebx
// 0047bfde  6a01                 push 1
// 0047bfe0  8be9                 mov ebp, ecx
// 0047bfe2  6800010000           push 0x100
// 0047bfe7  8d4c2424             lea ecx, [esp + 0x24]
// 0047bfeb  895c2428             mov dword ptr [esp + 0x28], ebx
// 0047bfef  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0047bff3  895c2424             mov dword ptr [esp + 0x24], ebx
// 0047bff7  e8d4cbffff           call 0x478bd0
// 0047bffc  895c2430             mov dword ptr [esp + 0x30], ebx
// 0047c000  33f6                 xor esi, esi
// 0047c002  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047c006  c7442418ffff0000     mov dword ptr [esp + 0x18], 0xffff
// 0047c00e  8bff                 mov edi, edi
// 0047c010  8d7e01               lea edi, [esi + 1]
// 0047c013  897c2410             mov dword ptr [esp + 0x10], edi
// 0047c017  db442410             fild dword ptr [esp + 0x10]
// 0047c01b  dc4c2438             fmul qword ptr [esp + 0x38]
// 0047c01f  dc0d48e78100         fmul qword ptr [0x81e748]
// 0047c025  dd442440             fld qword ptr [esp + 0x40]
// 0047c029  e8f25b2200           call 0x6a1c20
// 0047c02e  dc0d40e78100         fmul qword ptr [0x81e740]
// 0047c034  dc0538e78100         fadd qword ptr [0x81e738]
// 0047c03a  e8b1572200           call 0x6a17f0
// 0047c03f  89442410             mov dword ptr [esp + 0x10], eax
// 0047c043  3bc3                 cmp eax, ebx
// 0047c045  8d442410             lea eax, [esp + 0x10]
// 0047c049  7f04                 jg 0x47c04f
// 0047c04b  8d442414             lea eax, [esp + 0x14]
// 0047c04f  8b00                 mov eax, dword ptr [eax]
// 0047c051  89442410             mov dword ptr [esp + 0x10], eax
// 0047c055  3dffff0000           cmp eax, 0xffff
// 0047c05a  8d442410             lea eax, [esp + 0x10]
// 0047c05e  7c04                 jl 0x47c064
// 0047c060  8d442418             lea eax, [esp + 0x18]
// 0047c064  8b00                 mov eax, dword ptr [eax]
// 0047c066  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047c06a  66890471             mov word ptr [ecx + esi*2], ax
// 0047c06e  8bf7                 mov esi, edi
// 0047c070  81fe00010000         cmp esi, 0x100
// 0047c076  7c98                 jl 0x47c010
// 0047c078  8b4d00               mov ecx, dword ptr [ebp]
// 0047c07b  8b11                 mov edx, dword ptr [ecx]
// 0047c07d  8b5224               mov edx, dword ptr [edx + 0x24]
// 0047c080  8d44241c             lea eax, [esp + 0x1c]
// 0047c084  50                   push eax
// 0047c085  ffd2                 call edx
// 0047c087  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0047c08b  50                   push eax
// 0047c08c  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0047c094  e887bc0800           call 0x507d20
// 0047c099  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0047c09d  83c404               add esp, 4
// 0047c0a0  5f                   pop edi
// 0047c0a1  5e                   pop esi
// 0047c0a2  5d                   pop ebp
// 0047c0a3  5b                   pop ebx
// 0047c0a4  64890d00000000       mov dword ptr fs:[0], ecx
// 0047c0ab  83c424               add esp, 0x24
// 0047c0ae  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setGamma@RenderDevice@G3D@@AAEXNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
