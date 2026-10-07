// roc 2009-06 0059b1a0  unit: seg_00590000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059b1a0
//
// 0059b1a0  53                   push ebx
// 0059b1a1  55                   push ebp
// 0059b1a2  56                   push esi
// 0059b1a3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059b1a7  8b4604               mov eax, dword ptr [esi + 4]
// 0059b1aa  8b08                 mov ecx, dword ptr [eax]
// 0059b1ac  6a50                 push 0x50
// 0059b1ae  6a01                 push 1
// 0059b1b0  56                   push esi
// 0059b1b1  ffd1                 call ecx
// 0059b1b3  8bd8                 mov ebx, eax
// 0059b1b5  83c40c               add esp, 0xc
// 0059b1b8  807c241400           cmp byte ptr [esp + 0x14], 0
// 0059b1bd  899e84010000         mov dword ptr [esi + 0x184], ebx
// 0059b1c3  c70320b15900         mov dword ptr [ebx], 0x59b120
// 0059b1c9  7413                 je 0x59b1de
// 0059b1cb  8b16                 mov edx, dword ptr [esi]
// 0059b1cd  c7421404000000       mov dword ptr [edx + 0x14], 4
// 0059b1d4  8b06                 mov eax, dword ptr [esi]
// 0059b1d6  8b08                 mov ecx, dword ptr [eax]
// 0059b1d8  56                   push esi
// 0059b1d9  ffd1                 call ecx
// 0059b1db  83c404               add esp, 4
// 0059b1de  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 0059b1e4  807a0800             cmp byte ptr [edx + 8], 0
// 0059b1e8  742c                 je 0x59b216
// 0059b1ea  83be1801000002       cmp dword ptr [esi + 0x118], 2
// 0059b1f1  7d13                 jge 0x59b206
// 0059b1f3  8b06                 mov eax, dword ptr [esi]
// 0059b1f5  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 0059b1fc  8b0e                 mov ecx, dword ptr [esi]
// 0059b1fe  8b11                 mov edx, dword ptr [ecx]
// 0059b200  56                   push esi
// 0059b201  ffd2                 call edx
// 0059b203  83c404               add esp, 4
// 0059b206  e8c5f9ffff           call 0x59abd0
// 0059b20b  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0059b211  83c002               add eax, 2
// 0059b214  eb06                 jmp 0x59b21c
// 0059b216  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0059b21c  33ed                 xor ebp, ebp
// 0059b21e  396e24               cmp dword ptr [esi + 0x24], ebp
// 0059b221  89442414             mov dword ptr [esp + 0x14], eax
// 0059b225  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0059b22b  7e40                 jle 0x59b26d
// 0059b22d  57                   push edi
// 0059b22e  8d7824               lea edi, [eax + 0x24]
// 0059b231  83c308               add ebx, 8
// 0059b234  8b0f                 mov ecx, dword ptr [edi]
// 0059b236  8b47e8               mov eax, dword ptr [edi - 0x18]
// 0059b239  0fafc1               imul eax, ecx
// 0059b23c  99                   cdq 
// 0059b23d  f7be18010000         idiv dword ptr [esi + 0x118]
// 0059b243  8b5604               mov edx, dword ptr [esi + 4]
// 0059b246  0faf442418           imul eax, dword ptr [esp + 0x18]
// 0059b24b  50                   push eax
// 0059b24c  8b47f8               mov eax, dword ptr [edi - 8]
// 0059b24f  0fafc1               imul eax, ecx
// 0059b252  8b4a08               mov ecx, dword ptr [edx + 8]
// 0059b255  50                   push eax
// 0059b256  6a01                 push 1
// 0059b258  56                   push esi
// 0059b259  ffd1                 call ecx
// 0059b25b  8903                 mov dword ptr [ebx], eax
// 0059b25d  45                   inc ebp
// 0059b25e  83c410               add esp, 0x10
// 0059b261  83c304               add ebx, 4
// 0059b264  83c754               add edi, 0x54
// 0059b267  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 0059b26a  7cc8                 jl 0x59b234
// 0059b26c  5f                   pop edi
// 0059b26d  5e                   pop esi
// 0059b26e  5d                   pop ebp
// 0059b26f  5b                   pop ebx
// 0059b270  c3                   ret 
// library jpeg-6b/jdmainct.c (function _jinit_d_main_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
