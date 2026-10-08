// roc 2007-03 00529de0  unit: seg_00520000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00529de0
//
// 00529de0  83ec08               sub esp, 8
// 00529de3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00529de7  8b4804               mov ecx, dword ptr [eax + 4]
// 00529dea  8b11                 mov edx, dword ptr [ecx]
// 00529dec  53                   push ebx
// 00529ded  55                   push ebp
// 00529dee  56                   push esi
// 00529def  8bb050010000         mov esi, dword ptr [eax + 0x150]
// 00529df5  57                   push edi
// 00529df6  6800200000           push 0x2000
// 00529dfb  6a01                 push 1
// 00529dfd  50                   push eax
// 00529dfe  ffd2                 call edx
// 00529e00  33d2                 xor edx, edx
// 00529e02  894608               mov dword ptr [esi + 8], eax
// 00529e05  83c40c               add esp, 0xc
// 00529e08  33db                 xor ebx, ebx
// 00529e0a  33ff                 xor edi, edi
// 00529e0c  33f6                 xor esi, esi
// 00529e0e  89542414             mov dword ptr [esp + 0x14], edx
// 00529e12  89542410             mov dword ptr [esp + 0x10], edx
// 00529e16  c744241cff7f8000     mov dword ptr [esp + 0x1c], 0x807fff
// 00529e1e  b900800000           mov ecx, 0x8000
// 00529e23  0500080000           add eax, 0x800
// 00529e28  eb06                 jmp 0x529e30
// 00529e2a  8d9b00000000         lea ebx, [ebx]
// 00529e30  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00529e34  8144241c00800000     add dword ptr [esp + 0x1c], 0x8000
// 00529e3c  89a8000c0000         mov dword ptr [eax + 0xc00], ebp
// 00529e42  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00529e46  816c24102f6b0000     sub dword ptr [esp + 0x10], 0x6b2f
// 00529e4e  89a800100000         mov dword ptr [eax + 0x1000], ebp
// 00529e54  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00529e58  816c2414d1140000     sub dword ptr [esp + 0x14], 0x14d1
// 00529e60  8908                 mov dword ptr [eax], ecx
// 00529e62  899000f8ffff         mov dword ptr [eax - 0x800], edx
// 00529e68  89b000fcffff         mov dword ptr [eax - 0x400], esi
// 00529e6e  89b800040000         mov dword ptr [eax + 0x400], edi
// 00529e74  899800080000         mov dword ptr [eax + 0x800], ebx
// 00529e7a  89a800140000         mov dword ptr [eax + 0x1400], ebp
// 00529e80  81c12f1d0000         add ecx, 0x1d2f
// 00529e86  81c28b4c0000         add edx, 0x4c8b
// 00529e8c  83c004               add eax, 4
// 00529e8f  81c646960000         add esi, 0x9646
// 00529e95  81ef332b0000         sub edi, 0x2b33
// 00529e9b  81ebcd540000         sub ebx, 0x54cd
// 00529ea1  81f9d1911d00         cmp ecx, 0x1d91d1
// 00529ea7  7e87                 jle 0x529e30
// 00529ea9  5f                   pop edi
// 00529eaa  5e                   pop esi
// 00529eab  5d                   pop ebp
// 00529eac  5b                   pop ebx
// 00529ead  83c408               add esp, 8
// 00529eb0  c3                   ret 
// library jpeg-6b/jccolor.c (function _rgb_ycc_start)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
