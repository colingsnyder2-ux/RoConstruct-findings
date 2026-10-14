// roc 2009-06 00670670  unit: RBX::Primitive  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00670670
//
// 00670670  8b442404             mov eax, dword ptr [esp + 4]
// 00670674  53                   push ebx
// 00670675  55                   push ebp
// 00670676  56                   push esi
// 00670677  8bf1                 mov esi, ecx
// 00670679  8b6e04               mov ebp, dword ptr [esi + 4]
// 0067067c  b901000000           mov ecx, 1
// 00670681  894604               mov dword ptr [esi + 4], eax
// 00670684  57                   push edi
// 00670685  840de4dca400         test byte ptr [0xa4dce4], cl
// 0067068b  7513                 jne 0x6706a0
// 0067068d  090de4dca400         or dword ptr [0xa4dce4], ecx
// 00670693  bb0a000000           mov ebx, 0xa
// 00670698  891de0dca400         mov dword ptr [0xa4dce0], ebx
// 0067069e  eb06                 jmp 0x6706a6
// 006706a0  8b1de0dca400         mov ebx, dword ptr [0xa4dce0]
// 006706a6  8b4e08               mov ecx, dword ptr [esi + 8]
// 006706a9  8b7e04               mov edi, dword ptr [esi + 4]
// 006706ac  3bf9                 cmp edi, ecx
// 006706ae  0f8e8a000000         jle 0x67073e
// 006706b4  85c9                 test ecx, ecx
// 006706b6  7512                 jne 0x6706ca
// 006706b8  55                   push ebp
// 006706b9  8bce                 mov ecx, esi
// 006706bb  894608               mov dword ptr [esi + 8], eax
// 006706be  e8dd560000           call 0x675da0
// 006706c3  5f                   pop edi
// 006706c4  5e                   pop esi
// 006706c5  5d                   pop ebp
// 006706c6  5b                   pop ebx
// 006706c7  c20800               ret 8
// 006706ca  3bfb                 cmp edi, ebx
// 006706cc  7d12                 jge 0x6706e0
// 006706ce  55                   push ebp
// 006706cf  8bce                 mov ecx, esi
// 006706d1  895e08               mov dword ptr [esi + 8], ebx
// 006706d4  e8c7560000           call 0x675da0
// 006706d9  5f                   pop edi
// 006706da  5e                   pop esi
// 006706db  5d                   pop ebp
// 006706dc  5b                   pop ebx
// 006706dd  c20800               ret 8
// 006706e0  d90548e88b00         fld dword ptr [0x8be848]
// 006706e6  8bc1                 mov eax, ecx
// 006706e8  03c0                 add eax, eax
// 006706ea  03c0                 add eax, eax
// 006706ec  3d801a0600           cmp eax, 0x61a80
// 006706f1  760a                 jbe 0x6706fd
// 006706f3  ddd8                 fstp st(0)
// 006706f5  d905a0ef8b00         fld dword ptr [0x8befa0]
// 006706fb  eb0f                 jmp 0x67070c
// 006706fd  3d00fa0000           cmp eax, 0xfa00
// 00670702  7608                 jbe 0x67070c
// 00670704  ddd8                 fstp st(0)
// 00670706  d90544d08b00         fld dword ptr [0x8bd044]
// 0067070c  8bd9                 mov ebx, ecx
// 0067070e  895c2418             mov dword ptr [esp + 0x18], ebx
// 00670712  da4c2418             fimul dword ptr [esp + 0x18]
// 00670716  e8a5970a00           call 0x719ec0
// 0067071b  2bc3                 sub eax, ebx
// 0067071d  03c7                 add eax, edi
// 0067071f  894608               mov dword ptr [esi + 8], eax
// 00670722  8b0de0dca400         mov ecx, dword ptr [0xa4dce0]
// 00670728  3bc1                 cmp eax, ecx
// 0067072a  7d03                 jge 0x67072f
// 0067072c  894e08               mov dword ptr [esi + 8], ecx
// 0067072f  55                   push ebp
// 00670730  8bce                 mov ecx, esi
// 00670732  e869560000           call 0x675da0
// 00670737  5f                   pop edi
// 00670738  5e                   pop esi
// 00670739  5d                   pop ebp
// 0067073a  5b                   pop ebx
// 0067073b  c20800               ret 8
// 0067073e  b856555555           mov eax, 0x55555556
// 00670743  f7e9                 imul ecx
// 00670745  8bc2                 mov eax, edx
// 00670747  c1e81f               shr eax, 0x1f
// 0067074a  03c2                 add eax, edx
// 0067074c  3bf8                 cmp edi, eax
// 0067074e  7f19                 jg 0x670769
// 00670750  807c241800           cmp byte ptr [esp + 0x18], 0
// 00670755  7412                 je 0x670769
// 00670757  3bfb                 cmp edi, ebx
// 00670759  7e0e                 jle 0x670769
// 0067075b  3bfd                 cmp edi, ebp
// 0067075d  7c02                 jl 0x670761
// 0067075f  8bfd                 mov edi, ebp
// 00670761  57                   push edi
// 00670762  8bce                 mov ecx, esi
// 00670764  e837560000           call 0x675da0
// 00670769  5f                   pop edi
// 0067076a  5e                   pop esi
// 0067076b  5d                   pop ebp
// 0067076c  5b                   pop ebx
// 0067076d  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
