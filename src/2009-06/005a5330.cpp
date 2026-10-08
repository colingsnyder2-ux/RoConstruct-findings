// from server: 100% by auto
// roc 2009-06 005a5330  unit: seg_005a0000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a5330
//
// 005a5330  83ec08               sub esp, 8
// 005a5333  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a5337  8b4804               mov ecx, dword ptr [eax + 4]
// 005a533a  8b11                 mov edx, dword ptr [ecx]
// 005a533c  53                   push ebx
// 005a533d  55                   push ebp
// 005a533e  56                   push esi
// 005a533f  8bb050010000         mov esi, dword ptr [eax + 0x150]
// 005a5345  57                   push edi
// 005a5346  6800200000           push 0x2000
// 005a534b  6a01                 push 1
// 005a534d  50                   push eax
// 005a534e  ffd2                 call edx
// 005a5350  33d2                 xor edx, edx
// 005a5352  894608               mov dword ptr [esi + 8], eax
// 005a5355  83c40c               add esp, 0xc
// 005a5358  33db                 xor ebx, ebx
// 005a535a  33ff                 xor edi, edi
// 005a535c  33f6                 xor esi, esi
// 005a535e  89542414             mov dword ptr [esp + 0x14], edx
// 005a5362  89542410             mov dword ptr [esp + 0x10], edx
// 005a5366  c744241cff7f8000     mov dword ptr [esp + 0x1c], 0x807fff
// 005a536e  b900800000           mov ecx, 0x8000
// 005a5373  0500080000           add eax, 0x800
// 005a5378  eb06                 jmp 0x5a5380
// 005a537a  8d9b00000000         lea ebx, [ebx]
// 005a5380  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005a5384  8144241c00800000     add dword ptr [esp + 0x1c], 0x8000
// 005a538c  89a8000c0000         mov dword ptr [eax + 0xc00], ebp
// 005a5392  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005a5396  816c24102f6b0000     sub dword ptr [esp + 0x10], 0x6b2f
// 005a539e  89a800100000         mov dword ptr [eax + 0x1000], ebp
// 005a53a4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a53a8  816c2414d1140000     sub dword ptr [esp + 0x14], 0x14d1
// 005a53b0  8908                 mov dword ptr [eax], ecx
// 005a53b2  899000f8ffff         mov dword ptr [eax - 0x800], edx
// 005a53b8  89b000fcffff         mov dword ptr [eax - 0x400], esi
// 005a53be  89b800040000         mov dword ptr [eax + 0x400], edi
// 005a53c4  899800080000         mov dword ptr [eax + 0x800], ebx
// 005a53ca  89a800140000         mov dword ptr [eax + 0x1400], ebp
// 005a53d0  81c12f1d0000         add ecx, 0x1d2f
// 005a53d6  81c28b4c0000         add edx, 0x4c8b
// 005a53dc  83c004               add eax, 4
// 005a53df  81c646960000         add esi, 0x9646
// 005a53e5  81ef332b0000         sub edi, 0x2b33
// 005a53eb  81ebcd540000         sub ebx, 0x54cd
// 005a53f1  81f9d1911d00         cmp ecx, 0x1d91d1
// 005a53f7  7e87                 jle 0x5a5380
// 005a53f9  5f                   pop edi
// 005a53fa  5e                   pop esi
// 005a53fb  5d                   pop ebp
// 005a53fc  5b                   pop ebx
// 005a53fd  83c408               add esp, 8
// 005a5400  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_start)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
