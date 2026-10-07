// roc 2010-06 0057ed30  unit: seg_00570000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057ed30
//
// 0057ed30  53                   push ebx
// 0057ed31  55                   push ebp
// 0057ed32  56                   push esi
// 0057ed33  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057ed37  8b4604               mov eax, dword ptr [esi + 4]
// 0057ed3a  8b08                 mov ecx, dword ptr [eax]
// 0057ed3c  6a50                 push 0x50
// 0057ed3e  6a01                 push 1
// 0057ed40  56                   push esi
// 0057ed41  ffd1                 call ecx
// 0057ed43  8bd8                 mov ebx, eax
// 0057ed45  83c40c               add esp, 0xc
// 0057ed48  807c241400           cmp byte ptr [esp + 0x14], 0
// 0057ed4d  899e84010000         mov dword ptr [esi + 0x184], ebx
// 0057ed53  c703b0ec5700         mov dword ptr [ebx], 0x57ecb0
// 0057ed59  7413                 je 0x57ed6e
// 0057ed5b  8b16                 mov edx, dword ptr [esi]
// 0057ed5d  c7421404000000       mov dword ptr [edx + 0x14], 4
// 0057ed64  8b06                 mov eax, dword ptr [esi]
// 0057ed66  8b08                 mov ecx, dword ptr [eax]
// 0057ed68  56                   push esi
// 0057ed69  ffd1                 call ecx
// 0057ed6b  83c404               add esp, 4
// 0057ed6e  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 0057ed74  807a0800             cmp byte ptr [edx + 8], 0
// 0057ed78  742c                 je 0x57eda6
// 0057ed7a  83be1801000002       cmp dword ptr [esi + 0x118], 2
// 0057ed81  7d13                 jge 0x57ed96
// 0057ed83  8b06                 mov eax, dword ptr [esi]
// 0057ed85  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 0057ed8c  8b0e                 mov ecx, dword ptr [esi]
// 0057ed8e  8b11                 mov edx, dword ptr [ecx]
// 0057ed90  56                   push esi
// 0057ed91  ffd2                 call edx
// 0057ed93  83c404               add esp, 4
// 0057ed96  e8c5f9ffff           call 0x57e760
// 0057ed9b  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0057eda1  83c002               add eax, 2
// 0057eda4  eb06                 jmp 0x57edac
// 0057eda6  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0057edac  33ed                 xor ebp, ebp
// 0057edae  396e24               cmp dword ptr [esi + 0x24], ebp
// 0057edb1  89442414             mov dword ptr [esp + 0x14], eax
// 0057edb5  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0057edbb  7e40                 jle 0x57edfd
// 0057edbd  57                   push edi
// 0057edbe  8d7824               lea edi, [eax + 0x24]
// 0057edc1  83c308               add ebx, 8
// 0057edc4  8b0f                 mov ecx, dword ptr [edi]
// 0057edc6  8b47e8               mov eax, dword ptr [edi - 0x18]
// 0057edc9  0fafc1               imul eax, ecx
// 0057edcc  99                   cdq 
// 0057edcd  f7be18010000         idiv dword ptr [esi + 0x118]
// 0057edd3  8b5604               mov edx, dword ptr [esi + 4]
// 0057edd6  0faf442418           imul eax, dword ptr [esp + 0x18]
// 0057eddb  50                   push eax
// 0057eddc  8b47f8               mov eax, dword ptr [edi - 8]
// 0057eddf  0fafc1               imul eax, ecx
// 0057ede2  8b4a08               mov ecx, dword ptr [edx + 8]
// 0057ede5  50                   push eax
// 0057ede6  6a01                 push 1
// 0057ede8  56                   push esi
// 0057ede9  ffd1                 call ecx
// 0057edeb  8903                 mov dword ptr [ebx], eax
// 0057eded  45                   inc ebp
// 0057edee  83c410               add esp, 0x10
// 0057edf1  83c304               add ebx, 4
// 0057edf4  83c754               add edi, 0x54
// 0057edf7  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 0057edfa  7cc8                 jl 0x57edc4
// 0057edfc  5f                   pop edi
// 0057edfd  5e                   pop esi
// 0057edfe  5d                   pop ebp
// 0057edff  5b                   pop ebx
// 0057ee00  c3                   ret 
// library jpeg-6b/jdmainct.c (function _jinit_d_main_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
