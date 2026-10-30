// roc 2007-03 0051f910  unit: seg_00510000  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051f910
//
// 0051f910  53                   push ebx
// 0051f911  55                   push ebp
// 0051f912  56                   push esi
// 0051f913  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051f917  8b4604               mov eax, dword ptr [esi + 4]
// 0051f91a  8b08                 mov ecx, dword ptr [eax]
// 0051f91c  6a50                 push 0x50
// 0051f91e  6a01                 push 1
// 0051f920  56                   push esi
// 0051f921  ffd1                 call ecx
// 0051f923  8bd8                 mov ebx, eax
// 0051f925  83c40c               add esp, 0xc
// 0051f928  807c241400           cmp byte ptr [esp + 0x14], 0
// 0051f92d  899e84010000         mov dword ptr [esi + 0x184], ebx
// 0051f933  c70390f85100         mov dword ptr [ebx], 0x51f890
// 0051f939  7413                 je 0x51f94e
// 0051f93b  8b16                 mov edx, dword ptr [esi]
// 0051f93d  c7421404000000       mov dword ptr [edx + 0x14], 4
// 0051f944  8b06                 mov eax, dword ptr [esi]
// 0051f946  8b08                 mov ecx, dword ptr [eax]
// 0051f948  56                   push esi
// 0051f949  ffd1                 call ecx
// 0051f94b  83c404               add esp, 4
// 0051f94e  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 0051f954  807a0800             cmp byte ptr [edx + 8], 0
// 0051f958  742c                 je 0x51f986
// 0051f95a  83be1801000002       cmp dword ptr [esi + 0x118], 2
// 0051f961  7d13                 jge 0x51f976
// 0051f963  8b06                 mov eax, dword ptr [esi]
// 0051f965  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 0051f96c  8b0e                 mov ecx, dword ptr [esi]
// 0051f96e  8b11                 mov edx, dword ptr [ecx]
// 0051f970  56                   push esi
// 0051f971  ffd2                 call edx
// 0051f973  83c404               add esp, 4
// 0051f976  e8a5f9ffff           call 0x51f320
// 0051f97b  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0051f981  83c002               add eax, 2
// 0051f984  eb06                 jmp 0x51f98c
// 0051f986  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0051f98c  33ed                 xor ebp, ebp
// 0051f98e  396e24               cmp dword ptr [esi + 0x24], ebp
// 0051f991  89442414             mov dword ptr [esp + 0x14], eax
// 0051f995  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0051f99b  7e42                 jle 0x51f9df
// 0051f99d  57                   push edi
// 0051f99e  8d7824               lea edi, [eax + 0x24]
// 0051f9a1  83c308               add ebx, 8
// 0051f9a4  8b0f                 mov ecx, dword ptr [edi]
// 0051f9a6  8b47e8               mov eax, dword ptr [edi - 0x18]
// 0051f9a9  0fafc1               imul eax, ecx
// 0051f9ac  99                   cdq 
// 0051f9ad  f7be18010000         idiv dword ptr [esi + 0x118]
// 0051f9b3  8b5604               mov edx, dword ptr [esi + 4]
// 0051f9b6  0faf442418           imul eax, dword ptr [esp + 0x18]
// 0051f9bb  50                   push eax
// 0051f9bc  8b47f8               mov eax, dword ptr [edi - 8]
// 0051f9bf  0fafc1               imul eax, ecx
// 0051f9c2  8b4a08               mov ecx, dword ptr [edx + 8]
// 0051f9c5  50                   push eax
// 0051f9c6  6a01                 push 1
// 0051f9c8  56                   push esi
// 0051f9c9  ffd1                 call ecx
// 0051f9cb  8903                 mov dword ptr [ebx], eax
// 0051f9cd  83c501               add ebp, 1
// 0051f9d0  83c410               add esp, 0x10
// 0051f9d3  83c304               add ebx, 4
// 0051f9d6  83c754               add edi, 0x54
// 0051f9d9  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 0051f9dc  7cc6                 jl 0x51f9a4
// 0051f9de  5f                   pop edi
// 0051f9df  5e                   pop esi
// 0051f9e0  5d                   pop ebp
// 0051f9e1  5b                   pop ebx
// 0051f9e2  c3                   ret 
// library jpeg-6b/jdmainct.c (function _jinit_d_main_controller)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
