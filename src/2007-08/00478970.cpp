// roc 2007-08 00478970  unit: CInstanceRecord::CNameItem  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00478970
//
// 00478970  6aff                 push -1
// 00478972  68d8fa7400           push 0x74fad8
// 00478977  64a100000000         mov eax, dword ptr fs:[0]
// 0047897d  50                   push eax
// 0047897e  83ec18               sub esp, 0x18
// 00478981  53                   push ebx
// 00478982  55                   push ebp
// 00478983  56                   push esi
// 00478984  57                   push edi
// 00478985  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047898a  33c4                 xor eax, esp
// 0047898c  50                   push eax
// 0047898d  8d44242c             lea eax, [esp + 0x2c]
// 00478991  64a300000000         mov dword ptr fs:[0], eax
// 00478997  8be9                 mov ebp, ecx
// 00478999  33db                 xor ebx, ebx
// 0047899b  6a01                 push 1
// 0047899d  6800010000           push 0x100
// 004789a2  8d4c2428             lea ecx, [esp + 0x28]
// 004789a6  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004789aa  895c2430             mov dword ptr [esp + 0x30], ebx
// 004789ae  895c2428             mov dword ptr [esp + 0x28], ebx
// 004789b2  e8e9ceffff           call 0x4758a0
// 004789b7  895c2434             mov dword ptr [esp + 0x34], ebx
// 004789bb  33f6                 xor esi, esi
// 004789bd  895c2418             mov dword ptr [esp + 0x18], ebx
// 004789c1  c744241cffff0000     mov dword ptr [esp + 0x1c], 0xffff
// 004789c9  8d7e01               lea edi, [esi + 1]
// 004789cc  897c2414             mov dword ptr [esp + 0x14], edi
// 004789d0  db442414             fild dword ptr [esp + 0x14]
// 004789d4  dc4c243c             fmul qword ptr [esp + 0x3c]
// 004789d8  dc0df07e7900         fmul qword ptr [0x797ef0]
// 004789de  dd442444             fld qword ptr [esp + 0x44]
// 004789e2  e8b7871b00           call 0x63119e
// 004789e7  dc0de87e7900         fmul qword ptr [0x797ee8]
// 004789ed  dc05485b7900         fadd qword ptr [0x795b48]
// 004789f3  e868831b00           call 0x630d60
// 004789f8  89442414             mov dword ptr [esp + 0x14], eax
// 004789fc  3bc3                 cmp eax, ebx
// 004789fe  8d442414             lea eax, [esp + 0x14]
// 00478a02  7f04                 jg 0x478a08
// 00478a04  8d442418             lea eax, [esp + 0x18]
// 00478a08  8b00                 mov eax, dword ptr [eax]
// 00478a0a  89442414             mov dword ptr [esp + 0x14], eax
// 00478a0e  3dffff0000           cmp eax, 0xffff
// 00478a13  8d442414             lea eax, [esp + 0x14]
// 00478a17  7c04                 jl 0x478a1d
// 00478a19  8d44241c             lea eax, [esp + 0x1c]
// 00478a1d  8b00                 mov eax, dword ptr [eax]
// 00478a1f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00478a23  66890471             mov word ptr [ecx + esi*2], ax
// 00478a27  8bf7                 mov esi, edi
// 00478a29  81fe00010000         cmp esi, 0x100
// 00478a2f  7c98                 jl 0x4789c9
// 00478a31  8b4d00               mov ecx, dword ptr [ebp]
// 00478a34  8b11                 mov edx, dword ptr [ecx]
// 00478a36  8b5224               mov edx, dword ptr [edx + 0x24]
// 00478a39  8d442420             lea eax, [esp + 0x20]
// 00478a3d  50                   push eax
// 00478a3e  ffd2                 call edx
// 00478a40  8b442420             mov eax, dword ptr [esp + 0x20]
// 00478a44  50                   push eax
// 00478a45  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00478a4d  e8be6d0800           call 0x4ff810
// 00478a52  83c404               add esp, 4
// 00478a55  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00478a59  64890d00000000       mov dword ptr fs:[0], ecx
// 00478a60  59                   pop ecx
// 00478a61  5f                   pop edi
// 00478a62  5e                   pop esi
// 00478a63  5d                   pop ebp
// 00478a64  5b                   pop ebx
// 00478a65  83c424               add esp, 0x24
// 00478a68  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setGamma@RenderDevice@G3D@@AAEXNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
