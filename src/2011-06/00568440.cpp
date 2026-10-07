// roc 2011-06 00568440  unit: seg_00560000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00568440
//
// 00568440  83ec08               sub esp, 8
// 00568443  83bb2401000000       cmp dword ptr [ebx + 0x124], 0
// 0056844a  c744240400000000     mov dword ptr [esp + 4], 0
// 00568452  0f8e83000000         jle 0x5684db
// 00568458  55                   push ebp
// 00568459  8d8328010000         lea eax, [ebx + 0x128]
// 0056845f  56                   push esi
// 00568460  89442408             mov dword ptr [esp + 8], eax
// 00568464  57                   push edi
// 00568465  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00568469  8b29                 mov ebp, dword ptr [ecx]
// 0056846b  837d4c00             cmp dword ptr [ebp + 0x4c], 0
// 0056846f  7551                 jne 0x5684c2
// 00568471  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00568474  83fe03               cmp esi, 3
// 00568477  770a                 ja 0x568483
// 00568479  83bcb39000000000     cmp dword ptr [ebx + esi*4 + 0x90], 0
// 00568481  7518                 jne 0x56849b
// 00568483  8b13                 mov edx, dword ptr [ebx]
// 00568485  c7421434000000       mov dword ptr [edx + 0x14], 0x34
// 0056848c  8b03                 mov eax, dword ptr [ebx]
// 0056848e  897018               mov dword ptr [eax + 0x18], esi
// 00568491  8b0b                 mov ecx, dword ptr [ebx]
// 00568493  8b11                 mov edx, dword ptr [ecx]
// 00568495  53                   push ebx
// 00568496  ffd2                 call edx
// 00568498  83c404               add esp, 4
// 0056849b  8b4304               mov eax, dword ptr [ebx + 4]
// 0056849e  8b08                 mov ecx, dword ptr [eax]
// 005684a0  6882000000           push 0x82
// 005684a5  6a01                 push 1
// 005684a7  53                   push ebx
// 005684a8  ffd1                 call ecx
// 005684aa  8bb4b390000000       mov esi, dword ptr [ebx + esi*4 + 0x90]
// 005684b1  b920000000           mov ecx, 0x20
// 005684b6  8bf8                 mov edi, eax
// 005684b8  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005684ba  66a5                 movsw word ptr es:[edi], word ptr [esi]
// 005684bc  83c40c               add esp, 0xc
// 005684bf  89454c               mov dword ptr [ebp + 0x4c], eax
// 005684c2  8b442410             mov eax, dword ptr [esp + 0x10]
// 005684c6  8344240c04           add dword ptr [esp + 0xc], 4
// 005684cb  40                   inc eax
// 005684cc  3b8324010000         cmp eax, dword ptr [ebx + 0x124]
// 005684d2  89442410             mov dword ptr [esp + 0x10], eax
// 005684d6  7c8d                 jl 0x568465
// 005684d8  5f                   pop edi
// 005684d9  5e                   pop esi
// 005684da  5d                   pop ebp
// 005684db  83c408               add esp, 8
// 005684de  c3                   ret 
// library jpeg-6b/jdinput.c (function _latch_quant_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
