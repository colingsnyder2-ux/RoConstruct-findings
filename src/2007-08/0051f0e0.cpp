// from server: 100% by auto
// roc 2007-08 0051f0e0  unit: seg_00510000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051f0e0
//
// 0051f0e0  83ec08               sub esp, 8
// 0051f0e3  83bb2401000000       cmp dword ptr [ebx + 0x124], 0
// 0051f0ea  c744240400000000     mov dword ptr [esp + 4], 0
// 0051f0f2  0f8e85000000         jle 0x51f17d
// 0051f0f8  55                   push ebp
// 0051f0f9  8d8328010000         lea eax, [ebx + 0x128]
// 0051f0ff  56                   push esi
// 0051f100  89442408             mov dword ptr [esp + 8], eax
// 0051f104  57                   push edi
// 0051f105  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051f109  8b29                 mov ebp, dword ptr [ecx]
// 0051f10b  837d4c00             cmp dword ptr [ebp + 0x4c], 0
// 0051f10f  7551                 jne 0x51f162
// 0051f111  8b7510               mov esi, dword ptr [ebp + 0x10]
// 0051f114  83fe03               cmp esi, 3
// 0051f117  770a                 ja 0x51f123
// 0051f119  83bcb39000000000     cmp dword ptr [ebx + esi*4 + 0x90], 0
// 0051f121  7518                 jne 0x51f13b
// 0051f123  8b13                 mov edx, dword ptr [ebx]
// 0051f125  c7421434000000       mov dword ptr [edx + 0x14], 0x34
// 0051f12c  8b03                 mov eax, dword ptr [ebx]
// 0051f12e  897018               mov dword ptr [eax + 0x18], esi
// 0051f131  8b0b                 mov ecx, dword ptr [ebx]
// 0051f133  8b11                 mov edx, dword ptr [ecx]
// 0051f135  53                   push ebx
// 0051f136  ffd2                 call edx
// 0051f138  83c404               add esp, 4
// 0051f13b  8b4304               mov eax, dword ptr [ebx + 4]
// 0051f13e  8b08                 mov ecx, dword ptr [eax]
// 0051f140  6882000000           push 0x82
// 0051f145  6a01                 push 1
// 0051f147  53                   push ebx
// 0051f148  ffd1                 call ecx
// 0051f14a  8bb4b390000000       mov esi, dword ptr [ebx + esi*4 + 0x90]
// 0051f151  b920000000           mov ecx, 0x20
// 0051f156  8bf8                 mov edi, eax
// 0051f158  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0051f15a  66a5                 movsw word ptr es:[edi], word ptr [esi]
// 0051f15c  83c40c               add esp, 0xc
// 0051f15f  89454c               mov dword ptr [ebp + 0x4c], eax
// 0051f162  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051f166  8344240c04           add dword ptr [esp + 0xc], 4
// 0051f16b  83c001               add eax, 1
// 0051f16e  3b8324010000         cmp eax, dword ptr [ebx + 0x124]
// 0051f174  89442410             mov dword ptr [esp + 0x10], eax
// 0051f178  7c8b                 jl 0x51f105
// 0051f17a  5f                   pop edi
// 0051f17b  5e                   pop esi
// 0051f17c  5d                   pop ebp
// 0051f17d  83c408               add esp, 8
// 0051f180  c3                   ret 
// library jpeg-6b/jdinput.c (function _latch_quant_tables)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
