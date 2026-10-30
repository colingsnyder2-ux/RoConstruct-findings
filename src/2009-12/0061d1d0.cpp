// roc 2009-12 0061d1d0  unit: seg_00610000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061d1d0
//
// 0061d1d0  53                   push ebx
// 0061d1d1  55                   push ebp
// 0061d1d2  56                   push esi
// 0061d1d3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061d1d7  8b4604               mov eax, dword ptr [esi + 4]
// 0061d1da  8b08                 mov ecx, dword ptr [eax]
// 0061d1dc  6a50                 push 0x50
// 0061d1de  6a01                 push 1
// 0061d1e0  56                   push esi
// 0061d1e1  ffd1                 call ecx
// 0061d1e3  8bd8                 mov ebx, eax
// 0061d1e5  83c40c               add esp, 0xc
// 0061d1e8  807c241400           cmp byte ptr [esp + 0x14], 0
// 0061d1ed  899e84010000         mov dword ptr [esi + 0x184], ebx
// 0061d1f3  c70350d16100         mov dword ptr [ebx], 0x61d150
// 0061d1f9  7413                 je 0x61d20e
// 0061d1fb  8b16                 mov edx, dword ptr [esi]
// 0061d1fd  c7421404000000       mov dword ptr [edx + 0x14], 4
// 0061d204  8b06                 mov eax, dword ptr [esi]
// 0061d206  8b08                 mov ecx, dword ptr [eax]
// 0061d208  56                   push esi
// 0061d209  ffd1                 call ecx
// 0061d20b  83c404               add esp, 4
// 0061d20e  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 0061d214  807a0800             cmp byte ptr [edx + 8], 0
// 0061d218  742c                 je 0x61d246
// 0061d21a  83be1801000002       cmp dword ptr [esi + 0x118], 2
// 0061d221  7d13                 jge 0x61d236
// 0061d223  8b06                 mov eax, dword ptr [esi]
// 0061d225  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 0061d22c  8b0e                 mov ecx, dword ptr [esi]
// 0061d22e  8b11                 mov edx, dword ptr [ecx]
// 0061d230  56                   push esi
// 0061d231  ffd2                 call edx
// 0061d233  83c404               add esp, 4
// 0061d236  e8c5f9ffff           call 0x61cc00
// 0061d23b  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0061d241  83c002               add eax, 2
// 0061d244  eb06                 jmp 0x61d24c
// 0061d246  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0061d24c  33ed                 xor ebp, ebp
// 0061d24e  396e24               cmp dword ptr [esi + 0x24], ebp
// 0061d251  89442414             mov dword ptr [esp + 0x14], eax
// 0061d255  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0061d25b  7e40                 jle 0x61d29d
// 0061d25d  57                   push edi
// 0061d25e  8d7824               lea edi, [eax + 0x24]
// 0061d261  83c308               add ebx, 8
// 0061d264  8b0f                 mov ecx, dword ptr [edi]
// 0061d266  8b47e8               mov eax, dword ptr [edi - 0x18]
// 0061d269  0fafc1               imul eax, ecx
// 0061d26c  99                   cdq 
// 0061d26d  f7be18010000         idiv dword ptr [esi + 0x118]
// 0061d273  8b5604               mov edx, dword ptr [esi + 4]
// 0061d276  0faf442418           imul eax, dword ptr [esp + 0x18]
// 0061d27b  50                   push eax
// 0061d27c  8b47f8               mov eax, dword ptr [edi - 8]
// 0061d27f  0fafc1               imul eax, ecx
// 0061d282  8b4a08               mov ecx, dword ptr [edx + 8]
// 0061d285  50                   push eax
// 0061d286  6a01                 push 1
// 0061d288  56                   push esi
// 0061d289  ffd1                 call ecx
// 0061d28b  8903                 mov dword ptr [ebx], eax
// 0061d28d  45                   inc ebp
// 0061d28e  83c410               add esp, 0x10
// 0061d291  83c304               add ebx, 4
// 0061d294  83c754               add edi, 0x54
// 0061d297  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 0061d29a  7cc8                 jl 0x61d264
// 0061d29c  5f                   pop edi
// 0061d29d  5e                   pop esi
// 0061d29e  5d                   pop ebp
// 0061d29f  5b                   pop ebx
// 0061d2a0  c3                   ret 
// library jpeg-6b/jdmainct.c (function _jinit_d_main_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
