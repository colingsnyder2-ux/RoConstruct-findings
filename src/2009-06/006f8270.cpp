// roc 2009-06 006f8270  unit: RBX::GroupDragTool  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f8270
//
// 006f8270  8b442404             mov eax, dword ptr [esp + 4]
// 006f8274  53                   push ebx
// 006f8275  55                   push ebp
// 006f8276  56                   push esi
// 006f8277  8bf1                 mov esi, ecx
// 006f8279  8b6e04               mov ebp, dword ptr [esi + 4]
// 006f827c  b901000000           mov ecx, 1
// 006f8281  894604               mov dword ptr [esi + 4], eax
// 006f8284  57                   push edi
// 006f8285  840d4803a500         test byte ptr [0xa50348], cl
// 006f828b  7513                 jne 0x6f82a0
// 006f828d  090d4803a500         or dword ptr [0xa50348], ecx
// 006f8293  bb0a000000           mov ebx, 0xa
// 006f8298  891d4403a500         mov dword ptr [0xa50344], ebx
// 006f829e  eb06                 jmp 0x6f82a6
// 006f82a0  8b1d4403a500         mov ebx, dword ptr [0xa50344]
// 006f82a6  8b4e08               mov ecx, dword ptr [esi + 8]
// 006f82a9  8b7e04               mov edi, dword ptr [esi + 4]
// 006f82ac  3bf9                 cmp edi, ecx
// 006f82ae  0f8e8a000000         jle 0x6f833e
// 006f82b4  85c9                 test ecx, ecx
// 006f82b6  7512                 jne 0x6f82ca
// 006f82b8  55                   push ebp
// 006f82b9  8bce                 mov ecx, esi
// 006f82bb  894608               mov dword ptr [esi + 8], eax
// 006f82be  e8dddaf7ff           call 0x675da0
// 006f82c3  5f                   pop edi
// 006f82c4  5e                   pop esi
// 006f82c5  5d                   pop ebp
// 006f82c6  5b                   pop ebx
// 006f82c7  c20800               ret 8
// 006f82ca  3bfb                 cmp edi, ebx
// 006f82cc  7d12                 jge 0x6f82e0
// 006f82ce  55                   push ebp
// 006f82cf  8bce                 mov ecx, esi
// 006f82d1  895e08               mov dword ptr [esi + 8], ebx
// 006f82d4  e8c7daf7ff           call 0x675da0
// 006f82d9  5f                   pop edi
// 006f82da  5e                   pop esi
// 006f82db  5d                   pop ebp
// 006f82dc  5b                   pop ebx
// 006f82dd  c20800               ret 8
// 006f82e0  d90548e88b00         fld dword ptr [0x8be848]
// 006f82e6  8bc1                 mov eax, ecx
// 006f82e8  03c0                 add eax, eax
// 006f82ea  03c0                 add eax, eax
// 006f82ec  3d801a0600           cmp eax, 0x61a80
// 006f82f1  760a                 jbe 0x6f82fd
// 006f82f3  ddd8                 fstp st(0)
// 006f82f5  d905a0ef8b00         fld dword ptr [0x8befa0]
// 006f82fb  eb0f                 jmp 0x6f830c
// 006f82fd  3d00fa0000           cmp eax, 0xfa00
// 006f8302  7608                 jbe 0x6f830c
// 006f8304  ddd8                 fstp st(0)
// 006f8306  d90544d08b00         fld dword ptr [0x8bd044]
// 006f830c  8bd9                 mov ebx, ecx
// 006f830e  895c2418             mov dword ptr [esp + 0x18], ebx
// 006f8312  da4c2418             fimul dword ptr [esp + 0x18]
// 006f8316  e8a51b0200           call 0x719ec0
// 006f831b  2bc3                 sub eax, ebx
// 006f831d  03c7                 add eax, edi
// 006f831f  894608               mov dword ptr [esi + 8], eax
// 006f8322  8b0d4403a500         mov ecx, dword ptr [0xa50344]
// 006f8328  3bc1                 cmp eax, ecx
// 006f832a  7d03                 jge 0x6f832f
// 006f832c  894e08               mov dword ptr [esi + 8], ecx
// 006f832f  55                   push ebp
// 006f8330  8bce                 mov ecx, esi
// 006f8332  e869daf7ff           call 0x675da0
// 006f8337  5f                   pop edi
// 006f8338  5e                   pop esi
// 006f8339  5d                   pop ebp
// 006f833a  5b                   pop ebx
// 006f833b  c20800               ret 8
// 006f833e  b856555555           mov eax, 0x55555556
// 006f8343  f7e9                 imul ecx
// 006f8345  8bc2                 mov eax, edx
// 006f8347  c1e81f               shr eax, 0x1f
// 006f834a  03c2                 add eax, edx
// 006f834c  3bf8                 cmp edi, eax
// 006f834e  7f19                 jg 0x6f8369
// 006f8350  807c241800           cmp byte ptr [esp + 0x18], 0
// 006f8355  7412                 je 0x6f8369
// 006f8357  3bfb                 cmp edi, ebx
// 006f8359  7e0e                 jle 0x6f8369
// 006f835b  3bfd                 cmp edi, ebp
// 006f835d  7c02                 jl 0x6f8361
// 006f835f  8bfd                 mov edi, ebp
// 006f8361  57                   push edi
// 006f8362  8bce                 mov ecx, esi
// 006f8364  e837daf7ff           call 0x675da0
// 006f8369  5f                   pop edi
// 006f836a  5e                   pop esi
// 006f836b  5d                   pop ebp
// 006f836c  5b                   pop ebx
// 006f836d  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
