// roc 2010-06 00588e40  unit: seg_00580000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00588e40
//
// 00588e40  83ec08               sub esp, 8
// 00588e43  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00588e47  8b4804               mov ecx, dword ptr [eax + 4]
// 00588e4a  8b11                 mov edx, dword ptr [ecx]
// 00588e4c  53                   push ebx
// 00588e4d  55                   push ebp
// 00588e4e  56                   push esi
// 00588e4f  8bb050010000         mov esi, dword ptr [eax + 0x150]
// 00588e55  57                   push edi
// 00588e56  6800200000           push 0x2000
// 00588e5b  6a01                 push 1
// 00588e5d  50                   push eax
// 00588e5e  ffd2                 call edx
// 00588e60  33d2                 xor edx, edx
// 00588e62  894608               mov dword ptr [esi + 8], eax
// 00588e65  83c40c               add esp, 0xc
// 00588e68  33db                 xor ebx, ebx
// 00588e6a  33ff                 xor edi, edi
// 00588e6c  33f6                 xor esi, esi
// 00588e6e  89542414             mov dword ptr [esp + 0x14], edx
// 00588e72  89542410             mov dword ptr [esp + 0x10], edx
// 00588e76  c744241cff7f8000     mov dword ptr [esp + 0x1c], 0x807fff
// 00588e7e  b900800000           mov ecx, 0x8000
// 00588e83  0500080000           add eax, 0x800
// 00588e88  eb06                 jmp 0x588e90
// 00588e8a  8d9b00000000         lea ebx, [ebx]
// 00588e90  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00588e94  8144241c00800000     add dword ptr [esp + 0x1c], 0x8000
// 00588e9c  89a8000c0000         mov dword ptr [eax + 0xc00], ebp
// 00588ea2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00588ea6  816c24102f6b0000     sub dword ptr [esp + 0x10], 0x6b2f
// 00588eae  89a800100000         mov dword ptr [eax + 0x1000], ebp
// 00588eb4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00588eb8  816c2414d1140000     sub dword ptr [esp + 0x14], 0x14d1
// 00588ec0  8908                 mov dword ptr [eax], ecx
// 00588ec2  899000f8ffff         mov dword ptr [eax - 0x800], edx
// 00588ec8  89b000fcffff         mov dword ptr [eax - 0x400], esi
// 00588ece  89b800040000         mov dword ptr [eax + 0x400], edi
// 00588ed4  899800080000         mov dword ptr [eax + 0x800], ebx
// 00588eda  89a800140000         mov dword ptr [eax + 0x1400], ebp
// 00588ee0  81c12f1d0000         add ecx, 0x1d2f
// 00588ee6  81c28b4c0000         add edx, 0x4c8b
// 00588eec  83c004               add eax, 4
// 00588eef  81c646960000         add esi, 0x9646
// 00588ef5  81ef332b0000         sub edi, 0x2b33
// 00588efb  81ebcd540000         sub ebx, 0x54cd
// 00588f01  81f9d1911d00         cmp ecx, 0x1d91d1
// 00588f07  7e87                 jle 0x588e90
// 00588f09  5f                   pop edi
// 00588f0a  5e                   pop esi
// 00588f0b  5d                   pop ebp
// 00588f0c  5b                   pop ebx
// 00588f0d  83c408               add esp, 8
// 00588f10  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_start)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
