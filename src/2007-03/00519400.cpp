// roc 2007-03 00519400  unit: seg_00510000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00519400
//
// 00519400  83ec08               sub esp, 8
// 00519403  83bb2401000000       cmp dword ptr [ebx + 0x124], 0
// 0051940a  c744240400000000     mov dword ptr [esp + 4], 0
// 00519412  0f8e85000000         jle 0x51949d
// 00519418  55                   push ebp
// 00519419  8d8328010000         lea eax, [ebx + 0x128]
// 0051941f  56                   push esi
// 00519420  89442408             mov dword ptr [esp + 8], eax
// 00519424  57                   push edi
// 00519425  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00519429  8b29                 mov ebp, dword ptr [ecx]
// 0051942b  837d4c00             cmp dword ptr [ebp + 0x4c], 0
// 0051942f  7551                 jne 0x519482
// 00519431  8b7510               mov esi, dword ptr [ebp + 0x10]
// 00519434  83fe03               cmp esi, 3
// 00519437  770a                 ja 0x519443
// 00519439  83bcb39000000000     cmp dword ptr [ebx + esi*4 + 0x90], 0
// 00519441  7518                 jne 0x51945b
// 00519443  8b13                 mov edx, dword ptr [ebx]
// 00519445  c7421434000000       mov dword ptr [edx + 0x14], 0x34
// 0051944c  8b03                 mov eax, dword ptr [ebx]
// 0051944e  897018               mov dword ptr [eax + 0x18], esi
// 00519451  8b0b                 mov ecx, dword ptr [ebx]
// 00519453  8b11                 mov edx, dword ptr [ecx]
// 00519455  53                   push ebx
// 00519456  ffd2                 call edx
// 00519458  83c404               add esp, 4
// 0051945b  8b4304               mov eax, dword ptr [ebx + 4]
// 0051945e  8b08                 mov ecx, dword ptr [eax]
// 00519460  6882000000           push 0x82
// 00519465  6a01                 push 1
// 00519467  53                   push ebx
// 00519468  ffd1                 call ecx
// 0051946a  8bb4b390000000       mov esi, dword ptr [ebx + esi*4 + 0x90]
// 00519471  b920000000           mov ecx, 0x20
// 00519476  8bf8                 mov edi, eax
// 00519478  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0051947a  66a5                 movsw word ptr es:[edi], word ptr [esi]
// 0051947c  83c40c               add esp, 0xc
// 0051947f  89454c               mov dword ptr [ebp + 0x4c], eax
// 00519482  8b442410             mov eax, dword ptr [esp + 0x10]
// 00519486  8344240c04           add dword ptr [esp + 0xc], 4
// 0051948b  83c001               add eax, 1
// 0051948e  3b8324010000         cmp eax, dword ptr [ebx + 0x124]
// 00519494  89442410             mov dword ptr [esp + 0x10], eax
// 00519498  7c8b                 jl 0x519425
// 0051949a  5f                   pop edi
// 0051949b  5e                   pop esi
// 0051949c  5d                   pop ebp
// 0051949d  83c408               add esp, 8
// 005194a0  c3                   ret 
// library jpeg-6b/jdinput.c (function _latch_quant_tables)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
