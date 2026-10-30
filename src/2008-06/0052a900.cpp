// from server: 100% by auto
// roc 2008-06 0052a900  unit: seg_00520000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a900
//
// 0052a900  83ec08               sub esp, 8
// 0052a903  83bb2401000000       cmp dword ptr [ebx + 0x124], 0
// 0052a90a  c744240400000000     mov dword ptr [esp + 4], 0
// 0052a912  0f8e83000000         jle 0x52a99b
// 0052a918  55                   push ebp
// 0052a919  8d8328010000         lea eax, [ebx + 0x128]
// 0052a91f  56                   push esi
// 0052a920  89442408             mov dword ptr [esp + 8], eax
// 0052a924  57                   push edi
// 0052a925  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052a929  8b29                 mov ebp, dword ptr [ecx]
// 0052a92b  837d4c00             cmp dword ptr [ebp + 0x4c], 0
// 0052a92f  7551                 jne 0x52a982
// 0052a931  8b7510               mov esi, dword ptr [ebp + 0x10]
// 0052a934  83fe03               cmp esi, 3
// 0052a937  770a                 ja 0x52a943
// 0052a939  83bcb39000000000     cmp dword ptr [ebx + esi*4 + 0x90], 0
// 0052a941  7518                 jne 0x52a95b
// 0052a943  8b13                 mov edx, dword ptr [ebx]
// 0052a945  c7421434000000       mov dword ptr [edx + 0x14], 0x34
// 0052a94c  8b03                 mov eax, dword ptr [ebx]
// 0052a94e  897018               mov dword ptr [eax + 0x18], esi
// 0052a951  8b0b                 mov ecx, dword ptr [ebx]
// 0052a953  8b11                 mov edx, dword ptr [ecx]
// 0052a955  53                   push ebx
// 0052a956  ffd2                 call edx
// 0052a958  83c404               add esp, 4
// 0052a95b  8b4304               mov eax, dword ptr [ebx + 4]
// 0052a95e  8b08                 mov ecx, dword ptr [eax]
// 0052a960  6882000000           push 0x82
// 0052a965  6a01                 push 1
// 0052a967  53                   push ebx
// 0052a968  ffd1                 call ecx
// 0052a96a  8bb4b390000000       mov esi, dword ptr [ebx + esi*4 + 0x90]
// 0052a971  b920000000           mov ecx, 0x20
// 0052a976  8bf8                 mov edi, eax
// 0052a978  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0052a97a  66a5                 movsw word ptr es:[edi], word ptr [esi]
// 0052a97c  83c40c               add esp, 0xc
// 0052a97f  89454c               mov dword ptr [ebp + 0x4c], eax
// 0052a982  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052a986  8344240c04           add dword ptr [esp + 0xc], 4
// 0052a98b  40                   inc eax
// 0052a98c  3b8324010000         cmp eax, dword ptr [ebx + 0x124]
// 0052a992  89442410             mov dword ptr [esp + 0x10], eax
// 0052a996  7c8d                 jl 0x52a925
// 0052a998  5f                   pop edi
// 0052a999  5e                   pop esi
// 0052a99a  5d                   pop ebp
// 0052a99b  83c408               add esp, 8
// 0052a99e  c3                   ret 
// library jpeg-6b/jdinput.c (function _latch_quant_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
