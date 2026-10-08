// roc 2007-03 00478ac0  unit: seg_00470000  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00478ac0
//
// 00478ac0  6aff                 push -1
// 00478ac2  68d80a7500           push 0x750ad8
// 00478ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00478acd  50                   push eax
// 00478ace  83ec18               sub esp, 0x18
// 00478ad1  53                   push ebx
// 00478ad2  55                   push ebp
// 00478ad3  56                   push esi
// 00478ad4  57                   push edi
// 00478ad5  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00478ada  33c4                 xor eax, esp
// 00478adc  50                   push eax
// 00478add  8d44242c             lea eax, [esp + 0x2c]
// 00478ae1  64a300000000         mov dword ptr fs:[0], eax
// 00478ae7  8be9                 mov ebp, ecx
// 00478ae9  33db                 xor ebx, ebx
// 00478aeb  6a01                 push 1
// 00478aed  6800010000           push 0x100
// 00478af2  8d4c2428             lea ecx, [esp + 0x28]
// 00478af6  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00478afa  895c2430             mov dword ptr [esp + 0x30], ebx
// 00478afe  895c2428             mov dword ptr [esp + 0x28], ebx
// 00478b02  e8f9ceffff           call 0x475a00
// 00478b07  895c2434             mov dword ptr [esp + 0x34], ebx
// 00478b0b  33f6                 xor esi, esi
// 00478b0d  895c2418             mov dword ptr [esp + 0x18], ebx
// 00478b11  c744241cffff0000     mov dword ptr [esp + 0x1c], 0xffff
// 00478b19  8d7e01               lea edi, [esi + 1]
// 00478b1c  897c2414             mov dword ptr [esp + 0x14], edi
// 00478b20  db442414             fild dword ptr [esp + 0x14]
// 00478b24  dc4c243c             fmul qword ptr [esp + 0x3c]
// 00478b28  dc0de0727900         fmul qword ptr [0x7972e0]
// 00478b2e  dd442444             fld qword ptr [esp + 0x44]
// 00478b32  e8076b1a00           call 0x61f63e
// 00478b37  dc0dd8727900         fmul qword ptr [0x7972d8]
// 00478b3d  dc05584f7900         fadd qword ptr [0x794f58]
// 00478b43  e8b8661a00           call 0x61f200
// 00478b48  89442414             mov dword ptr [esp + 0x14], eax
// 00478b4c  3bc3                 cmp eax, ebx
// 00478b4e  8d442414             lea eax, [esp + 0x14]
// 00478b52  7f04                 jg 0x478b58
// 00478b54  8d442418             lea eax, [esp + 0x18]
// 00478b58  8b00                 mov eax, dword ptr [eax]
// 00478b5a  89442414             mov dword ptr [esp + 0x14], eax
// 00478b5e  3dffff0000           cmp eax, 0xffff
// 00478b63  8d442414             lea eax, [esp + 0x14]
// 00478b67  7c04                 jl 0x478b6d
// 00478b69  8d44241c             lea eax, [esp + 0x1c]
// 00478b6d  8b00                 mov eax, dword ptr [eax]
// 00478b6f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00478b73  66890471             mov word ptr [ecx + esi*2], ax
// 00478b77  8bf7                 mov esi, edi
// 00478b79  81fe00010000         cmp esi, 0x100
// 00478b7f  7c98                 jl 0x478b19
// 00478b81  8b4d00               mov ecx, dword ptr [ebp]
// 00478b84  8b11                 mov edx, dword ptr [ecx]
// 00478b86  8b5224               mov edx, dword ptr [edx + 0x24]
// 00478b89  8d442420             lea eax, [esp + 0x20]
// 00478b8d  50                   push eax
// 00478b8e  ffd2                 call edx
// 00478b90  8b442420             mov eax, dword ptr [esp + 0x20]
// 00478b94  50                   push eax
// 00478b95  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00478b9d  e8dea70700           call 0x4f3380
// 00478ba2  83c404               add esp, 4
// 00478ba5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00478ba9  64890d00000000       mov dword ptr fs:[0], ecx
// 00478bb0  59                   pop ecx
// 00478bb1  5f                   pop edi
// 00478bb2  5e                   pop esi
// 00478bb3  5d                   pop ebp
// 00478bb4  5b                   pop ebx
// 00478bb5  83c424               add esp, 0x24
// 00478bb8  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?setGamma@RenderDevice@G3D@@AAEXNN@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
