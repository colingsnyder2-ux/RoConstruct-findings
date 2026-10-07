// roc 2012-06 00653b50  unit: seg_00650000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00653b50
//
// 00653b50  83ec08               sub esp, 8
// 00653b53  83bb2401000000       cmp dword ptr [ebx + 0x124], 0
// 00653b5a  c744240400000000     mov dword ptr [esp + 4], 0
// 00653b62  0f8e83000000         jle 0x653beb
// 00653b68  55                   push ebp
// 00653b69  8d8328010000         lea eax, [ebx + 0x128]
// 00653b6f  56                   push esi
// 00653b70  89442408             mov dword ptr [esp + 8], eax
// 00653b74  57                   push edi
// 00653b75  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00653b79  8b29                 mov ebp, dword ptr [ecx]
// 00653b7b  837d4c00             cmp dword ptr [ebp + 0x4c], 0
// 00653b7f  7551                 jne 0x653bd2
// 00653b81  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00653b84  83fe03               cmp esi, 3
// 00653b87  770a                 ja 0x653b93
// 00653b89  83bcb39000000000     cmp dword ptr [ebx + esi*4 + 0x90], 0
// 00653b91  7518                 jne 0x653bab
// 00653b93  8b13                 mov edx, dword ptr [ebx]
// 00653b95  c7421434000000       mov dword ptr [edx + 0x14], 0x34
// 00653b9c  8b03                 mov eax, dword ptr [ebx]
// 00653b9e  897018               mov dword ptr [eax + 0x18], esi
// 00653ba1  8b0b                 mov ecx, dword ptr [ebx]
// 00653ba3  8b11                 mov edx, dword ptr [ecx]
// 00653ba5  53                   push ebx
// 00653ba6  ffd2                 call edx
// 00653ba8  83c404               add esp, 4
// 00653bab  8b4304               mov eax, dword ptr [ebx + 4]
// 00653bae  8b08                 mov ecx, dword ptr [eax]
// 00653bb0  6882000000           push 0x82
// 00653bb5  6a01                 push 1
// 00653bb7  53                   push ebx
// 00653bb8  ffd1                 call ecx
// 00653bba  8bb4b390000000       mov esi, dword ptr [ebx + esi*4 + 0x90]
// 00653bc1  b920000000           mov ecx, 0x20
// 00653bc6  8bf8                 mov edi, eax
// 00653bc8  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00653bca  66a5                 movsw word ptr es:[edi], word ptr [esi]
// 00653bcc  83c40c               add esp, 0xc
// 00653bcf  89454c               mov dword ptr [ebp + 0x4c], eax
// 00653bd2  8b442410             mov eax, dword ptr [esp + 0x10]
// 00653bd6  8344240c04           add dword ptr [esp + 0xc], 4
// 00653bdb  40                   inc eax
// 00653bdc  3b8324010000         cmp eax, dword ptr [ebx + 0x124]
// 00653be2  89442410             mov dword ptr [esp + 0x10], eax
// 00653be6  7c8d                 jl 0x653b75
// 00653be8  5f                   pop edi
// 00653be9  5e                   pop esi
// 00653bea  5d                   pop ebp
// 00653beb  83c408               add esp, 8
// 00653bee  c3                   ret 
// library jpeg-6b/jdinput.c (function _latch_quant_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
