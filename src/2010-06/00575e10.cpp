// from server: 100% by auto
// roc 2010-06 00575e10  unit: seg_00570000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00575e10
//
// 00575e10  83ec08               sub esp, 8
// 00575e13  83bb2401000000       cmp dword ptr [ebx + 0x124], 0
// 00575e1a  c744240400000000     mov dword ptr [esp + 4], 0
// 00575e22  0f8e83000000         jle 0x575eab
// 00575e28  55                   push ebp
// 00575e29  8d8328010000         lea eax, [ebx + 0x128]
// 00575e2f  56                   push esi
// 00575e30  89442408             mov dword ptr [esp + 8], eax
// 00575e34  57                   push edi
// 00575e35  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00575e39  8b29                 mov ebp, dword ptr [ecx]
// 00575e3b  837d4c00             cmp dword ptr [ebp + 0x4c], 0
// 00575e3f  7551                 jne 0x575e92
// 00575e41  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00575e44  83fe03               cmp esi, 3
// 00575e47  770a                 ja 0x575e53
// 00575e49  83bcb39000000000     cmp dword ptr [ebx + esi*4 + 0x90], 0
// 00575e51  7518                 jne 0x575e6b
// 00575e53  8b13                 mov edx, dword ptr [ebx]
// 00575e55  c7421434000000       mov dword ptr [edx + 0x14], 0x34
// 00575e5c  8b03                 mov eax, dword ptr [ebx]
// 00575e5e  897018               mov dword ptr [eax + 0x18], esi
// 00575e61  8b0b                 mov ecx, dword ptr [ebx]
// 00575e63  8b11                 mov edx, dword ptr [ecx]
// 00575e65  53                   push ebx
// 00575e66  ffd2                 call edx
// 00575e68  83c404               add esp, 4
// 00575e6b  8b4304               mov eax, dword ptr [ebx + 4]
// 00575e6e  8b08                 mov ecx, dword ptr [eax]
// 00575e70  6882000000           push 0x82
// 00575e75  6a01                 push 1
// 00575e77  53                   push ebx
// 00575e78  ffd1                 call ecx
// 00575e7a  8bb4b390000000       mov esi, dword ptr [ebx + esi*4 + 0x90]
// 00575e81  b920000000           mov ecx, 0x20
// 00575e86  8bf8                 mov edi, eax
// 00575e88  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00575e8a  66a5                 movsw word ptr es:[edi], word ptr [esi]
// 00575e8c  83c40c               add esp, 0xc
// 00575e8f  89454c               mov dword ptr [ebp + 0x4c], eax
// 00575e92  8b442410             mov eax, dword ptr [esp + 0x10]
// 00575e96  8344240c04           add dword ptr [esp + 0xc], 4
// 00575e9b  40                   inc eax
// 00575e9c  3b8324010000         cmp eax, dword ptr [ebx + 0x124]
// 00575ea2  89442410             mov dword ptr [esp + 0x10], eax
// 00575ea6  7c8d                 jl 0x575e35
// 00575ea8  5f                   pop edi
// 00575ea9  5e                   pop esi
// 00575eaa  5d                   pop ebp
// 00575eab  83c408               add esp, 8
// 00575eae  c3                   ret 
// library jpeg-6b/jdinput.c (function _latch_quant_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
