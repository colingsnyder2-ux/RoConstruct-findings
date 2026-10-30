// from server: 100% by auto
// roc 2012-06 0066a800  unit: seg_00660000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066a800
//
// 0066a800  83ec08               sub esp, 8
// 0066a803  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066a807  8b4804               mov ecx, dword ptr [eax + 4]
// 0066a80a  8b11                 mov edx, dword ptr [ecx]
// 0066a80c  53                   push ebx
// 0066a80d  55                   push ebp
// 0066a80e  56                   push esi
// 0066a80f  8bb050010000         mov esi, dword ptr [eax + 0x150]
// 0066a815  57                   push edi
// 0066a816  6800200000           push 0x2000
// 0066a81b  6a01                 push 1
// 0066a81d  50                   push eax
// 0066a81e  ffd2                 call edx
// 0066a820  33d2                 xor edx, edx
// 0066a822  894608               mov dword ptr [esi + 8], eax
// 0066a825  83c40c               add esp, 0xc
// 0066a828  33db                 xor ebx, ebx
// 0066a82a  33ff                 xor edi, edi
// 0066a82c  33f6                 xor esi, esi
// 0066a82e  89542414             mov dword ptr [esp + 0x14], edx
// 0066a832  89542410             mov dword ptr [esp + 0x10], edx
// 0066a836  c744241cff7f8000     mov dword ptr [esp + 0x1c], 0x807fff
// 0066a83e  b900800000           mov ecx, 0x8000
// 0066a843  0500080000           add eax, 0x800
// 0066a848  eb06                 jmp 0x66a850
// 0066a84a  8d9b00000000         lea ebx, [ebx]
// 0066a850  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0066a854  8144241c00800000     add dword ptr [esp + 0x1c], 0x8000
// 0066a85c  89a8000c0000         mov dword ptr [eax + 0xc00], ebp
// 0066a862  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0066a866  816c24102f6b0000     sub dword ptr [esp + 0x10], 0x6b2f
// 0066a86e  89a800100000         mov dword ptr [eax + 0x1000], ebp
// 0066a874  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0066a878  816c2414d1140000     sub dword ptr [esp + 0x14], 0x14d1
// 0066a880  8908                 mov dword ptr [eax], ecx
// 0066a882  899000f8ffff         mov dword ptr [eax - 0x800], edx
// 0066a888  89b000fcffff         mov dword ptr [eax - 0x400], esi
// 0066a88e  89b800040000         mov dword ptr [eax + 0x400], edi
// 0066a894  899800080000         mov dword ptr [eax + 0x800], ebx
// 0066a89a  89a800140000         mov dword ptr [eax + 0x1400], ebp
// 0066a8a0  81c12f1d0000         add ecx, 0x1d2f
// 0066a8a6  81c28b4c0000         add edx, 0x4c8b
// 0066a8ac  83c004               add eax, 4
// 0066a8af  81c646960000         add esi, 0x9646
// 0066a8b5  81ef332b0000         sub edi, 0x2b33
// 0066a8bb  81ebcd540000         sub ebx, 0x54cd
// 0066a8c1  81f9d1911d00         cmp ecx, 0x1d91d1
// 0066a8c7  7e87                 jle 0x66a850
// 0066a8c9  5f                   pop edi
// 0066a8ca  5e                   pop esi
// 0066a8cb  5d                   pop ebp
// 0066a8cc  5b                   pop ebx
// 0066a8cd  83c408               add esp, 8
// 0066a8d0  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_start)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
