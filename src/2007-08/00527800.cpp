// roc 2007-08 00527800  unit: G3D::Line  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527800
//
// 00527800  56                   push esi
// 00527801  8b742408             mov esi, dword ptr [esp + 8]
// 00527805  8b4604               mov eax, dword ptr [esi + 4]
// 00527808  8b08                 mov ecx, dword ptr [eax]
// 0052780a  57                   push edi
// 0052780b  6a54                 push 0x54
// 0052780d  6a01                 push 1
// 0052780f  56                   push esi
// 00527810  ffd1                 call ecx
// 00527812  89869c010000         mov dword ptr [esi + 0x19c], eax
// 00527818  c700e0745200         mov dword ptr [eax], 0x5274e0
// 0052781e  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00527824  33ff                 xor edi, edi
// 00527826  83c40c               add esp, 0xc
// 00527829  397e24               cmp dword ptr [esi + 0x24], edi
// 0052782c  7e40                 jle 0x52786e
// 0052782e  53                   push ebx
// 0052782f  55                   push ebp
// 00527830  8d6950               lea ebp, [ecx + 0x50]
// 00527833  8d582c               lea ebx, [eax + 0x2c]
// 00527836  8b5604               mov edx, dword ptr [esi + 4]
// 00527839  8b02                 mov eax, dword ptr [edx]
// 0052783b  6800010000           push 0x100
// 00527840  6a01                 push 1
// 00527842  56                   push esi
// 00527843  ffd0                 call eax
// 00527845  6800010000           push 0x100
// 0052784a  6a00                 push 0
// 0052784c  50                   push eax
// 0052784d  894500               mov dword ptr [ebp], eax
// 00527850  e837931000           call 0x630b8c
// 00527855  c703ffffffff         mov dword ptr [ebx], 0xffffffff
// 0052785b  83c701               add edi, 1
// 0052785e  83c418               add esp, 0x18
// 00527861  83c304               add ebx, 4
// 00527864  83c554               add ebp, 0x54
// 00527867  3b7e24               cmp edi, dword ptr [esi + 0x24]
// 0052786a  7cca                 jl 0x527836
// 0052786c  5d                   pop ebp
// 0052786d  5b                   pop ebx
// 0052786e  5f                   pop edi
// 0052786f  5e                   pop esi
// 00527870  c3                   ret 
// library jpeg-6b/jddctmgr.c (function _jinit_inverse_dct)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jddctmgr.c
