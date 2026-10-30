// from server: 100% by auto
// roc 2012-06 006606f0  unit: seg_00660000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006606f0
//
// 006606f0  53                   push ebx
// 006606f1  55                   push ebp
// 006606f2  56                   push esi
// 006606f3  8b742410             mov esi, dword ptr [esp + 0x10]
// 006606f7  8b4604               mov eax, dword ptr [esi + 4]
// 006606fa  8b08                 mov ecx, dword ptr [eax]
// 006606fc  6a50                 push 0x50
// 006606fe  6a01                 push 1
// 00660700  56                   push esi
// 00660701  ffd1                 call ecx
// 00660703  8bd8                 mov ebx, eax
// 00660705  83c40c               add esp, 0xc
// 00660708  807c241400           cmp byte ptr [esp + 0x14], 0
// 0066070d  899e84010000         mov dword ptr [esi + 0x184], ebx
// 00660713  c70370066600         mov dword ptr [ebx], 0x660670
// 00660719  7413                 je 0x66072e
// 0066071b  8b16                 mov edx, dword ptr [esi]
// 0066071d  c7421404000000       mov dword ptr [edx + 0x14], 4
// 00660724  8b06                 mov eax, dword ptr [esi]
// 00660726  8b08                 mov ecx, dword ptr [eax]
// 00660728  56                   push esi
// 00660729  ffd1                 call ecx
// 0066072b  83c404               add esp, 4
// 0066072e  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 00660734  807a0800             cmp byte ptr [edx + 8], 0
// 00660738  742c                 je 0x660766
// 0066073a  83be1801000002       cmp dword ptr [esi + 0x118], 2
// 00660741  7d13                 jge 0x660756
// 00660743  8b06                 mov eax, dword ptr [esi]
// 00660745  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 0066074c  8b0e                 mov ecx, dword ptr [esi]
// 0066074e  8b11                 mov edx, dword ptr [ecx]
// 00660750  56                   push esi
// 00660751  ffd2                 call edx
// 00660753  83c404               add esp, 4
// 00660756  e8c5f9ffff           call 0x660120
// 0066075b  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00660761  83c002               add eax, 2
// 00660764  eb06                 jmp 0x66076c
// 00660766  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0066076c  33ed                 xor ebp, ebp
// 0066076e  396e24               cmp dword ptr [esi + 0x24], ebp
// 00660771  89442414             mov dword ptr [esp + 0x14], eax
// 00660775  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0066077b  7e40                 jle 0x6607bd
// 0066077d  57                   push edi
// 0066077e  8d7824               lea edi, [eax + 0x24]
// 00660781  83c308               add ebx, 8
// 00660784  8b0f                 mov ecx, dword ptr [edi]
// 00660786  8b47e8               mov eax, dword ptr [edi - 0x18]
// 00660789  0fafc1               imul eax, ecx
// 0066078c  99                   cdq 
// 0066078d  f7be18010000         idiv dword ptr [esi + 0x118]
// 00660793  8b5604               mov edx, dword ptr [esi + 4]
// 00660796  0faf442418           imul eax, dword ptr [esp + 0x18]
// 0066079b  50                   push eax
// 0066079c  8b47f8               mov eax, dword ptr [edi - 8]
// 0066079f  0fafc1               imul eax, ecx
// 006607a2  8b4a08               mov ecx, dword ptr [edx + 8]
// 006607a5  50                   push eax
// 006607a6  6a01                 push 1
// 006607a8  56                   push esi
// 006607a9  ffd1                 call ecx
// 006607ab  8903                 mov dword ptr [ebx], eax
// 006607ad  45                   inc ebp
// 006607ae  83c410               add esp, 0x10
// 006607b1  83c304               add ebx, 4
// 006607b4  83c754               add edi, 0x54
// 006607b7  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 006607ba  7cc8                 jl 0x660784
// 006607bc  5f                   pop edi
// 006607bd  5e                   pop esi
// 006607be  5d                   pop ebp
// 006607bf  5b                   pop ebx
// 006607c0  c3                   ret 
// library jpeg-6b/jdmainct.c (function _jinit_d_main_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
