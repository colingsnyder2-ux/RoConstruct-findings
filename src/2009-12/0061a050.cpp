// roc 2009-12 0061a050  unit: seg_00610000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061a050
//
// 0061a050  51                   push ecx
// 0061a051  53                   push ebx
// 0061a052  56                   push esi
// 0061a053  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061a057  8b4644               mov eax, dword ptr [esi + 0x44]
// 0061a05a  33db                 xor ebx, ebx
// 0061a05c  57                   push edi
// 0061a05d  33ff                 xor edi, edi
// 0061a05f  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0061a062  895c240c             mov dword ptr [esp + 0xc], ebx
// 0061a066  7e26                 jle 0x61a08e
// 0061a068  55                   push ebp
// 0061a069  8d6810               lea ebp, [eax + 0x10]
// 0061a06c  8d642400             lea esp, [esp]
// 0061a070  8b4500               mov eax, dword ptr [ebp]
// 0061a073  50                   push eax
// 0061a074  8bc6                 mov eax, esi
// 0061a076  e825f5ffff           call 0x6195a0
// 0061a07b  47                   inc edi
// 0061a07c  83c404               add esp, 4
// 0061a07f  03d8                 add ebx, eax
// 0061a081  83c554               add ebp, 0x54
// 0061a084  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 0061a087  7ce7                 jl 0x61a070
// 0061a089  895c2410             mov dword ptr [esp + 0x10], ebx
// 0061a08d  5d                   pop ebp
// 0061a08e  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0061a095  7558                 jne 0x61a0ef
// 0061a097  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0061a09e  754f                 jne 0x61a0ef
// 0061a0a0  837e3808             cmp dword ptr [esi + 0x38], 8
// 0061a0a4  7549                 jne 0x61a0ef
// 0061a0a6  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0061a0a9  8b4644               mov eax, dword ptr [esi + 0x44]
// 0061a0ac  b301                 mov bl, 1
// 0061a0ae  85c9                 test ecx, ecx
// 0061a0b0  7e18                 jle 0x61a0ca
// 0061a0b2  83c018               add eax, 0x18
// 0061a0b5  8378fc01             cmp dword ptr [eax - 4], 1
// 0061a0b9  7f05                 jg 0x61a0c0
// 0061a0bb  833801               cmp dword ptr [eax], 1
// 0061a0be  7e02                 jle 0x61a0c2
// 0061a0c0  32db                 xor bl, bl
// 0061a0c2  83c054               add eax, 0x54
// 0061a0c5  83e901               sub ecx, 1
// 0061a0c8  75eb                 jne 0x61a0b5
// 0061a0ca  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0061a0cf  7420                 je 0x61a0f1
// 0061a0d1  84db                 test bl, bl
// 0061a0d3  741c                 je 0x61a0f1
// 0061a0d5  8b0e                 mov ecx, dword ptr [esi]
// 0061a0d7  c741144b000000       mov dword ptr [ecx + 0x14], 0x4b
// 0061a0de  8b16                 mov edx, dword ptr [esi]
// 0061a0e0  8b4204               mov eax, dword ptr [edx + 4]
// 0061a0e3  6a00                 push 0
// 0061a0e5  56                   push esi
// 0061a0e6  32db                 xor bl, bl
// 0061a0e8  ffd0                 call eax
// 0061a0ea  83c408               add esp, 8
// 0061a0ed  eb02                 jmp 0x61a0f1
// 0061a0ef  32db                 xor bl, bl
// 0061a0f1  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0061a0f8  8bce                 mov ecx, esi
// 0061a0fa  5f                   pop edi
// 0061a0fb  740f                 je 0x61a10c
// 0061a0fd  5e                   pop esi
// 0061a0fe  b8c9000000           mov eax, 0xc9
// 0061a103  5b                   pop ebx
// 0061a104  83c404               add esp, 4
// 0061a107  e9e4f7ffff           jmp 0x6198f0
// 0061a10c  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0061a113  5e                   pop esi
// 0061a114  740e                 je 0x61a124
// 0061a116  b8c2000000           mov eax, 0xc2
// 0061a11b  5b                   pop ebx
// 0061a11c  83c404               add esp, 4
// 0061a11f  e9ccf7ffff           jmp 0x6198f0
// 0061a124  84db                 test bl, bl
// 0061a126  5b                   pop ebx
// 0061a127  740d                 je 0x61a136
// 0061a129  b8c0000000           mov eax, 0xc0
// 0061a12e  83c404               add esp, 4
// 0061a131  e9baf7ffff           jmp 0x6198f0
// 0061a136  b8c1000000           mov eax, 0xc1
// 0061a13b  83c404               add esp, 4
// 0061a13e  e9adf7ffff           jmp 0x6198f0
// library jpeg-6b/jcmarker.c (function _write_frame_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
