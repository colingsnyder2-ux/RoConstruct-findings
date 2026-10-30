// from server: 100% by auto
// roc 2009-06 005924e0  unit: seg_00590000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005924e0
//
// 005924e0  83ec08               sub esp, 8
// 005924e3  83bb2401000000       cmp dword ptr [ebx + 0x124], 0
// 005924ea  c744240400000000     mov dword ptr [esp + 4], 0
// 005924f2  0f8e83000000         jle 0x59257b
// 005924f8  55                   push ebp
// 005924f9  8d8328010000         lea eax, [ebx + 0x128]
// 005924ff  56                   push esi
// 00592500  89442408             mov dword ptr [esp + 8], eax
// 00592504  57                   push edi
// 00592505  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00592509  8b29                 mov ebp, dword ptr [ecx]
// 0059250b  837d4c00             cmp dword ptr [ebp + 0x4c], 0
// 0059250f  7551                 jne 0x592562
// 00592511  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00592514  83fe03               cmp esi, 3
// 00592517  770a                 ja 0x592523
// 00592519  83bcb39000000000     cmp dword ptr [ebx + esi*4 + 0x90], 0
// 00592521  7518                 jne 0x59253b
// 00592523  8b13                 mov edx, dword ptr [ebx]
// 00592525  c7421434000000       mov dword ptr [edx + 0x14], 0x34
// 0059252c  8b03                 mov eax, dword ptr [ebx]
// 0059252e  897018               mov dword ptr [eax + 0x18], esi
// 00592531  8b0b                 mov ecx, dword ptr [ebx]
// 00592533  8b11                 mov edx, dword ptr [ecx]
// 00592535  53                   push ebx
// 00592536  ffd2                 call edx
// 00592538  83c404               add esp, 4
// 0059253b  8b4304               mov eax, dword ptr [ebx + 4]
// 0059253e  8b08                 mov ecx, dword ptr [eax]
// 00592540  6882000000           push 0x82
// 00592545  6a01                 push 1
// 00592547  53                   push ebx
// 00592548  ffd1                 call ecx
// 0059254a  8bb4b390000000       mov esi, dword ptr [ebx + esi*4 + 0x90]
// 00592551  b920000000           mov ecx, 0x20
// 00592556  8bf8                 mov edi, eax
// 00592558  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0059255a  66a5                 movsw word ptr es:[edi], word ptr [esi]
// 0059255c  83c40c               add esp, 0xc
// 0059255f  89454c               mov dword ptr [ebp + 0x4c], eax
// 00592562  8b442410             mov eax, dword ptr [esp + 0x10]
// 00592566  8344240c04           add dword ptr [esp + 0xc], 4
// 0059256b  40                   inc eax
// 0059256c  3b8324010000         cmp eax, dword ptr [ebx + 0x124]
// 00592572  89442410             mov dword ptr [esp + 0x10], eax
// 00592576  7c8d                 jl 0x592505
// 00592578  5f                   pop edi
// 00592579  5e                   pop esi
// 0059257a  5d                   pop ebp
// 0059257b  83c408               add esp, 8
// 0059257e  c3                   ret 
// library jpeg-6b/jdinput.c (function _latch_quant_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
