// roc 2007-08 00524c40  unit: G3D::Line  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524c40
//
// 00524c40  53                   push ebx
// 00524c41  55                   push ebp
// 00524c42  56                   push esi
// 00524c43  8b742410             mov esi, dword ptr [esp + 0x10]
// 00524c47  8b4604               mov eax, dword ptr [esi + 4]
// 00524c4a  8b08                 mov ecx, dword ptr [eax]
// 00524c4c  6a50                 push 0x50
// 00524c4e  6a01                 push 1
// 00524c50  56                   push esi
// 00524c51  ffd1                 call ecx
// 00524c53  8bd8                 mov ebx, eax
// 00524c55  83c40c               add esp, 0xc
// 00524c58  807c241400           cmp byte ptr [esp + 0x14], 0
// 00524c5d  899e84010000         mov dword ptr [esi + 0x184], ebx
// 00524c63  c703c04b5200         mov dword ptr [ebx], 0x524bc0
// 00524c69  7413                 je 0x524c7e
// 00524c6b  8b16                 mov edx, dword ptr [esi]
// 00524c6d  c7421404000000       mov dword ptr [edx + 0x14], 4
// 00524c74  8b06                 mov eax, dword ptr [esi]
// 00524c76  8b08                 mov ecx, dword ptr [eax]
// 00524c78  56                   push esi
// 00524c79  ffd1                 call ecx
// 00524c7b  83c404               add esp, 4
// 00524c7e  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 00524c84  807a0800             cmp byte ptr [edx + 8], 0
// 00524c88  742c                 je 0x524cb6
// 00524c8a  83be1801000002       cmp dword ptr [esi + 0x118], 2
// 00524c91  7d13                 jge 0x524ca6
// 00524c93  8b06                 mov eax, dword ptr [esi]
// 00524c95  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 00524c9c  8b0e                 mov ecx, dword ptr [esi]
// 00524c9e  8b11                 mov edx, dword ptr [ecx]
// 00524ca0  56                   push esi
// 00524ca1  ffd2                 call edx
// 00524ca3  83c404               add esp, 4
// 00524ca6  e8a5f9ffff           call 0x524650
// 00524cab  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00524cb1  83c002               add eax, 2
// 00524cb4  eb06                 jmp 0x524cbc
// 00524cb6  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00524cbc  33ed                 xor ebp, ebp
// 00524cbe  396e24               cmp dword ptr [esi + 0x24], ebp
// 00524cc1  89442414             mov dword ptr [esp + 0x14], eax
// 00524cc5  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00524ccb  7e42                 jle 0x524d0f
// 00524ccd  57                   push edi
// 00524cce  8d7824               lea edi, [eax + 0x24]
// 00524cd1  83c308               add ebx, 8
// 00524cd4  8b0f                 mov ecx, dword ptr [edi]
// 00524cd6  8b47e8               mov eax, dword ptr [edi - 0x18]
// 00524cd9  0fafc1               imul eax, ecx
// 00524cdc  99                   cdq 
// 00524cdd  f7be18010000         idiv dword ptr [esi + 0x118]
// 00524ce3  8b5604               mov edx, dword ptr [esi + 4]
// 00524ce6  0faf442418           imul eax, dword ptr [esp + 0x18]
// 00524ceb  50                   push eax
// 00524cec  8b47f8               mov eax, dword ptr [edi - 8]
// 00524cef  0fafc1               imul eax, ecx
// 00524cf2  8b4a08               mov ecx, dword ptr [edx + 8]
// 00524cf5  50                   push eax
// 00524cf6  6a01                 push 1
// 00524cf8  56                   push esi
// 00524cf9  ffd1                 call ecx
// 00524cfb  8903                 mov dword ptr [ebx], eax
// 00524cfd  83c501               add ebp, 1
// 00524d00  83c410               add esp, 0x10
// 00524d03  83c304               add ebx, 4
// 00524d06  83c754               add edi, 0x54
// 00524d09  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 00524d0c  7cc6                 jl 0x524cd4
// 00524d0e  5f                   pop edi
// 00524d0f  5e                   pop esi
// 00524d10  5d                   pop ebp
// 00524d11  5b                   pop ebx
// 00524d12  c3                   ret 
// library jpeg-6b/jdmainct.c (function _jinit_d_main_controller)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
