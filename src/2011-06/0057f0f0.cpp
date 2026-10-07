// roc 2011-06 0057f0f0  unit: seg_00570000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057f0f0
//
// 0057f0f0  83ec08               sub esp, 8
// 0057f0f3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057f0f7  8b4804               mov ecx, dword ptr [eax + 4]
// 0057f0fa  8b11                 mov edx, dword ptr [ecx]
// 0057f0fc  53                   push ebx
// 0057f0fd  55                   push ebp
// 0057f0fe  56                   push esi
// 0057f0ff  8bb050010000         mov esi, dword ptr [eax + 0x150]
// 0057f105  57                   push edi
// 0057f106  6800200000           push 0x2000
// 0057f10b  6a01                 push 1
// 0057f10d  50                   push eax
// 0057f10e  ffd2                 call edx
// 0057f110  33d2                 xor edx, edx
// 0057f112  894608               mov dword ptr [esi + 8], eax
// 0057f115  83c40c               add esp, 0xc
// 0057f118  33db                 xor ebx, ebx
// 0057f11a  33ff                 xor edi, edi
// 0057f11c  33f6                 xor esi, esi
// 0057f11e  89542414             mov dword ptr [esp + 0x14], edx
// 0057f122  89542410             mov dword ptr [esp + 0x10], edx
// 0057f126  c744241cff7f8000     mov dword ptr [esp + 0x1c], 0x807fff
// 0057f12e  b900800000           mov ecx, 0x8000
// 0057f133  0500080000           add eax, 0x800
// 0057f138  eb06                 jmp 0x57f140
// 0057f13a  8d9b00000000         lea ebx, [ebx]
// 0057f140  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0057f144  8144241c00800000     add dword ptr [esp + 0x1c], 0x8000
// 0057f14c  89a8000c0000         mov dword ptr [eax + 0xc00], ebp
// 0057f152  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057f156  816c24102f6b0000     sub dword ptr [esp + 0x10], 0x6b2f
// 0057f15e  89a800100000         mov dword ptr [eax + 0x1000], ebp
// 0057f164  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0057f168  816c2414d1140000     sub dword ptr [esp + 0x14], 0x14d1
// 0057f170  8908                 mov dword ptr [eax], ecx
// 0057f172  899000f8ffff         mov dword ptr [eax - 0x800], edx
// 0057f178  89b000fcffff         mov dword ptr [eax - 0x400], esi
// 0057f17e  89b800040000         mov dword ptr [eax + 0x400], edi
// 0057f184  899800080000         mov dword ptr [eax + 0x800], ebx
// 0057f18a  89a800140000         mov dword ptr [eax + 0x1400], ebp
// 0057f190  81c12f1d0000         add ecx, 0x1d2f
// 0057f196  81c28b4c0000         add edx, 0x4c8b
// 0057f19c  83c004               add eax, 4
// 0057f19f  81c646960000         add esi, 0x9646
// 0057f1a5  81ef332b0000         sub edi, 0x2b33
// 0057f1ab  81ebcd540000         sub ebx, 0x54cd
// 0057f1b1  81f9d1911d00         cmp ecx, 0x1d91d1
// 0057f1b7  7e87                 jle 0x57f140
// 0057f1b9  5f                   pop edi
// 0057f1ba  5e                   pop esi
// 0057f1bb  5d                   pop ebp
// 0057f1bc  5b                   pop ebx
// 0057f1bd  83c408               add esp, 8
// 0057f1c0  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_start)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
