// from server: 100% by auto
// roc 2008-06 0053b050  unit: seg_00530000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053b050
//
// 0053b050  83ec08               sub esp, 8
// 0053b053  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053b057  8b4804               mov ecx, dword ptr [eax + 4]
// 0053b05a  8b11                 mov edx, dword ptr [ecx]
// 0053b05c  53                   push ebx
// 0053b05d  55                   push ebp
// 0053b05e  56                   push esi
// 0053b05f  8bb050010000         mov esi, dword ptr [eax + 0x150]
// 0053b065  57                   push edi
// 0053b066  6800200000           push 0x2000
// 0053b06b  6a01                 push 1
// 0053b06d  50                   push eax
// 0053b06e  ffd2                 call edx
// 0053b070  33d2                 xor edx, edx
// 0053b072  894608               mov dword ptr [esi + 8], eax
// 0053b075  83c40c               add esp, 0xc
// 0053b078  33db                 xor ebx, ebx
// 0053b07a  33ff                 xor edi, edi
// 0053b07c  33f6                 xor esi, esi
// 0053b07e  89542414             mov dword ptr [esp + 0x14], edx
// 0053b082  89542410             mov dword ptr [esp + 0x10], edx
// 0053b086  c744241cff7f8000     mov dword ptr [esp + 0x1c], 0x807fff
// 0053b08e  b900800000           mov ecx, 0x8000
// 0053b093  0500080000           add eax, 0x800
// 0053b098  eb06                 jmp 0x53b0a0
// 0053b09a  8d9b00000000         lea ebx, [ebx]
// 0053b0a0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0053b0a4  8144241c00800000     add dword ptr [esp + 0x1c], 0x8000
// 0053b0ac  89a8000c0000         mov dword ptr [eax + 0xc00], ebp
// 0053b0b2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0053b0b6  816c24102f6b0000     sub dword ptr [esp + 0x10], 0x6b2f
// 0053b0be  89a800100000         mov dword ptr [eax + 0x1000], ebp
// 0053b0c4  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0053b0c8  816c2414d1140000     sub dword ptr [esp + 0x14], 0x14d1
// 0053b0d0  8908                 mov dword ptr [eax], ecx
// 0053b0d2  899000f8ffff         mov dword ptr [eax - 0x800], edx
// 0053b0d8  89b000fcffff         mov dword ptr [eax - 0x400], esi
// 0053b0de  89b800040000         mov dword ptr [eax + 0x400], edi
// 0053b0e4  899800080000         mov dword ptr [eax + 0x800], ebx
// 0053b0ea  89a800140000         mov dword ptr [eax + 0x1400], ebp
// 0053b0f0  81c12f1d0000         add ecx, 0x1d2f
// 0053b0f6  81c28b4c0000         add edx, 0x4c8b
// 0053b0fc  83c004               add eax, 4
// 0053b0ff  81c646960000         add esi, 0x9646
// 0053b105  81ef332b0000         sub edi, 0x2b33
// 0053b10b  81ebcd540000         sub ebx, 0x54cd
// 0053b111  81f9d1911d00         cmp ecx, 0x1d91d1
// 0053b117  7e87                 jle 0x53b0a0
// 0053b119  5f                   pop edi
// 0053b11a  5e                   pop esi
// 0053b11b  5d                   pop ebp
// 0053b11c  5b                   pop ebx
// 0053b11d  83c408               add esp, 8
// 0053b120  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_start)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
