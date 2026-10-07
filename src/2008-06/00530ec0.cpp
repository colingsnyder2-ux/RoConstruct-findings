// roc 2008-06 00530ec0  unit: seg_00530000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530ec0
//
// 00530ec0  53                   push ebx
// 00530ec1  55                   push ebp
// 00530ec2  56                   push esi
// 00530ec3  8b742410             mov esi, dword ptr [esp + 0x10]
// 00530ec7  8b4604               mov eax, dword ptr [esi + 4]
// 00530eca  8b08                 mov ecx, dword ptr [eax]
// 00530ecc  6a50                 push 0x50
// 00530ece  6a01                 push 1
// 00530ed0  56                   push esi
// 00530ed1  ffd1                 call ecx
// 00530ed3  8bd8                 mov ebx, eax
// 00530ed5  83c40c               add esp, 0xc
// 00530ed8  807c241400           cmp byte ptr [esp + 0x14], 0
// 00530edd  899e84010000         mov dword ptr [esi + 0x184], ebx
// 00530ee3  c703400e5300         mov dword ptr [ebx], 0x530e40
// 00530ee9  7413                 je 0x530efe
// 00530eeb  8b16                 mov edx, dword ptr [esi]
// 00530eed  c7421404000000       mov dword ptr [edx + 0x14], 4
// 00530ef4  8b06                 mov eax, dword ptr [esi]
// 00530ef6  8b08                 mov ecx, dword ptr [eax]
// 00530ef8  56                   push esi
// 00530ef9  ffd1                 call ecx
// 00530efb  83c404               add esp, 4
// 00530efe  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 00530f04  807a0800             cmp byte ptr [edx + 8], 0
// 00530f08  742c                 je 0x530f36
// 00530f0a  83be1801000002       cmp dword ptr [esi + 0x118], 2
// 00530f11  7d13                 jge 0x530f26
// 00530f13  8b06                 mov eax, dword ptr [esi]
// 00530f15  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 00530f1c  8b0e                 mov ecx, dword ptr [esi]
// 00530f1e  8b11                 mov edx, dword ptr [ecx]
// 00530f20  56                   push esi
// 00530f21  ffd2                 call edx
// 00530f23  83c404               add esp, 4
// 00530f26  e8c5f9ffff           call 0x5308f0
// 00530f2b  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00530f31  83c002               add eax, 2
// 00530f34  eb06                 jmp 0x530f3c
// 00530f36  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00530f3c  33ed                 xor ebp, ebp
// 00530f3e  396e24               cmp dword ptr [esi + 0x24], ebp
// 00530f41  89442414             mov dword ptr [esp + 0x14], eax
// 00530f45  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00530f4b  7e40                 jle 0x530f8d
// 00530f4d  57                   push edi
// 00530f4e  8d7824               lea edi, [eax + 0x24]
// 00530f51  83c308               add ebx, 8
// 00530f54  8b0f                 mov ecx, dword ptr [edi]
// 00530f56  8b47e8               mov eax, dword ptr [edi - 0x18]
// 00530f59  0fafc1               imul eax, ecx
// 00530f5c  99                   cdq 
// 00530f5d  f7be18010000         idiv dword ptr [esi + 0x118]
// 00530f63  8b5604               mov edx, dword ptr [esi + 4]
// 00530f66  0faf442418           imul eax, dword ptr [esp + 0x18]
// 00530f6b  50                   push eax
// 00530f6c  8b47f8               mov eax, dword ptr [edi - 8]
// 00530f6f  0fafc1               imul eax, ecx
// 00530f72  8b4a08               mov ecx, dword ptr [edx + 8]
// 00530f75  50                   push eax
// 00530f76  6a01                 push 1
// 00530f78  56                   push esi
// 00530f79  ffd1                 call ecx
// 00530f7b  8903                 mov dword ptr [ebx], eax
// 00530f7d  45                   inc ebp
// 00530f7e  83c410               add esp, 0x10
// 00530f81  83c304               add ebx, 4
// 00530f84  83c754               add edi, 0x54
// 00530f87  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 00530f8a  7cc8                 jl 0x530f54
// 00530f8c  5f                   pop edi
// 00530f8d  5e                   pop esi
// 00530f8e  5d                   pop ebp
// 00530f8f  5b                   pop ebx
// 00530f90  c3                   ret 
// library jpeg-6b/jdmainct.c (function _jinit_d_main_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
