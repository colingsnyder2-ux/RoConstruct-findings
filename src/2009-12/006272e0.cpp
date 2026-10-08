// roc 2009-12 006272e0  unit: seg_00620000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006272e0
//
// 006272e0  83ec08               sub esp, 8
// 006272e3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006272e7  8b4804               mov ecx, dword ptr [eax + 4]
// 006272ea  8b11                 mov edx, dword ptr [ecx]
// 006272ec  53                   push ebx
// 006272ed  55                   push ebp
// 006272ee  56                   push esi
// 006272ef  8bb050010000         mov esi, dword ptr [eax + 0x150]
// 006272f5  57                   push edi
// 006272f6  6800200000           push 0x2000
// 006272fb  6a01                 push 1
// 006272fd  50                   push eax
// 006272fe  ffd2                 call edx
// 00627300  33d2                 xor edx, edx
// 00627302  894608               mov dword ptr [esi + 8], eax
// 00627305  83c40c               add esp, 0xc
// 00627308  33db                 xor ebx, ebx
// 0062730a  33ff                 xor edi, edi
// 0062730c  33f6                 xor esi, esi
// 0062730e  89542414             mov dword ptr [esp + 0x14], edx
// 00627312  89542410             mov dword ptr [esp + 0x10], edx
// 00627316  c744241cff7f8000     mov dword ptr [esp + 0x1c], 0x807fff
// 0062731e  b900800000           mov ecx, 0x8000
// 00627323  0500080000           add eax, 0x800
// 00627328  eb06                 jmp 0x627330
// 0062732a  8d9b00000000         lea ebx, [ebx]
// 00627330  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00627334  8144241c00800000     add dword ptr [esp + 0x1c], 0x8000
// 0062733c  89a8000c0000         mov dword ptr [eax + 0xc00], ebp
// 00627342  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00627346  816c24102f6b0000     sub dword ptr [esp + 0x10], 0x6b2f
// 0062734e  89a800100000         mov dword ptr [eax + 0x1000], ebp
// 00627354  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00627358  816c2414d1140000     sub dword ptr [esp + 0x14], 0x14d1
// 00627360  8908                 mov dword ptr [eax], ecx
// 00627362  899000f8ffff         mov dword ptr [eax - 0x800], edx
// 00627368  89b000fcffff         mov dword ptr [eax - 0x400], esi
// 0062736e  89b800040000         mov dword ptr [eax + 0x400], edi
// 00627374  899800080000         mov dword ptr [eax + 0x800], ebx
// 0062737a  89a800140000         mov dword ptr [eax + 0x1400], ebp
// 00627380  81c12f1d0000         add ecx, 0x1d2f
// 00627386  81c28b4c0000         add edx, 0x4c8b
// 0062738c  83c004               add eax, 4
// 0062738f  81c646960000         add esi, 0x9646
// 00627395  81ef332b0000         sub edi, 0x2b33
// 0062739b  81ebcd540000         sub ebx, 0x54cd
// 006273a1  81f9d1911d00         cmp ecx, 0x1d91d1
// 006273a7  7e87                 jle 0x627330
// 006273a9  5f                   pop edi
// 006273aa  5e                   pop esi
// 006273ab  5d                   pop ebp
// 006273ac  5b                   pop ebx
// 006273ad  83c408               add esp, 8
// 006273b0  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_start)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
