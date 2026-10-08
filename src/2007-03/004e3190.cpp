// roc 2007-03 004e3190  unit: seg_004e0000  size: 399 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e3190
//
// 004e3190  51                   push ecx
// 004e3191  53                   push ebx
// 004e3192  55                   push ebp
// 004e3193  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004e3197  56                   push esi
// 004e3198  57                   push edi
// 004e3199  8bf9                 mov edi, ecx
// 004e319b  8b4f04               mov ecx, dword ptr [edi + 4]
// 004e319e  3be9                 cmp ebp, ecx
// 004e31a0  894c2410             mov dword ptr [esp + 0x10], ecx
// 004e31a4  896f04               mov dword ptr [edi + 4], ebp
// 004e31a7  7d63                 jge 0x4e320c
// 004e31a9  8da42400000000       lea esp, [esp]
// 004e31b0  8b07                 mov eax, dword ptr [edi]
// 004e31b2  8d1ca8               lea ebx, [eax + ebp*4]
// 004e31b5  8b03                 mov eax, dword ptr [ebx]
// 004e31b7  85c0                 test eax, eax
// 004e31b9  744a                 je 0x4e3205
// 004e31bb  83c004               add eax, 4
// 004e31be  50                   push eax
// 004e31bf  ff15a8d27700         call dword ptr [0x77d2a8]
// 004e31c5  85c0                 test eax, eax
// 004e31c7  7532                 jne 0x4e31fb
// 004e31c9  8b0b                 mov ecx, dword ptr [ebx]
// 004e31cb  8b7108               mov esi, dword ptr [ecx + 8]
// 004e31ce  85f6                 test esi, esi
// 004e31d0  741b                 je 0x4e31ed
// 004e31d2  8b0e                 mov ecx, dword ptr [esi]
// 004e31d4  8b11                 mov edx, dword ptr [ecx]
// 004e31d6  8b4204               mov eax, dword ptr [edx + 4]
// 004e31d9  ffd0                 call eax
// 004e31db  8bc6                 mov eax, esi
// 004e31dd  8b7604               mov esi, dword ptr [esi + 4]
// 004e31e0  50                   push eax
// 004e31e1  e80aaf1300           call 0x61e0f0
// 004e31e6  83c404               add esp, 4
// 004e31e9  85f6                 test esi, esi
// 004e31eb  75e5                 jne 0x4e31d2
// 004e31ed  8b0b                 mov ecx, dword ptr [ebx]
// 004e31ef  85c9                 test ecx, ecx
// 004e31f1  7408                 je 0x4e31fb
// 004e31f3  8b11                 mov edx, dword ptr [ecx]
// 004e31f5  8b02                 mov eax, dword ptr [edx]
// 004e31f7  6a01                 push 1
// 004e31f9  ffd0                 call eax
// 004e31fb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e31ff  c70300000000         mov dword ptr [ebx], 0
// 004e3205  83c501               add ebp, 1
// 004e3208  3be9                 cmp ebp, ecx
// 004e320a  7ca4                 jl 0x4e31b0
// 004e320c  f605589f8b0001       test byte ptr [0x8b9f58], 1
// 004e3213  7514                 jne 0x4e3229
// 004e3215  830d589f8b0001       or dword ptr [0x8b9f58], 1
// 004e321c  bb0a000000           mov ebx, 0xa
// 004e3221  891d549f8b00         mov dword ptr [0x8b9f54], ebx
// 004e3227  eb06                 jmp 0x4e322f
// 004e3229  8b1d549f8b00         mov ebx, dword ptr [0x8b9f54]
// 004e322f  8b7704               mov esi, dword ptr [edi + 4]
// 004e3232  8b4f08               mov ecx, dword ptr [edi + 8]
// 004e3235  3bf1                 cmp esi, ecx
// 004e3237  0f8e84000000         jle 0x4e32c1
// 004e323d  85c9                 test ecx, ecx
// 004e323f  7511                 jne 0x4e3252
// 004e3241  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e3245  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e3249  894f08               mov dword ptr [edi + 8], ecx
// 004e324c  52                   push edx
// 004e324d  e997000000           jmp 0x4e32e9
// 004e3252  3bf3                 cmp esi, ebx
// 004e3254  7d0d                 jge 0x4e3263
// 004e3256  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e325a  895f08               mov dword ptr [edi + 8], ebx
// 004e325d  50                   push eax
// 004e325e  e986000000           jmp 0x4e32e9
// 004e3263  d905104c7900         fld dword ptr [0x794c10]
// 004e3269  8bc1                 mov eax, ecx
// 004e326b  03c0                 add eax, eax
// 004e326d  d95c241c             fstp dword ptr [esp + 0x1c]
// 004e3271  03c0                 add eax, eax
// 004e3273  3d801a0600           cmp eax, 0x61a80
// 004e3278  7608                 jbe 0x4e3282
// 004e327a  d9050c4c7900         fld dword ptr [0x794c0c]
// 004e3280  eb0d                 jmp 0x4e328f
// 004e3282  3d00fa0000           cmp eax, 0xfa00
// 004e3287  760a                 jbe 0x4e3293
// 004e3289  d905084c7900         fld dword ptr [0x794c08]
// 004e328f  d95c241c             fstp dword ptr [esp + 0x1c]
// 004e3293  8bd9                 mov ebx, ecx
// 004e3295  895c2418             mov dword ptr [esp + 0x18], ebx
// 004e3299  db442418             fild dword ptr [esp + 0x18]
// 004e329d  d84c241c             fmul dword ptr [esp + 0x1c]
// 004e32a1  e85abf1300           call 0x61f200
// 004e32a6  2bc3                 sub eax, ebx
// 004e32a8  03c6                 add eax, esi
// 004e32aa  894708               mov dword ptr [edi + 8], eax
// 004e32ad  8b0d549f8b00         mov ecx, dword ptr [0x8b9f54]
// 004e32b3  3bc1                 cmp eax, ecx
// 004e32b5  7d03                 jge 0x4e32ba
// 004e32b7  894f08               mov dword ptr [edi + 8], ecx
// 004e32ba  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e32be  50                   push eax
// 004e32bf  eb28                 jmp 0x4e32e9
// 004e32c1  b856555555           mov eax, 0x55555556
// 004e32c6  f7e9                 imul ecx
// 004e32c8  8bca                 mov ecx, edx
// 004e32ca  c1e91f               shr ecx, 0x1f
// 004e32cd  03ca                 add ecx, edx
// 004e32cf  3bf1                 cmp esi, ecx
// 004e32d1  7f1d                 jg 0x4e32f0
// 004e32d3  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004e32d8  7416                 je 0x4e32f0
// 004e32da  3bf3                 cmp esi, ebx
// 004e32dc  7e12                 jle 0x4e32f0
// 004e32de  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e32e2  3bf0                 cmp esi, eax
// 004e32e4  7c02                 jl 0x4e32e8
// 004e32e6  8bf0                 mov esi, eax
// 004e32e8  56                   push esi
// 004e32e9  8bcf                 mov ecx, edi
// 004e32eb  e8b0f3f8ff           call 0x4726a0
// 004e32f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e32f4  3b4704               cmp eax, dword ptr [edi + 4]
// 004e32f7  7d1e                 jge 0x4e3317
// 004e32f9  8da42400000000       lea esp, [esp]
// 004e3300  8b17                 mov edx, dword ptr [edi]
// 004e3302  8d0c82               lea ecx, [edx + eax*4]
// 004e3305  85c9                 test ecx, ecx
// 004e3307  7406                 je 0x4e330f
// 004e3309  c70100000000         mov dword ptr [ecx], 0
// 004e330f  83c001               add eax, 1
// 004e3312  3b4704               cmp eax, dword ptr [edi + 4]
// 004e3315  7ce9                 jl 0x4e3300
// 004e3317  5f                   pop edi
// 004e3318  5e                   pop esi
// 004e3319  5d                   pop ebp
// 004e331a  5b                   pop ebx
// 004e331b  59                   pop ecx
// 004e331c  c20800               ret 8
// library rbxgs-view/CylinderMesh.cpp (function ?resize@?$Array@V?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
