// roc 2007-08 00527e40  unit: G3D::Line  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527e40
//
// 00527e40  8b442410             mov eax, dword ptr [esp + 0x10]
// 00527e44  53                   push ebx
// 00527e45  8b18                 mov ebx, dword ptr [eax]
// 00527e47  55                   push ebp
// 00527e48  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00527e4c  56                   push esi
// 00527e4d  33f6                 xor esi, esi
// 00527e4f  39b514010000         cmp dword ptr [ebp + 0x114], esi
// 00527e55  7e54                 jle 0x527eab
// 00527e57  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00527e5b  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00527e5f  57                   push edi
// 00527e60  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 00527e63  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 00527e66  8b542420             mov edx, dword ptr [esp + 0x20]
// 00527e6a  8b3a                 mov edi, dword ptr [edx]
// 00527e6c  03c8                 add ecx, eax
// 00527e6e  3bc1                 cmp eax, ecx
// 00527e70  7313                 jae 0x527e85
// 00527e72  8a17                 mov dl, byte ptr [edi]
// 00527e74  8810                 mov byte ptr [eax], dl
// 00527e76  83c001               add eax, 1
// 00527e79  8810                 mov byte ptr [eax], dl
// 00527e7b  83c001               add eax, 1
// 00527e7e  83c701               add edi, 1
// 00527e81  3bc1                 cmp eax, ecx
// 00527e83  72ed                 jb 0x527e72
// 00527e85  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 00527e88  50                   push eax
// 00527e89  6a01                 push 1
// 00527e8b  8d4e01               lea ecx, [esi + 1]
// 00527e8e  51                   push ecx
// 00527e8f  53                   push ebx
// 00527e90  56                   push esi
// 00527e91  53                   push ebx
// 00527e92  e8e963ffff           call 0x51e280
// 00527e97  8344243804           add dword ptr [esp + 0x38], 4
// 00527e9c  83c602               add esi, 2
// 00527e9f  83c418               add esp, 0x18
// 00527ea2  3bb514010000         cmp esi, dword ptr [ebp + 0x114]
// 00527ea8  7cb6                 jl 0x527e60
// 00527eaa  5f                   pop edi
// 00527eab  5e                   pop esi
// 00527eac  5d                   pop ebp
// 00527ead  5b                   pop ebx
// 00527eae  c3                   ret 
// library jpeg-6b/jdsample.c (function _h2v2_upsample)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
